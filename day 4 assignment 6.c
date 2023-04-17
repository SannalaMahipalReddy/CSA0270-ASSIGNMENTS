#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100 
#define MAX_AUTHOR_NAME_LENGTH 100 
#define MAX_BOOK_NAME_LENGTH 100 

struct Book {
    char author[MAX_AUTHOR_NAME_LENGTH];
    char name[MAX_BOOK_NAME_LENGTH];
};

struct Book library[MAX_BOOKS]; // Array to store books in the library
int bookCount = 0; 

void addBook() {
    if (bookCount == MAX_BOOKS) {
        printf("Library is full! Cannot add more books.\n");
        return;
    }

    struct Book newBook;

    printf("Enter book author: ");
    fflush(stdin);
    fgets(newBook.author, MAX_AUTHOR_NAME_LENGTH, stdin);
    newBook.author[strcspn(newBook.author, "\n")] = '\0'; 

    printf("Enter book name: ");
    fflush(stdin);
    fgets(newBook.name, MAX_BOOK_NAME_LENGTH, stdin);
    newBook.name[strcspn(newBook.name, "\n")] = '\0'; 

    library[bookCount++] = newBook;

    printf("Book added successfully!\n");
}

void displayBooks() {
    if (bookCount == 0) {
        printf("No books in the library.\n");
        return;
    }

    printf("Books in the library:\n");
    for (int i = 0; i < bookCount; i++) {
        printf("Book %d:\n", i + 1);
        printf("Author: %s\n", library[i].author);
        printf("Name: %s\n", library[i].name);
        printf("-----------------------\n");
    }
}

void listBooksByAuthor() {
    char authorName[MAX_AUTHOR_NAME_LENGTH];
    printf("Enter author name: ");
    fflush(stdin);
    fgets(authorName, MAX_AUTHOR_NAME_LENGTH, stdin);
    authorName[strcspn(authorName, "\n")] = '\0'; 

    printf("Books by author '%s':\n", authorName);
    int found = 0;
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(library[i].author, authorName) == 0) {
            printf("Book %d:\n", i + 1);
            printf("Name: %s\n", library[i].name);
            printf("-----------------------\n");
            found = 1;
        }
    }
    if (!found) {
        printf("No books found for author '%s'\n", authorName);
    }
}

void displayBookCount() {
    printf("Total books in the library: %d\n", bookCount);
}

int main() {
    int choice;

    while (1) {
        printf("Library Management System\n");
        printf("1. Add book details\n");
        printf("2. Display book details\n");
        printf("3. List all books of given author\n");
        printf("4. List the count of books in the library\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
