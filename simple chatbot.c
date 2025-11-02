#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char input[100];
    printf("Megan AI: Hello, I'm Megan! Type 'exit' to quit.\n");

    while(1) {
        printf("You: ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0; // Remove newline

        if(strcmp(input, "hi") == 0 || strcmp(input, "hello") == 0)
            printf("Megan AI: Hey Krish! How are you today?\n");

        else if(strcmp(input, "time") == 0)
            system("time /t");

        else if(strcmp(input, "date") == 0)
            system("date /t");

        else if(strcmp(input, "open google") == 0)
            system("start https://www.google.com");

        else if(strcmp(input, "exit") == 0) {
            printf("Megan AI: Goodbye, Krish!\n");
            break;
        }
        else
            printf("Megan AI: Sorry, I didn’t understand that.\n");
    }

    return 0;
}