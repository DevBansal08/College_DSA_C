#include <stdio.h>
#include <stdlib.h>

struct Student{
    int rollno;
    char Name[20];
    char department[100];
};
int main(){
    struct Student students[3] = {
        {1,"Dev ", "CSE"},
        {2,"Vishwadeep", "Civil"},
        {3,"Divyanshi", "Mechanical"}
    };
    for(int i =0;i<3;i++){
        printf("Student %d\n", i +1);
        printf("Roll No: %d\n",students[i].rollno);
        printf("Name : %s\n", students[i].Name);
        printf("Department: %s\n", students[i].department);

    }
    return 0;

}
