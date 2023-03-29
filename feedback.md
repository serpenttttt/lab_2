# Лаба 2:

Проблемы с выводом символов. (Мб только у меня) 
Вывод моей консоли PowerShell:
```
Task1
Input string with ' ' and '     '.
retre           re[pe[errr      ggfddf 
retrere[pe[errrggfddf¤_▐╛
Task2
Input string with ' ' and '     '.
qqqwerrr        rewwwe    gdf           fds
qqqwerrr
rewwwe
gdf
fds
Task3
Input string with triplets
uioiii                  [[[ppp    oooo
iii

[[[
ppp

oooo
```

# Лаба 3

## Task 1. 

1) Подобный код необходимо уже выделять в функцию (-10)
    ```
    string2 = (char *) realloc(string2, k + 1);
                    string2[k] = m;
                    ++k;
                    string2[k] = '\0';
    ```
2) Вывод неккоректен для случая
    ```
    -a-z-a0-9-0-
    abcdefghijklmnopqrstuvwxyzyxwvutsrqponmlkjihgfedcba0123456789876543210
    ```
    Должно быть:
    ```
    -a-z-a0-9-0-
    -abcdefghijklmnopqrstuvwxyzyxwvutsrqponmlkjihgfedcba0123456789876543210-
    ```
3) Всё задание не засчитваю, так как уверен, что выполнено не самостоятельно,
а взято из интернета. => максимальное кол-во баллов за этот семинар 70

## Task 2
    
    В задании требуется находить и удалять вхождение строки s2 в s1. А не удалять посимвольно из s1 s2. 

## Task 3 Засчитан

# Лаба 4

