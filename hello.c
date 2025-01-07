/*
#include <stdio.h>

int main(void)
{
    int n = 2;
    double x = 0, pi = 3.14;
    x = n * pi * x;

    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    printf("Hello World!\n");
    return 0;
}
*/

/*
#include <stdio.h>
int main(void) {
    //while (1 > 0) {
        printf("Wake up, Neo...\n\n");
   // }

    //if (0 > 1) {
        printf("The Matrix has you...\n\n");
    //}

    printf("Follow the white rabbit...\n");
    return 0;
}
*/

/*
#include <stdio.h>
#include <locale.h> //библиотека с локализацией, чтобы были доступны русские буквы
int main(void) {
    setlocale(LC_ALL, ""); //подключаем локализацию
      char str1[]= "Поздравляю! Вы справились с задачей!";
      for (int i=0; i<37; i++)
    	printf("%c",str1[i]);

    printf("\n");
    return 0;
}
*/

/*
#include <stdio.h> 
int main(void) {
    printf("What is your name\?\n\tMy name\'s Bond! James Bond!\n");
    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    char message[] = "Hello World!";
    printf(message);
//char message; // должно быть не char, char это для символа
    //message = 'Hello World!\n';
    //printf("pervoe: %c\", message);
    return 0;
}
*/

/*
#include <stdio.h> 
int main(void) {
    int a = 25;
    float b = 23.4;
    double c = 217.876;
    char d = 's';

    printf("Cheloe %d\n", a);
    printf("Odin simvol %c\n", d);
    printf("Vewestvennoe %f %g\n", b, c);

    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    printf("%d + %d = %d\n", 20, 10, 30);
    return 0;
}
*/

/*
#include <stdio.h> 
int main(void) {
    int a = 777;
    // никаких модификаторов нет, 
    //вывод использует минимальную ширину поля
    printf("|%d|\n", a);

    // ширина 8 позиций, выравнивание по левому краю     
    printf("|%-8d|\n", a);

    // ширина 8 позиций, выравнивание по правому краю    
    printf("|%8d|\n", a);

    // число позиций 2, но в числе 777 больше двух цифр 
    // поэтому область расширяется до минимально-возможной ширины
    printf("|%2d|\n", a);

    float b = 150.5;
    // никаких модификаторов нет, выведет используя минимальную ширину поля
    // и стандартную точность 6 знаков
    printf("|%f|\n", b);

    // ширина 8 позиций, выравнивание по левому краю, 3 знака после запятой
    printf("|%-8.3f|\n", b);

    // ширина 8 позиций, 2 знака после запятой, выравнивание по правому краю    
    printf("|%8.2f|\n", b);

    // число позиций 4,точность 3 знака после запятой, но этого мало
    // поэтому ширина поля увеличивается до минимально-возможного значения
    printf("|%4.3f|\n", b);
    return 0;
}
*/

/*
#include <stdio.h>
int main(void) {
    int x = 3, y = -4;
    char ch_eq = '=';
    char ch_plus = '+';
    char ch_minus = '-';
    char ch_div = '/';
    char ch_mul = '*';
    double res = -0.75;
    printf("%d %c %d = ?\n", x, ch_div, y);
    printf("%d %c %d %c %d\n", x, ch_plus, y, ch_eq, x + y);
    printf("Result of %c for %d %d = %5.2lf", ch_div, x, y, res);
    printf("%c %d %d \n%d", ch_minus, x, y, x - y);
    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    char x = '"';
    printf("S.Holmes:\n");
    printf("51grad 31'25.48%c N\n", x);
    printf("0 grad  9'29.93%c W", x);
    return 0;
}
*/

