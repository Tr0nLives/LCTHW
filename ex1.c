#include <stdio.h>

/* This is a comment. */
int main(int argc, char *argv[])
{
  int distance = 100;
  // this is also a comment
  printf("You are %d miles away.\n", distance);

  char name[] = "Akshit";
  printf("Hi, my name is %s.\n", name);

  char favTV[] = "Utopia";
  printf("My favourite show is %s.\n", favTV);
  printf("Also Mr. Robot.");

  char favSupe[] = "The Friendly Neighborhood Spider-Man";
  printf("My favourite superhero, and in fact my favorite fictional character, is %s!\n", favSupe);

  char favMA[] = "Ed Sheeran";
  printf("My favorite music artist is %s.\n", favMA);

  return 0;
}
