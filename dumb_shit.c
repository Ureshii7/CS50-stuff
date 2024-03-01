#include <stdio.h>
#include <stdlib.h>

int main() {
    char input1[100], input2[100], input3[100];

    printf("What is your name: ");
    scanf("%s", input1);
    printf("Gender: ");
    scanf("%s", input2);
    printf("Age: ");
    scanf("%s", input3);

    char *url = "https://www.youtube.com/watch_popup?v=dQw4w9WgXcQ";
    char command[1000];

    #ifdef _WIN32
        sprintf(command, "start %s", url);
    #endif
    system(command);

    return 0;
}
