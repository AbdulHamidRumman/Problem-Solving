#include <bits/stdc++.h>
using namespace std;

char word[34];

int main()
{
    int n,i,j;
    scanf("%s",word);
    for(n=0;word[n]!='\0';n++);
    word[0] = 65+ word[0]-'a';
    word[n++]='.';
    word[n]='\0';
    for(i=0;i<n;i++)
    {
        if(word[i]=='s' || word[i]=='S')
            word[i] = '$';
        else if(word[i]=='i' || word[i]=='I')
            word[i] = '!';
        else if(word[i]=='o' || word[i]=='O')
        {
            for(j=n;j>=i;j--)
                word[j+1] = word[j];
            word[i]='(';
            word[i+1]=')';
            n++;
        }
    }
    printf("%s\n",word);

    return 0;
}
