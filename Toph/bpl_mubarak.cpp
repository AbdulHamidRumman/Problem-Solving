#include <bits/stdc++.h>
using namespace std;

char s[101];

int main()
{
    int T,over,ball,i;
    scanf("%d",&T);
    while(T--)
    {

        over=0,ball=0;
        scanf("%s",s);
        for(i=0;s[i]!='\0';i++)
        {
            if(!(s[i]=='W' || s[i]=='N' || s[i]=='D'))
                ball++;
        }
        over = ball/6;
        ball = ball%6;
        if((!over) && (ball!=0))
        {
            if(ball!=1)
                printf("%d BALLS\n",ball);
            else
                printf("1 BALL\n");
        }
        else if((!ball) && (over!=0))
        {
            if(over!=1)
                printf("%d OVERS\n",over);
            else
                printf("1 OVER\n");

        }
        else
        {
            if((over!=1)&&(ball!=1))
                printf("%d OVERS %d BALLS\n",over,ball);
            else if((over)&&(ball!=1))
                printf("1 OVERS %d BALLS\n",ball);
            else if((over!=1)&& ball)
                printf("%d OVERS 1 BALLS\n",over);
            else
                printf("1 OVER 1 BALL\n");
        }
    }
    return 0;
}
