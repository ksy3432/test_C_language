//구조체 선언2
#include<stdio.h>

struct student{
     int number;
     char name[10];
     double height;
};

int main(void){
    struct student s;

    printf("학번을 입력하시오 :");
    scanf("%d", &s.number);

    printf("이름을 입력하시오 :");
    scanf("%s", s.name);

    printf("신장을 입력하시오(실수) :");
    scanf("%lf", &s.height);

    printf("\n----------------------\n");

    printf("학번 : %d\n",s.number);
    printf("이름 : %s\n",s.name);
    printf("신장 : %f\n",s.height);

    printf("----------------------\n");

    return 0;

}