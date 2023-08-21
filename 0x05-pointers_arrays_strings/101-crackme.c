#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <password>\n", argv[0]);
        return 1;
    }

    char *password = argv[1];
    int sum = 0;

    for (int i = 0; password[i] != '\0'; i++) {
        sum += password[i];
    }

    if (sum == 2772) {
        printf("Tada! Congrats\n");
    } else {
        printf("Wrong password\n");
    }

    return 0;
}
