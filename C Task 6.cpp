//https://github.com/hazemabdo15/Task-6.git
#include<stdio.h>
#include<string.h>
char original_arr[100];
char reverse_arr[100];
void readfile(void) {
	FILE* fptr = fopen("C:/Users/HP/source/repos/C Task 6/Task 6.txt", "r");
	char word[100];
	fgets(word, sizeof(word), fptr);
	strcpy(original_arr, word);
	printf("File opened successfully\n");
	fclose(fptr);
}
void reverse(char arr[], char arr2[]) {
	int i;
	char *ptr;
	ptr = &arr[3];
	for (i = 0; i < 5; i++) {
		arr2[i] = *ptr;
		ptr--;
	}
}
void printfile() {
	FILE* fptr = fopen("C:/Users/HP/source/repos/C Task 6/Task 6.txt", "a");
	fprintf(fptr,"\n");
	fputs(reverse_arr, fptr);
}
int main() {
	readfile();
	printf("String input from file : %s\n", original_arr);
	printf("Reversed string : ");
	reverse(original_arr,reverse_arr);
	printf("%s\n", reverse_arr);
	printfile();
	printf("The reversed word is added to the file successfully !");
}