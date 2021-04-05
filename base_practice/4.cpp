#include <iostream>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

void swap(double *x, double *y)
{
    double temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x = 20, y = 30;
    swap(&x, &y);
    std::cout<<x<<' '<<y<<std::endl;

    char ch1='A', ch2 = 'B';
    swap(&ch1, &ch2);
    std::cout<<ch1<<' '<<ch2<<std::endl;

    double do1 = 1.111, do2 = 5.555;
    swap(&do1, &do2);
    std::cout<<do1<<' '<<do2<<std::endl;
}

