#include <stdio.h>
int main() {
    /*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }


/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    } 


/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", i * i + j);
        }
        printf("\n");
    }

/*
******
******
******
******
******
*/

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 6; j++) {
            printf("*");
        }
        printf("\n");
    }

/*
*
**
***
****
*****
*/

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }


/*
******
*****
****
***
**
*
*/

    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

/*
A
A B
A B C
A B C D
A B C D E
*/

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }
    return 0;
}