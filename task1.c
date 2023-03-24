#include <stdio.h>

int task1 () {
    char string[100];
    char input;
    int i = 0;
    puts("Input string with ' ' and '\t'.");
    while ((input = getchar()) != '\n' && i < 100) {
        string[i] = input; 					//ввод данных в строку
        i++;
    }
    for(int i = 0; string[i] != '\0'; ++i) {
        if (string[i] == ' ' || string[i] == '\t') {
            for(int j = i; string[j] != '\0'; ++j) { //если встречаем пробел или таб, то передвигаем символы строки на 1
                string[j] = string[j+1];
            }
            i = i - 1;
        }
    }
    printf("%s", string); 			//вывод
    return 0;
}
