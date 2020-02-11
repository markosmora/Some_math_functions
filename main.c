/*
 * Student Name: Markos Mora
 * Student Number: 110025025
 * Section Number: 58
 */

#include <stdio.h>

int fun1r(int n);
int fun1(int n);
int fun2r(int n);
int fun2(int n);
void divisibler(int n, int m);
void fibonacci(int n);
int fibonaccir(int n);
int drawTriangler(int n);
int drawTriangle(int n);
void drawStars (int n);



int main (void)
{
    int menu = 0;
    int selection = 0;
    int num = 0;
    int num2 = 0;
    int sum = 0;


    printf("FUNCTIONS AND RECURSION LAB03\n");
    printf("-----------------------------\n");


    do{
        printf("\nSelect one of the following functions:\n");
        printf("1. Function 1\n");
        printf("2. Function 2\n");
        printf("3. Fibonacci\n");
        printf("4. Greatest Common Divisor\n");
        printf("5. Power Function\n");
        printf("6. Display all positive integers...\n");
        printf("7. Draw Triangle Function\n");
        printf("8. Exit\n");
        printf("Enter the number of the desired function: ");
        scanf("%d",&menu);



        switch(menu){

            case 1:
                //Function 1;
                printf("Please enter 1 to run it recursively or any integer for non-recursive: ");
                scanf("%d", &selection);
                if(selection == 1){
                    printf("Recursively Running -> ");
                    //Recursive Function
                    printf("Please enter an integer: ");
                    scanf("%d", &num);
                    sum = fun1r(num);
                    printf("The sum of numbers from 1 to %d is %d\n", num, sum);

                }else{
                    printf("Non-Recursively Running -> ");
                    //Non-recursive function
                    printf("Please enter an integer: ");
                    scanf("%d", &num);
                    sum = fun1(num);
                    printf("The sum of numbers from 1 to %d is %d\n", num, sum);

                }

                break;
            case 2:
                printf("Please enter 1 to run it recursively or any integer for non-recursive: ");
                scanf("%d", &selection);
                if(selection == 1){
                    printf("Recursively Running -> ");
                    //Recursive Function
                    printf("Please enter an integer: ");
                    scanf("%d", &num);
                    sum = fun2r(num);
                    printf("The sum of +1 squares from 1 to %d is %d\n", num, sum);
                }else {
                    printf("Non-Recursively Running -> ");
                    //Non-recursive function
                    printf("Please enter an integer: ");
                    scanf("%d", &num);
                    sum = fun2(num);
                    printf("The sum of +1 squares from 1 to %d is %d\n", num, sum);
                }


                break;
            case 3:
                printf("Please enter 1 to run it recursively or any integer for non-recursive: ");
                scanf("%d", &selection);
                if(selection == 1){
                    printf("Recursively Running -> ");
                    printf("Please enter an integer: ");
                    scanf("%d", &num);
                    sum = fibonaccir(num);
                    printf("The fibonacci sequence for %d is: %d\n", num, sum);
                }else {
                    printf("Non-Recursively Running -> ");
                    printf("Please enter an integer: ");
                    scanf("%d", &num);
                    printf("The fibonacci sequence for %d is: \n", num);
                    fibonacci(num);
                }
                break;
            case 4:
                printf("Please enter 1 to run it recursively or any integer for non-recursive: ");
                scanf("%d", &selection);
                if(selection == 1){
                    printf("Recursively Running");
                }else {
                    printf("Non-Recursively Running");
                }
                break;
            case 5:
                printf("Please enter 1 to run it recursively or any integer for non-recursive: ");
                scanf("%d", &selection);
                if(selection == 1){
                    printf("Recursively Running");
                }else {
                    printf("Non-Recursively Running");
                }
                break;
            case 6:
                printf("Please enter 1 to run it recursively or any integer for non-recursive: ");
                scanf("%d", &selection);
                if(selection == 1){
                    printf("Recursively Running -> ");
                    //Recursive Function
                    printf("Please enter an integer n: ");
                    scanf("%d", &num);
                    printf("\nPlease enter an integer m: ");
                    scanf("%d", &num2);
                    printf("\nThe positive integers that are less than %d and divisible by %d are: \n", num, num2);
                    divisibler(num, num2);
                }else {
                    printf("Non-Recursively Running");
                }
                break;
            case 7:
                printf("Please enter 1 to run it recursively or any integer for non-recursive: ");
                scanf("%d", &selection);
                if(selection == 1){
                    printf("Recursively Running -> ");
                    //Recursive Function
                    printf("Please enter an integer: ");
                    scanf("%d", &num);
                    drawTriangler(num);
                }else {
                    printf("Non-Recursively Running -> ");
                    printf("Please enter an integer: ");
                    scanf("%d", &num);
                    drawTriangle(num);
                }
                break;

            case 8:
                break;

            default:
                printf("\nInvalid Option\n");
                break;
        }

    }while(menu != 8);

}

//1. Recursion
int fun1r(int n){
    if (n!= 0)
        return n + fun1r(n - 1);
    else
        return n;
}
//1. Iterative
int fun1(int n){
    int sum = 0;
    for (int i=1; i<=n; i++){
        sum = sum + i;
    }return sum;
}
//2. Recursion
int fun2r(int n){
    if (n!=0)
        return (n+1)*(n+1)+fun2r(n-1);
    else
        return n;
}
//2. Iterative
int fun2(int n){
    int sum = 0;
    for (int i=1; i<=n; i++){
        sum = sum + (1 + i) * (1 + i);
    }return sum;
}
//3. Recursion
int fibonaccir(int n) {
    if (n < 1) {

        return 0;

    } else {

        return (fibonaccir(n - 1) + n);

    }
}

//3. Iterative
void fibonacci(int n){
    int t1 = 0;
    int t2 = 1;
    int nextTerm = 0;
    for (int i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}
//6. Recursion
void divisibler(int n, int m) {
    if (n == 1) {
        printf("\n");
        return;
    }
    if ((n - 1) % m == 0) {
        printf("%d ", n - 1);
    }

    return divisibler(n - 1, m);
}


//7. Recursion
int drawTriangler(int n){
    if (n==0){
        return 0;
    }
    drawTriangler(n-1);
    printf("\n");
    drawStars(n);
}
//Function to draw stars for 7
void drawStars (int n){
    if (n==0){
        return;
    }
    printf("* ");
    drawStars (n-1);
}
//7. Iterative
int drawTriangle(int n){
    for(int i =1; i <=n; i++){

        for (int j =1; j <=i; j++){
            printf("* ");
        }
        puts("");
    }
    return 0;
}