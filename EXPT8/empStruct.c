#include <stdio.h>
#include <string.h>

struct date {
  int day;
  int month;
  int year;
};

struct employee {
  char empid[20];
  char name[20];
  int salary;
  struct date doj;
  int age;
};

int main() {
  int n;
  printf("Enter the number of employees: ");
  scanf("%d", &n);
  struct employee e[n], temp;
  for (int i = 0; i < n; i++) {
    printf("Enter the employee ID: ");
    scanf("%d", &e[i].empid);
    printf("Enter the employee name: ");
    scanf(" %[^\n]", &e[i].name);
    printf("Enter the employee salary: ");
    scanf("%d", &e[i].salary);
    printf("Enter the employee age: ");
    printf("Enter the employee Date of Joining: (dd mm yyyy) ");
    scanf("%d %d %d", &e[i].doj.day, &e[i].doj.month, &e[i].doj.year);
    scanf("%d", &e[i].age);
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if(strcmp(e[i].empid, e[j].empid)>0){

      }
    }
  }
}