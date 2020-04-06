#include <stdio.h>

char h[101];
int main()
{
    char c;
    int i=0;
    while(1)
    {
        scanf("%c",&c);
        if(c==' ')
            continue;
        if(c=='\n')
        {
            h[i]='\0';
            break;
        }
        else
        {
            h[i++] = c;
        }
    }
    printf("%s\n",h);
    return 0;
}
