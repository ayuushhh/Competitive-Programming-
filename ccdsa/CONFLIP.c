#include<stdio.h>
typedef long long int lli;
int main() {
  int t,i,g,n,q,k;
  scanf("%d", &t);
  while(t--){
      scanf("%d", &g);
      for(k=0;k<g;k++){
          scanf("%d %d %d", &i, &n, &q);
          if(n%2==0)
            printf("%d\n",n/2);
          else{
              if(i==q){
                  printf("%d\n",n/2);
              }
              else
                printf("%d\n", n/2 +1);
          }

      }
  }
  return 0;
}

