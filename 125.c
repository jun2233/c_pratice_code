/*************************************************************************
	> File Name: 125.c
	> Author: 
	> Mail: 
	> Created Time: Sun 23 Apr 2023 09:34:39 AM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    int h, m, s;
    double x, t;
    scanf("%d%d%d%lf", &h, &m, &s, &t);
    if(t <= 86400 && t > 0){
        s = t + s;
        x = t / 864;
        while(s >= 60){
            m++;
            s = s - 60;
        }
        while(m >= 60){
            m = m - 60;
            h++;
        }
        if(h > 12 && h < 24){
            printf("%d:%d:%dpm\n", h - 12, m, s);
            printf("%0.2lf%%\n", x);
        }else if(h > 0 && h < 12){
            printf("%d:%d:%dam\n", h, m, s);
            printf("%0.2lf%%\n", x);
        }else if(h == 0 || h == 24){
            printf("12:%d:%dam\n", m, s);
            printf("%0.2lf%%\n", x);
        }else if(h == 12){
            printf("12:%d:%dpm\n", m, s);
            printf("%0.2lf%%\n", x);
        }else if(h > 24){
            h = h - 24;
            if(h > 12 && h < 24){
                printf("%d:%d:%dpm\n", h - 12, m, s);
                printf("%0.2lf%%\n", x);
            }else if(h > 0 && h < 12){
                printf("%d:%d:%dam\n", h, m, s);
                printf("%0.2lf%%\n", x);
            }else if(h == 0 || h == 24){
                printf("0:%d:%dam\n", m, s);
                printf("%0.2lf%%\n", x);
            }else if(h == 12){
                printf("12:%d:%dpm\n", m, s);
                printf("%0.2lf%%\n", x);
            }
        }
    }
}
