//simple c pprogram

/* 
NAME: NGURE MARK MUCHIRII
REGNO: CT100/G/26146/25
DESCRIPTION: PROMPT THE USER ENTER PASSWORD
*/

#include <stdio.h>
#include <string.h>

int main() {
    char password[100];
    
    do {
        printf("Enter the password: ");
        scanf("%s", password);
    } while (strcmp(password, "1234") != 0);
    
    printf("Access Granted\n");
    
    return 0;
}