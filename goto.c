#include <stdio.h>

/*############################################################################################################*/

//function declaration - prototype
double average(int, int, double);
int point(int);
void pointer();

/*############################################################################################################*/
//main mathod
int main(void){

    printf("Average = %.2f\n", average(100, 1, 0.0));
    printf("Value of variable p is %d\n", point(50));
    printf("\n");
    pointer();
    return 0;
}
/*##############################################################################################################*/

//calculate average 
 double average(const int limit, int i, double sum){

    double num, average;

    for(; i < limit; i++){
        printf("%d. Enter a number: ", i);
        scanf("%lf", &num);

        if (num < 0.0){
            goto jump;
        }
        sum += num;
        
    }  
    jump:
        average = sum / (i - 1);
        printf("Sum = %.2f\n", sum);
    
    return average;
}

//pointer
int point(int n){

    int *p;
    p = &n;    //Storing address from n in p
    printf("Address of p variable is %x\n", p); //Print address from p
    return *p;

}
void pointer(){

    int ar[] = {1, 2, 3, 4 ,5};
    int *p;

    p = &ar[0];   //storing address from first element in p
    printf("%d\n", *p);  //1
    *p += 10;            //first element will be 11
    printf("%d\n", ar[0]); //11
    p += 3;              //pointing on 4. element
    printf("%d\n", *p);    //4
}