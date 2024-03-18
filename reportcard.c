#include <stdio.h>

int main() {
    char studentName[50];
    int english, mathematics, science, history, geography;
    float total, average;
    char grade;

    // Input student details
    printf("Enter student name: ");
    fgets(studentName, sizeof(studentName), stdin); // Read string input including spaces

    printf("Enter marks obtained in English: ");
    scanf("%d", &english);

    printf("Enter marks obtained in Mathematics: ");
    scanf("%d", &mathematics);

    printf("Enter marks obtained in Science: ");
    scanf("%d", &science);

    printf("Enter marks obtained in History: ");
    scanf("%d", &history);

    printf("Enter marks obtained in Geography: ");
    scanf("%d", &geography);

    // Calculating total, average and grade
    total = english + mathematics + science + history + geography;
    average = total / 5.0;

    if(average >= 90) {
        grade = 'A';
    } else if(average >= 80) {
        grade = 'B';
    } else if(average >= 70) {
        grade = 'C';
    } else if(average >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Displaying the report card
    printf("\nReport Card for: %s\n", studentName);
    printf("English: %d\n", english);
    printf("Mathematics: %d\n", mathematics);
    printf("Science: %d\n", science);
    printf("History: %d\n", history);
    printf("Geography: %d\n", geography);
    printf("Total Marks: %.2f / 500\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}