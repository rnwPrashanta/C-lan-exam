// Develop a C program that defines a structure representing a car (with attributes like model, year, and price).

#include <stdio.h>

struct Car {
    char model[50];  
    int year;       
    float price;    
};

int main() {
    int n;
    printf("Enter the number of cars:");
    scanf("%d", &n);

    struct Car cars[n];
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for car %d:\n", i + 1);

        printf("Enter the car model: ");
        getchar(); 
        fgets(cars[i].model, sizeof(cars[i].model), stdin); 

        printf("Enter the car year: ");
        scanf("%d", &cars[i].year);

        printf("Enter the car price: ");
        scanf("%f", &cars[i].price);
    }
    printf("\nCar Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nCar %d:\n", i + 1);
        printf("Model: %s", cars[i].model); 
        printf("Price: %.2f\n", cars[i].price);
    }

    return 0;
}
