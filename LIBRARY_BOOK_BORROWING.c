// simple c program
/*
NAME: NGURE MARK MUCHIRI
REGNO: CT100/G/26146/25
DESCRIPTION: BORROWING LIBRARY BOOKS
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char book_Title[45];

    //openning file
	file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    // Exit the loop if the user types "done"
    printf("Enter book title to borrow: (type 'done' to stop):\n");
    while (1) {
        fgets(book_Title, sizeof(book_Title), stdin);
        if (strncmp(book_Title, "done", 4) == 0) {
            break; 
        }
        
         // Writing the book title to the file
        fprintf(file, "%s", book_Title); 
        printf("Book title '%s' has been added successfully.\n", book_Title);
    }
    
    // Closing the file
    fclose(file); 
    return 0;
}
