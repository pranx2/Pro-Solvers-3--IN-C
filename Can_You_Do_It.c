#include <stdio.h>
int main() {
        int N;
    scanf("%d",&N);
    if (N == 0){
        printf("0\t1");
    }
    else if( N < 0){
        for(int i = N ; 1 >= i ; i++){
        printf("%d\t",i);    
        }
    }
    else for (int i = 1 ; i <= N ; i++){
        printf("%d\t",i); 
    }
    return 0;
}
