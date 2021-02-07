/* Автор: Куликов Алексей */
/*  Среда разработки: JetBrains Clion */

/* библиотеки */
#include <stdio.h>
#include <math.h>

/* Переменные */
double root_1;
double root_2;
double * x1 = &root_1;
double * x2 = &root_2;


/* Упражнение_1 */
int calcSquareEq(int a, int b, int c, double *x1, double *x2)
{
    int dsc;
    dsc = (b * b) - (4 * a * c);
    printf("Задание_1 ");
    printf("\n");

        if  (dsc < 0)
        {
            printf("Уравнение не имеет корней ");
            return -1;
        }
        else if (dsc == 0)
        {
            *x1 = (double)(-b / (2 * a));
            printf("Уравнение имеет один корень х1 = %.1f ", *x1);
            return 0;
        }
        else if (dsc > 0)
        {
            *x1 = (double)(-b + dsc) / (2 * a);
            *x2 = (double)(-b - dsc) / (2 * a);
            printf("Корни уравнения: х1 = %.1f, х2 = %.1f ", *x1, *x2);
            return 1;
        }
        else
        {
            printf("что-то пошло не так... ");
            return -1;
        }




    return 0;
}

/* Упражнение_2 */
int exercise_2 ()
{
    printf("Задание_2 ");
    printf("\n");
    return 0;
}

/* Упражнение_3 */
int exercise_3 ()
{
    printf("Задание_3 ");
    printf("\n");
    return 0;
}

int main() {
    printf( ", возвращаем значение: %d", calcSquareEq(2, 11, 7, x1, x2));
    printf("\n\n");
    exercise_2 ();
    printf("\n");
    exercise_3 ();
    printf("\n");
    return 0;
}




//1. Используя заголовочный файл <math.h>, описать функцию:
// int calcSquareEq(int a, int b, int c, double* x1, double* x2);
// Которая будет решать квадратное уравнение вида a * x ** 2 + b * x + c = 0,
// и записывать корни этого уравнения в переменные, адреса которых переданы в качестве указателей х1 и х2.
// Функция должна вернуть -1, если уравнение не имеет корней, 0, если у уравнения есть один корень, и 1,
// если у уравнения два корня.

//2. Инициализировать массив из целых чисел, описать функцию, принимающую на вход этот массив.
// Функция должна вернуть ноль, если в массиве нет нечётных чисел, в противном случае удвоить все нечётные числа
// в массиве и вернуть единицу. После выполнения функции, если массив был изменён, вывести все числа из массива
// на экран.

//3. Опишите функцию asShortPrint(unsigned* a, int len); которая принимает массив из тридцатидвухразрядных чисел
// (типа unsigned int), например, [0, 1, 2, 3, 4, 65541, 65542, 65543, 65544, 65545]
// и выводит его на экран шестнадцатиразрядными числами (типа unsigned short).
// Для массива в примере вывод будет выглядеть следующим образом
// [0, 0, 1, 0, 2, 0, 3, 0, 4, 0, 5, 1, 6, 1, 7, 1, 8, 1, 9, 1].
// Решения такого рода широко применяются для расшифровывания данных из входящих потоков
// или логов цифровых систем в аппаратуре.