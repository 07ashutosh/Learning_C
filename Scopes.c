# include <stdio.h>

// int main(){
//     auto int j = 1;
//     if(j!= 0){
//         auto int j =2;
//         printf("%d\n",j);
//     }
//     printf("%d",j);
// }

extern int y = 5;

int fun(int n){
    n = 6;
    printf("%d",n);
}
int main(){
    printf("%d\n",y);
    fun(y);

    
}