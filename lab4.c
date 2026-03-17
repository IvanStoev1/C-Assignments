#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float square(){
    printf("Sqaure\n");
    float a,b;
    printf("Input a,b\n");
    scanf("%f %f", &a, &b);
    float area = a * b;
    printf("The area is %f square meters", area);
}

float rectangle(){
    printf("Rectangle\n");
    float a,b;
    printf("Input a and b\n");
    scanf("%f %f", &a ,&b);
    float area = a * b;
    printf("The area is %f square meters", area);
}

float rightTriangle(){
    printf("Right triangle\n");
    float a, b;
    printf("Input a and b\n");
    scanf("%f %f", &a,&b);
    float area = (a * b) / 2;
    printf("The area is %f square meters", area);
}

float circle(){
    printf("Cirle\n");
    float r = 0;
    printf("Input r\n");
    scanf("%f", &r);
    float area = 3.14 * r * r;
    printf("The area is %f square meters", area);
}

int changeNums(){
    printf("Enter two numbers\n");
    int a,b;
    scanf("%d %d", a,b);
    int temp = a;
    a = b;
    b = temp;
}

int parity(){
    printf("Enter a number\n");
    int a;
    scanf("%d", &a);
    if (a % 2 == 0){
        printf("The number %d is even");
    } else {
        printf("The number %d is odd");
    }
}

int binary(){
    printf("Enter a number\n");
    int a;
    int count;
    scanf("%d", &a);
    int binarynNum[32];

    while(a > 0){
        binarynNum[count] = a % 2;
        a = a/2;
        count++;
    }

    for(int i = count - 1;i >= 0;i--){
        printf("%d", binarynNum[i]);
    }

}

int main(){
    printf("Enter option:\n"
        "1.Area of square\n"
        "2.Area of reactangle\n"
        "3.Area of right triangle\n"
        "4.Area of circle\n"
        "5.Change numbers\n"
        "6.Parity\n"
        "7.Binary conversion\n"
        );
    int a;
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        square();
        break;
    case 2:
        rectangle();
        break;
    case 3:
        rightTriangle();
        break;
    case 4:
        circle();
        break;
    case 5:
        changeNums();
    case 6:
        parity();
    case 7:
        binary();
        break;
    default:
        printf("Invalid input");
        break;
    }

}

