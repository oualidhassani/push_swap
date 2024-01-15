#include <stdio.h>

typedef struct s_list
{
    int age;
    char *first;
    char *last;
}   t_list;


void print_shit(t_list *person)
{
    person->first = "oualud";
    person->age = 34;
    printf("%d\n", person->age);
    printf("%s", person->first);
}

int main ()
{
    t_list person;
    print_shit(&person);
}
