https://github.com/RaniPatel16/c-repo.git
#include<stdio.h>
int main(){
    int n ;
    printf("enter any number");
    scanf("%d",&n);
    if(n>0){
        printf("positive");
        
    }
    else if(n<0){
        printf("negative");
    }
    else{
        printf("zero");
        
    }
    return 0;
}
// 2
#include<stdio.h>
int main (){
    int a,b,temp;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swaping");
    printf("%d",a);
    printf("%d",b);
    return 0;
    
}




// 2
#include <stdio.h>

int main() {
    int a, b;

   
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Before swap: a = %d, b = %d\n", a, b);

    
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
// 3

#include<stdio.h>
int main() {
    int arr[] = {20, 32, 6, 22, 47, 21};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, max,min;

    
max=min=arr[0];

    
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
        max= arr[i];
        }
        else{
            min= arr[i];
        }
    }

    printf("max = %d\n", max);
    printf("min = %d\n", min);

    return 0;
}

//4
#include <stdio.h>


int main() {
    char str[100];

    
    printf("Enter a string: ");
    scanf("%s", str);   

    int rev = strlen(str);


    for (int i = rev - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}

//5

#include <stdio.h>


int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;   
    } else {
        return n * factorial(n - 1);  
};

int main() {
    int n;

  
    printf("Enter a positive integer: ");
    scanf("%d", &n);

  
        printf("Factorial = %d\n",factorial(n));


    return 0;
}








