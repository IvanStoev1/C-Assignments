#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int biggerNum(int a,int b){
    printf("Enter a two nuumbers");
    scanf("%d %d", &a, &b);
    if(a > b){
        return a;
    } else if(b >= a) {
        return b;
    }
}

int smallerNum(int a, int b){
    printf("Enter a two nuumbers");
    scanf("%d %d", &a, &b);
    if(a < b){
        return a;
    } else if(b <= a) {
        return b;
    }
}

int time(int hour,int min){
    min = min + 15;

    if(min > 60){
        hour =+ 1;
        min =- 60;
    }

    if(hour > 23){
        hour = 0;
    }

    printf("%d:%02d\n", hour, min);
}

int equality(){
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a == b && b == c){
        printf("yes");
    } else {
        printf("no");
    }
}

int points(){
    int points;
    printf("Enter points\n");
    scanf("%d", &points);
    if (points <= 100){
        points += 5;
    }

    if(points > 100){
        points = points + points*0.2;
    }

    if(points > 1000){
        points = points + points*0.1;
    }

    if(points % 2 == 0){
        points += 1;
    }

    if(points % 10 == 5){
        points += 2;
    }
}

int race(){
    int a,b,c;
    int min;
    int sec;
    printf("Enter times\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    min = (a + b + c) / 60;
    sec = a + b + c;

    if (sec >= 60){
        sec -= 60;
    }

    printf("%02d: %02d", min, sec);
}

int transport(){
    int n;
    char timeOfDay[10];
    printf("Enter distance\n");
    scanf("%d", &n);
    printf("Enter time of day\n");
    scanf("%s", &timeOfDay);

    int priceOfTaxi;
    int priceOfBus;
    int priceOfTrain;

    if(strcmp(timeOfDay , "day") == 0){
        priceOfTaxi = n * 0.79 + 70;

    } else if(strcmp(timeOfDay, "night") == 0){
        priceOfTaxi = n * 0.9 + 70;
    }

    if(strcmp(timeOfDay , "day") == 0 && n > 20){
        priceOfBus = n * 0.09;     
    } else if(strcmp(timeOfDay , "night") == 0 && n > 20){
        priceOfBus = n * 0.09;
    }

    if(strcmp(timeOfDay , "day") == 0 && n > 100){
        priceOfTrain = n * 0.06;
    } else if(strcmp(timeOfDay , "night") == 0 && n > 100){
        priceOfTrain = n * 0.06;
    }

    if(n < 20){
        printf("Taxi ");
    }
    if (n >= 20) {
    priceOfBus = n * 0.09;
}

    if (n >= 100) {
    priceOfTrain = n * 0.06;
}
}

void pool() {
    int v, p1, p2;
    float h;
    scanf("%d %d %d %f", &v, &p1, &p2, &h);
    
    float water = (p1 + p2) * h;
    
    if (water <= v) {
        printf("The pool is %d%% full. Pipe 1: %d%%. Pipe 2: %d%%.\n",
               (int)(water / v * 100), 
               (int)(p1 * h / water * 100), 
               (int)(p2 * h / water * 100));
    } else {
        printf("For %.2f hours the pool overflows with %.2f liters.\n", h, water - v);
    }
}

void vineyard() {
    int x, z, workers;
    float y;
    scanf("%d %f %d %d", &x, &y, &z, &workers);
    
    float wine = (0.4 * x * y) / 2.5;
    
    if (wine >= z) {
        float left = wine - z;
        printf("Good harvest this year! Total wine: %d liters.\n", (int)wine);
        printf("%d liters left -> %d liters per person.\n", (int)left, (int)(left / workers));
    } else {
        printf("It will be a tough winter! More %d liters wine needed.\n", (int)(z - wine));
    }
}

void histogram() {
    int n;
    scanf("%d", &n);
    
    int p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
    
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        if (num < 200) p1++;
        else if (num < 400) p2++;
        else if (num < 600) p3++;
        else if (num < 800) p4++;
        else p5++;
    }
    
    printf("%.2f%%\n%.2f%%\n%.2f%%\n%.2f%%\n%.2f%%\n",
           (float)p1 / n * 100, 
           (float)p2 / n * 100, 
           (float)p3 / n * 100,
           (float)p4 / n * 100, 
           (float)p5 / n * 100);
}

void castle() {
    int n;
    scanf("%d", &n);
    
    int colSize = n / 2;
    int midSize = 2 * n - 2 * colSize - 4;
    
    printf("/");
    for(int i = 0; i < colSize; i++) printf("^");
    printf("\\");
    for(int i = 0; i < midSize; i++) printf("_");
    printf("/");
    for(int i = 0; i < colSize; i++) printf("^");
    printf("\\\n");
    
    for(int i = 0; i < n - 3; i++) {
        printf("|");
        for(int j = 0; j < 2 * n - 2; j++) printf(" ");
        printf("|\n");
    }
    
    if (n > 2) {
        printf("|");
        for(int i = 0; i < colSize + 1; i++) printf(" ");
        for(int i = 0; i < midSize; i++) printf("_");
        for(int i = 0; i < colSize + 1; i++) printf(" ");
        printf("|\n");
    }
    
    printf("\\");
    for(int i = 0; i < colSize; i++) printf("_");
    printf("/");
    for(int i = 0; i < midSize; i++) printf(" ");
    printf("\\");
    for(int i = 0; i < colSize; i++) printf("_");
    printf("/\n");
}

void butterfly() {
    int n;
    scanf("%d", &n);
    
    int half = n - 2;
    
    for (int i = 0; i < half; i++) {
        char c = (i % 2 == 0) ? '*' : '-';
        for (int j = 0; j < n - 1; j++) printf("%c", c);
        printf("\\ /");
        for (int j = 0; j < n - 1; j++) printf("%c", c);
        printf("\n");
    }
    
    for (int i = 0; i < n - 1; i++) printf(" ");
    printf("@\n");
    
    for (int i = 0; i < half; i++) {
        char c = (i % 2 == 0) ? '*' : '-';
        for (int j = 0; j < n - 1; j++) printf("%c", c);
        printf("/ \\");
        for (int j = 0; j < n - 1; j++) printf("%c", c);
        printf("\n");
    }
}


int main(){
    int a;
    printf("Enter assignment\n");
    scanf("%d", &a);
    
    switch(a){
        case 1:
            int b,n;
            scanf("%d", &b);
            scanf("%d", &n);
            printf("%d",biggerNum(b,n));
            printf("%d",smallerNum(b,n));
            break;
        case 2:
            int s,m;
            scanf("%d", &s);
            scanf("%d", &m);
            time(s,m);
            break;
        case 3:
            equality();
            break;
        case 4:
            points();
            break;
        case 5:
            race();
            break;
        case 7:
            transport();
            break;
        case 8:
            pool();
            break;
        case 9:
            vineyard();
            break;
        case 10:
            histogram();
            break;
        case 11:
            castle();
            break;
        case 12:
            butterfly();
            break;

    }
}




