#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void clearScreen()
{
    system("clear"); 
}
int needu(int upper, int lower) 
{
   int randm ;
   
   randm=rand()%(upper-lower+1)+lower;
   return randm;
} 
int needuneg(int upper, int lower) 
{
   int randm ;
   
   randm=0-(rand()%(upper-lower+1)+lower);
   return randm;
} 


int main()
{
    srand(time(0));
  int a=0,p1=1,p2=1;
  char ar[30][40];
  int i,j;
  int xx,fsx,sx;
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
        //code to locate position of p1 i
        ip1=p1/10;

         if(p1%10==0&&p1>=0)
         {
            ip1=((ip1-1)*3)+2;
         } 
         else 
         {
            ip1=(ip1*3)+2;
         }
         //to locate position of p1 j 
         if(p1%10==0&&p1>=0)
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
         if(p1<0)
         {
         ip1=2;
         jp1=2;
         }
        else
        {
         jp1=p1%10;
         jp1=((jp1-1)*4)+2;
        }
            //code for location of p2 i
        
         ip2=p2/10;
         if(p2%10==0&&p2>=0)
         {
            ip2=((ip2-1)*3)+2;
         } 
         else 
         {
            ip2=((ip2)*3)+2;
         }
         //code for location of p2 j
        if(p2%10==0&&p2>=0)
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
         if(p2<0)
         {
            ip2=2;
            jp2=2;
         }
        else
        {
         jp2=p2%10;
         jp2=((jp2-1)*4)+2;
        }
         ar[ip1][jp1]='r';
         ar[ip2][jp2]='s';

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

         
         int xx,fsx,sx;
         printf("For player 1 :so here comes your final number you can move \n%d\n",totalrn);
         //here comes the boost and back function

         fsx=0;
         printf("OKAY!! so here you have choice to test your Fortune , if you really wanna GO FOR it PRESS 0 else 1\n");
         scanf("%d",&xx);
         if(xx==0)
         {
         sx=needu(10,1);
         if(sx==1||sx==5||sx==10||sx==2)
         {
            if(sx==1||sx==10)
            {
                fsx=needuneg(10,1);
            }
            if(sx==5||sx==2)
            {
                fsx=needuneg(15,5);
            }
            printf("off you are a bit unlucky , so you need to GO BACk BY \n%d\n",fsx);
         }
         if(sx==3||sx==7||sx==8)
         {
           if(sx==3||sx==7)
           {
            fsx=needu(10,1);
           }
           if(sx==8)
           {
            fsx=needu(15,10);
           }
            printf("yeahh !! you are really lucky bro , you GOT A BOOST BY \n%d\n",fsx);
         }
         if(sx==4||sx==6||sx==9)         
         {
            printf("shit your lucky is really LAZY , this JUST when NULL\n");
            fsx=0;
         }
         if(sx==3||sx==7||sx==8)
         {
            p2=p2+totalrn;
         }
          p1=p1+fsx;
         }
         if(xx!=0)
         {
            p1=p1+totalrn;
         }

         fsx=0;
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
         //code for location of p2 i
        
         ip2=p2/10;
         if(p2%10==0&&p2>=0)
         {
            ip2=((ip2-1)*3)+2;
         } 
         else 
         {
            ip2=((ip2)*3)+2;
         }
         //code for location of p2 j
        if(p2%10==0&&p2>=0)
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
         if(p2<0)
         {
            ip2=2;
            jp2=2;
         }
        else
        {
         jp2=p2%10;
         jp2=((jp2-1)*4)+2;
        }
        //code to locate position of p1 i
        ip1=p1/10;

         if(p1%10==0&&p1>=0)
         {
            ip1=((ip1-1)*3)+2;
         } 
         else 
         {
            ip1=(ip1*3)+2;
         }
         //to locate position of p1 j 
         if(p1%10==0&&p1>=0)
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
         if(p1<0)
         {
         ip1=2;
         jp1=2;
         }
        else
        {
         jp1=p1%10;
         jp1=((jp1-1)*4)+2;
        }
         ar[ip2][jp2]='s';
         ar[ip1][jp1]='r';

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
         
        printf("For player 2 :so here comes your final number you can move \n%d\n",totalrn);
        //here comes the boost and back function
         fsx=0;
         printf("OKAY!! so here you have choice to test your Fortune , if you really wanna GO FOR it PRESS 0\n");
         scanf("%d",&xx);
         if(xx==0)
         {
         sx=needu(10,1);
         if(sx==1||sx==5||sx==10||sx==2)
         {
            if(sx==1||sx==10)
            {
                fsx=needuneg(6,1);
            }
            if(sx==5||sx==2)
            {
                fsx=needuneg(15,5);
            }
            printf("off you are a bit unlucky , so you need to GO BACk BY \n%d\n",fsx);
         }
         if(sx==3||sx==7||sx==8)
         {
           if(sx==3||sx==7)
           {
            fsx=needu(10,1);
           }
           if(sx==8)
           {
            fsx=needu(15,10);
           }
            printf("yeahh !! you are really lucky bro , you GOT A BOOST BY \n%d\n",fsx);
         }
         if(sx==4||sx==6||sx==9)
         {
            printf("shit your lucky is really LAZY , this JUST when NULL\n");
            fsx=0;
         }
         if(sx==3||sx==7||sx==8)
         {
            p2=p2+totalrn;
         }
           p2=p2+fsx;
         }
         if(xx!=0)
         {
            p2=p2+totalrn;
         }
         fsx=0;
         printf("for next turn enter 2");
         scanf("%d",&y);
         if(y==1)
         {
             clearScreen();
         }
    }
    }
}
