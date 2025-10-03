// simple c program 

/* 
NAME: NGURE MARK MUCHIRI 
REGNO: CT100/G/26146/25
DESCRIPTION: INTERNET DATA BUNDLE OFFERS
*/

#include <stdio.h>
int main() {
    int select;

    printf("Select data bundle: \n");

    printf("1. 100MB @ 50KES\n");
    printf("2. 500MB @ 200KES\n");
    printf("3. 1GB   @ 350KES\n");
    printf("4. 2GB.  @ 600KES\n\n");
    
    printf("Enter your choice: ");
    scanf("%d",  &select);


    switch  (select) {
    case 1 :
        printf("You selected 100MB. Cost = 50KES");
        break;
        
    case 2 :
        printf("You selected 500MB. Cost = 200KES");
        break;
        
    case 3 :
        printf("You selected 1GB. Cost = 350KES");
        break;
        
    case 4 :
        printf("You selected 2GB. Cost = 600KES");
        break;
         
    default :
        printf("Invalid choice");
    }

    return 0;

}