#include <stdio.h>

int greetings(int count) {
  printf("Hello, %i\n", count);
}

int main_normal(int argc, const char* argv[]) {
  // pc 0 to 4
  for (int i = 0; i < 5; ++i) {
    greetings(i);
  }
  // pc 5
  printf("Done\n");
}

int main_iteration(int argc, const char* argv[]) {
  int pc = 0;
  while (true) {
    switch (pc) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
        printf("Hello, %i\n", pc);
        break;
      case 6:
        printf("Done\n");
        break;
      case 7:
        return 0;
    }
    pc++;
  }
}

int main_iteration2(int argc, const char* argv[]) {
  int pc = 0;
  for (;;) {
    if (pc > -1 && pc < 5) {
      printf("Hello, %i\n", pc);
    } else {
      if (pc < 6) {
        printf("Done\n");
      } else {
        return 0;
      }
    }
    pc++;
  }
}

int main_recursion(int argc, const char* argv[]) {
  return argc > 6
    ? 0
    : argc == 6
      ? printf("Done\n")
      : printf("Hello, %i\n", argc - 1),
    argc > 6 ?: main_recursion(argc + 1, argv);
}

int main_recursion_comma(int argc, const char* argv[]) {
  return argc < 6
    ? printf("Hello, %i\n", argc - 1), main_recursion_comma(argc + 1, argv)
    : argc < 7
      ? printf("Done\n")
      : 0;
}

int main(int argc, const char* argv[], const char* env[]) {
  for (int i = 0; env[i]; i++)
    printf("env[%d] = \"%s\"\n", i, env[i]);
  //return main_normal(argc, argv);
  return main_recursion(argc, argv);
}
