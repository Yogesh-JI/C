#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100

struct Record {
    char name[MAX_LEN];
    char book[MAX_LEN];
    char author[MAX_LEN];
    char status[MAX_LEN];
};

void add_record(FILE *fp);
void delete_record(FILE *fp);
void update_record(FILE *fp);
void search_book(FILE *fp);
void display_all(FILE *fp);

int main() {
    int choice;
    FILE *fp;
    
    fp = fopen("records.txt", "a+");
    if (fp == NULL) {
        printf("Error: Unable to open file.\n");
        exit(1);
    }
    
    do {
        printf("\nBook Donation System\n");
        printf("1. Add Record\n");
        printf("2. Delete Record\n");
        printf("3. Update Record\n");
        printf("4. Search Book\n");
        printf("5. Display All Records\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                add_record(fp);
                break;
            case 2:
                delete_record(fp);
                break;
            case 3:
                update_record(fp);
                break;
            case 4:
                search_book(fp);
                break;
            case 5:
                display_all(fp);
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 6);
    
    fclose(fp);
    return 0;
}

void add_record(FILE *fp) {
    struct Record r;
    printf("\nAdd Record\n");
    printf("Name: ");
    scanf(" %[^\n]s", r.name);
    printf("Book: ");
    scanf(" %[^\n]s", r.book);
    printf("Author: ");
    scanf(" %[^\n]s", r.author);
    printf("Status (donor/receiver): ");
    scanf(" %[^\n]s", r.status);
    fprintf(fp, "%s|%s|%s|%s\n", r.name, r.book, r.author, r.status);
    printf("Record added successfully.\n");
}

void delete_record(FILE *fp) {
    char name[MAX_LEN], book[MAX_LEN], author[MAX_LEN];
    char buffer[MAX_LEN];
    int found = 0;
    printf("\nDelete Record\n");
    printf("Name: ");
    scanf(" %[^\n]s", name);
    printf("Book: ");
    scanf(" %[^\n]s", book);
    printf("Author: ");
    scanf(" %[^\n]s", author);
    fseek(fp, 0, SEEK_SET);
    FILE *temp = fopen("temp.txt", "w");
    if (temp == NULL) {
        printf("Error: Unable to create temporary file.\n");
        return;
    }
    while (fgets(buffer, MAX_LEN, fp) != NULL) {
        char *n = strtok(buffer, "|");
        char *b = strtok(NULL, "|");
        char *a = strtok(NULL, "|");
        char *s = strtok(NULL, "|");
        if (strcmp(n, name) == 0 && strcmp(b, book) == 0 && strcmp(a, author) == 0) {
            found = 1;
            printf("Record deleted: %s|%s|%s|%s\n", n, b, a, s);
continue;
}
fprintf(temp, "%s", buffer);
}
fclose(temp);
if (found) {
fclose(fp);
remove("records.txt");
rename("temp.txt", "records.txt");
fp = fopen("records.txt", "a+");
printf("Record deleted successfully.\n");
} else {
printf("Record not found.\n");
remove("temp.txt");
}
}

void update_record(FILE *fp) {
char name[MAX_LEN], book[MAX_LEN], author[MAX_LEN];
char buffer[MAX_LEN];
int found = 0;
printf("\nUpdate Record\n");
printf("Name: ");
scanf(" %[^\n]s", name);
printf("Book: ");
scanf(" %[^\n]s", book);
printf("Author: ");
scanf(" %[^\n]s", author);
fseek(fp, 0, SEEK_SET);
FILE *temp = fopen("temp.txt", "w");
if (temp == NULL) {
printf("Error: Unable to create temporary file.\n");
return;
}
while (fgets(buffer, MAX_LEN, fp) != NULL) {
char *n = strtok(buffer, "|");
char *b = strtok(NULL, "|");
char *a = strtok(NULL, "|");
char *s = strtok(NULL, "|");
if (strcmp(n, name) == 0 && strcmp(b, book) == 0 && strcmp(a, author) == 0) {
found = 1;
printf("Enter new status (donor/receiver): ");
scanf(" %[^\n]s", s);
fprintf(temp, "%s|%s|%s|%s\n", n, b, a, s);
printf("Record updated: %s|%s|%s|%s\n", n, b, a, s);
} else {
fprintf(temp, "%s", buffer);
}
}
fclose(temp);
if (found) {
fclose(fp);
remove("records.txt");
rename("temp.txt", "records.txt");
fp = fopen("records.txt", "a+");
printf("Record updated successfully.\n");
} else {
printf("Record not found.\n");
remove("temp.txt");
}
}

void search_book(FILE *fp) {
char keyword[MAX_LEN];
char buffer[MAX_LEN];
int found = 0;
printf("\nSearch Book\n");
printf("Enter keyword (title/author): ");
scanf(" %[^\n]s", keyword);
fseek(fp, 0, SEEK_SET);
while (fgets(buffer, MAX_LEN, fp) != NULL) {
char *n = strtok(buffer, "|");
char *b = strtok(NULL, "|");
char *a = strtok(NULL, "|");
char *s = strtok(NULL, "|");
if (strstr(b, keyword) != NULL || strstr(a, keyword) != NULL) {
found = 1;
printf("%s|%s|%s|%s", n, b, a, s);
}
}
if (!found) {
printf("No records found.\n");
}
}

void display_all(FILE *fp) {
char buffer[MAX_LEN];
fseek(fp, 0, SEEK_SET);
printf("\nAll Records\n");
while (fgets(buffer, MAX_LEN, fp) != NULL) {
printf("%s", buffer);
}
}
