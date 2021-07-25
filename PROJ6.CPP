/*flie size and searching*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<fstream.h>

struct input
{char name[11];
 long id;
};

void main()
{clrscr();
 long int p,contacts,a;  int c;
 input l;
 fstream myfile;
 char ifile[14],ufile[14],name[11];
 start:
 gotoxy(20,1);
 cout<<" file search and size";
 gotoxy(1,3);
 cout<<"menu"<<endl<<"1.file size and no. of records"<<endl<<"2.searching in file\n3.exit"<<endl;
 cin>>a;
 switch(a)
 { case 1:goto sizes;break;
   case 2:goto search;break;
   case 3:goto end;break;
   default:{cout<<"wrong input\n";getch();clrscr();goto start;}
 };


 sizes:
{ s1:
  cout<<"select file from list \n1.input file\n2.copies file\n";
  cin>>c;
  if(c==1)
  {myfile.open("INPUT.TXT",ios::in);}
  else if(c==2)
  {myfile.open("COPY.TXT",ios::in);}
  else
  {cout<<"wronginput";getch();goto s1;}
  myfile.seekg(0,ios::end);
  p=myfile.tellg();
  contacts=p/sizeof(l);
  cout<<"size:"<<p<<endl;
  cout<<"no. of contacts:"<<contacts<<endl;
  getch();
  clrscr();
  myfile.close();
  goto start;
}
 search:
{ s2:
  cout<<"select file from list \n1.input file\n2.copies file\n";
  cin>>c;
  if(c==1)
  {myfile.open("INPUT.TXT",ios::in);}
  else if(c==2)
  {myfile.open("COPY.TXT",ios::in);}
  else
  {cout<<"wronginput";getch();goto s2;}
  cout<<"enter name to search:";
  cin>>name;

  while(!myfile.eof())
 {  myfile.read((char*)&l,sizeof(l));
    if((strcmpi(l.name,name))==0)
      { cout<<"name:"<<l.name<<endl;
	cout<<"ID:"<<l.id<<endl;
      }
    else
      continue;
 }
 getch();
 clrscr();
 myfile.close();
 goto start;
}
end:
getch();
}