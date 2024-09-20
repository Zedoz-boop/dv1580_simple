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
 

int main(int argc, char *argv[]){
  
  float sum = 0;
  if (is_number(argv[1]) && is_number(argv[2])){
    sum = atof(argv[1]) * atof(argv[2]);
    printf("%.4f", sum);
  }
  else{
    printf("Error: Both inputs must be numbers.\n");
  }
  return 0;
}
