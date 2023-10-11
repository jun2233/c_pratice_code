/*************************************************************************
	> File Name: 125.1.c
	> Author: 
	> Mail: 
	> Created Time: Sun 23 Apr 2023 10:53:59 AM CST
 ************************************************************************/

#include<stdio.h>
void hour(int a, int b, int c){
    if(a > 12 && a < 24){
        a = a - 12;
        printf("%d:%d:%dpm\n",a, b, c);
        return ;
    }else if(a > 0 && a < 12){
        printf("%d:%d:%dam\n", a, b, c);
        return ;
    }else if(a == 0){
        printf("12:%d:%dam\n", b, c);
        return ;
    }else if(a == 12){
        printf("12:%d:%dpm\n", b, c);
        return ;
    }
}
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
        if(h >= 24){
            h = h - 24;
            hour(h, m, s);
        }
        else{
            hour(h, m, s);
        }
        printf("%0.2lf%%\n", x);
    }
    return 0;
}
