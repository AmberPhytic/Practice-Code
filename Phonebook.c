#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Carter", "David", "Jay", "Liz", "Michelle"};
    string numbers[] = {"+1-615-495-1000", "+1-919-234-8000", "+1-213-495-7000", "+1-563-821-9500", "+1-888-381-4000"};

    string name = get_string("Name: ");
    for (int i = 0; i < 2; i++)
      {
        if (strcmp(names[i], name) == 0)
        {
           printf("Found %s\n", numbers[i]);
           return 0;
        }
  }
  printf("Not found\n");
  return 1; 
}
