//getch()의 사용
#include<conio.h>

int main(void){
    int ch;

    while(1){
        ch = getch();
        if(ch == 'q')  break;
        putch(ch);
    }
    
    return 0;
}