#include <stdio.h>

struct Student {
    char name[100];
    char course[100];
};

int main() {
    FILE *file;
    struct Student students[3];  
  
    file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }


    for (int i = 0; i < 3; i++) {
        printf("Enter name of student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin); 
        
       
        int j = 0;
        while (students[i].name[j] != '\0') {
            if (students[i].name[j] == '\n') {
                students[i].name[j] = '\0';
            }
            j++;
        }

        printf("Enter course for student %d: ", i + 1);
        fgets(students[i].course, sizeof(students[i].course), stdin); 
        
        
        j = 0;
        while (students[i].course[j] != '\0') {
            if (students[i].course[j] == '\n') {
                students[i].course[j] = '\0';  
                break;
            }
            j++;
        }

      
        fprintf(file, "Student %d: %s\n", i + 1, students[i].name);
        fprintf(file, "Course: %s\n\n", students[i].course);
 
    fclose(file);

    printf("\nData has been written to 'data.txt' successfully.\n");

    return 0;
}
}