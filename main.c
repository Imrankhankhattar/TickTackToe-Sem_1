#include <stdio.h>
#include <stdlib.h>
void check(char,char);
char num[9]={'1','2','3','4','5','6','7','8','9'};
 main()
{   int k;
char choice;
int count1=0,count2=0;
   int im;
   while((choice!='n')||(choice!='N'))
   {
   gname();
    show();
    simbl();
    start();

   for(im=0; im<9; im++)
    {
    play();
    k=end();
    show();
    if(k==100)
    {printf("congradulation player 1 won ");
    count1++;}
    if(k==200)
    {printf("congradulation player 2 won ");
    count2++;
    }
    }
    if(count1==0 && count2==0)
    {
printf("OOPS! Match TIERD\n");
    }
    printf("Do You Want To Play Again(y/n)?: \n");
    scanf(" %c", &choice);
   }
    return 0;
}
void simbl()
{
    printf("\t\t\tplayer 1 symbole is:A\n\n");
    printf("\t\t\tplayer 2 symbole is:B\n\n");
}
void gname()
{
    printf("\n\n\n\n\n\n\n\t\t\t\t\t\tTIC TOC GAME");
}
void show()
{
    printf("\n\n\n\t\t\t\t\t\t___|___|___\n");
    printf("\t\t\t\t\t\t  %c|  %c|  %c\n",num[0],num[1],num[2]);
     printf("\t\t\t\t\t\t___|___|___\n");
     printf("\t\t\t\t\t\t  %c|  %c|  %c\n",num[3],num[4],num[5]);
      printf("\t\t\t\t\t\t___|___|___\n");
      printf("\t\t\t\t\t\t  %c|  %c|  %c\n",num[6],num[7],num[8]);
}
void start()
{   char st;
    printf("\t\t\t\t\twho will start game player:1 or player:2\n");
    scanf("%c",&st);
}
void play()
{   char s,p;
    printf("enter your position and symbol respectively:\n");
    scanf(" %c %c",&p,&s);
    if ((s!='A')||(s!='B'))
    {
        printf("you entered invalid symbole:rewrite  symbole at the same position");
    }
    check(p,s);
}
 void check(char P,char S)
{
      int i;
      for(i=0;i<9;i++)
      {
          if(num[i]==P)
          {num[i]=S;}
      }
}
int  end()
{
    if((num[0]=='A'&&num[1]=='A'&&num[2]=='A')||(num[3]=='A'&&num[4]=='A'&&num[5]=='A')||(num[6]=='A'&&num[7]=='A'&&num[8]=='A'))
    {return(100);}
          if((num[0]=='A'&&num[3]=='A'&&num[6]=='A')||(num[1]=='A'&&num[4]=='A'&&num[7]=='A')||(num[2]=='A'&&num[5]=='A'&&num[8]=='A'))
               {return(100);}
                      if((num[0]=='A'&&num[4]=='A'&&num[8]=='A')||(num[2]=='A'&&num[4]=='A'&&num[6]=='A'))
                           {return(100);}
  if((num[0]=='B'&&num[1]=='B'&&num[2]=='B')||(num[3]=='B'&&num[4]=='B'&&num[5]=='B')||(num[6]=='B'&&num[7]=='B'&&num[8]=='B'))
            return(200);
              if((num[0]=='B'&&num[3]=='B'&&num[6]=='B')||(num[1]=='B'&&num[4]=='B'&&num[7]=='B')||(num[2]=='B'&&num[5]=='B'&&num[8]=='B'))
                     return(200);
                    if((num[0]=='B'&&num[4]=='B'&&num[8]=='B')||(num[2]=='B'&&num[4]=='B'&&num[6]=='B'))
                           return(200);
                                        return(300);
}
