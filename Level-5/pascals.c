#include <stdio.h>
void printPascal(int n)
{
    for (int i = 1; i <= n; i++) {
        int x = 1;
        for (int j= 1; j <= i; j++) {

            printf("%d", x);
            x = x * (i - j) / j;
        }
        printf("\n");
    }
}

int main()
{
    int n = 5;
    printPascal(n);
    return 0;
}