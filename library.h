#define MAX_ROLL 20
#define TRANS_FILE "transactions.txt"
#define ADMIN_FILE "admin.txt"

typedef struct {
    char trans_id[MAX_ID];
    char reg_no[MAX_ID];
    char student_roll[MAX_ROLL];
    char issue_date[16];
    char status[12];
} Transaction;
