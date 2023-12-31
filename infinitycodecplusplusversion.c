
#include <stdlib.h>

int main() {
  char command[100];

  printf("Code: ");
  fgets(command, sizeof(command), stdin);

  if (strcmp(command, "off") == 0) {
    exit(0);
  } else if (strcmp(command, "ver") == 0) {
    printf("infinite code 1.3\n");
  }

  return 0;
}
