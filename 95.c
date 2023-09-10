/*************************************************************************
	> File Name: 95.c
	> Author: 
	> Mail: 
	> Created Time: Fri 14 Apr 2023 03:17:57 PM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    int n, a, b;
    scanf("%d", &n);
    a = n / 10;
    b = n % 10;
    if(a != 0 && b != 0){
        n = b * 10 + a;
        printf("%d\n", n);
    }else {printf("错误\n");}
}
