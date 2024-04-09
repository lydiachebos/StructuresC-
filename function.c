#include <stdio.h>
#include "function.h"

// Function to add lecturers to the array
void addLecturers(struct Lecturer *lecturersArray, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        printf("Enter details for Lecturer %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", lecturersArray[i].name); // Assuming name does not contain spaces
        printf("ID: ");
        scanf("%d", &lecturersArray[i].id);
        printf("Phone: ");
        scanf("%s", lecturersArray[i].phone); // Assuming phone does not contain spaces
        printf("Email: ");
        scanf("%s", lecturersArray[i].email); // Assuming email does not contain spaces
    }
}

// Function to print the structure elements
void printLecturers(struct Lecturer *lecturersArray, int arraySize) {
    printf("\n LECTURERS :\n");
    for (int i = 0; i < arraySize; i++) {
        printf("Lecturer %d:\n", i + 1);
        printf("Name: %s\n", lecturersArray[i].name);
        printf("ID: %d\n", lecturersArray[i].id);
        printf("Phone: %s\n", lecturersArray[i].phone);
        printf("Email: %s\n", lecturersArray[i].email);
    }
}

