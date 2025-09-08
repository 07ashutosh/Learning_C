# include<stdio.h>
// int main() {
//     int num;
//     int sum = 0;
//     printf("enter the number :");
//     scanf("%d",&num);
    
//     while (num>0){
//       int endnum =   num %10 ;
//         sum = (sum + endnum);
//         num = num/10;
//     }
//     printf("sum of digits :%d",sum);
     
//     return 0;
// }


//reversing and add the digits
int main() {
    int num;
    int rev = 0;
    int sum = 0;
    printf("enter the number :");
    scanf("%d",&num);
    
    while (num>0){
      int endnum =   num %10 ;
        rev = (rev * 10) + endnum;
        sum = (sum + endnum);
        num = num/10;
    }
    printf("reversed number is :%d",rev);
    printf("\nsum of digits :%d",sum);
     
    return 0;
}