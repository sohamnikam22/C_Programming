#include<stdio.h>

int no = 11;                            // Global variable

void fun()
{
    int i = 51;                         // Local variable
    printf("Inside fun : %d\n",i);      // 51
    printf("Inside fun : %d\n",no);     // 11

}

int main()
{
    int i = 21;                           // Local variable
    printf("Inside fun : %d\n",i);        // 21
    printf("Inside fun : %d\n",no);       // 11

    fun();

    return 0;
}
