#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ,m, sum=0;

    printf("Enter number to  check if perfect or not : \n ");

    scanf("%d" , &n);

   for( m=1 ;n>m ; m++ )
    {
        if(n%m==0)
        {
            sum += m;
        }
    }

   if( sum==n)
    printf("Your number is perfect ");

    else

        printf("Your number is not perfect ");



    return 0;
}
