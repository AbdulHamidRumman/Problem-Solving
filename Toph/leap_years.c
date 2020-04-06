#include <stdio.h>
int main(){
    unsigned int y;
    scanf("%u",&y);
    if((y%4==0)&&(y%400!=0))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
