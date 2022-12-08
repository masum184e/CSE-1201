#include<stdio.h>
#include<string.h>

void insert(char NAME[][100],int size,char add[]){
  //FINDING INSERTING INDEX
  int index;
  for(int i=0;i<size;i++){
    if(strcmp(NAME[i],add)>0){
      index=i;break;
    }
  }

  //INSERTING
  for(int i=0;i<size;i++){
    char tmp[100];
    if(i>=index){
      strcpy(tmp,NAME[i]);
      strcpy(NAME[i],add);
      strcpy(add,tmp);
    }
  }

}

void remove(char NAME[][100],int size,char del[]){
  //FINDING REMOVED ELEMENT INDEX
  int index;
  for(int i=0;i<size;i++){
    if(!strcmp(NAME[i],del)){
      index=i;
      //THIS RETURN LAST OCCURENCE OF THE SPECIFIED ELEMENT,WHICH REMOVE THE LAST OCCURENCE
      //USE BREAK FOR FIRST OCCURENCE OF THE SPECIFIED ELEMENT,WHICH REMOVE THE FIRST OCCURENCE
    }
  }

  //REMOVING
  for(int i=0;i<size;i++){
    if(i>=index)strcpy(NAME[i],NAME[i+1]);
  }
  
}

int main(){
  int size=8;
  char NAME[size][100]={"Adam","Clark","Evans","Gupta","Jones","Lane","Pace","Smith"};
  char add[100]="Davis";
  char del[100]="Gupta";

  remove(NAME,size,del);
  insert(NAME,size,add);

  for(int i=0;i<8;i++)printf("%s\n",NAME[i]);

  return 0;
}