#include <stdio.h>
char* ex2 (int x){
    int y=x%2;
    if (y==0){
        return "Even";
    }
    else{
        return "Odd";
    }

}
int remain (int x, int y){
    int z=x%y;
    return z;
}
char* leapyear(int x) {
    if (x % 100 == 0) {
        int y = remain(x, 400);
        if (y == 0) {
            return ("Leap year!");
        } else {
            return ("Regular year");
        }

    } else {
        int y = remain(x, 4);
        if (y == 0) {
            return ("Leap year!");
        } else {
            return ("Regular year!");
        }
    }
}
int main() {

    int first, second;//EX 1
    printf("Please enter the first integer");
    scanf("%d",&first);

    printf("Please enter the second integer");
    scanf("%d",&second);

    printf("%d",remain(first,second));
    //End ex 1
    //Ex 2
    int check;
    printf("\nPlease enter any integer");
    scanf("%d",&check);
    printf("%s",ex2(check));

    //EX3
    int year;
    printf("\nEnter a year");
    scanf("%d",&year);
    printf("%d is a %s",year,leapyear(year));

    //Ex4
    int x,y,z;
    printf("\nEnter the first integer");
    scanf("%d",&x);

    printf("Enter the second integer");
    scanf("%d",&y);

    printf("Enter the third integer");
    scanf("%d",&z);
    if (x>y && x>z){
        if (y>z){
            printf ("%d, %d, %d",x,y,z);
        }
        else{
            printf ("%d, %d, %d",x,z,y);
        }
    }
    else if(x>y && x<z){
        printf ("%d, %d, %d",z,x,y);
    }
    else if(x<y && x>z){
        printf ("%d, %d, %d",y,x,z);
    }
    else{
        if (y>z){
            printf ("%d, %d, %d",y,z,x);
        }
        else{
            printf ("%d, %d, %d",z,y,x);
        }
    }


    
    return 0;



}
S