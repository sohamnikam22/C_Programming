#include<iostream>
using namespace std;

int main()
{
    int size = 0;
    float *Marks = NULL;
    int i = 0;                    //  loop counter

    
    cout<<"Enter number of elements : \n";
    cin>>size;

    //Dynamic memory allocation

    Marks = new float[size];
    //float Marks[5];               // 20 bytes

    
    cout<<"Enter your marks: \n";

    // Iteration
    //    1      2    3
    for(i = 0; i < size; i++)
    {
        cin>>Marks[i];               // 4
    }

    cout<<"Entered marks are : \n";

     //    1      2    3
    for(i = 0; i < size; i++)
    {
        cout<<Marks[i]<<"\n";     // 4
    }

    delete [] Marks;

    
    return 0;
}