/*
#include <stdio.h> 
int main(void) {
    int a = 3, b = 4;
    double res = 0.75;

    printf("||-----|-----|-----|-----||\n");
    printf("|| act | one | two | res ||\n");
    printf("||=====+=====+=====+=====||\n");
    printf("||%5c|%-5d|%-5d|%5.5d||\n", '+', a, b, a + b);
    printf("||%5c|%5d|%5d|%5.4d||\n", '-', a, b, a - b);
    printf("||%5c|%5d|%-5d|%5.5d||\n", '*', a, b, a * b);
    printf("||%-5c|%-5d|%5d|%1.3f||\n", '/', a, b, res);
    printf("===========================");

    return(0);
}
*/

/*
#include <stdio.h> 
int main(void) {

    printf("N\t10*N\t100*N\t1000*N\n\n");
    for (int i = 1; i <= 10; i++)
        printf("%d\t%d\t%d\t%d\n", i, 10 * i, 100 * i, 1000 * i);

    return(0);
}
*/

/*
#include <stdio.h> 
int main(void) {

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++)
            printf("%-5d", i * j);
        printf("\n");
    }

    return(0);
}
*/

/*
#include <stdio.h>
#include <string.h>

int main(void) {
    char one = '?';
    char two = '\?';

    printf("Compare chars: %d - %d\n", one, two);
    if (one == two) {
        printf("It's equal!\n\n");
    }
    else {
        printf("It isn't equal!\n\n");
    }

    char tree[] = "?";
    char four[] = "\?";

    printf("Compare strings: %s - %s\n", tree, four);
    if (strcmp(tree, four) == 0) {
        printf("It's equal!\n");
    }
    else {
        printf("It isn't equal!\n");
    }
    return 0;
}
*/

/*
#include <stdio.h>
int main(void) {
    int z = 1 / 10;
    float x = 1.0 / 10.0;
    double y = 1.0 / 10.0;

    printf("int:\n%d\n\n", z);
    printf("float:\n4\t--\t%.4f\n10\t--\t%.12f\n16\t--\t%.16f\n\n", x, x, x);
    printf("double:\n4\t--\t%.4f\n10\t--\t%.12f\n16\t--\t%.16f\n", y, y, y);

    return(0);
}
*/

/*
#include <stdio.h> //скомпилировать и доработать
int main(void) {

    int age, height, weight;
    double bov_m, bov_f;

    printf("Vash vozrast?(god)\n");
    scanf("%d", &age); // считываем целое значение в переменную age

    printf("Vash rost?(cm)\n");
    scanf("%d", &height); // считываем  значение в переменную height

    printf("Vash ves?(kg)\n");
    scanf("%d", &weight); // считываем значение в переменную weight

    bov_m = 10 * weight + 6.25 * height - 5 * age + 5;
    bov_f = 10 * weight + 6.25 * height - 5 * age - 161;
    printf("|       BMR       |\n");
    printf("|  male  | female |\n");
    printf("|%8.2f|%8.2f|\n", bov_m, bov_f);
    return 0;
}
*/

/*
#include <stdio.h>
int main(void) {
    int a = 7, b = 2;
    float res;

    res = (float)a / b;
    printf("%d / %d = %f\n", a, b, res);

    return 0;
}
*/

/*
#include <stdio.h> 
int main(void) {
    int a, b, res;
    a = 10;
    b = 7;
    scanf("%d %d", &a, &b);
    res = a + b;
    int c;
    c = 2;
    scanf("%d", &c);
    res = res - c;
    printf("%d\n", res);
    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    int rub;
    double kurs, dollars;
    scanf("%d %lf", &rub, &kurs);
    dollars = rub * kurs;
    printf("%.13lf\n", dollars);
    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    int a = 8, b = 11, c = 2;
    scanf("%d %d %d", &a, &b, &c);
    double t = (a + b + c) / 3.00;
    printf("%.2lf", t);
    return 0;
}
*/

/*
Примеры.
Даны длины катетов прямоугольного треугольника.Вычислить длину гипотенузы.Простая задачка на знание теоремы Пифагора.

#include <stdio.h>
#include <math.h> // подключаем math.h
int main(void) {
    int a, b, c2;

    scanf("%d", &a);
    scanf("%d", &b);

    c2 = a * a + b * b;
    printf("c = %.2f\n", sqrt(c2));

    return 0;
}
*/

