#include<stdio.h>
struct student{
    int student_serial;
    char student_name[50];
    int student_roll;
    int student_mark;
};
int linear_search(struct student STUDENTS[], int size, int search){
  for(int i=0;i<size;i++){
    if(STUDENTS[i].student_roll==search){
      return i;
    }
  }
  return -1;
}
int main(){
  int total_students,search;
  printf("Enter Total Students: ");
  scanf("%d",&total_students);

  struct student STUDENTS[total_students];
  for(int i=0;i<total_students;i++){
    printf("Enter %dth student serial: ",(i+1));scanf("%d",&STUDENTS[i].student_serial);
    printf("Enter %dth student name  : ",(i+1));scanf("%s",&STUDENTS[i].student_name);
    printf("Enter %dth student roll  : ",(i+1));scanf("%d",&STUDENTS[i].student_roll);
    printf("Enter %dth student mark  : ",(i+1));scanf("%d",&STUDENTS[i].student_mark);
  }

  
  
  printf("Enter Roll Number to Search Student Record: ");
  scanf("%d",&search);

  int result=linear_search(STUDENTS,total_students,search);
  if(result==-1){
    printf("Item Not Found");
  } else{
    printf("Record found at position no %d\n",result+1);
    printf("Name       : %s\n",STUDENTS[result].student_name);
    printf("Roll Number: %d\n",STUDENTS[result].student_roll);
    printf("Marks      : %d\n",STUDENTS[result].student_mark);
  }

  return 0;
}
