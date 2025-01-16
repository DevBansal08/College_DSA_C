#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct Student{
    int rollno;
    char Name[20];
    char department[100];
};
int main(){
    // struct Student students[3] = {
    struct Student* students = (struct Student*)malloc(3 * sizeof(struct Student));
    
    students[0].rollno = 1;
    strcpy(students[0].Name, "Dev");
    strcpy(students[0].department, "CSE");
    students[1].rollno = 2;
    strcpy(students[1].Name, "Vishwadeep");
    strcpy(students[1].department, "Civil");


}