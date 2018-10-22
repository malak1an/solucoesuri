#include <stdio.h>

int main(void){

    int hi, mi, hf, mf, rm, rt;

    printf("Digite a hora inicial do jogo: ");
    scanf ("%d", &hi);

    printf("Digite o minuto inicial do jogo: ");
    scanf ("%d", &mi);

    printf("Digite a hora final do jogo: ");
    scanf ("%d", &hf);

    printf("Digite o minuto final do jogo: ");
    scanf ("%d", &mf);

    rt = hf - hi;

    if (rt < 0){

        rt = 24 + (hf - hi);

    }
    rm = mf - mi;

    if (rm < 0){

        rm = 60 + (mf - mi);

        rt--;

    }
    if (hf == hi && mf == mi){

        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n\n");

    }else{

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n\n", rt, rm);

    }
}