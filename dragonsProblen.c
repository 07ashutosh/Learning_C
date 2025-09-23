# include <stdio.h>
int main() {
    for (int i=1;i<=10;i++){
        if(i==8){
            printf("caught by dragon⚡\n");
            break;
        }else if(i==5){
            printf("secret turnnal is used🎪\n");
            continue;
        }else{
            printf("you are at step :%d\n",i);
        }
    }
    return 0;
}
