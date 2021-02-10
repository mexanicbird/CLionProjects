/* Автор: Куликов Алексей */
/*  Среда разработки: JetBrains Clion */

/* библиотеки */
#include <stdio.h>

/* определение */
#define ARRAY_1_LENGTH 10
#define ARRAY_2_LENGTH 10

/* Переменные */
int a, b, c;
double x1;
double x2;
int array_1 [ARRAY_1_LENGTH] = {2, 5, 8, 12, 44, 111, 50, 34, 70, 60};
unsigned int array_2 [ARRAY_2_LENGTH] = {0, 1, 2, 3, 4, 65541, 65542, 65543, 65544, 65545};

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
            printf("\n");
            return 1;
        }
        else
        {
            printf("что-то пошло не так... ");
            return -1;
        }
}

/* Упражнение_2 */
int func_array (int *arr) {
    printf("Задание_2 ");
    printf("\n");
    int i;
    int j = 0;
    for (i = 0; i < ARRAY_1_LENGTH; i++) {
        if (arr[i] % 2 == 1) {
            j++;
        }
    }
    if (j > 0) {
        for (i = 0; i < ARRAY_1_LENGTH; i++) {
            if (arr[i] % 2 == 1){
                arr[i] = arr[i] * 2;
            }
        }
        printf("Массив с учетом удвоения нечетных чисел: ");
        for (i = 0; i < ARRAY_1_LENGTH; i++)
        {
            printf("%d, ", arr[i]);
        }
        printf("\n");
        return 1;
    } else {
        return 0;
    }
}

/* Упражнение_3 */
int asShortPrint (unsigned int *arr, int len)
{
  printf("Задание_3 ");
  printf("\n");
  int i;

for (i = 0; i < len; i++)
 {
     unsigned short u1 = (unsigned int) arr[i] >> 16;
     unsigned short u2 = (unsigned int) arr[i];
     printf("[ %d, %d ]", u2, u1);
 }
  printf("\n");
  return 0;
}

int main() {
    printf("Введите аргумент a: ");
    scanf("%d", &a);
    printf("\n");
    printf("Введите аргумент b: ");
    scanf("%d", &b);
    printf("\n");
    printf("Введите аргумент c: ");
    scanf("%d", &c);
    printf("\n");
    printf( "Возвращаем значение задания №1: %d", calcSquareEq(a, b, c, &x1, &x2));
    printf("\n\n");
    printf( "Возвращаем значение задания №2: %d", func_array (array_1));
    printf("\n\n");
    asShortPrint (array_2, ARRAY_2_LENGTH);
    printf("\n");
    return 0;
}

/*1. Используя заголовочный файл <math.h>, описать функцию:
 int calcSquareEq(int a, int b, int c, double* x1, double* x2);
 Которая будет решать квадратное уравнение вида a * x ** 2 + b * x + c = 0,
 и записывать корни этого уравнения в переменные, адреса которых переданы в качестве указателей х1 и х2.
 Функция должна вернуть -1, если уравнение не имеет корней, 0, если у уравнения есть один корень, и 1,
 если у уравнения два корня.

2. Инициализировать массив из целых чисел, описать функцию, принимающую на вход этот массив.
 Функция должна вернуть ноль, если в массиве нет нечётных чисел, в противном случае удвоить все нечётные числа
 в массиве и вернуть единицу. После выполнения функции, если массив был изменён, вывести все числа из массива
 на экран.

3. Опишите функцию asShortPrint(unsigned* a, int len); которая принимает массив из тридцатидвухразрядных чисел
 (типа unsigned int), например, [0, 1, 2, 3, 4, 65541, 65542, 65543, 65544, 65545]
 и выводит его на экран шестнадцатиразрядными числами (типа unsigned short).
 Для массива в примере вывод будет выглядеть следующим образом
 [0, 0, 1, 0, 2, 0, 3, 0, 4, 0, 5, 1, 6, 1, 7, 1, 8, 1, 9, 1].
 Решения такого рода широко применяются для расшифровывания данных из входящих потоков
 или логов цифровых систем в аппаратуре.*/