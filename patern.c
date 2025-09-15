#include <stdio.h>

int main()
{
    // for (int i=1;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }


    // patern 2
    // int n = 5;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // int num = 1;
    // for (int i = 1; i <= 5; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         printf("%d", num % 10);
    //         num++;
    //     }
    //     printf("\n");
    // }

    // print primid patern 
    for(int i=1;i<=4;i++){
                for(int j=1;j<=4-i;j++){
                    printf(" ");
                }
                for(int j=1;j<=i;j++){
                    printf("*");
                }
                for(int j=1;j<=i-1;j++){
                    printf("*");
                }
                printf("\n");
            }
    return 0;
}
