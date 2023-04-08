//Started on Dec 16 2013
//Author Prateek Dubey
//‡·„‰ÂÊÁËÍÎÏÌÓ
//ÔÒÚÛÙıˆ˜¯˘˙˚¸˝ˇ
#include    <conio.h>
#include <iostream.h>
#include  <process.h>
#include   <string.h>
#include     <math.h>
#include    <ctype.h>
#include  <fstream.h>
#include   <stdlib.h>
#include      <dos.h>
#include    <stdio.h>
#include     <bios.h>
#include     <time.h>
struct create{
char data[150];
};

 void ending()
{
exit(0);
}


int main(int argc, char *argv[], char **envp )
{
_setcursortype(_NOCURSOR);
 textbackground(BLACK+BLINK);
 textcolor(WHITE);
 clrscr();
main:{}

clrscr();
textcolor(WHITE);
textbackground(BLACK + BLINK);
struct  time t;
gettime(&t);
char fed,ex,mon[4];
char ch;
ifstream fin;
time_t timer;
struct tm *tblock;
timer = time(NULL);
tblock = localtime(&timer);
cout<<"\n„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„≈";window(15,10,10,0);
textcolor(BLUE);
textbackground(BLACK);highvideo();cprintf(" Ardhajya ");cout<<"≈Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î";
cout<<"\n\t\t\t           „r‡ÁÓÓk";
cout<<"\n\t\t\t              ‡";
cout<<"\n\t\t\t        €€€€€€€€€€€€€€";
cout<<"\n\t\t\t    [1] €    Quiz    €";
cout<<"\n\t\t\t        €ÕÕÕÕÕÕÕÕÕÕÕÕ€";
cout<<"\n\t\t\t    [2] €   Lister   €";
cout<<"\n\t\t\t        €ÕÕÕÕÕÕÕÕÕÕÕÕ€";
cout<<"\n\t\t\t    [3] €   Tweets   €";
cout<<"\n\t\t\t        €ÕÕÕÕÕÕÕÕÕÕÕÕ€";
cout<<"\n\t\t\t    [4] € Calculator €";
cout<<"\n\t\t\t        €ÕÕÕÕÕÕÕÕÕÕÕÕ€";
cout<<"\n\t\t\t    [5] €    Atoms   €";
cout<<"\n\t\t\t        €ÕÕÕÕÕÕÕÕÕÕÕÕ€";
cout<<"\n\t\t\t    [6] € Properties €";
cout<<"\n\t\t\t        €ÕÕÕÕÕÕÕÕÕÕÕÕ€";
cout<<"\n\t\t\t    [7] €    Exit    €";
cout<<"\n\t\t\t	€€€€€€€€€€€€€€";
gotoxy(1,23);
cout<<"                                                      ⁄ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ";
time:{}
gotoxy(55,24);
window(55,10,40,24);
cout<<"|";
textcolor(BLUE);
textbackground(BLACK);
highvideo();cprintf("%s", asctime(tblock));
gotoxy(55,25);
cout<<"¿ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ";
gotoxy(39,21);
cin>>ex;
textbackground(BLACK+BLINK);
textcolor(WHITE);
//start of quiz
if(ex=='m'||ex=='M')
{clrscr();
gotoxy(8,12);
cout<<"The entered characters will not be displayed for security purposes.";
passed:{}
gotoxy(25,13);
cout<<"Enter 'main' to go back!!";
 gotoxy(25,10);
 char *pass;
 int  a;
pass = getpass("Enter the password :");
a=strcmp(pass,"admin");
if(a==0)
{clrscr();
goto admin;
}
a=strcmp(pass,"main");

if(a==0)
{clrscr();
goto main;
}
else{

gotoxy(25,11);
cout<<"Enter a correct password.";
getch();
clrscr();
goto passed;
}

admin:{}
clrscr();
cout<<"\n„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„≈";window(15,10,10,0);
cprintf(" Admin ");cout<<"≈Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„\n\n\n\n\n";
cout<<"\n\t\t\t        €€€€€€€€€€€€€€";
cout<<"\n\t\t\t    [1] €€  Create  €€";
cout<<"\n\t\t\t        €€ÕÕÕÕÕÕÕÕÕÕ€€";
cout<<"\n\t\t\t    [2] €€  Delete  €€";
cout<<"\n\t\t\t        €€ÕÕÕÕÕÕÕÕÕÕ€€";
cout<<"\n\t\t\t    [3] €€  Modify  €€";
cout<<"\n\t\t\t        €€ÕÕÕÕÕÕÕÕÕÕ€€";
cout<<"\n\t\t\t    [4] €€   Main   €€";
cout<<"\n\t\t\t	€€€€€€€€€€€€€€";
char in;
gotoxy(39,18);
cin>>in;
if(in=='1'||in=='c'||in=='C')
{create:{}
fstream fin;
create da;
clrscr();
cout<<"\n„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î≈";window(15,10,10,0);
cprintf(" Create ");cout<<"≈Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„";
char name[30];
cout<<"\nType exit to go back!!\n\nEnter the name of the file(no spaces): ";
cin>>name;
if(strcmp(name,"exit")==0||strcmp(name,"EXIT")==0||strcmp(name,"Exit")==0)
{clrscr();
goto admin;
}
fin.open(name,ios::in|ios::out|ios::binary);
cout<<"File Created!!";
cout<<"\nWant to add data?";
char dat;
cin>>dat;
if(dat=='y'||dat=='Y')
{write:{}
clrscr();
cout<<"\n„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„≈";window(15,10,10,0);
cprintf(" Write ");cout<<"≈Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„";
cout<<"\nEnter Data (Max 150 Characters)\n";
gets(da.data);
fin.write((char*)&da,sizeof(da));
exit(0);
}
if(dat=='n'||dat=='N')
{clrscr();
goto create;
}

}
if(in=='4'||in=='m'||in=='M')
{clrscr();
goto main;
}
else {
cout<<"\n\t\t\t    ⁄ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒø";
cout<<"\n\t\t\t    |Enter a valid option |";
cout<<"\n\t\t\t    ¿ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒŸ";
getch();
clrscr();
goto admin;
}

}
if(ex=='q'||ex=='Q'||ex=='1')
{quiz:{}int i;

  printf("Command line arguments:\n");
  for (i=0; i < argc; ++i)
    printf("[%2d] : %s\n", i, argv[i]);

  printf("About to exec child with arg1 arg2 ...\n");
  execlpe("test.EXE", "test.eXE", "arg1", "arg2", NULL, envp);

  perror("exec error");
getch();

}
//Start of Tweets
if (ex=='3'||ex=='t'||ex=='T')
{tweet:{}
clrscr();
char p[20];
int x;
system("cls");

cout<<"\t\t\t\tTweets";
fin.open("file/tweets.txt",ios::in);
if(!fin)
{
cout<<"Can't access the file !";

}   cout<<"\n\n";
while(fin)
{
fin.get(ch);
cout<<ch;
}
fin.close();
getch();

clrscr();
goto main;}

else if(ex=='7'||ex=='e'||ex=='E')
{clrscr();
ending();
}

// Start of Lister
else if(ex=='2'||ex=='l'||ex=='L')
{
clrscr();
char g[50];
int in,an,on,en,un,pn;
google:{}
cout<<"\n Lister";
cout<<"\n Enter any Keyword:-";
cin>>g ;
an=strcmp(g,"Ardhajya");
en=strcmp(g,"ardhajya");
in=strcmp(g,"ardhajya corp.");
on=strcmp(g,"Ardhajya Corp.");
un=strcmp(g,"copyright");
pn=strcmp(g,"Copy Rights");
if(in == 0||an==0||en==0||on==0||un==0||pn==0)
{

fin.open("file/ardhajya.txt",ios::in);
if(!fin)
{
cout<<" Can't access the file !";

}   cout<<"\n\n";
while(fin)
{
fin.get(ch);
cout<<ch;
}
fin.close();
getch();
clrscr();
goto google;

}
an=strcmp(g,"Prateek");
en=strcmp(g,"prateek");
in=strcmp(g,"prateek dubey");
on=strcmp(g,"Prateek Dubey");
un=strcmp(g,"Creator");
pn=strcmp(g,"creator");
if(in == 0||an==0||en==0||on==0||un==0||pn==0)
{

fin.open("file/prateek.txt",ios::in);
if(!fin)
{
cout<<" Can't access the file !";

}   cout<<"\n\n";
while(fin)
{
fin.get(ch);
cout<<ch;
}
fin.close();
getch();
clrscr();
goto google;

}
in=strcmp(g,"brain");
if(in == 0)
{

  clrscr();
fin.open("file/brain.txt",ios::in);
if(!fin)
{
cout<<" Can't access the file !";

}   cout<<"\n\n";
while(fin)
{
fin.get(ch);
cout<<ch;
}
fin.close();
getch();
clrscr();
fin.open("file/brain2.txt",ios::in);
if(!fin)
{
cout<<" Can't access the file !";

}   cout<<"\n\n";
while(fin)
{
fin.get(ch);
cout<<ch;
}
fin.close();
getch();
clrscr();
fin.open("file/brain3.txt",ios::in);
if(!fin)
{
cout<<" Can't access the file !";

}   cout<<"\n\n";
while(fin)
{
fin.get(ch);
cout<<ch;
}
fin.close();
getch();
clrscr();

goto google;

}
in=strcmp(g,"tweets");
an=strcmp(g,"tweet");
if(in == 0||an==0)
{  clrscr();
goto tweet;

}
in=strcmp(g,"quiz");
if(in == 0)
{  clrscr();
goto quiz;
}
in=strcmp(g,"calc");
if(in == 0)
{  clrscr();
goto calc;

}


in=strcmp(g,"richestpersonsof2013");
if(in == 0)
{

fin.open("file/richest.dat",ios::in);
if(!fin)
{
cout<<" Can't access the file !";

}   cout<<"\n\n";
while(fin)
{
fin.get(ch);
cout<<ch;
}
fin.close();
getch();
clrscr();
goto google;

}

in=strcmp(g,"citieswithmostbillionaires");
if(in==0)
{
fin.open("file/bill.txt",ios::in);
if(!fin)
{
cout<<" Can't access the file !";

}   cout<<"\n\n";
while(fin)
{
fin.get(ch);
cout<<ch;
}
fin.close();
getch();
clrscr();
goto google;

}
in=strcmp(g,"mostmillitaryexpenditurecountries");
if(in==0)
{

fin.open("file/mill.txt",ios::in);
if(!fin)
{
cout<<" Can't access the file !";

}   cout<<"\n\n";
while(fin)
{
fin.get(ch);
cout<<ch;
}
fin.close();
getch();
clrscr();
goto google;

}
 in=strcmp(g,"exit") ;
 if(in==0)

 {clrscr();
 goto main;
 }
 in=strcmp(g,"chemistrycourse11cbse");
 if(in==0)
 {

fin.open("file/chem11.txt",ios::in);
if(!fin)
{
cout<<" Can't access the file !";

}   cout<<"\n\n";
while(fin)
{
fin.get(ch);
cout<<ch;
}
fin.close();

 getch();
 clrscr();
 goto google;
}
in=strcmp(g,"chemistrycourse12cbse");
 if(in==0)
 {
fin.open("file/chem12.txt",ios::in);
if(!fin)
{
cout<<" Can't access the file !";

}   cout<<"\n\n";
while(fin)
{
fin.get(ch);
cout<<ch;
}
fin.close();

 getch();
 clrscr();
 goto google;
}
in=strcmp(g,"help");
if(in==0)
{
fin.open("file/index.txt",ios::in);
if(!fin)
{
cout<<" Can't access the file !";

}   cout<<"\n\n";
while(fin)
{
fin.get(ch);
cout<<ch;
}
fin.close();


getch();
clrscr();
goto google;
}
 else{
cout<<"\n\t\t    ⁄ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒø";
cout<<"\n\t\t    |We Don't Have Any Information On This Topic |";
cout<<"\n\t\t    |Try Some Other keywords,or type 'help',     |";
cout<<"\n\t\t    |in lister.                                  |";
cout<<"\n\t\t    ¿ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒŸ";

getch();
clrscr();
goto google;
 }

}
else if(ex=='4'||ex=='c'||ex=='C')
{textcolor(WHITE);
textbackground(BLACK);
clrscr();
cout<<"\n\n\n\n\n\n                     " ;
cout<<"\aIf you enter '0' in any function,";
cout<<"\n\n		     than that funtion will truncate.";
sleep(1.85);
clrscr();
calc:{}
char calc[20];
clrscr();
cout<<"\n\t\t\t\tCalculator";
cout<<"\n\n  Calculator commands          { Enter 'main' to go back to main menu }\n";

cout<<"  ⁄ƒƒƒƒƒƒƒƒƒƒ¬ƒƒƒƒƒƒƒƒƒƒƒ¬ƒƒƒƒƒƒƒƒƒƒƒ¬ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¬ƒƒƒƒƒƒƒƒƒƒƒø‹‹‹‹‹\n";
cout<<"  |Sin > sin | Cos > cos | Tan > tan | sqrt > Square Root | Log > log |€€€€€\n";
cout<<"  √ƒƒƒƒƒƒƒƒƒƒ¡ƒƒƒƒƒƒ¬ƒƒƒƒ¡ƒƒƒƒƒƒƒƒƒƒƒ≈ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¬ƒ¡ƒƒƒƒƒƒƒƒƒƒƒ¥€€‡€€\n";
cout<<"  |Factorial > fact | Exponent > exp | Reciprocal > rec | Table > tab |€€€€€\n";
cout<<"  √ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¡ƒƒƒƒƒƒ¬ƒƒƒƒƒƒƒƒƒ¡ƒƒƒƒƒ¬ƒƒƒƒƒƒƒƒ¬ƒƒƒ¡ƒƒƒƒƒƒƒƒƒƒƒƒƒ¥€€„€€\n";
cout<<"  |Transpose Matrix > trans|Other ü() > fun| e¸ > e | Hypoteneus > hyp|€€€€€\n";
cout<<"  √ƒƒƒƒƒƒƒƒƒƒ¬ƒƒƒƒƒƒƒƒƒƒƒ¬ƒ¡ƒƒƒƒƒƒƒƒƒ¬ƒƒƒƒƒ¡ƒƒƒƒƒƒƒƒ¡ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥€€Î€€\n";
cout<<"  |asin > as | acos > ac | atan > at | Matrix Multiplication > mulmat |€€€€€\n";
cout<<"  ¿ƒƒƒƒƒƒƒƒƒƒ¡ƒƒƒƒƒƒƒƒƒƒƒ¡ƒƒƒƒƒƒƒƒƒƒƒ¡ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒŸﬂﬂﬂﬂﬂ";

cout<<"\n\n  Enter Option >";
cin>>calc;

int sn;

sn=strcmp(calc,"hyp");
if(sn==0)
{hyp:{}
double p,b,h;
cout<<"  Enter Perpendicluar > ";
cin>>p;
cout<<"  Enter Base > ";cin>>b;

h=hypot(p,b);
if(p==0&&b==0)
{cout<<"  Hypoteneus = "<<h<<"\n";
getch();
clrscr();
goto calc;
}
cout<<"  Hypoteneus = "<<h<<"\n";
goto hyp;

}
sn=strcmp(calc,"e");
if(sn==0)
{e:{}
double re,x;
cout<<"  Enter the value > ";
cin>>x;
if(x==0)
{cout<<"  e¸ = 1";
getch();
clrscr();
goto calc;}
re=exp(x);
cout<<"  e¸ = "<<re;
cout<<"\n";
goto e;


}


sn=strcmp(calc,"at");
if(sn==0)
{
at:{}
float x,y,z;
cout<<"  Enter the value >";
cin>>x;
y=atan(x);
z=y*57.29578;
if(x==0) {
cout<<"  atan(0) = 0ß";
getch();
clrscr();
goto calc;
}

cout<<"  atan("<<x<<")"<<" = "<<z<<"ß";
cout<<"\n";
goto at;
}

sn=strcmp(calc,"ac");
if(sn==0)
{
ac:{}
float x,y,z;
cout<<"  Enter the value >";
cin>>x;
y=acos(x);
z=y*57.29578;
if(x==0) {
cout<<"  acos(0) = 90ß";
getch();
clrscr();
goto calc;
}
if(x>1||x<-1)
{cout<<"  Enter Number between -1 and 1.\n";
goto ac;
}
cout<<"  acos("<<x<<")"<<" = "<<z<<"ß";
cout<<"\n";
goto ac;
}
sn=strcmp(calc,"as");
if(sn==0)
{
as:{}
float x,y,z;
cout<<"  Enter the value >";
cin>>x;
y=asin(x);
z=y*57.29578;
if(x==0) {
cout<<"  asin(0) = 0ß";
getch();
clrscr();
goto calc;
}
if(x>1||x<-1)
{cout<<"  Enter Number between -1 and 1.\n";
goto as;
}
cout<<"  asin("<<x<<")"<<" = "<<z<<"ß";
cout<<"\n";
goto as;
}


sn=strcmp(calc,"mulmat");
if(sn==0)
{mulmat:{}
   clrscr();int a[10][10],b[10][10],c[10][10],m,n,o,p,i,j;
cout<<"Enter number of rows of A: ";
cin>>m;
cout<<"Enter number of coloumns of A: ";
cin>>n;
cout<<endl<<"Enter elements of matrix A: "<<endl;
if(m==0||n==0)
{clrscr();
goto calc;}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<"Enter element A"<<i+1<<j+1<<": ";
cin>>a[i][j];
}
}
cout<<endl<<"Enter number of rows of B: ";
cin>>o;
cout<<"Enter number of coloumns of B: ";
cin>>p;
cout<<endl<<"Enter elements of matrix B: "<<endl;
for(i=0;i<o;i++)
{
for(j=0;j<p;j++)
{
cout<<"Enter element B"<<i+1<<j+1<<": ";
cin>>b[i][j];
}
}
getch();
clrscr();
cout<<endl<<"Displaying Matrix A: "<<endl;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<a[i][j]<<" ";
}
cout<<endl<<endl;
}
cout<<endl<<"Displaying Matrix B: "<<endl;
for(i=0;i<o;i++)
{
for(j=0;j<p;j++)
{
cout<<b[i][j]<<" ";
}
cout<<endl<<endl;
}
if(n==o)
{
for(i=0;i<m;i++)
{
for(j=0;j<p;j++)
{
c[i][j]=0;
for(int k=0;k<n;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
getch();
}
clrscr();
cout<<endl<<"Matrix A * Matrix B = Matrix C: "<<endl;
for(i=0;i<m;i++)
{
for(j=0;j<p;j++)
{
cout<<c[i][j]<<" ";
}
cout<<endl;
}
getch();
clrscr();
goto mulmat;
}
else
cout<<"Multiplication not possible :(";
getch();
clrscr();
goto mulmat;

}
sn=strcmp(calc,"trans");
if(sn==0)
{trans:{}
   clrscr();
   int m, n, i, j, matrix[10][10], transpose[10][10];

   cout<<"Enter number of rows of A: ";
cin>>m;
cout<<"Enter number of coloumns of A: ";
cin>>n;

cout<<endl<<"Enter elements of matrix A: "<<endl;
if(m==0||n==0)
{clrscr();
goto calc;}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<"Enter element A"<<i+1<<j+1<<": ";
cin>>matrix[i][j];
}
}
   for( i = 0 ; i < m ; i++ )
   {
      for( j = 0 ; j < n ; j++ )
      {
	 transpose[j][i] = matrix[i][j];
      }
   }
   getch();
   clrscr();
   cout<<"\n\nThe Matrix You Entered :-\n";

   for( i = 0 ; i < m ; i++ )
   {
      for( j = 0 ; j < n ; j++ )
      {cout<<"   ";
	 cout<<matrix[i][j];
      }
      cout<<"\n";
   }
   cout<<"\n\nTranspose of entered matrix :-\n";

   for( i = 0 ; i < n ; i++ )
   {
      for( j = 0 ; j < m ; j++ )
      {cout<<"   ";
	 cout<<transpose[i][j];
      }
      cout<<"\n";
   }

   getch();
 clrscr();
