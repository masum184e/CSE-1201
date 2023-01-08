#include<stdio.h>
struct student{
    int student_serial;
    char student_name[50];
    int student_roll;
    int student_mark;
};
void bubble_sort(struct student STUDENTS[],int size){
  struct student tmp;
  for(int i=0;i<size;i++){
    for(int j=0;j<size-i-1;j++){
      if(STUDENTS[j].student_mark<STUDENTS[j+1].student_mark){
        tmp=STUDENTS[j];
        STUDENTS[j]=STUDENTS[j+1];
        STUDENTS[j+1]=tmp;
      }
    }
  }
}
int main(){
  int total_students;
  printf("Enter Total Students: ");
  scanf("%d",&total_students);

  struct student STUDENTS[total_students];
  for(int i=0;i<total_students;i++){
    printf("Enter %dth student serial: ",(i+1));scanf("%d",&STUDENTS[i].student_serial);
    printf("Enter %dth student name  : ",(i+1));scanf("%s",&STUDENTS[i].student_name);
    printf("Enter %dth student roll  : ",(i+1));scanf("%d",&STUDENTS[i].student_roll);
    printf("Enter %dth student mark  : ",(i+1));scanf("%d",&STUDENTS[i].student_mark);
  }

  bubble_sort(STUDENTS,total_students);
  
  printf("Name\troll_number marks\n");
  for(int i=0;i<total_students;i++){
    printf("%d\t%s\t%d\t%d\n",STUDENTS[i].student_serial,STUDENTS[i].student_name,STUDENTS[i].student_roll,STUDENTS[i].student_mark);
  }

  return 0;
}
