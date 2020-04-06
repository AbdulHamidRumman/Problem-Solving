#include <stdio.h>

int main(){

    int sh, sm, eh, em;
    scanf("%d %d %d %d",&sh,&sm,&eh,&em);
    if((sh == eh)&&(sm == em))
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else{
        if(em < sm){
            em += 60;
            sh += 1;
            }
        if(eh < sh)
            eh += 24;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(eh-sh),(em-sm));
    }
    return 0;
}