goto trans;
}

sn=strcmp(calc,"tab");
if(sn==0)
{tab:{}
double num,mul,res;

clrscr();
cout<<"Enter the value >";
cin>>num;
/*if(!isdigit(num))
{cout<<"Enter a number.";
getch();
goto tab;
} */
if(num==0){
clrscr();
goto calc;
 }
 clrscr();
 cout<<"\n\n\n";
 for(mul=1;mul<11;mul++)
 {
 res=num*mul;
 cout<<"                              "<<num<<" x "<<mul<<" = "<<res<<"\n";

 } getch();

 goto tab;

}
sn=strcmp(calc,"rec");
if(sn==0)
{rec:{}
double x,y;
cout<<"  Enter the value >";cin>>x;
if(isalpha(x))
{cout<<"  Enter a number.";
getch();
clrscr();
goto rec;
}
if(x==0)
{cout<<"  The reciprocal of 0 is Ï";
getch();
clrscr();
goto calc;
}if(isalpha(x))
{cout<<"  Enter a number";
goto rec;
}
y=1/x;cout<<"  The reciprocal of "<<x<<" is "<<y<<"\n";
goto rec;

}
sn=strcmp(calc,"exp");
if(sn==0)

{exp:{}
double x,y,res;
cout<<"  Enter the value >";
cin>>x;
cout<<"  Enter the exponent >";
cin>>y;
if(y==0)
{cout<<"  "<<x<<" raised to 0 is 1";
getch();
clrscr();
goto calc;
       }
res= pow(x,y);
cout<<"  "<<x<<" raised "<<y<<" is "<<res<<"\n";
goto exp;

}

