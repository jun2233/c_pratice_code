/*************************************************************************
	> File Name: 120.c
	> Author: 
	> Mail: 
	> Created Time: Sat 22 Apr 2023 06:19:44 PM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    int y, m, d;
    scanf("%d%d%d", &y, &m, &d);
    if(m >= 1 && m <= 12){
        if(y % 4 == 0 && y % 100 != 0 || y  % 400 == 0){
            if((m == 4 || m == 6 || m == 9 || m == 11) && (d >= 1 && d <= 30)){
                printf("YES\n");
            }else if((m == 2) && (d >= 1 && d <= 29)){
                printf("YES\n");
            }else if(d >= 1 && d <= 31){
                printf("YES\n");
            }else printf("NO\n");
        }else if((m == 4 || m == 6 || m == 9 || m ==11) && (d >= 1 && d <= 30)){
            printf("YES\n");
        }else if((m == 2) && (d >= 1 && d <= 28)){
            printf("YES\n");
        }else if((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && (d >= 1 && d <= 31)){
            printf("YES\n");
        }else printf("NO\n");
    }else printf("NO\n");
}
