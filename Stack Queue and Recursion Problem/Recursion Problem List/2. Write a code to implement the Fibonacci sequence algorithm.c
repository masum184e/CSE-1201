#include<stdio.h>
int fibonacci(int size){
    if(size <= 1)return size;
    return fibonacci(size-1)+fibonacci(size-2);
}
int main(){
  int size;
  printf("Which th Number? : ");
  scanf("%d",&size);
  printf("The %dth vlaue of fibonacci series is : %d",size,fibonacci(size));
  return 0;
}

// #include<stdio.h>
// int main(){
//   int size;
//   printf("How many number? : ");
//   scanf("%d",&size);

//   int fib[size];
//   fib[0]=0;
//   fib[1]=1;
//   for(int i=2;i<size;i++)fib[i]=fib[i-1]+fib[i-2];

//   printf("Fibonacci Seris  :");
//   for(int i=0;i<size;i++)printf(" %d",fib[i]);
  
//   return 0;
// }
