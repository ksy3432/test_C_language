//문자열의 길이를 구하는 프로그램
#include<stdio.h>

int main(void){
    char str[30] = "C language is easy";
    int i = 0;

    while(str[i] != 0)
        i++;
    printf("문자열 \"%s\"의 길이는 %d 입니다\n",str,i);

    return 0;
}