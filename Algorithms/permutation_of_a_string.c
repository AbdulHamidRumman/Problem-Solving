#include <stdio.h>
FILE * fp;
char f[100];
void swap(char *a, char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}
void permute(char *str,int l,int r)
{
    int i;
    if(l == r)
    {
        fp = fopen(f,"a");
        fputs(str,fp);
        fputs("\n",fp);
    }

    else
    {
        for(i=l;i<=r;i++)
        {
            swap((str+l),(str+i));
            permute(str,l+1,r);
            swap((str+l),(str+i));
        }
    }

    return;
}

int main()
{
    char s[100];
    printf("Enter String: ");
    scanf("%s",s);
    printf("Enter Filename: ");
    scanf("%s",f);
    int len;
    for(len=0;s[len]!='\0';len++);
    permute(s,0,len-1);
    fclose(fp);
    return 0;
}
