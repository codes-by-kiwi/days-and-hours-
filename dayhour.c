/* Write a program where you can enter an integer n from the keyboard.
Then a conversion table for 1 to n days should be printed on the screen.
Make sure that the integer value you entered for n is valid(positive and non-zero).
If an invalid integer n was entered then repeat entering until a valid 
value is entered */



#include <stdio.h>
int main()
{
    int n; 
    int i=1; /* lower limit*/

scanf("%d",&n); // scans n. 

while ( n < 0){
	continue; // if the condition is met skip these instructions
}

while (n == 0){
	continue; // if the condition is met skip these instructions
}

while (i <= n){ 
	printf("%d day = %d hours\n",i, i*24);
	i++;
}

return 0;

}

