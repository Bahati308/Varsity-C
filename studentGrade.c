#include <stdio.h>
#include <string.h>

// (b) C function that returns the corresponding grade as a string pointer
const char* assignGrade(double mark) {
    if (mark >= 80.0 && mark <= 100.0) {
        return "Distinction";
    } else if (mark >= 65.0 && mark < 80.0) {
        return "Merit";
    } else if (mark >= 50.0 && mark < 65.0) {
        return "Credit";
    } else {
        return "Fail";
    }
}

int main() {
    // (a) Declare arrays to store names and marks for 5 students
    char names[5][50];
    double marks[5];

    printf("=== Student Grade Classifier Input ===\n");

    // Loop to accept names and marks from the administrator
    for (int i = 0; i < 5; i++) {
        printf("Enter name for student %d: ", i + 1);
        // Using scanf to capture names cleanly (assumes single word names or initials)
        scanf("%s", names[i]); 
        
        printf("Enter marks (0-100) for %s: ", names[i]);
        scanf("%lf", &marks[i]);
        printf("\n");
    }

    // Variables tracking extremes for requirement (c)
    int highestIndex = 0;
    int lowestIndex = 0;

    // (c) Logic to display the formatted table and identify extremes
    printf("\n=============================================\n");
    printf("%-15s %-15s %-15s\n", "Student Name", "Marks Obtained", "Final Grade");
    printf("---------------------------------------------\n");

    for (int i = 0; i < 5; i++) {
        // Output rows side-by-side using formatted widths
        printf("%-15s %-15.1f %-15s\n", names[i], marks[i], assignGrade(marks[i]));

        // Check for highest scoring student
        if (marks[i] > marks[highestIndex]) {
            highestIndex = i;
        }
        // Check for lowest scoring student
        if (marks[i] < marks[lowestIndex]) {
            lowestIndex = i;
        }
    }
    printf("=============================================\n");

    // Displaying peak performers
    printf("\n--- Performance Extreme Summary ---\n");
    printf("Highest Scoring Student: %s with %.1f marks.\n", names[highestIndex], marks[highestIndex]);
    printf("Lowest Scoring Student:  %s with %.1f marks.\n", names[lowestIndex], marks[lowestIndex]);

    return 0;
}