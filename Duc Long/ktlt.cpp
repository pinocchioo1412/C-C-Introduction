#include<cstdio>

int main() {
    int essay, line = 0, words = 0, character = 0;
    while ((essay = getchar()) != EOF) {
        if (essay == '\n') {
            line++;
        }
        if (essay == ' ' || essay == '\n') {
            words++;
        }
        character++;
    }
    printf("%d, %d, %d\n", line, words, character);
    return 0;
}