#include <stdio.h>

/* This is a comment */
int main(int argc, char *argv[]) {
  // type name = value   This is variable declaration
  int distance = 100;

  // this is also a comment
  printf("You are %d miles away.\n", distance);
  printf("The distance added to itself is %d\n", distance + distance);
  printf("This is another string\n");
  printf("Oops I forgot to add the \\n character on the last line, here is "
         "distance time 10! %d\n",
         distance * 10);
  printf("How about distance squared! %d\n", distance * distance);

  return 0;
}