sn=strcmp(calc,"log");
if(sn==0)
{log:{}
double x,y;
cout<<"  Enter the value >";
cin>>x;
y=log10(x);
if(x==0)
{clrscr();
goto calc;
}
cout<<"  Log "<<x<<" is "<<y;
cout<<"\n";
goto log;
}
sn=strcmp(calc,"tan") ;
if(sn==0)
{
tan:{}
double x,y,z;
cout<<"  Enter the value >";
cin>>x;
z=x/57.29578;
y=tan(z);
if(z==0) {
cout<<"  tan(0) = 0";
getch();
clrscr();
goto calc;
}
if(x==90) {
cout<<"  tan(90) = Ï\n";
getch();
goto tan;
}

cout<<"  tan("<<x<<")"<<" = "<<y;
cout<<"\n";
goto tan;
}
sn=strcmp(calc,"cos");
if(sn==0)
{
cos:{}
double x,y,z;
cout<<"  Enter the value >";
cin>>x;
z=x/57.29578;
y=cos(z);
if(x==0) {
cout<<"  cos(0) = 1";
getch();
clrscr();
goto calc;
}
if(x==90) {
cout<<"  cos(90) = 0\n";
getch();
goto cos;}
cout<<"  cos("<<x<<")"<<" = "<<y;
cout<<"\n";
goto cos;
}
sn=strcmp(calc,"sqrt") ;
if(sn==0)
{sqr:{}
double sqr,sq;
cout<<"  Enter the Number >";
cin>>sqr;
if(sqr<=-1) {
cout<<"  Number is negative";
getch();
goto sqr;
 }
sq=sqrt(sqr);
if(sqr==0)
{clrscr();
goto calc; }
cout<<"  ˚"<<sqr<<" = Ò"<<sq;

cout<<"\n";
goto sqr;
}

