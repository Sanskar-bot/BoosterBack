#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
while (p1<100&&p2<100)
{
    if(a%2==0)
    {
        int totalrn=0,rn,x=1;
        printf("your current position is %d\n",p1);
        while (x==1)
        {
         rn=needu(6,1);
         if(rn<6)
         {
            x=0;
         }
         if(rn==6)
         {
            printf("you got a six so here you go another chance to rool dice\n ");
                x=1;
         }
         totalrn=totalrn+rn;
         
         
        }
        printf("so here comes your final number you can move \n%d\n",totalrn);
         p1=p1+totalrn;
    }
   p2=10;
}
}