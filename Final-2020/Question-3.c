#include<stdio.h>
int main(){
  int arr[5][5];
  arr[0][0]=0;
  arr[0][1]=1;
  arr[0][2]=0;
  arr[0][3]=0;
  arr[0][4]=1;

  arr[1][0]=1;
  arr[1][1]=0;
  arr[1][2]=1;
  arr[1][3]=1;
  arr[1][4]=1;

  arr[2][0]=0;
  arr[2][1]=1;
  arr[2][2]=0;
  arr[2][3]=1;
  arr[2][4]=0;

  arr[3][0]=0;
  arr[3][1]=1;
  arr[3][2]=1;
  arr[3][3]=0;
  arr[3][4]=1;

  arr[4][0]=1;
  arr[4][1]=1;
  arr[4][2]=0;
  arr[4][3]=1;
  arr[4][4]=0;

  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}
