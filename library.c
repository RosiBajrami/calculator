#include <stdio.h>
#include <math.h>

double calcSummation(double n1, double n2);
double calcSub(double n1, double n2);
double calcMulti(double n1, double n2);
double calcDiv(double n1, double n2);
double calcSqrt(double n);
double calcPower(double n);
double calculateTheAverage();

double calcSummation(double n1, double n2){
    return n1+n2;
}

double calcSub(double n1, double n2){
    return n1-n2;
}

double calcMulti(double n1, double n2){
    return n1*n2;
}

double calcDiv(double n1, double n2){
    return n1/n2;
}

double calcSqrt(double n){
    return sqrt(n);
}

double calcPower(double n){
    int m;
    printf("\n");
    printf("Give a number to raise to the square root of: ");
    scanf("%d", &m);
    return pow(n,m);
}

double calculateTheAverage(){
    int cnt=0;
    char num;
    int sum=0;
    for(int i=1; 1; i++){
        printf("\n");
        printf("Enter the %d number(enter 's' to stop): ", cnt);
        scanf("%c", &num);
        scanf("%c", &num);
        if(num == 's'){
            break;
        }
        int number = (int)num-48;
        sum += number;
        cnt++;
    }
    return (double)sum/cnt;
}

int main() {
    int cnt=0;
    double avg;
    while(1){
        printf("\n");
        printf("What operation do you want to do: \n"
               "+ for Sum \n"
               "- for Subtraction \n"
               "* for Multiplication \n"
               "/ for Division \n"
               "s for Square Root \n"
               "p for Power \n"
               "a for Calculating The Average of n numbers \n"
               "Enter the character: ");
        char choice;
        scanf("%c", &choice);
        if(cnt > 0){
            scanf("%c", &choice);
        }
        double n1,n2;

        switch (choice) {
            case '+':
                printf("\n");
                printf("Enter 2 numbers: ");
                scanf("%lf %lf", &n1, &n2);
                printf("\n");
                printf("Sum: %lf", calcSummation(n1,n2));
                break;
            case '-':
                printf("\n");
                printf("Enter 2 numbers: ");
                scanf("%lf %lf", &n1, &n2);
                printf("\n");
                printf("Subtraction: %lf", calcSub(n1,n2));
                break;
            case '*':
                printf("\n");
                printf("Enter 2 numbers: ");
                scanf("%lf %lf", &n1, &n2);
                printf("\n");
                printf("Multiplication: %lf", calcMulti(n1,n2));
                break;
            case '/':
                printf("\n");
                printf("Enter 2 numbers: ");
                scanf("%lf %lf", &n1, &n2);
                printf("\n");
                printf("Division: %lf", calcDiv(n1,n2));
                break;
            case 's':
                printf("\n");
                int n;
                printf("Give a number: ");
                scanf("%d", &n);
                printf("Square Root: %lf", calcSqrt(n));
                break;
            case 'p':
                printf("\n");
                int num;
                printf("Give a number: ");
                scanf("%d", &num);
                printf("\n");
                printf("Power: %lf", calcPower(num));
                break;
            case 'a':
                avg = calculateTheAverage();
                printf("\n");
                printf("Average is: %.3lf", avg);
                break;
        }
        printf("\n");
        printf("Do you want to continue using the calculator?(y-Yes | n-No): ");
        char continueChoice;
        scanf("%c", &continueChoice);
        scanf("%c", &continueChoice);
        if(continueChoice == 'n'){
            break;
        }
        cnt++;
    }


}