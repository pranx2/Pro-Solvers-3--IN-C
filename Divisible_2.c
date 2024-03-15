#include <stdio.h>
int main() {
        int N;
    scanf("%d",&N);
    for(int i = 1 ; i <= N ; i++ ){
        if ((i%3 || i%7) == 0){
        printf("%d\n",i);
    }
        else printf("");
    }
    return 0;
}
