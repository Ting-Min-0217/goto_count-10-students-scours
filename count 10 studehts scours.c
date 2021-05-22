/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    int count = 0;
    int countA = 0;
    int countB = 0;
    int countC = 0;
    
    here:
    printf("輸入學生分數：");
    scanf("%d", &num);
    count ++;
    if( num < 0 || num > 100 ){
        printf("輸入錯誤\n");
        count --;
    }
    if( num <= 100 && num >= 76){
        printf("A\n");
        countA ++;
    }else if( num <= 75 && num >=60 ){
        printf("B\n");
        countB ++;
    }else if( num >= 0 && num <= 59 ){
        printf("C\n");
        countC ++;
    }
    
    if( count < 10 ){
        goto here;
    }

    printf("已輸入10名學生成績\n");
    printf("A:%d\n",countA);
    printf("B:%d\n",countB);
    printf("C:%d\n",countC);
    
    return 0;
}
