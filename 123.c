/*************************************************************************
	> File Name: 123.c
	> Author: 
	> Mail: 
	> Created Time: Tue 18 Apr 2023 02:00:04 PM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    int a, b, c, d;
    scanf("%d%d", &a, &b);
    if(a < b){
        scanf("%d%d", &c, &d);
        if(c < d){
            if(c <= a && d >= b){
                printf("YES\n");
            }else if(a <= c && b >= d){
                printf("YES\n");
            }
            else {
            printf("NO\n");
            }
        }
    }
}
