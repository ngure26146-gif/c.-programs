//siimple c program
/*
NAME: NGURE MARK MUCHIRI
REGNO: CT100/26146/25
DESCRIPTION: STORING STUDENTS EXAMMINATION RESULTS
*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    char regNo[30];
    float totalMarks;
};

int main(void) {
    FILE *fp;
    struct Student s;
    char choice[4];

    fp = fopen("results.dat", "ab"); 
    if (fp == NULL) {
        perror("Error opening results.dat");
        return 1;
    }

    do {
        printf("Enter student name: ");
    if (fgets(s.name, sizeof s.name, stdin) == NULL) break;
        size_t ln = strlen(s.name);
    if (ln > 0 && s.name[ln-1] == '\n') s.name[ln-1] = '\0';

        printf("Enter registration number: ");
    if (fgets(s.regNo, sizeof s.regNo, stdin) == NULL) break;
        ln = strlen(s.regNo);
    if (ln > 0 && s.regNo[ln-1] == '\n') s.regNo[ln-1] = '\0';

        printf("Enter total marks (e.g. 65.5): ");
    if (scanf("%f", &s.totalMarks) != 1) {
            printf("Invalid marks. Aborting.\n");
             
            int c; while ((c = getchar()) != '\n' && c != EOF);
            break;
        }
        
        int c; while ((c = getchar()) != '\n' && c != EOF);

    if (fwrite(&s, sizeof s, 1, fp) != 1) {
            perror("Error writing record");
            fclose(fp);
            return 1;
        }
        printf("Record saved for \"%s\".\n", s.name);

        printf("Add another record? (yes/no): ");
    if (fgets(choice, sizeof choice, stdin) == NULL) break;

    } while (choice[0] != 'n' && choice[0] != 'N');

    fclose(fp);
    printf("Done. File closed.\n");
    return 0;
}