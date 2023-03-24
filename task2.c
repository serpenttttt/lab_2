#include <stdio.h>

int task2 () {
    char string[100];
    char input;
    int i = 0;
    int buffer = 0;
    int j;
    puts("Input string with ' ' and '\t'.");
    while ((input = getchar()) != '\n' && i < 100) {  // ввод данных
        string[i] = input;
        i++;
    }
    for(i = 0; string[i] != '\0'; ++i) { // если встречаем пробел или таб, то выводим символы от buffer до i (до пробела)
        if (string[i] == ' ' || string[i] == '\t') {
            for (j = buffer; j < i; ++j) {
                printf("%c", string[j]);
            }
            buffer = buffer + j;
            while (string[i] == ' ' || string[i] == '\t') { // пропускаем пробел или таб
                i += 1;
            }
            buffer = i;
            i = i - 1;

            printf("\n");
        }
    }
    for (j = buffer; j < i; ++j) { // этот цикл нужен, тк встречаем ‘\0’, следовательно выходим из цикла
        printf("%c", string[j]);
    }
    return 0;
}
