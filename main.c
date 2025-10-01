#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sec, sec_2;
	int min;
	int hr;
	
	printf("Input the second: ");
	scanf("%d", &sec);
	
	hr = sec / 3600;
	min = (sec % 3600) / 60;
	sec_2 = sec % 60;
	-
	printf("The time for %d second is %d : %d : %d", sec, hr, min, sec2);
	
	return 0;
}