#include <stdio.h>

int main(void) {

    char user_input = NULL;
    int keep_going = 1;

    printf("LCS Warriors Computer Club\n");
    pritnf("-----------------------------\n");
    printf("h - Hello World!\n");
    printf("q - quit\n\n");
    printf("$ ");

    scanf("%s", user_input);

    if (user_input == 'h') {
        printf("Hello World!\n");
    } else if (user_input == 'q') {
        keep_going = 0;
    }

}