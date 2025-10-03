//simple c program
/*
NAME: NGURE MARK MUCHIRI
REGNO: CT100/G/26146/25
DESCRIPTION: TESTING THE STUDENT ELIGIBILITY FOR FINAL EXAMS
*/

#include <stdio.h>

int main() {

	int average_marks, attendance;

    // prompt the user to enter class attendance
    printf("Enter attendance percentage:" );
    scanf("%d", &attendance);
    printf("attendance = %d percent\n", attendance);
    
    // prompt the studdent to enter  the average marks
    printf("Enter average marks:" );
    scanf("%d", &average_marks );
    printf("average_marks = %d\n", average_marks);

    // Checking the student eligibility
    if (attendance >= 75 && average_marks >= 40) {
        printf("Eligible for final exams.\n" );
    } else {
        printf("Not eligible for the final exams.\n" );
    }

    return 0;
}

