#include <stdio.h>

void write_even_odd_numbers() {
FILE *even_file, *odd_file;
int number;
  
   
    even_file = fopen("even_file.txt", "w");
    odd_file = fopen("odd_file.txt", "w");
    
  
    if (even_file == NULL || odd_file == NULL) {
        printf("Error opening file(s)!\n");
        return;
    }
    
 
    for (number = 50; number <= 70; number++) {
        if (number % 2 == 0) {
            fprintf(even_file, "%d", number);
            if (number < 70) {
                fprintf(even_file, ", ");
            }
        } else {
            fprintf(odd_file, "%d", number);
            if (number < 69) {
                fprintf(odd_file, ", ");
            }
        }
    }
    
   
    fclose(even_file);
    fclose(odd_file);
}

int main() {
    
    write_even_odd_numbers();
    
    FILE *even_file, *odd_file;
    char ch;
    
    even_file = fopen("even_file.txt", "r");
    odd_file = fopen("odd_file.txt", "r");
    
    if (even_file == NULL || odd_file == NULL) {
        printf("Error opening file(s)!\n");
        return 1;
    }
    
    printf("Even numbers from even_file.txt:\n");
    while ((ch = fgetc(even_file)) != EOF) {
        putchar(ch);
    }
    printf("\n");
    
    printf("Odd numbers from odd_file.txt:\n");
    while ((ch = fgetc(odd_file)) != EOF) {
        putchar(ch);
    }
    printf("\n");
    
    fclose(even_file);
    fclose(odd_file);
    
    return 0;
}
