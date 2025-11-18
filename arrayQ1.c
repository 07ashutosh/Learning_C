#include<stdio.h>
//wap to compute the average of all ca scores cap100

int main(){
    int n =20;
    int arr[n];
    int sum = 0;
    float average;
    float score;

    for(int i=0;i<=n-1;i++){
        printf("enter the CAP100 score:");
        scanf("%d",&score);

        arr[i] = score ;

        sum = sum + score;
    }
    printf("%d",score);
}