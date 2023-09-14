/*************************************************************************
	> File Name: 100.c
	> Author: 
	> Mail: 
	> Created Time: Mon 17 Apr 2023 01:39:42 PM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    int n, i;
    double money;
    scanf("%d", &n);
    i = 1;
    money = 0;
    while(i <= 6){
        money = (n + money) * (1 + 0.00417);
        i++;
    }
    printf("$%0.2lf\n", money);
}
