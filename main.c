#include <stdio.h>

int main(void) {

    char user_input = ' ';
    int keep_going = 1;

    while (keep_going != 0) {

        printf("\nLCS Warriors Computer Club\n");
        printf("-----------------------------\n");
        printf("h - Hello World!\n");
        printf("q - quit\n\n");
        printf("$ ");

        scanf("%s", &user_input);

        if (user_input == 'h') {
            keep_going = 1;
            printf("Hello World! Keep going: %d\n", keep_going);
        } else if (user_input == 'q') {
            printf("exiting application...\n");
            keep_going = 0;
        }
    }

}