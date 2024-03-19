#include <cs50.h>
#include <stdio.h>

typedef struct 
{
  string name;
  int votes;
}
cadidate;

candidate get _candidiate (string prompt);

int main (void)
{
  candidate president = get_candidate("Enter a candidate: ");
  printf("%s\n", president.name);
  printf("%i\n", president.votes);
}

candidate get _candidiate (string prompt) 
{
    printf("%s\n", prompt);

  candidate c; 
  c.name = get_string("Enter a name: ");
  c.votes = get_int("Enter a number of votes: ");
  return c;
}
