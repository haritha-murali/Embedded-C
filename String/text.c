/*
 * text.c
 *
 *  Created on: Sep 18, 2024
 *      Author: 33198
 */


#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

// Define the Student structure
struct Student {
    int id;
    char name[50];
    char branch[50];
    char dob[15]; // Date of birth in format "DD/MM/YYYY"
    int semester;
};

// Function prototypes
void displayStudents(struct Student students[], int count);
void addStudent(struct Student students[], int *count);
void deleteStudent(struct Student students[], int *count, int id);

int main() {
    struct Student students[MAX_STUDENTS];
    int count = 0; // Current number of students
    int choice, id;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Display all records\n");
        printf("2. Add a new record\n");
        printf("3. Delete a record\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayStudents(students, count);
                break;
            case 2:
                addStudent(students, &count);
                break;
            case 3:
                printf("Enter student ID to delete: ");
                scanf("%d", &id);
                deleteStudent(students, &count, id);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

// Function to display all students
void displayStudents(struct Student students[], int count) {
    if (count == 0) {
        printf("No records found.\n");
        return;
    }

    printf("\nStudent Records:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Branch: %s, DOB: %s, Semester: %d\n",
               students[i].id, students[i].name, students[i].branch,
               students[i].dob, students[i].semester);
    }
}

// Function to add a new student
void addStudent(struct Student students[], int *count) {
    if (*count >= MAX_STUDENTS) {
        printf("Cannot add more students. Maximum limit reached.\n");
        return;
    }

    struct Student newStudent;

    printf("Enter student ID: ");
    scanf("%d", &newStudent.id);

    printf("Enter student name: ");
    scanf("%s", newStudent.name);

    printf("Enter student branch: ");
    scanf("%s", newStudent.branch);

    printf("Enter student DOB (DD/MM/YYYY): ");
    scanf("%s", newStudent.dob);

    printf("Enter student semester: ");
    scanf("%d", &newStudent.semester);

    // Add the new student to the array
    students[*count] = newStudent;
    (*count)++;
}

// Function to delete a student by ID
void deleteStudent(struct Student students[], int *count, int id) {
    int found = 0;

    for (int i = 0; i < *count; i++) {
        if (students[i].id == id) {
            found = 1;
            // Shift all subsequent elements one position up
            for (int j = i; j < *count - 1; j++) {
                students[j] = students[j + 1];
            }
            (*count)--; // Decrease the count of students
            printf("Student with ID %d has been deleted.\n", id);
            break;
        }
    }

    if (!found) {
        printf("No student found with ID %d.\n", id);
    }
}
