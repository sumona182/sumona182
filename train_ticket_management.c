#include <stdio.h>

void adminDashboard() {
    printf("Admin Dashboard\n");
    // Add admin-specific functionality and options here
}

void userDashboard() {
    printf("User Dashboard\n");
    // Add user-specific functionality and options here
}

void newUserDashboard() {
    printf("New User Dashboard\n");
    // Add new user-specific functionality and options here
}

int main() {
    int choice;

    printf("Train Ticket Management Program\n");

    while (1) {
        printf("\nDashboard Options:\n");
        printf("1. Admin\n");
        printf("2. User\n");
        printf("3. New User\n");
        printf("0. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                adminDashboard();
                break;
            case 2:
                userDashboard();
                break;
            case 3:
                newUserDashboard();
                break;
            case 0:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    return 0;
}




