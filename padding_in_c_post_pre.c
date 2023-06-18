#include<stdio.h>
int main()

// These examples should show the difference:

// "%0.2lf", 0.123 -> 0.12 (zero padded min. width of 0, 2 decimal places).

// "%6.2lf", 0.123 -> __0.12 (space padded min. width of 6, 2 decimal places).

// "%06.2lf", 0.123 -> 000.12 (zero padded min. width of 6, 2 decimal places).

// "%0.6lf", 0.123 -> 0.123000 (min width of 0, 6 decimal places).
{
    int i = 1;
    // printf("%d %d %d\n", ++i, i++, i);
    printf("%0.2lf\n", 0.123);
    printf("%.2lf\n", 0.123);
    printf("%6.2f\n", 0.123);
    printf("%6.2lf\n", 0.123);
    printf("%06.2lf\n", 0.123);
    printf("%0.6lf\n", 0.123);
    printf("%3d\n", 7);

    return 0;
}