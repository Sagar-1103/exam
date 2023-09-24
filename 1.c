#include <stdio.h>

struct Student {
 int age;
 float marks;
};

int main(int argc, char const *argv[])
{
    struct Student Sagar;
    struct Student *ptr;
    ptr = &Sagar;
    (*ptr).age = 19;
    (*ptr).marks = 50.5;

    printf("%d %.2f",(*ptr).age,(*ptr).marks);
    return 0;
}
