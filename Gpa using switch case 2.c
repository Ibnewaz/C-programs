#include <stdio.h>

int main() {
    float marks;
    char grade;

    printf("Enter marks: ");
    scanf("%f", &marks);

    switch ((int)marks / 10) {
        case 10:
        case 9:
            if (marks > 90.5)
                grade = 'A';
            else
                grade = 'A+';
            break;
        case 8:
            if (marks >= 80.5)
                grade = 'A';
            else
                grade = 'A-';
            break;
        case 7:
            grade = 'B';
            break;
        case 6:
            grade = 'C';
            break;
        case 5:
            if (marks >= 49.5)
                grade = 'D';
            else
                grade = 'F';
            break;
        default:
            grade = 'F';
            break;
    }

    printf("Grade: %c\n", grade);
    return 0;
}
