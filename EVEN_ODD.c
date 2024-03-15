#include<stdio.h>
int main(){
   int N,V[N];
   scanf("%d",&N);
   for(int i = 0; i < N; i++){
      scanf("%d",&V[i]);
   }
   for(int i = 0, j=i+1 ; i < N, j< N ; j++,i++ ){
      if((V[i] % 2 == 0 && V[i] % V[i] == 0) || (V[j] % 2 == 0 && V[j] % V[j]== 0)){
         printf("%d",V[i] + V[j]);
      }
      else printf("\t%d", V[i] + V[j]);
   }
   return 0;
} 