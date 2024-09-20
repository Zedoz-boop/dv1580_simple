#include <stdio.h>
#include <stdlib.h>
#include <errno.h> 

int is_number(const char *str) { 
    char *endptr; 
    errno = 0; // Reset errno before the call 
 
    long val = strtol(str, &endptr, 10); 
 
    // Check for various conditions 
    if (errno == ERANGE || (endptr == str)) { 
        return 0; // Not a number 
    } 
 
    return 1; // It's a number 
} 
 

int main(int argc, char *argv[]) {

   if (is_number(argv[1]) && is_number(argv[2])){
    int sum = 0;
    sum = atoi(argv[1]) + atoi(argv[2]);
    printf("%d", sum);
   }
  else{
    printf("ERROR");
  }
    return 0;
}
