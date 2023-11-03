/*Определить массив указателей на функции. Вводить цифру,
определяющую, какую функцию надо выполнить:
- 0 - найти мин число;
- 1 - найти макс число;
- 2 - вычислить сумму;
- 3 - вычислить разность;
- 4 - произведение чисел;
- 5 - найти частное;
- 6 - завершить работу.
*/

#include <stdio.h>

// 0. Функция определения минимального числа
int min() {
    
    double a = 0; double b = 0; 
    
    printf("Введите чиcло a: ");
    scanf("%le", &a);
    printf("Введите чиcло b: ");
    scanf("%le", &b);
    
    a < b ? printf("Минимальное число: %.3f\n", a) : printf("Минимальное число: %.3f\n", b);
    return 0;
}

    
// 1. Функция определения максимального числа
int max() {
    
    double a = 0; double b = 0; 
    
    printf("Введите чиcло a: ");
    scanf("%le", &a);
    printf("Введите чиcло b: ");
    scanf("%le", &b);
    
    a > b ? printf("Максимальное число: %.3f\n", a) : printf("Максимальное число: %.3f\n", b);
    return 0;
}

// 2. Функция вычисления cуммы двух чисел
int add() {
    
    double a = 0; double b = 0; 
    
    printf("Введите чиcло a: ");
    scanf("%le", &a);
    printf("Введите чиcло b: ");
    scanf("%le", &b);
    
    printf("a + b =  %.3f\n", a + b);
    return 0;
}

// 3. Функция вычисления разности двух чисел
int subtract() {

    double a = 0; double b = 0; 
    
    printf("Введите чиcло a: ");
    scanf("%le", &a);
    printf("Введите чиcло b: ");
    scanf("%le", &b);
    
    printf("a - b =  %.3f\n", a - b);
    return 0;
}

// 4. Функция вычисления произведения двух чисел
int multiply() {
    
    double a = 0; double b = 0; 
    
    printf("Введите чиcло a: ");
    scanf("%le", &a);
    printf("Введите чиcло b: ");
    scanf("%le", &b);
    
    printf("a * b =  %.3f\n", a * b);
    return 0;
}

// 5. Функция вычисления частного двух чисел
int division() {

    double a = 0; double b = 0; 
    
    printf("Введите чиcло a: ");
    scanf("%le", &a);
    printf("Введите чиcло b: ");
    scanf("%le", &b);
    
    printf("a / b =  %.3f\n", a / b);
    return 0;
}

// 6. Завершение работы
int end() {
    printf("\nРабота завершена.\n");
    return 1;
}


int main() {
    
    int op_num = 0;         //номер операции
    int (*operations[7])() = {min, max, add, subtract, multiply, division, end};
    
    printf("Перечень возможных операций:\n");
    printf("0 - найти мин число\n");
    printf("1 - найти макс число\n");
    printf("2 - вычислить сумму двух чисел\n");
    printf("3 - вычислить разность двух чисел\n");
    printf("4 - вычислить произведение двух чисел\n");
    printf("5 - найти частное двух чисел\n");
    printf("6 - завершить работу\n");

    do {
        // Проверка номера операции
        do {
            printf("\nВыберите номер операции от 0 до 6: ");
            scanf("%d", &op_num);
            if (op_num < 0 || op_num > 6) {
                printf("Такой операции нет!\n");
            }
        }
        while (op_num < 0 || op_num > 6);
    }
    while (operations[op_num]() != 1);
    
    return 0;
}
