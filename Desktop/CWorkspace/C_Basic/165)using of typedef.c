//typedef를 이용하여 좌표의 합 구하기
#include<stdio.h>

typedef struct point{
    int x;
    int y;
} POINT;

POINT translate(POINT p,POINT delta);

int main(void){
    POINT p = {3,9};
    POINT delta = {10,20};
    POINT result;

    result = translate(p,delta);
    printf("새로운 점의 좌표는 (%d,%d)입니다\n",result.x,result.y);

    return 0;
}

POINT translate(POINT p, POINT delta){
    POINT new_p;

    new_p.x = p.x + delta.x;
    new_p.y = p.y + delta.y;

    return new_p;
}