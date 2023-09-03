/*************************************************************************
	> File Name: 90.c
	> Author: 
	> Mail: 
	> Created Time: Fri 14 Apr 2023 11:08:14 AM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    int a, b;
    scanf("%d", &a);
    printf("%d\n", a / 100);
    b = a % 100;
    printf("%d\n", b / 10);
    printf("%d\n", b % 10);
}
