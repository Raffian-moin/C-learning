#include<stdio.h>
int main() {
    int low = 0;
    int high = 100;
    int step = 22;
    int celsius = low;
    float fahrenheit;

    while(celsius <= high) {
	/*
	 In C int/int is always integer value although result may be 
	 floating value. Fraction part is truncated. To get floating
	 value we need atleast one floating value while division.
	*/
    	fahrenheit =  (9.0/5.0) * celsius + 32;
	/*
	 %6.2 means that result shoud be atleast 6 characters wide
	 and 2 means that 2 character after for fraction part
	*/
	printf("%6.2f\n", fahrenheit);
	celsius += step;	
    }
    
    return 0;

}
