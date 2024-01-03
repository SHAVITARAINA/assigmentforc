#include<stdio.h>
int main(){
     char name[25];
     int rollno;
     float sub1,sub2,sub3,sub4,sub5;
     float total;
     printf("Enter the student name");
     scanf("%s",&name);
     printf("Enter the students roll no");
     scanf("%d",&rollno);
     printf("Enter the marks in sub1,sub2,sub3,sub4,sub5");
     scanf("%f %f %f %f %f",&sub1,&sub2,&sub3,&sub4,&sub5);
     total=sub1+sub2+sub3+sub4+sub5;
     printf("total marks=%.2f",total);
     float percent=(total/500)*100;
     printf(" percentage=%.2f",percent);
     if(percent>=40){
        printf("pass");
     }
     else{
        printf("fail");
     }
     return 0;

     
}
