#include <stdio.h>
#include <string.h>

char s[101];
int main()
{
    int x;
    scanf("%s",s);
    x = strcmp(s,"Fever");
    if(!x)
        printf("Go to hospital right now.\n");
    else
        printf("Go to hospital.\n");

    return 0;
}
