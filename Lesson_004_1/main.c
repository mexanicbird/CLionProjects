/* Автор: Куликов Алексей */
/*  Среда разработки: JetBrains Clion */

/* библиотеки */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/* Переменные */
unsigned int a;
char strout[64] = "b'";

/* Cтруктуры */
typedef struct rectangle {
    int height;
    int width;
    int area;
    int perimeter;
} Rectangle;

typedef struct point {
    int x;
    int y;
} Point;

typedef struct line {
    float length;
    Point p1;
    Point p2;
} Line;

void calcRectangle (Rectangle *r){
    r->area = r->height * r->width;
    r->perimeter = (r->height + r->width) * 2;
}

Line* initLine(int x1, int y1, int x2, int y2){
    Line* line;
    line = (Line*) malloc(sizeof(Line));
    line->p1.x = x1;
    line->p1.y = y1;
    line->p2.x = x2;
    line->p2.y = y2;
    line->length = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return line;
}


unsigned int scaner ()
{
    printf("Введите аргумент a: ");
    scanf("%d", &a);
    printf("\n");
    return 0;
}

void binary(unsigned int number, char * strout)
{
    char str_1[64];
    unsigned int i = 0;
    unsigned int lon = number;
    while (lon != 0)
    {
        lon = lon >> 1;
        i++;
    }
    str_1[i] = '\0';
    while (number > 0)
    {
        str_1[--i] = (number % 2) ? '1':'0';
        number /=2;
    }
    strcpy(strout, str_1);
}

int main() {

    scaner ();
    printf("Аргумент в unsigned int:  %d" ,a);
    binary(a, strout);
    printf("\n");
    printf("Аргумент в двоичном представлении: %s", strout);
    printf("\n");

    Rectangle rectangle;
    printf("Введите высоту прямоугольника: ");
    scanf("%d", &rectangle.height);
    printf("Введите ширину прямоугольника: ");
    scanf("%d", &rectangle.width);
    calcRectangle(&rectangle);
    printf("Площадь прямоугольника: %d\nПериметр прямоугольника: %d\n ",
           rectangle.area, rectangle.perimeter);
    printf("\n");

    Line* l = initLine (5, 4, 8, 9);
    printf("Первая точка имеет координаты: x = %d, y = %d", l->p1.x, l->p1.y);
    printf("\n");
    printf("Вторая точка имеет координаты: x = %d, y = %d", l->p2.x, l->p2.y);
    printf("\n");
    printf("Длина линии: %lf\n", l->length);
    free(l);
    return 0;
}



//1. Описать функцию, возвращающую строку с двоичным представлением положительного целого десятичного числа,
// переданного в аргументе этой функции.
//
//2. Описать структуру "прямоугольник", содержащую целочисленные значения длины, ширины, периметра
// и площади прямоугольника. Написать функцию, принимающую на вход указатель на структуру,
// подсчитывающую и записывающую площадь и периметр данного прямоугольника в структуру.
//
//3. Описать структуру "прямая линия" которая должна состоять из длины и двух внутренних структур типа "точка",
// в каждой из которых должны содержаться координаты по оси 'х' и по оси 'у'. Описать функцию принимающую на вход
// координаты двух точек, и возвращающую структуру "линия" с подсчитанной длиной.
//
//4. (необязательно) Написать функцию-обёртку, принимающую указатель на область памяти,
// которую затем можно использовать как двумерный массив из элементов типа integer.
// Количество элементов указывается в аргументе функции. Массив должен быть гарантированно инициализирован нулями.
// Для проверки - заполните этот массив и выведите на экран.



