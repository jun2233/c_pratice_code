/*************************************************************************
	> File Name: 122.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Apr 2023 09:15:55 AM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    int t, h, m, s;
    scanf("%d", &t);
    s = t % 60;
    h = t / 3600;
    m = (t - h * 3600 - s) / 60;
    if(h >= 12 && h < 24){
        h -= 12;
        if(h == 0)printf("12:%02d:%02d midnoon\n", m, s);
        else printf("%02d:%02d:%02d pm\n", h, m, s);
    }else printf("%02d:%02d:%02d am\n", h, m, s);
}
