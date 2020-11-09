#include<stdio.h>
int main(){
    
    int i;
    
    printf("saisir la valeur : ");
    scanf("%d",&i);
    if(i==10){

    

      for(i=10;i>=1;i--){
        printf("%d\n",i);

      }
    }else{
      printf("saisir 10\n");
    }
    return 0;
}