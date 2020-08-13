#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
    double i, j;
    double a, b, avg, avg2, n, n2;
    double sd, sd2, sd3, sd4;
    double sum = 0, sum2 = 0, sum3 = 0, sum4 = 0;
    scanf_s("%lf %lf", &a, &b);
    for (i = a; i <= b; i++)
    {
        printf("%.0lf ", i);
        n = b - a + 1;
        avg = avg + i;
        avg2 = avg / n;

        sum = pow(i, 2);
        sum2 += sum;
        sum3 += i;
        sum4 = pow(sum3, 2);

        sd = n * (n - 1);
        sd2 = (n * sum2) - sum4;
        sd3 = sd2 / sd;
        sd4 = sqrt(sd3);
    }
    for (j = b;j <= a;j++)
    {
        printf("%.0lf ", j);
        n2 = (a - b + 1);
        avg = avg + j;
        avg2 = avg / n2;

        sum = pow(j, 2);
        sum2 += sum;
        sum3 += j;
        sum4 = pow(sum3, 2);

        sd = n2 * (n2 - 1);
        sd2 = (n2 * sum2) - sum4;
        sd3 = sd2 / sd;
        sd4 = sqrt(sd3);
    }

    if (a < b)
        printf("\nAverage = %.1lf \nSD = %.2lf ", avg2, sd4);
    else
        printf("\nAverage = %.1lf \nSD = %.2lf", avg2, sd4);
    return 0;
}