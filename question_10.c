#include <stdio.h>

int main(void) {
	// Assignment - 1
	/*Q10)Write a program that prints the next character from the ASCII table for the corresponding character
taken from the keyboard. As for example if the character taken from the keyboard is âBâ the program will
print the immediate next character âCâ. Also, print the corresponding ASCII value.
	*/
	char character;
    printf("Enter Character: ");
	scanf("%c", &character);
	printf("Next Character: %c\nIts ASCII: %d\n", character+1, character+1);
	return 0;
}
