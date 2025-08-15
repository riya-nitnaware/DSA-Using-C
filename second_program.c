#include<stdio.h>
int main(){
   int array[2][3]={{10,20,30},
                     {40,50,60}};
    for(int i=0;i<2;i++){
         for(int j=0;j<3;j++){
           printf("The matrix elements %d,%d are:%d\n",i,j, array[i][j]);
          
      }
    }
    //  int array[2][3]={{10,20,30},
    //                  {40,50,60}};
    // array[0]=12;
    // printf("Marks of student 1 is %d\n", array[0]);
    // array[0]=36;
    // printf("Marks of student 1 is %d\n", array[0]);
    

    // for(int i=0;i<n;i++){
    //     printf("Enter marks of student %d are:\n", i);
    //     scanf("%d", &array[i]);
    // }
    // for(int i=0;i<5;i++){
    //     printf("The marks of student %d are %d\n", i, array[i]);
    // }



    // int array[2][3];
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //         printf("Enter matrix elements %d,%d are:\n", i,j);
    //         scanf("%d", &array[i][j]);
    //     }
    // }
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //         printf("The matrix elements %d,%d are:%d\n",i,j, array[i][j]);
          
    //     }
    // }
    
    return 0;
}