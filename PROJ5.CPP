//program to identifu copies
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<iostream.h>

struct data
{ char name[11];
  long id;
};
void main()
{clrscr();             data d1,d2,temp;   int point;
 fstream in,in2,copy,copyid,out;
 in.open("INPUT.TXT",ios::in|ios::binary);
 copy.open("copy.txt",ios::out|ios::binary);
 while(!in.eof())
 {  loopset:
   in.read((char*)&d1,sizeof(d1));
   point=in.tellp();          //get current position

   strcpy(temp.name,d1.name);
   temp.id=d1.id;
   in2.open("INPUT.TXT",ios::in|ios::binary);
   in2.seekp(point,ios::beg);
   while(!in2.eof())
   {

    in2.read((char*)&d2,sizeof(d2));
    if((strcmpi(temp.name,d2.name))==0)
      { copy.write((char*)&d2,sizeof(d2));
      }
    else
      continue;

   }


   in2.close();

 }


 cout<<endl<<"done";

 getch();
}