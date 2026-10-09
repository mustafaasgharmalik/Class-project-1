#include "library.h"

int main(void) {
    int running = 1;
    while (running) {
        printf("\n=== LIBRARY MANAGEMENT SYSTEM ===\n");
        printf("1. Admin Portal\n2. Student Portal\n3. Exit\n");
        switch (get_int_choice(1, 3)) {
            case 1: printf("Admin portal coming soon\n"); break;
            case 2: printf("Student portal coming soon\n"); break;
            case 3: running = 0; break;
        }
    }
    printf("Goodbye!\n");
    return 0;
}
