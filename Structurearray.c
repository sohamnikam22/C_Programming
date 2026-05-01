#include<stdio.h>
struct Hello
{
   float f;        //4
   int Arr[3];     //12
                   //16

}hobj;

int main()

{
   printf("Size of Object is : %lu\n",sizeof(hobj));

}