#include<stdio.h>
int main(){

  //GETTING INPUT
  int row=3,col=3;
  int mat[row][col],clock_mat[row][col];
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      printf("Enter The Value Of MAT[%d][%d]: ",i,j);
      scanf("%d",&mat[i][j]);
    }
  }

  //CLOCK WISE ROTATION
  for(int i=0;i<3;i++){
      for(int j=2,k=0;j>=0;j--){
          clock_mat[i][k]=mat[j][i];
          k++;
      }
  }

  //PRINTING GIVEN ARRAY
  printf("Given Array:\n");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++)printf("%d ",mat[i][j]);
    printf("\n");
  }

  //PRINTING ROTATED ARRAY
  printf("\nRotated Array:\n");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++)printf("%d ",clock_mat[i][j]);
    printf("\n");
  }
  
}