sn=strcmp(calc,"sin");
if(sn==0)
{
sin:{}
double x,y,z;
cout<<"  Enter the value >";
cin>>x;
z=x/57.29578 ;
if(x==0)
{
cout<<"  sin(0) = 0";
getch();
clrscr();
goto calc;                  }
y=sin(z);
cout<<"  sin("<<x<<")"<<" = "<<y;
cout<<"\n";
goto sin;


}
sn=strcmp(calc,"fact");
if(sn==0)
{fact:{}
long i,num,fact=1;
cout<<"  Enter the value >";
cin>>num;
if(num==0)
{
cout<<"  The factorial of 0 is 1";
getch();
clrscr();
goto calc;
}
i=num;
while(num)
{fact=fact*num;
--num;

}
 cout<<"  The factorial of "<<i<<" is "<<fact<<"\n";
 goto fact;

}
sn=strcmp(calc,"fun");
if(sn==0)
{
conv:{}
clrscr();
char conv[20];
cout<<"\n                                 üun(‡„Î)";
cout<<"\n\n  ü(‡„Î) commands             { Enter 'calc' to go back to Calculator }\n";
cout<<"  ⁄ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¬¬ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒø‹‹‹‹‹\n";
cout<<"  |Degree <ƒ> Radian > d2r//r2d ||  Miles/h <ƒ> Km/h > mh2kh//kh2mh   |€€€€€\n" ;
cout<<"  √ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¡¡ƒƒ¬¬ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥€€‡€€\n";
cout<<"  |Celsius <ƒ> fahrenheit > c2f//f2c||HorsePower <ƒ> watt > hp2w//w2hp|€€€€€\n";
cout<<"  √ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¬¬ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¡¡ƒ¬¬ƒƒƒƒƒƒƒƒƒƒƒ¬¬ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥€€„€€\n";
cout<<"  |Day Finder > df || Check Prime > cp || RAM > ram || Summation > sum|€€€€€\n";
cout<<"  √ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¡¡ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¡¡ƒƒƒƒƒƒƒƒƒƒƒ¡¡ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥€€Î€€\n";
cout<<"  |                                                                   |€€€€€\n";
cout<<"  ¿ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒŸﬂﬂﬂﬂﬂ";

cout<<"\n\n  Enter Option >";
cin>>conv;
int qw;
qw=strcmp(conv,"sum");
if(qw==0)
{
sum:{}
long i,num,sum=0;
cout<<"  Enter the value >";
cin>>num;
if(num==0)
{
cout<<"  The summation of 0 is 0";
getch();
clrscr();
goto conv;
}
i=num;
while(num)
{sum=sum+num;
--num;

}
 cout<<"  The summation of "<<i<<" is "<<sum<<"\n";
 goto sum;


}
qw=strcmp(conv,"ram");
if(qw==0)
{clrscr();
   int memory_size;

   memory_size = biosmemory();  /* returns value up to 640K */
   printf("RAM size = %dK\n",memory_size);
   getch();
   clrscr();
   goto conv;

}

qw=strcmp(conv,"cp");
if(qw==0)
{prime:{}
int n,i=2,j=1;
cout<<"  Enter the value > ";
cin>>n;
if(n==0)   {
clrscr();
goto conv;}
if(n==4)   {
cout<<"  Number is not prime\n";
goto prime;}
while((i<n/2)&&(j==1))
{if(n%i==0)
j=0;
i++;
}
if(j==1)
cout<<"  Number is prime\n";
else
cout<<"  Number is not prime\n";
goto prime;
}
qw=strcmp(conv,"df");
if(qw==0)
{cout<<"  Can find days from 1/1/1970 - 18/1/2038\n";
df:{}
char *wday[] = {"Sunday", "Monday", "Tuesday", "Wednesday",
 "Thursday", "Friday", "Saturday", "Unknown"};

   struct tm time_check;
   int year, month, day;

/*  Input a year, month and day to find the weekday for */

   printf("  Year:  ");
   scanf("%d", &year);
   printf("  Month: ");
   scanf("%d", &month);
   printf("  Date:   ");
   scanf("%d", &day);
   if(year<=1969||year>=2039||month==0||month>=13||day==0)
   {cout<<"  function not responding error......";delay(450);
   clrscr();
   goto conv;
   }

/*  load the time_check structure with the data */
   time_check.tm_year = year - 1900;
   time_check.tm_mon  = month - 1;
   time_check.tm_mday = day;
   time_check.tm_hour = 0;
   time_check.tm_min  = 0;
   time_check.tm_sec  = 1;
   time_check.tm_isdst = -1;

/*  call mktime to fill in the weekday field of the structure */
   if (mktime(&time_check) == -1)
      time_check.tm_wday = 7;

/*  print out the day of the week */
   printf("  That day is a %s\n", wday[time_check.tm_wday]);
   getch();
   goto df;


}

qw=strcmp(conv,"w2hp");
if(qw==0)
{whp:{}
double hp,w;
cout<<"  Enter the value > ";
cin>>w;
if(w==0)
{cout<<"  0Watt = 0Hp";
getch();
clrscr();
goto conv;
}
hp=w/745.699871;
cout<<"  "<<w<<"Watt = "<<hp<<"Hp\n";
goto whp;
}

qw=strcmp(conv,"hp2w");
if(qw==0)
{hpw:{}
double hp,w;
cout<<"  Enter the value > ";
cin>>hp;
if(hp==0)
{cout<<"  0Hp = 0Watt";
getch();
clrscr();
goto conv;
}
w=hp*745.699871;
cout<<"   "<<hp<<"Hp = "<<w<<"Watt\n";
goto hpw;
}
qw=strcmp(conv,"f2c");
if(qw==0)
{fc:{}
double c,f;
cout<<"  Enter the value > ";
cin>>f;
if(f==0)
{cout<<"  0¯F = -17.777778¯F";
getch();
clrscr();
goto conv;
}
c=(f-32)/1.8;
cout<<"  "<<f<<"¯F = "<<c<<"¯C\n";
goto  fc;
}

qw=strcmp(conv,"c2f");
if(qw==0)
{cf:{}
double c,f;
cout<<"  Enter the value > ";
cin>>c;
if(c==0)
{cout<<"  0¯C = 32¯F";
getch();
clrscr();
goto conv;
}
f=1.8*c+32;
cout<<"  "<<c<<"¯C = "<<f<<"¯F\n";
goto  cf;
}
qw=strcmp(conv,"kh2mh");
if(qw==0)
{km:{}
double m,k;
cout<<"  Enter the value >";
cin>>k;
if(k==1){
cout<<"  1 Km = 0.621371 Miles\n";
goto km;
 }
if(k==0){
cout<<"  0 Kms' = 0 Miles";
getch();
clrscr();
goto conv;
 }
m=k/1.609344;
cout<<"  "<<k<<" Kms = "<<m<<" Miles\n";


 goto km;

}

qw=strcmp(conv,"mh2kh");
if(qw==0)
{mk:{}
double m,k;
cout<<"  Enter the value >";
cin>>m;
if(m==1){
cout<<"  1 Mile = 1.609344 kms\n";
 goto mk;
 }
if(m==0){
cout<<"  0 Mile = 0 Km'";

getch();
clrscr();
goto conv;

 }
k=m*1.609344;
cout<<"  "<<m<<" Miles = "<<k<<" kms\n";


 goto mk;

}

qw=strcmp(conv,"r2d");
if(qw==0)
{rtd:{}
double deg,rad;
cout<<"  Enter the value >";
cin>>rad;
if(rad==0){
cout<<"  0 Radians = 0ß";
getch();
clrscr();
goto conv;
 }
deg=rad*57.29578;
cout<<"  "<<rad<<" radians = "<<deg<<"ß\n";


 goto rtd;

}


qw=strcmp(conv,"d2r");
if(qw==0)
{dtr:{}
double deg,rad;
cout<<"  Enter the value >";
cin>>deg;
if(deg==0){
cout<<"  0ß = 0 Radians";
getch();
clrscr();
goto conv;
 }
rad=deg/57.29578;
cout<<"  "<<deg<<"ß = "<<rad<<" Radians\n";


 goto dtr;

}

qw=strcmp(conv,"calc");
if(qw==0)
{
clrscr();
goto calc;  }
else {
cout<<"\n\t\t    ⁄ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒø";
cout<<"\n\t\t    |Enter a valid option |";
cout<<"\n\t\t    ¿ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒŸ";
getch();
clrscr();
goto conv;  }


}


