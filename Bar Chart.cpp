//Bar Chart printing Program
#include <stdio.h>

// main function
int main()
{
    int num, i, k;
    printf("Enter any number between 1 and 30 to convert to bar code");
    for(i=0;i<5;i++)
    {
        scanf("%d",&num);
        if(num>=1&&num<=30)
        {
            for(k=0;k<num;k++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            printf("Wrong Entry please enter any number between 1 and 30");
        }
    }
    return 0;
}
