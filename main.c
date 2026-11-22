//#include "library.h"
//
//int main(void) {
//    int running = 1;
//    while (running) {
//        printf("\n=== LIBRARY MANAGEMENT SYSTEM ===\n");
//        printf("1. Admin Portal\n2. Student Portal\n3. Exit\n");
//        switch (get_int_choice(1, 3)) {
//            case 1: printf("Admin portal coming soon\n"); break;
//            case 2: printf("Student portal coming soon\n"); break;
//            case 3: running = 0; break;
//        }
//    }
//    printf("Goodbye!\n");
//    return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<stdbool.h>
#define username "admin"

// Stock of books (int)
struct book{
    int registration;
    char title[50];
    char author[20];
    bool status; // 0 for unavailable, 1 for available
    int quantity; // Track the quantity of each book
    int maxquantity;// inorder to make sure stock does not increase its own value
};
struct book book;
// Function Declarations
int login();
void update();
void addbook();
void deletebook();
void borrow();
void returnbook();
void search();
void view();
int getnewregistrationn();
void SetColor();
void ResetColor();
void printColoredText();
void displaySeparator();
int getvalidoption();
void mainmenu();
void adminmenu();
void usermenu();
void logout();

