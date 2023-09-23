/*************************************************************************
	> File Name: 119.c
	> Author: 
	> Mail: 
	> Created Time: Sat 22 Apr 2023 01:10:36 PM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    int y, m, d;
    scanf("%d%d%d", &y, &m, &d);
    if(m == 10 || m == 8 || m == 7 || m == 5 || m == 3 || m == 1){
        if(d == 31){
            printf("%d %d %d\n", y, m, d - 1);
            m++;
            d = 1;
            printf("%d %d %d\n", y, m, d);
        }else if(d != 1){
            printf("%d %d %d\n", y, m, d - 1);
            printf("%d %d %d\n", y, m, d + 1);
        }if(d == 1 && m != 1 && m != 3){
            printf("%d %d 30\n", y, m - 1);
            printf("%d %d %d\n", y, m, d + 1);
        }else if(d == 1 && m == 1){
            printf("%d 12 31\n", y - 1);
            printf("%d 1 2\n", y);
        }if(d == 1 && m ==3){
            if(y % 4 == 0 && y % 100 != 0 || y % 400 ==0){
                printf("%d 2 29\n", y);
                printf("%d 3 2\n", y);
            }else {
                printf("%d 2 28\n", y);
                printf("%d 3 2\n", y);
            }
        }if(d == 1 && m == 8){
            printf("%d 7 31\n", y);
            printf("%d 8 2\n", y);
        }
    }else if(m == 4 || m == 6 || m == 9 || m == 11){
        if(d == 30){
            printf("%d %d %d\n", y, m, d - 1);
            m++;
            d = 1;
            printf("%d %d %d\n", y, m, d);
        }else if(d != 1){
            printf("%d %d %d\n", y, m, d - 1);
            printf("%d %d %d\n", y, m, d + 1);
        }if(d == 1){
            printf("%d %d 31\n", y, m - 1);
            printf("%d %d %d\n", y, m, d + 1);
        }
    }else if(m == 2){
        if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0){
            if(d == 29){
                printf("%d %d %d\n", y, m, d -1);
                printf("%d 3 1\n",y);
            }else if(d == 28){
                printf("%d %d %d\n", y, m, d - 1);
                printf("%d 2 29\n",y);
            }
            else{
                printf("%d %d %d\n", y, m, d - 1);
                printf("%d %d %d\n", y, m, d + 1);
            }
        }
        else if(d == 28){
                printf("%d %d %d\n", y, m, d - 1);
                m++;
                d = 1;
                printf("%d %d %d\n", y, m, d);
        }
        else if(d == 1){
            printf("%d 1 31\n", y);
            printf("%d %d %d\n", y, m, d + 1);
        }
        else{
            printf("%d %d %d\n", y, m, d - 1);
            printf("%d %d %d\n", y, m, d + 1);
        }
    }else if(m == 12){
        if(d == 31){
            printf("%d %d %d\n", y, m, d - 1);
            y++;
            printf("%d 1 1\n",y);
            }else if(d == 1){
            printf("%d 11 30\n", y);
            printf("%d %d %d\n", y, m, d + 1);
        }
    }
    else {
        printf("%d %d %d\n", y, m, d - 1);
        printf("%d %d %d\n", y, m, d + 1);
    }
    return 0;
}
