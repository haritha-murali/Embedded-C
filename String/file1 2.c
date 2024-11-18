#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#define MAX 72

struct StudentInfo{
	int id;
	char name[50];
	char branch[50];
	char dob[15]; // Date of birth in format "DD/MM/YYYY"
	int semester;
};
struct StudentInfo students[MAX];

void StudentsRecords(){
	int operation;
	int current = 0; //current number of students
	int id,found;
	while(1){
		printf("\nMenu\n");
		printf("Display all records -> 1\n");
		printf("Add a new record -> 2\n");
		printf("Delete a record -> 3\n");
		printf("Exit -> 4\n");
		printf("Enter the operation to perform: ");
		fflush(stdout);
		scanf("%d",&operation);

		switch(operation){
		case 1:
			if (current == 0) {
				printf("No records found.\n");
			}
			else{
				printf("\nStudent Records:\n");
				for(int i = 0;i<current;i++){
					printf("ID: %d, Name: %s, Branch: %s, DOB: %s, Semester: %d\n",
					               students[i].id, students[i].name, students[i].branch,
					               students[i].dob, students[i].semester);
				}
			}
			break;
		case 2:
			if(current>=MAX){
				printf("Cannot add another entry, since max limit reached");
			}
			else{
				struct StudentInfo newStudent;
				printf("Enter student id:");
				fflush(stdout);
				scanf("%d",&newStudent.id);
				printf("Enter student name:");
				fflush(stdout);
				scanf("%s",&newStudent.name);
				printf("Enter student branch:");
				fflush(stdout);
				scanf("%s",&newStudent.branch);
				printf("Enter student dob:");
				fflush(stdout);
				scanf("%s",&newStudent.dob);
				printf("Enter student semester:");
				fflush(stdout);
				scanf("%d",&newStudent.semester);
				students[current] = newStudent;
				current++;
			}
			break;
		case 3:
			printf("Enter the student id to delete: ");
			fflush(stdout);
			scanf("%d",&id);
			found = 0;
			for (int i = 0;i<current;i++) {
				if (students[i].id == id) {
					found = current;
					// Shift all subsequent elements one position up
					for (int j=i;j<current-1;j++) {
						students[j]=students[j+1];
					}
					current--; // Decrease the count of students
					printf("Student with ID %d has been deleted.\n", id);
					break;
				}
			}
			if(!found) {
				printf("No student found with ID %d.\n", id);
			}
			break;
		case 4:
			return 0;
		default:
			printf("Invalid");
		}
	}
}
