#include <stdio.h>
#include "function.h"

int main() {
    int arraySize = 22;
    struct Lecturer cukLecturers[arraySize];

    // Add lecturers to the array
    addLecturers(cukLecturers, arraySize);

    // Print the structure elements
    printLecturers(cukLecturers, arraySize);

    return 0;
}

