#include<stdio.h>

struct student{
    int number;
    char name[20];
    double height;
};

int main(void){
    struct student s = { 20070001 , "홍길동" , 180.2};
    struct student *p;

    p = &s;

    printf("학번 = %d 이름 = %s 키 = %f\n",s.number,s.name,s.height);
    printf("학번 = %d 이름 = %s 키 = %f\n",(*p).number,(*p).name,(*p).height);
    printf("학번 = %d 이름 = %s 키 = %f\n",p->number,p->name,p->height);

    return 0;
}