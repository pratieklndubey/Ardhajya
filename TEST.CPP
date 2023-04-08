#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<process.h>
#include<dos.h>
int main(int argc, char *argv[], char **envp ){  char fed;
/*clrscr();


*/
clrscr();
float sc=0;
int yo;
char name[20];
gotoxy(25,10);
cout<<"Enter your name:-";
gets(name);
yo=strcmp(name,"return");
if(yo==0)
{clrscr();
clrscr();
int i;

  printf("Command line arguments:\n");
  for (i=0; i < argc; ++i)
    printf("[%2d] : %s\n", i, argv[i]);

  printf("About to exec child with arg1 arg2 ...\n");
  execlpe("ardhajya.EXE", "ardhajya.eXE", "arg1", "arg2", NULL, envp);

  perror("exec error");
getch();
}

gend:{}
char gen;
gotoxy(25,11);
cout<<"Enter your gender(m/f):-";
cin>>gen;
if(gen=='m'||gen=='f'){
goto qs;
 }if(gen!='m'||gen!='f'){
gotoxy(25,12);
cout<<"Enter 'm' or 'f' Only.";
delay(1500);
clrscr();
goto gend;

}

qs:{}
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n{1} Burj Khalifa is the tallest man made structure. ";
cin>>fed;
if(fed=='t'||fed=='T')
sc=sc+4;
else if(fed=='s'||fed=='S')
sc=sc+0;
else
sc--;

clrscr();
cout<<"\n\t\t      "<<name<<"'s score is -> "<<sc;
cout<<"\n\n\n\n\n\n\n\n\n\n{2} Barrack Obama is the most powerful person in the world. ";
cin>>fed;
if(fed=='f'||fed=='F')
sc=sc+4;
else if(fed=='s'||fed=='S')
sc=sc+0;
else {
sc--; cout<<"\nNo, the most powerful person is Vladimir Putin.(President of Russia.)";}
clrscr();cout<<"\n\t\t      "<<name<<"'s score is ->"<<sc;
cout<<"\n\n\n\n\n\n\n\n\n\n{3} Bill Gates is the Richest person on earth. ";
cin>>fed;
if(fed=='f'||fed=='F')
sc=sc+4;
else if(fed=='s'||fed=='S')
sc=sc+0;  else{
sc--; cout<<"\nNo, the richest person is Carlos Slim Helu."; getch();  }
clrscr();cout<<"\n\t\t      "<<name<<"'s score is -> "<<sc;
cout<<"\n\n\n\n\n\n\n\n\n\n{4} New York has the most billionaires in the world. ";
cin>>fed;
if(fed=='f'||fed=='F')
sc=sc+4;
else if(fed=='s'||fed=='S')
sc=sc+0;  else {
sc--;  cout<<"\nNo its Moscow. ";   getch(); }
clrscr();cout<<"\n\t\t      "<<name<<"'s score is -> "<<sc;
cout<<"\n\n\n\n\n\n\n\n\n\n{5} Oprah Winfrey is the highest earning celebrity in the world. ";
cin>>fed;
if(fed=='t'||fed=='T'){
sc=sc+4; }
else if(fed=='s'||fed=='S')
sc=sc+0;  else
sc--;
clrscr();cout<<"\n\t\t      "<<name<<"'s score is -> "<<sc;
cout<<"\n\n\n\n\n\n\n\n\n\n{6} Avatar is the most pirated film in the world. ";
cin>>fed;
if(fed=='t'||fed=='T') {
sc=sc+4; }
else if(fed=='s'||fed=='S')
sc=sc+0;  else
sc--;
clrscr(); cout<<"\n\t\t      "<<name<<"'s score is -> "<<sc;
cout<<"\n\n\n\n\n\n\n\n\n\n{7} Carbon is the most abundant element in the universe. ";
cin>>fed;
if(fed=='F'||fed=='f')
sc=sc+4;else if(fed=='s'||fed=='S')
sc=sc+0;  else {
sc--;    cout<<"\nNo its not."; getch(); }
clrscr();cout<<"\n\t\t      "<<name<<"'s score is -> "<<sc;
cout<<"\n\n\n\n\n\n\n\n\n\n{8} Osmium is the heaviest of all elements. ";
cin>>fed;
if(fed=='t'||fed=='T') {
sc=sc+4;  }
else if(fed=='s'||fed=='S')
sc=sc+0;  else
sc--;
clrscr();cout<<"\n\t\t      "<<name<<"'s score is -> "<<sc;
cout<<"\n\n\n\n\n\n\n\n\n\n{9} Toie Oedo is the longest rail tunnel in the world. ";
cin>>fed;
if(fed=='f'||fed=='F')sc=sc+4;
else if(fed=='s'||fed=='S')
sc=sc+0;
else {
sc--;cout<<"\nNo its not.";getch();}
clrscr();cout<<"\n\t\t      "<<name<<"'s score is -> "<<sc;
cout<<"\n\n\n\n\n\n\n\n\n\n{10} Nude,Green Leaves and Bust by Pablo Picasso is the most expensive painting in the world. ";
cin>>fed;
if(fed=='t'||fed=='T'){
sc=sc+4;             }
else if(fed=='s'||fed=='S')
sc=sc+0;  else
sc--;
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\nNow your score is "<<sc<<".";
float per;
per = sc*100/40;
cout<<"\nPercentage is "<<per<<"%.\n";
getch();
int sc1=sc;
if(sc>=28)
{clrscr();
int i,n;
n=strlen(name);
cout<<"\n\n\n\n\n\n\n\n\t\t   ";
for(i=0;i<=n;i++)
{cout<<name[i];
delay(150);
}
delay(125);cout<<"i";delay(135);cout<<"s ";delay(225);cout<<"t";delay(135);cout<<"h";delay(135);cout<<"e ";delay(225);cout<<"w";delay(135);cout<<"i";delay(135);cout<<"n";delay(135);cout<<"n";delay(135);cout<<"e";delay(135);cout<<"r ";delay(225);cout<<"o";delay(135);cout<<"f "; delay(225);cout<<"t";delay(135);cout<<"h";delay(135);cout<<"e ";delay(225);cout<<"q";delay(135);cout<<"u";delay(135);cout<<"i";delay(135);cout<<"z";delay(225);cout<<"!";
cout<<"\n\t\t  ";
int a,b;
b=strlen(name);
for(a=0;a<=b+28;a++)
{cout<<"Ä";
delay(18);
}
delay(1200);if(gen=='m'){
cout<<"\n\t\t  .....and he is";
}if(gen=='f'){cout<<"\n\t\t  .....and she is";}
 cout<<" going to the second round."; getch();
 play:{}
 gotoxy(19,12);
 cout<<"Are you ready to play?";
 char iq;
 cin>>iq;
 if(iq=='y')
 {clrscr();
 goto round2;
 }
 if(iq=='n')
 {clrscr();
 clrscr();
int i;

  printf("Command line arguments:\n");
  for (i=0; i < argc; ++i)
    printf("[%2d] : %s\n", i, argv[i]);

  printf("About to exec child with arg1 arg2 ...\n");
  execlpe("ardhajya.EXE", "ardhajya.eXE", "arg1", "arg2", NULL, envp);

  perror("exec error");
getch();
 }
 else
 {gotoxy(19,13);
 cout<<"Enter y or n only.";getch();
 clrscr();
 goto play;
 }

}
else{getch();
clrscr();
clrscr();
int i;

  printf("Command line arguments:\n");
  for (i=0; i < argc; ++i)
    printf("[%2d] : %s\n", i, argv[i]);

  printf("About to exec child with arg1 arg2 ...\n");
  execlpe("ardhajya.EXE", "ardhajya.eXE", "arg1", "arg2", NULL, envp);

  perror("exec error");
getch();
}

 round2:{}
 sc=0;
 q1:{}
 cout<<"\n\n\n\n\n\n\n\n\n\n\n{1} When did the treaty of Versaille was signed? ";
 cout<<"\n\n(a). 1919\t\t(b). 1905\n(c). 1979\t\t(d). 1875\n";
cin>>fed;
if(fed=='a'||fed=='A')
sc=sc+4;
else if(fed=='s'||fed=='S')
sc=sc+0;
else if(fed=='b'||fed=='c'||fed=='d'||fed=='B'||fed=='C'||fed=='D')
sc--;
else {
cout<<"Enter a,b,c,d only.";getch();clrscr();goto q1;}
clrscr();
q2:{}
cout<<"\n\t\t      "<<name<<"'s score is -> "<<sc;
cout<<"\n\n\n\n\n\n\n\n\n\n{2} Sardar Sarowar Dam is located on which river? ";
 cout<<"\n\n(a). Kaveri\t\t(b). Ganga\n(c). Narmada\t\t(d). Jhelum\n";
  cin>>fed;
  if(fed=='c'||fed=='C')
sc=sc+4;
else if(fed=='s'||fed=='S')
sc=sc+0;
else if(fed=='b'||fed=='a'||fed=='d'||fed=='B'||fed=='A'||fed=='D')
sc--;
else {
cout<<"Enter a,b,c,d only.";getch();clrscr();goto q2;}
clrscr();
q3:{}cout<<"\n\t\t      "<<name<<"'s score is -> "<<sc;
cout<<"\n\n\n\n\n\n\n\n\n\n{3} Who appoints the judge of a High Court in India? ";
 cout<<"\n\n(a). Prime Minister\t\t(b). President\n(c). Home Minister\t\t(d). Justice of Supreme Court\n";
  cin>>fed;
  if(fed=='B'||fed=='b')
sc=sc+4;
else if(fed=='s'||fed=='S')
sc=sc+0;
else if(fed=='c'||fed=='a'||fed=='d'||fed=='C'||fed=='A'||fed=='D')
sc--;
else {
cout<<"Enter a,b,c,d only.";getch();clrscr();goto q3;}
clrscr();
q4:{}cout<<"\n\t\t      "<<name<<"'s score is -> "<<sc;
cout<<"\n\n\n\n\n\n\n\n\n\n{4} Shogun dynasty belongs to which country? ";
 cout<<"\n\n(a). France\t\t(b). Persia\n(c). Mangolia\t\t(d). Japan\n";
  cin>>fed;
  if(fed=='d'||fed=='D')
sc=sc+4;
else if(fed=='s'||fed=='S')
sc=sc+0;
else if(fed=='b'||fed=='a'||fed=='c'||fed=='B'||fed=='A'||fed=='C')
sc--;
else {
cout<<"Enter a,b,c,d only.";getch();clrscr();goto q4;}
clrscr();
q5:{}cout<<"\n\t\t      "<<name<<"'s score is -> "<<sc;
cout<<"\n\n\n\n\n\n\n\n\n\n{5} Wooden furnitures are coated with which compund to prevent termites? ";
 cout<<"\n\n(a). Zinc-Chloride\t\t(b). Zinc-Phosphide\n(c). Zinc-Bromide\t\t(d). Calcium-Hydroxide\n";
  cin>>fed;
  if(fed=='a'||fed=='A')
sc=sc+4;
else if(fed=='s'||fed=='S')
sc=sc+0;
else if(fed=='b'||fed=='c'||fed=='d'||fed=='B'||fed=='C'||fed=='D')
sc--;
else {
cout<<"Enter a,b,c,d only.";getch();clrscr();goto q5;}
clrscr();
 q6:{}cout<<"\n\t\t      "<<name<<"'s score is -> "<<sc;
 cout<<"\n\n\n\n\n\n\n\n\n\n{6} Who passed the press law,which liberated the press in India? ";
 cout<<"\n\n(a). Lord Canning\t\t(b). Sir Metcalfe\n(c). Lord Hastings\t\t(d). C.Rajagopalchari\n";
cin>>fed;
if(fed=='b'||fed=='B')
sc=sc+4;
else if(fed=='s'||fed=='S')
sc=sc+0;
else if(fed=='a'||fed=='c'||fed=='d'||fed=='A'||fed=='C'||fed=='D')
sc--;
else {
cout<<"Enter a,b,c,d only.";getch();clrscr();goto q6;}
clrscr();
 q7:{}cout<<"\n\t\t      "<<name<<"'s score is -> "<<sc;
 cout<<"\n\n\n\n\n\n\n\n\n\n{7} The cuneiform script was deciphered by ____________. ";
 cout<<"\n\n(a). Ardashir\t\t(b). Robert Clive\n(c). W.Bentick\t\t(d). Henry Rawlinson\n";
cin>>fed;
if(fed=='d'||fed=='D')
sc=sc+4;
else if(fed=='s'||fed=='S')
sc=sc+0;
else if(fed=='b'||fed=='c'||fed=='a'||fed=='B'||fed=='C'||fed=='A')
sc--;
else {
cout<<"Enter a,b,c,d only.";getch();clrscr();goto q7;}
clrscr();
 q8:{}cout<<"\n\t\t      "<<name<<"'s score is -> "<<sc;
 cout<<"\n\n\n\n\n\n\n\n\n\n{8} Somnathpuram is located in which state? Known for it's \ntemples of Hoysala period.";
 cout<<"\n\n(a). Tamil Nadu\t\t(b). Gujrat\n(c). Karnatak\t\t(d). Kerala\n";
cin>>fed;
if(fed=='C'||fed=='c')
sc=sc+4;
else if(fed=='s'||fed=='S')
sc=sc+0;
else if(fed=='b'||fed=='d'||fed=='a'||fed=='B'||fed=='D'||fed=='A')
sc--;
else {
cout<<"Enter a,b,c,d only.";getch();clrscr();goto q8;}
clrscr();
 q9:{}cout<<"\n\t\t      "<<name<<"'s score is -> "<<sc;
 cout<<"\n\n\n\n\n\n\n\n\n\n{9} What was the  meaning of the administrative unit 'ikta' in the Suri empire.? ";
 cout<<"\n\n(a). Province\t\t(b). District\n(c). Village\t\t(d). Currency\n";
cin>>fed;
if(fed=='a'||fed=='A')
sc=sc+4;
else if(fed=='s'||fed=='S')
sc=sc+0;
else if(fed=='b'||fed=='c'||fed=='d'||fed=='B'||fed=='C'||fed=='D')
sc--;
else {
cout<<"Enter a,b,c,d only.";getch();clrscr();goto q9;}
clrscr();
 q10:{}cout<<"\n\t\t      "<<name<<"'s score is -> "<<sc;
 cout<<"\n\n\n\n\n\n\n\n\n\n{10} Bhimbisara was the founder of which dynasty? ";
 cout<<"\n\n(a). Nanda Daynasty\t\t(b). Haryanka Dynasty\n(c). Gupta Dynasty\t\t(d). Shisunaga Dynasty\n";
cin>>fed;
if(fed=='b'||fed=='B')
sc=sc+4;
else if(fed=='s'||fed=='S')
sc=sc+0;
else if(fed=='d'||fed=='c'||fed=='a'||fed=='D'||fed=='C'||fed=='A')
sc--;
else {
cout<<"Enter a,b,c,d only.";getch();clrscr();goto q10;}
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n";
cout<<"Your score is "<<sc;
getch();

if(sc>28) {clrscr();
goto win2;          }
else{clrscr();
 textcolor(BLACK);
textbackground(RED);
 int p,d;
 clrscr();
d=strlen(name);
 cout<<"\n\t\t\t   "<<name<<"'s Final Result\n\t\t\t  ";
for(p=0;p<=d+16;p++)
cout<<"Ä";
cout<<"\n\n The score in the first round of the quiz is "<<sc1;
delay(888);
cout<<"\n\n The score in the second round of the quiz is "<<sc;
delay(888);
cout<<"\n\n Remarks\n\ÄÄÄÄÄÄÄÄÄ\n";
int su;
su=sc+sc1;
if(su<50)
{cout<< " You need to work hard on your general knowledge.";
}
if(su<=69&&su>=50)
{cout<<" You know many things,but don't remember them perfectly.";
}
if(su>=70)
{cout<<" You are very curious and intelligent person.";
}


 getch();
 textcolor(WHITE);
textbackground(BLACK);
 clrscr();

clrscr();
int i;

  printf("Command line arguments:\n");
  for (i=0; i < argc; ++i)
    printf("[%2d] : %s\n", i, argv[i]);

  printf("About to exec child with arg1 arg2 ...\n");
  execlpe("ardhajya.EXE", "ardhajya.eXE", "arg1", "arg2", NULL, envp);

  perror("exec error");
getch();}

win2:{}
textcolor(WHITE);
textbackground(BLACK);
int k,n,j,m;
n=strlen(name);
cout<<"\n\n\n\n\n\n\n\n\t\t";
for(k=0;k<=n;k++)
{cout<<name[k];
delay(150);
}
char gre[40]="is the winner of the quiz again!" ;
for(j=0;j<=31;j++)
{cout<<gre[j];
delay(150);
}
cout<<"\n\t       ";
int a,b;
b=strlen(name);
for(a=0;a<=b+34;a++)
{cout<<"Ä";
delay(18);
}
getch();

 textcolor(BLACK);
textbackground(RED);
 int p,d;
 clrscr();
d=strlen(name);
 cout<<"\n\t\t\t   "<<name<<"'s Final Result\n\t\t\t  ";
for(p=0;p<=d+16;p++)
cout<<"Ä";
cout<<"\n\n The score in the first round of the quiz is "<<sc1;
delay(888);
cout<<"\n\n The score in the second round of the quiz is "<<sc;
delay(888);
cout<<"\n\n Remarks\n\ÄÄÄÄÄÄÄÄÄ\n";
int su;
su=sc+sc1;
if(su<50)
{cout<< " You need to work hard on your general knowledge.";
}
if(su<=69&&su>=50)
{cout<<" You know many things,but don't remember them perfectly.";
}
if(su>=70)
{cout<<" You are very curious and intelligent person.";
}


 getch();
 textcolor(WHITE);
textbackground(BLACK);
 clrscr();

clrscr();
int i;

  printf("Command line arguments:\n");
  for (i=0; i < argc; ++i)
    printf("[%2d] : %s\n", i, argv[i]);

  printf("About to exec child with arg1 arg2 ...\n");
  execlpe("ardhajya.EXE", "ardhajya.eXE", "arg1", "arg2", NULL, envp);

  perror("exec error");
getch();return 0;
   }
