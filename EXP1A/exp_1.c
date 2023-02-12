#include<stdio.h>
#include<math.h>

int func1(int n){
    return n;
}

double func2(int n){
    return pow(2,n);
}

double  func3(double n){
    return log2(n);
}

double func4(double n){
    return n*log2(n);
}

double func5(double n){
    double a = log2(n);
    return sqrt(a);
}

double func6(int n){
    return round(pow((3.0/2.0),n));
}

int func7(int n){
    return pow(n,3);
}

double func8(double n) {
    return round(pow(2, log2(n)));
}

double func9(int n){
    return n*(pow(2,n));
}

double func10(int n){
    return log2(log2(n));
}

long long factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n-1);
}

int main(){

    printf("\n\nFor function n: \n\n");
    for(int n=0; n <= 100; n++){
        printf("%d \t", n,func1(n));
    }

    printf("\n\nFor function 2^n: \n\n");
    for(int n=0; n <= 100; n++){
        printf("2^%d = %.2f \t\t", n,func2(n));
    }

    printf("\n\nFor function log2(n): \n\n");
    for(int n=0; n <= 100; n++){
        printf("log2(%d) = %.2f \t", n,func3(n));
    }

    printf("\n\nFor function n*log2(n): \n\n");
    for(int n=0; n<=100; n++){
        printf("%d.log2(%d) = %.1f \t\t\t\t", n,n,func4(n));
    }

    printf("\n\nFor function log2(n)^2: \n\n");
    for(int n=0; n<=100; n++){
        printf("log2(%d)^2 = %.2f \t\t\t\t", n,func5(n));
    }

    printf("\n\nFor function (3/2)^n: \n\n");
    for(int n=0; n <= 100; n++){
        printf("(3/2)^%d = %.2f \t\t", n,func6(n));
    }

    printf("\n\nFor function n^3: \n\n");
    for(int n=0; n <= 100; n++){
        printf("%d^3 = %d \t\t", n,func7(n));
    }

    printf("\n\nFor function 2^log2(n): \n\n");
    for(int n=0; n <= 100; n++){
        printf("2^log2(%d) = %.2f \t", n,func8(n));
    }

    printf("\n\nFor function n.2^n: \n\n");
    for(int n=0; n<=100; n++){
        printf("%d.2^%d = %.1f \t\t\t\t", n,n,func9(n));
    }

    printf("\n\nFor function log2(log2(n)): \n\n");
    for(int n=0; n<=100; n++){
        printf("log2(log2(%d)) = %.2f \t\t\t\t", n,func10(n));
    }

    printf("\n\nFor n!: \n\n");
    for(int n = 0; n<=20; n++){
        printf("%d! = %d \t", n,factorial(n));
    }
}