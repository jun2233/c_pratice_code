/*************************************************************************
	> File Name: 107.c
	> Author: 
	> Mail: 
	> Created Time: Mon 17 Apr 2023 04:47:51 PM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if(n % 7 == 0 && n % 2 != 0)printf("YES\n");
    else printf("NO\n");
}
