#include<stdio.h>
int main()
{
    int x=5 ,y=6 ,z=8;
  
    if(x>y)
    {
        
        if(x>z)
        {
            printf("x is large");
        }
        else if(y>x && y>z)
        {
            printf("y is large");
        }
    }
    else 
    {
        printf("c");
    }
    return 0;
}