#include <stdio.h>

struct profile
{
    int age;
    double height;
    /* data */
};

struct student
{
    struct profile pf;
    int id;   
    double grade; 
};

void print_json(struct student *pa) {
    printf("{\n");
    printf("  \"age\": \"%d\",\n", pa->pf.age);
    printf("  \"double\": %.lf,\n", pa->pf.height);
    printf("  \"id\": %d,\n", pa->id);
    printf("  \"grade\": \"%.1lf\"\n", pa->grade);
    printf("}\n");
}

// struct parent
// {
//     struct student child;
//     int salary;
//     char home[100]; 
// };

int main (void)
{
    struct student yuna;

    yuna.pf.age = 22;
    yuna.pf.height = 155.2;
    yuna.id = 20220412;
    yuna.grade = 2.7;

    print_json(&yuna);
    printf(" i love yuna, cheer up!");

    return 0;


}
