#include <stdio.h>

int main(){
    int T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        int a,b,c;
        scanf("%d %d",&a,&b);
        c = (a - b);
        int m_sum = a+b;
        while(c!=0){
            m_sum = m_sum*10;
            c = c/10;
        }
        m_sum = m_sum +(a-b);
        printf("Case %d: %d\n",i,m_sum);
    }
    return 0;
}
