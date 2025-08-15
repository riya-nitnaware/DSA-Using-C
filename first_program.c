#include<stdio.h>
int main(){
    int marks[5]={100,50,65,99,85};
    printf("Marks Array elements are:");
    int i;
    for(i=0;i<5;i++){
        printf("%d ", marks[i]);
    }
    printf("\nAdress of each elements are ");
    for(i=0;i<5;i++){
       
        printf("\n%d=%u\n",marks[i], &marks[i]);
    }
    return 0;
}