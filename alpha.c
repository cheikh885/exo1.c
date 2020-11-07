#include<stdio.h>
int main(){
    char lettre;
    printf(" saisir une lettre\n");
    scanf("%c",&lettre);

    if(lettre=='a' ||lettre=='e' ||lettre=='i' |lettre=='o' ||lettre=='u' ||lettre=='y'){
    
    printf("est une voyelle\n");

    }
    else{
        printf("est une consonne\n");
    }

    return 0;
}