#include <stdio.h>

int task3() {
    char string[100];
    int i = 0, j = 0;
    char input;
    puts("Input string with triplets");
    while ((input = getchar()) != '\n' && i < 100) { //ввод данных
        string[i] = input;
        i++;
    }
    string[i] = '\0';
    for(i = 0; string[i] != '\0'; ++i) {
        if (string[i] == string[i + 1]) {
            if (string[i] == string[i + 2]) {
                printf("%c", string[i]);    // если встречаем 3 одинаковых символа подряд, то выводим их
                printf("%c", string[i]);
                printf("%c", string[i]);
                j = i + 3;                  // пропускаем выведенные
                for (j = i + 3; string[j] == string[i]; ++j) { //если 4ый символ совпадает с 3мя, то выводим его, и так далее, пока не встретим отличный символ от предыдущего
                    printf("%c", string[j]);
                }
                printf("\n");
                i = j - 1;
            }
        }
    }
    return 0;
}
