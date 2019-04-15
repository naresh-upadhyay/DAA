#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i1;
    long i2;
    char c1;
    float f1;
    double f2;
    printf("Enter the values here \n");
    scanf("%d  %ld %c %f %lf",&i1,&i2,&c1,&f1,&f2);
    printf("%d\n%ld\n%c\n%f\n%lf",i1,i2,c1,f1,f2);
    return 0;
}

