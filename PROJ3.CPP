//to show output of copy file
#include<fstream.h>
#include<conio.h>
struct frame
{char name[11];
 long id;
 };

void main()
{ clrscr();
  fstream copy,out;    frame s,u;

  gotoxy(0,20);cout<<"COPY REMOVAL"<<endl;
  copy.open("COPY.TXT",ios::in|ios::binary);

  cout<<"COPIES "<<endl<<endl;
  while(!copy.eof())
  { copy.read((char*)&s,sizeof(s));
    cout<<"name:"<<s.name<<" ID:"<<s.id<<endl;

  }
  copy.close();
  getch();
  cout<<"--------------------------------------------"<<endl;
  getch();

  }