sn=strcmp(calc,"main");
if(sn==0) { clrscr();
goto main; }
else {
cout<<"\n\t\t    ⁄ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒø";
cout<<"\n\t\t    |Enter a valid option |";
cout<<"\n\t\t    ¿ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒŸ";

getch();
clrscr();
goto calc;  }
}

else if(ex=='6'||ex=='p'||ex=='P')
{
clrscr();
cout<<"\n„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î≈";window(15,10,10,0);
cprintf(" Properties ");cout<<"≈Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„Î„\n";
window(15,10,10,0);
textcolor(BLUE);
textbackground(BLACK);highvideo();cprintf("View basic information about your software.");
cout<<"\n\nShoonya Editionƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ";
cout<<"\n     Shoonya 8 Professional\n     Copyright 2015 Ardhajya Corporation. All rights reserved.";
cout<<"\n     Service Pack 1";
cout<<"\n\nArdhajya Corporation Supportƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ";
cout<<"\n     Phone:               8234982538";
cout<<"\n     Support Hours:       24X7";
cout<<"\n\nPersonal Informationƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ";
cout<<"\n     Computer Name:       Ardhajya";
cout<<"\n     Work Group:          Shoonya";
cout<<"\n\nShoonya Activationƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ";
cout<<"\n     Shoonya is activated";
cout<<"\n     Product ID:          00346-OEM-9507653-36109";
getch();
clrscr();
textcolor(WHITE);
textbackground(BLACK);highvideo();
goto main;
}
else if(ex=='5'||ex=='a'||ex=='A')
{
int i;

  printf("Command line arguments:\n");
  for (i=0; i < argc; ++i)
    printf("[%2d] : %s\n", i, argv[i]);

  printf("About to exec child with arg1 arg2 ...\n");
  execlpe("element.EXE", "element.eXE", "arg1", "arg2", NULL, envp);

  perror("exec error");
getch();
}
else {
cout<<"\n\t\t    ⁄ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒø";
cout<<"\n\t\t    |Enter a valid option |";
cout<<"\n\t\t    ¿ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒŸ";
system("pause");
clrscr();
goto main;
}

getch();
return 0;
}
