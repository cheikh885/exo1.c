#include<stdio.h>
int main(){

int i=10;

printf("saisir 10 : ");
scanf("%d",&i);
if(i==10)

{
    do 
    {
    printf("%d\n",i);
    i--;
}
while(i>=1);}
else{
    printf("saisir 10\n");
}

return 0;
    /* code */
}
