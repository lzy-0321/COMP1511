#include <stdio.h>
#include <string.h>

#define SIZE 1024

int com(char input[SIZE], char argv[SIZE]);

int main(int argc , char *argv[]) {
    int i = 1;
    char input[SIZE];
    scanf("%s", input);
    while (i < argc) {
        int count = com(input, argv[i]);
        if (count == -1) {
            i++;
        }
        else if (count >= 0) {
            printf("%d %s\n", count, argv[i]);
            i++;
        }
    }
    return 0;
}

int com(char input[SIZE], char argv[SIZE]) {
    int count = -1;
    int f = 0;
    int s = 0;
    while (input[f] != '\0' && argv[s] != '\0') {
        if (argv[s] == input[f]) {
            count = s;
            return count;
        }
        s++;
        f++;
    }
    return count;
}
