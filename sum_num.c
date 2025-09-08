# include<stdio.h>
int main() {
    int num;
    int sum = 0;
    printf("enter the number :");
    scanf("%d",&num);
    
    while (num>0){
      int endnum =   num %10 ;
        sum = (sum + endnum);
        num = num/10;
    }
    printf("sum of digits :%d",sum);
     
    return 0;
}