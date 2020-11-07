#include<stdio.h>
int main(){
    int T[5], s=0, i=0;
    
    for(i=0 ; i<5 ; i++){
  printf("saisi la valeur\n");
  scanf("%d",&T[i]);
    }


  for(i=0 ; i<5 ; i++){
      printf("T[%d] = %d\n",i,T[i]);

s=s+T[i];
  }
 printf("%d+%d+%d+%d+%d\n",T[0],T[1],T[2],T[3],T[4]);
  printf("la somme est %d\n",s);
return 0;
}
