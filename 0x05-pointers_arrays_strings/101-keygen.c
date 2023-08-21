#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 16

char* generate_password() {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char* password = (char*)malloc((PASSWORD_LENGTH + 1) * sizeof(char)); // +1 for null terminator

    if (password == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    srand(time(NULL));

    // Generate password with a specific pattern
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = charset[rand() % (sizeof(charset) - 1)];
    }
    password[PASSWORD_LENGTH] = '\0'; // Null-terminate the password

    return password;
}

int main(void) {
    char* password = generate_password();
    printf("%s\n", password);
    free(password); // Don't forget to free allocated memory

    return 0;
}
