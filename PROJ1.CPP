#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct input
{char name[11];
 long id ;
 };

void main()
{      input o;  char ans;  clrscr();
fstream in;in.open("input.txt",ios::out|ios::app|ios::binary);
do
{ cout<<"enter ID:";
  cin>>o.id;
  cout<<"enter name:";
  cin>>o.name;
  in.write((char*)&o,sizeof(o));
  cout<<"enter more(n/y):";
  cin>>ans;
}while((ans=='y')||(ans=='Y'));
getch();
in.close();
}