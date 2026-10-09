#define MAX_TITLE 100
#define MAX_AUTHOR 50
#define MAX_ID 16
#define BOOK_FILE "books.txt"

typedef struct {
    char reg_no[MAX_ID];
    char title[MAX_TITLE];
    char author[MAX_AUTHOR];
    int total_qty;
    int available_qty;
} Book;
