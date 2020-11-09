#include<stdio.h>
int main(){

int i=10;

printf("saisir la valeur : ");
scanf("%d",&i);
if(i==10){
while(i>=1){
    printf("%d\n",i);

    i=i-1;
    }
}
else{
    printf("saisir 10");
}


return 0;
}