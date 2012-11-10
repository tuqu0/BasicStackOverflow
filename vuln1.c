#include <string.h>

void foo(char *str) {
      char buf[50];      
      strcpy(buf, str);
}

int main (int argc, char **argv) {
 if (argc == 2)
    foo(argv[1]);
 return 0;   
}
