/*Вычислить значение функции f(k,m)={█(m/k,если k>0,@|m+k|,если kf≤0,m<0,@km в остальных случаях.)┤ */

#include <stdio.h>
#include <math.h> /*математическая библиотека*/

int main() {
    double m, k, f; /*объявление переменных*/
    do {
        printf("m="); /*ввод чисел*/
        fflush(stdin);
    } while (scanf("%lf", &m) != 1); /*безопасный ввод*/

    do {
        printf("k="); /*ввод чисел*/
        fflush(stdin);
    } while (scanf("%lf", &k) != 1); /*безопасный ввод*/

    f = (k > 0) ? m / k : (m < 0) ? (fabs(m + k)) : (m * k); /*тернарный оператор*/
    printf("f = %lf", f); /*вывод*/
    return 0;
}
