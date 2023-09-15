/*************************************************************************
	> File Name: 104.c
	> Author: 
	> Mail: 
	> Created Time: Mon 17 Apr 2023 04:02:52 PM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    int a, b, c;
    scanf("%d", &a);
    b = a % 10;
    a /= 10;
    c = a % 10;
    a /= 10;
    if(a != 9 && b != 9 && c != 9)printf("NO\n");
    else printf("YES\n");
}
