#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void clearScreen()
{
    system("clear"); // For macOS
}
int needu(int upper, int lower) 
{
   int randm ;
   
   randm=rand()%(upper-lower+1)+lower;
   return randm;
} 
int main()
{
    srand(time(0));
  int a=0,p1=0,p2=0;
  char ar[30][40];
  int r,pl1=0;
  int i,j;
  int indi=1;
  int ip1=2,jp1=2,ip2=2,jp2=2;
    for(i=0;i<=30;i++)
    {

      for(j=0;j<=40;j++)
      {
        if(i%3==0)
         ar[i][j]='_';
        else
         ar[i][j]=' ';
        if(j%4==0)
         ar[i][j]='|';
      }
    }
while (p1<100&&p2<100)
{
    int y=0;
    if(a%2==0)
    {
        int totalrn=0,rn,x=1;
        printf(" For player 1 :your current position is %d\n",p1);
        while (x==1)
        {
         rn=needu(6,1);
         if(rn<6)
         {
            x=0;
         }
         if(rn==6)
         {
            printf("For player 1 :you got a six so here you go another chance to rool dice\n");
                x=1;
         }
         totalrn=totalrn+rn;
  
         
        }
        
         if(p1/10!=0)
         {
            ip1=p1/10;
            if(ip1%10==0)
            ip1=((ip1-2)*3)+5;
            else
            ip1=((ip1-1)*3)+5;
         } 
         //to locate position of j 
         if(p1%10==0)
         {
            if(p1==0)
            {
             jp1=2;
            }
            else
            {
             jp1=38;
            }
      
         }
        else
        {
         jp1=p1%10;
         jp1=((jp1-1)*4)+2;
        }
         ar[ip1][jp1]='r';
         ar[ip2][jp2]='s';
         printf("\ni cor : %d , j cor %d\n",ip1,jp1);

         for(i=0;i<=30;i++)
         {

         for(j=0;j<=40;j++)
         {
          printf("%c", ar[i][j]);
         }

          printf("\n");
         }
         ar[ip1][jp1]=' ';
          ar[ip2][jp2]=' ';

         a=a+1;
         p1=p1+totalrn;
         
         
        printf("For player 1 :so here comes your final number you can move \n%d\n",totalrn);
 
         printf("for next turn enter 1");
         scanf("%d",&y);
         
         if(y==1)
           clearScreen();
    }
    
   if(a%2!=0)
    {
         int y=0;
        int totalrn=0,rn,x=1;
        printf("For player 2 :your current position is %d\n",p2);
        while (x==1)
        {
           
         rn=needu(6,1);
         if(rn<6)
         {
            x=0;
         }
         if(rn==6)
         {
            printf("For player 2 :you got a six so here you go another chance to rool dice\n");
                x=1;
         }
         totalrn=totalrn+rn;
         
         
        }
        
         if(p2/10!=0)
         {
            ip2=p2/10;
            if(ip2%10==0)
            ip2=((ip2-2)*3)+5;
            else
            ip2=((ip2-1)*3)+5;
         } 
        if(p2%10==0)
         {
             if(p2==0)
            {
             jp2=2;
            }
            else
            {
             jp2=38;
            }
         }
        else
        {
         jp2=p2%10;
         jp2=((jp2-1)*4)+2;
        }
         ar[ip2][jp2]='s';
         ar[ip1][jp1]='r';
         printf("\ni cor : %d , j cor %d\n",ip2,jp2);

         for(i=0;i<=30;i++)
         {

         for(j=0;j<=40;j++)
         {
          printf("%c", ar[i][j]);
         }

          printf("\n");
         }

         ar[ip2][jp2]=' ';
         ar[ip1][jp1]=' ';
         a=a+1;
         p2=p2+totalrn;
         
        printf("For player 2 :so here comes your final number you can move \n%d\n",totalrn);
         printf("for next turn enter 2");
         scanf("%d",&y);
         if(y==1)
         {
             clearScreen();
         }
    }
    }
}
