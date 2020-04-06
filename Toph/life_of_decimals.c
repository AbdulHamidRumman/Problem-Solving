#include <stdio.h>

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            printf("1");
            break;
        case 2:
            printf("4");
            break;
        case 3:
            printf("1");
            break;
        case 4:
            printf("5");
            break;
        case 5:
            printf("9");
            break;
        case 6:
            printf("2");
            break;
        case 7:
            printf("6");
            break;
        case 8:
            printf("5");
            break;
        case 9:
            printf("3");
            break;
        case 10:
            printf("5");
            break;
        case 11:
            printf("8");
            break;
        case 12:
            printf("9");
            break;
        }
        printf("\n");
    }
    return 0;
}
