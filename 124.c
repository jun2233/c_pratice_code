/*************************************************************************
	> File Name: 124.c
	> Author: 
	> Mail: 
	> Created Time: Sat 22 Apr 2023 07:26:03 PM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if((b < 50 || a > 0) && (c <= 25 || d >= 5)){
        printf("ok\n");
    }else printf("pass\n");
    return 0;
}
