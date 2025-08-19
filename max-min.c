#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elemensts:");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    
    int max = arr[0], min = arr[0];
    for (int i=1;i<n;i++){
        if(arr[i] > max)
        max = arr[i];
        if(arr[i]<min)
        min = arr[i];
    }
    printf("Maximum element is %d\nMinimum element is %d\n", max, min);
    return 0;

}