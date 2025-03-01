#include <stdio.h>

#define MAX_STUDENTS 5  // Max number of students for this project

// Structure to hold student data
struct Student {
    char name[50];
    float grade;
};

// Function to input student data
void input_data(struct Student students[], int num_students) {
    for(int i = 0; i < num_students; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter grade for %s: ", students[i].name);
        scanf("%f", &students[i].grade);
    }
}

// Function to calculate average grade
float calculate_average(struct Student students[], int num_students) {
    float sum = 0.0;
    for(int i = 0; i < num_students; i++) {
        sum += students[i].grade;
    }
    return sum / num_students;
}

// Function to find the highest grade
float find_highest_grade(struct Student students[], int num_students) {
    float highest = students[0].grade;
    for(int i = 1; i < num_students; i++) {
        if(students[i].grade > highest) {
            highest = students[i].grade;
        }
    }
    return highest;
}

// Function to find the lowest grade
float find_lowest_grade(struct Student students[], int num_students) {
    float lowest = students[0].grade;
    for(int i = 1; i < num_students; i++) {
        if(students[i].grade < lowest) {
            lowest = students[i].grade;
        }
    }
    return lowest;
}

// Function to display all student data
void display_data(struct Student students[], int num_students) {
    printf("\nStudent Grades:\n");
    for(int i = 0; i < num_students; i++) {
        printf("Name: %s, Grade: %.2f\n", students[i].name, students[i].grade);
    }
}

int main() {
    struct Student students[MAX_STUDENTS];
    int num_students = MAX_STUDENTS;

    // Input student data
    input_data(students, num_students);

    // Display student data
    display_data(students, num_students);

    // Calculate and display average grade
    float average = calculate_average(students, num_students);
    printf("\nAverage grade: %.2f\n", average);

    // Find and display highest grade
    float highest = find_highest_grade(students, num_students);
    printf("Highest grade: %.2f\n", highest);

    // Find and display lowest grade
    float lowest = find_lowest_grade(students, num_students);
    printf("Lowest grade: %.2f\n", lowest);

    return 0;
}

