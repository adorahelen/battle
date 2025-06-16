#include <stdlib.h>
#include <stdio.h>
#include <string.h>


struct profile
{
    char name [20];
    int age;
    double height;
    char * intro; // 자기소개를 입력하기 위한 포인터

};

void print_json(struct profile *p) {
    printf("{\n");
    printf("  \"name\": \"%s\",\n", p->name);
    printf("  \"age\": %d,\n", p->age);
    printf("  \"height\": %.1f,\n", p->height);
    printf("  \"intro\": \"%s\"\n", p->intro);
    printf("}\n");
}



int main(void)
{
  struct profile dabin;
  
  strcpy(dabin.name, "이다빈");
  dabin.age = 27;
  dabin.height = 168.5;

  dabin.intro = (char *) malloc(80);
  printf(" Let me introduction myself : ");
  gets(dabin.intro);


  print_json(&dabin);  // 주소 전달  
  free(dabin.intro);

  return 0;

  
}
