//문자 처리 라이브러리2
#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main(void){
    int c;

    while((c = getchar()) != 'z'){
        printf("------------------------\n");
        printf("isdigit(%c) = %d\n",c,isdigit(c));
        printf("isalpha(%c) = %d\n",c,isalpha(c));
        printf("islower(%c) = %d\n",c,islower(c));
        printf("ispunct(%c) = %d\n",c,ispunct(c));
        printf("isxdigit(%c) = %d\n",c,isxdigit(c));
        printf("isprint(%c) = %d\n",c,isprint(c));
        printf("------------------------\n");
    }
    return 0;
}