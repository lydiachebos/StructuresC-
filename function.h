#ifndef FUNCTION_H
#define FUNCTION_H

struct Lecturer {
    char name[100];
    int id;
    char phone[20];
    char email[100];
};

void addLecturers(struct Lecturer *lecturersArray, int arraySize);
void printLecturers(struct Lecturer *lecturersArray, int arraySize);

#endif

