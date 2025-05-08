// Print a below pattern using nested for loop in C language:
// 1
// 4 4
// 9 9 9
// 16 16 16 16
// 25 25 25 25 25

#include <stdio.h>
int main() {
    
  for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i * i); 
        }
        printf("\n");  
    }

    return 0;
}
