#include <stdio.h>   
#include <stdint.h>
#include <unistd.h>
#include <getopt.h>
#define IN 1
#define OUT 0  

void g(int *x){
    *x += 10;
}                             

int main(int argc, char **argv){      

    printf("Hello, C World\n");                     //main calls a library function "printf" and print output. "\n" stays for new line, without it there is no new line
    printf("Hi there!\n");

    /*Fahrenheit-Celsius Table
      20....300*/

    /*  int fahr, celsius;
      int lower, upper, step;
      
      lower = 0;
      upper = 300;
      step = 20;

      fahr = lower;
      while(fahr <= upper){
          celsius = 5 * (fahr - 32) / 9;
          printf("%d\t%d\n", fahr, celsius);
          fahr = fahr + step;
      } */



      /*int fahr;

      for(fahr = 0; fahr <= 300; fahr = fahr + 20){
          printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
      } */

      /*#define LOWER 0
      #define UPPER 300
      #define STEP 20
      
      int fahr;

      for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
          printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
      } */

      /*int c;
      while ((c = getchar()) != EOF){
        putchar(c);
      }*/


      //word count
     /* int c, n1, nw, nc, state;

      state = OUT;
      n1 = nw = nc = 0;
      while ((c = getchar()) != EOF){
        nc++;
        if (c == '\n'){
          n1++;
        }
        if(c == ' ' || c == '\n' || c == '\t'){
          state = OUT;
        }
        else if(state == OUT){
          state = IN;
          nw++;
        }
        
      }
      printf("%d %d %d\n", n1, nw, nc);*/

      /*int ar[] = {23, 45, 24, 13};
      int *p = &ar[0];
      printf("%d ", ar[0]);
      *p += 2;
      printf("%d\n", *p);*/

      /*uint16_t i16 = 0x7FA5;
      printf("%d\n", i16);
      uint8_t i8 = i16 >> 8;
      printf("%d\n", i8);
      i8 |= 128;
      printf("%d\n", i8);
      i16 &= i8;
      printf("%d\n", i16);
      printf("%d", 0x00A5);*/

      /*int a, b, c;
      a = 5;
      b = 0x7;
      printf("%d\n", b);
      c = a & b;
      printf("%d", c);*/

      /*unsigned int i = 0xC;
      int j;
      j = i >> 2;
      printf("%d\n", j);*/

      /*char string[] = "HalloDuWelt\t";
      printf("%c", string[11]);*/

      /*int i;
      for (i = 0; i < 11; i++){
 	        printf("hallo\n");
      }*/

      
   
    

    
    int a = 1;
    g(&a);
    printf("%d\n", a);

    union num {
    int8_t i8;
    int16_t i16;
    };

    union num n;
    n.i16 = 4096;
    n.i8 += 77; 
    printf("%d\n", n.i16);
    printf("%d\n", n.i8);
  
  return 0;
}

