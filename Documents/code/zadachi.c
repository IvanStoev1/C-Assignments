#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int zad1 (){
    int a;
    printf("Enter a number\n");
    scanf("%d" , &a);
    if (a > 6){
        printf("The number %d bigger than 6", a);
    }
}

int zad2(){
    int a;
    printf("Enter a number\n");
    scanf("%d" , &a);
    if (a % 8 > 4){
        printf("The remainder is bigger than 4");
    }
}

int zad3 (){
    int a,b,c;
    printf("Input three numbers\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b && a < c){
        printf("The first one is the lowest number");
    }

    if(b < a && b < c){
        printf("The second number is the lowest");
    }

    if(c <a && c < b){
        printf("The third number is the lowest");
    }
}
int zad4(){
    int a;
    printf("Enter a number between 0-9");
        switch(a){

            case 0:
            printf("Zero");
            break;

            case 1:
            printf("One");
            break;

            case 2:
            printf("Two");
            break;

            case 3:
            printf("Three");
            break;

            case 4:
            printf("Four");
            break;

            case 5:
            printf("Five");
            break;

             case 6:
            printf("Six");
            break;
        
            case 7:
            printf("Seven");
            break;

            case 8:
            printf("Eight");
            break;

            case 9:
            printf("Nine");
            break;

    }   
}
int zad5(){
    int a;
    printf("Enter a number between 0-9");
        switch(a){

            case 1:
            printf("Monday");
            break;

            case 2:
            printf("Tuesday");
            break;

            case 3:
            printf("Wednesday");
            break;

            case 4:
            printf("Thursday");
            break;

            case 5:
            printf("Friday");
            break;

            case 6:
            printf("Saturday");
            break;

            case 7:
            printf("Sunday");
            break;

            default:
            printf("invalid input");

        }   

    }


int zad6(){
    int n, i, j;

    printf("Enter whole number: \n");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", i);
        }

        printf("\n");
    }

}

int zad7(){
    int a,b = 0;
    int sum = 0;
    printf("Enter two numbers(first one has to be smaller)\n");
    scanf("%d %d", &a, &b);
    for(int i = a + 1;i < b; i++){
        sum += i;
    }
    printf("%d", sum);

}

int zad8(){
     int a,b = 0;
    int sum = 0;
    int product = 1;
    printf("Enter two numbers(first one has to be smaller)\n");
    scanf("%d %d", &a, &b);
    for(int i = a + 1;i < b; i++){
        if(i % 2 == 0){
            sum += i;
        }
    for(int i = a + 1;i < b;i++){
        if(i % 2 == 1){
            product = product * i;
        }
    }

    }
    printf("%d %d", sum, product);
}

int zad9(){
    int k,n;
    int counter = 0;
    printf("Enter n\n");
    scanf("%d", &n);
    printf("Enter k\n");
    scanf("%d", &k);


    for (int i =0;i < k;i++){
                if(n % 3 == 0 && n > k){
                    counter++;
        }
    
    for(int i = 0;i <= 3;i++){
        printf("Enter n\n");
        scanf("%d", &n);
            for (int i =0;i < k;i++){
                if(n % 3 == 0 && n > k){
                    counter++;
        }
    }
    }
}
}

int zad10(){
    int a,b;
    int sum = 0;
    printf("Enter amount of numbers you want to add\n");
    scanf("%d", &b);
    
    for(int i = 0;i < b;i++){
        printf("Enter a number\n");
        scanf("%d", &a);
        if(a == 0){
            break;
        }
        sum += a;
    }
}

int zad11(){
    float a, b;
    printf("Enter a\n");
    scanf("%d", &a);
    printf("Enter b\n");
    scanf("%d",&b);

    if (a > b){
        float temp = a;
        a = b;
        b = temp;
    }

    for(float i = 0;i <= b + 0.000001; i+= 0.01){
        float f = i * i -4;

        printf("%f | %f\n", i, f);
    }
}

int main (){

int a;
printf("Choose asignment 1 - 11\n");
scanf("%d", &a);

switch(a){
    case 1:
        zad1();
        break;
    case 2:
        zad2();
        break;
    case 3:
        zad3();
        break;
        
    case 4:
        zad4();
        break;
    case 5:
        zad5();
        break;
    case 6:
        zad6();
        break;
    case 7:
        zad7();
        break;
    case 8:
        zad8();
        break;
    case 9:
        zad9();
        break;
    case 10:
        zad10();
        break;
    case 11:
        zad11();
        break;
    default:
    printf("Invalid input");

    }
}