/*
Вычислить синус угла ввёденного с клавиатуры. Угол вводится в градусах.

Листинг 2.

#include <stdio.h>
#include <math.h> // подключаем math.h
int main (void) {
  double alpha, sin_a, pi = 3.1415926;
 
  scanf("%lf",&alpha);
  alpha =  alpha*pi/180; 
  sin_a = sin(alpha);
  printf("%.2f\n", sin_a); 

  return 0;
}
*/


/*
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    srand(time(NULL));
     генерируем пять случайных целых чисел из отрезка [80;100] 
    printf("%d\n", 80 + rand() % (100 - 80 + 1));
    printf("%d\n", 80 + rand() % (100 - 79));
    printf("%d\n", 80 + rand() % 21);
    printf("%d\n", 80 + rand() % 21);
    printf("%d\n", 80 + rand() % 21);
}
*/

/*
#include <stdio.h>

void obmen(int* pi_a, int* pi_b) {

    //принимаем указатели на переменные типа int

    int temp;

    temp = *pi_a;

    *pi_a = *pi_b;

    *pi_b = temp;

}

int main() {

    int x = 5, y = 10;

    obmen(&x, &y);

    // ВНИМАНИЕ!передаем адреса, так как функция obmen принимаем указатели

    printf("Posle x=%d y=%d\n", x, y);

    return(0);

}
*/

/*
#include <stdio.h>

int main() {
    // put your code here
    int a;
    scanf("%d", &a);
    printf("%d", (a / 100 + (a % 100) / 10 + (a % 10)));
    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    // put your code here
    int a, b;
    double c;
    scanf("%d %d %lf", &a, &b, &c);
    int raznica = b - a;
    double stoimost = raznica * c;
    printf("%.2lf", stoimost);
    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    int a;
    double R, pi;
    pi = 3.1415926;
    scanf("%d", &a);
    R = a * (pi / 180);
    printf("%.2lf", R);
    return 0;
}
*/

/*
#include <stdio.h>
#include <math.h>

int main() {
    int a = 2;
    double res = pow(a, 5);
    printf("%lf", res);
    return 0;
}
*/

/*
#include <stdio.h>
int main() {
    // put your code here
    int x1, x2, allx;
    x1 = -39;
    x2 = 62;
    allx = x1 - x2;
    printf("%d", allx);
    return 0;
}
*/

/*
#include <stdio.h>
#include <math.h>

Площадь треугольника по двум сторонам и углу между ними можно найти по формуле S = 1/2 a · b · sin α, где a и b — стороны треугольника, α — угол между ними.

int main() {
    double pi = 3.141593, s;
    double a = 17.77, b = 18.31, y = 168.87;
    scanf("%lf %lf %lf", &a, &b, &y);
    double r = (pi / 180) * y;
    s = (1.00 / 2.00) * a * b * sin(r);
    printf("%.2lf", s);
    return 0;
}
*/

/*
#include <stdio.h>
#include <math.h>
int main() {
     int n;
    scanf("%d", &n);
    n = pow(2,n);
    printf("%d", n);
  return 0;
}
*/

/*
#include <stdio.h>

int main(void) {
    double a, b, c, d, e, f, h, res;
    scanf("%lf %lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f, &h);
    res = a / (b * (c / (d * e))) / (f * h);
    printf("%.2lf", res);
    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int S, E;
    scanf("%d %d", &S, &E);
printf("%d", S + rand() % (E - S + 1));
        return 0;
    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    int k = 34961;
    int one_hour = 3600;
    double chas = (double)k / (double)one_hour;
    double minut = (double)k / (double)one_hour * 60;
    printf("%lf %lf" chas, minut);
    return 0;
}
*/