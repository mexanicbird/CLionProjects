/* Автор: Куликов Алексей */
/*  Среда разработки: JetBrains Clion */

/* библиотеки */
#include <stdio.h>
#include <math.h>

/* переменные */
int var_1;
int var_2;

/* первая функция */
void voltage ()
{
    float Uo;
    float R1;
    float R2;
    float Ui;
    /* собираем аргументы */
    printf("\n");
    printf("первая задача\n");
    printf("Введите значение R1: ");
    scanf("%f", &R1);
    printf("\n");

    printf("Введите значение R2: ");
    scanf("%f", &R2);
    printf("\n");

    printf("Введите значение Uo: ");
    scanf("%f", &Uo);
    printf("\n");

    /* считаем */
    Ui = Uo / (R1 / (R2 + R1));

    /* выводим */
    printf("Значение Ui: ");
    printf("%.1f", Ui);
    printf("\n");
}

/* вторая функция */
void rezist_1 ()
{
    float Uo;
    float R1;
    float R2;
    float Ui;

    /* собираем аргументы */
    printf("\n");
    printf("вторая задача\n");
    printf("Введите значение Ui: ");
    scanf("%f", &Ui);
    printf("\n");

    printf("Введите значение R2: ");
    scanf("%f", &R2);
    printf("\n");

    printf("Введите значение Uo: ");
    scanf("%f", &Uo);
    printf("\n");

    /* считаем */
    R1 = (Uo / (Ui - 1)) * R2;

    /* выводим */
    printf("Значение R1: ");
    printf("%.1f", R1);
    printf("\n");
}

/* третья функция */
void rezist_2 ()
{
    float Uo;
    float R1;
    float R2;
    float Ui;

    /* собираем аргументы */
    printf("\n");
    printf("третья задача\n");
    printf("Введите значение Ui: ");
    scanf("%f", &Ui);
    printf("\n");

    printf("Введите значение R1: ");
    scanf("%f", &R2);
    printf("\n");

    printf("Введите значение Uo: ");
    scanf("%f", &Uo);
    printf("\n");

    /* считаем */
    R2 = 1/(((Uo / Ui) / R1) + (1 / R1));

    /* выводим */
    printf("Значение R2: ");
    printf("%.1f", R2);
    printf("\n");
}

/* основной цикл */
int main() {

    printf("Hello World!\n");
    printf("Введите число: ");
    scanf("%d,", &var_1);
    var_2 = pow(var_1, 2);
    printf("Возводим в квадрат и получаем: ");
    printf("%d\n", var_2);
    printf("\n");

    /* вызываем функции */
    voltage ();
    rezist_1 ();
    rezist_2 ();
    return 0;
}


