#include <stdio.h>

int main(void) {

    char user_input = ' ';
    

    printf("\nLCS Warriors Computer Club\n");
    printf("-----------------------------\n");
    printf("h - Hello World!\n");
    printf("q - quit\n\n");
    printf("$ ");

    scanf("%s", &user_input);

    if (user_input == 'h') {
        printf("Hello World!\n");
    }

}