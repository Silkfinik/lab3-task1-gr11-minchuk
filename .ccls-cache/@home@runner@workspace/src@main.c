#include <stdio.h>
#include <string.h>

#define MAX_STR_LEN 256

void insert_ascii_codes(const char *input) {
  char output[MAX_STR_LEN * 5] = "";
  char temp[10];

  printf("Исходная строка: %s\n", input);

  for (size_t i = 0; i < strlen(input); i++) {
    sprintf(temp, "%c%d", input[i], input[i]);
    strcat(output, temp);
  }

  printf("Результат: %s\n", output);
}

int main(int argc, char *argv[]) {
  insert_ascii_codes(argv[1]);

  return 0;
}
