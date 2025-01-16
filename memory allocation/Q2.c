#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[50];
    char department[50];
};

int main() {
   
    struct Student students[4] = { 
        {1, "Alice", "Computer Science"},
        {2, "Bob", "Electrical Engineering"},
        {3, "Charlie", "Mechanical Engineering"}
    };

    
    struct Student new_student = {4, "David", "Civil Engineering"};

   
    for (int i = 3; i > 0; i--) {
        students[i] = students[i - 1]; 
    }
    students[0] = new_student; 
    
    printf("Updated student list:\n");
    for (int i = 0; i < 4; i++) {
        printf("Student %d\n", i+1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Department: %s\n\n", students[i].department);
    }

    return 0;
}