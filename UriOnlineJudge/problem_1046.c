#include <stdio.h>

int main(){

    freopen("problem_1046_in.txt","r",stdin);
    freopen("problem_1046_out.txt","w",stdout);
    int s, e;
    while(2 == scanf("%d %d", &s, &e)){
    if(e <= s)
        e = e + 24;
    printf("O JOGO DUROU %d HORA(S)\n",e - s);
    }
    return 0;
}
