#include<stdio.h>
#include<conio.h>

void main()
{
   int x,y,small,large, remainder;

   printf("Enter your Numbers:");
   scanf("%i",&x);
   scanf("%i",&y);

   if(x<y)
   {
       x=small,y=large;
   }
   else
   {
       x=large, y=small;
   }

   do
   {
       remainder=large%small;
       large=small;
       small=remainder;
   }while(remainder!=0);

   printf("The G.C.D. is %i",large);

}
