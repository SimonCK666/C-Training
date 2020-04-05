/**
* selectSort.c
* @author bulbasaur
* @description 
* @created 2020-03-28T09:58:29.210Z+08:00
* @copyright None 
* None
* @last-modified 2020-03-28T11:03:07.803Z+08:00
*/

// 题目：对10个数进行排序。

// 程序分析：可以利用选择法，即从后9个比较过程中，选择一个最小的与第一个元素交换， 下次类推，即用第二个元素与后8个进行比较，并进行交换


// #include <stdio.h>
// #define SIZE 100

// void ascendingSort(int num[], int count);

// int main() {
//     int num[SIZE], count, i;
//     printf("How many numbers do you want to input: ");
//     scanf("%d", &count);

//     printf("Please input the numbers one by one: ");
//     for (i = 0; i < count; i++)
//     {
//         /* code */
//         scanf("%d", &num[i]);
//     }
    

//     ascendingSort(num[SIZE], count);
    
    
// }

// void ascendingSort(int num[], int count) {
//     int temp = 0, i, j, k;
//     for (i = 0; i < count; i++)
//     {
//         /* code */
//         for (j = i + 1; j < count; j++)
//         {
//             /* code */
//             if (num[i] > num[j])
//             {
//                 /* code */
//                 temp = num[i];
//                 num[i] = num[j];
//                 num[j]= temp;
//             }
            
//         }
        
//     }
    
//     printf("The number ascending sort is :\n");
//     for (k = 0; k < count; k++)
//     {
//         /* code */
//         printf("%d\t", num[k]);
//     }
    

//     printf("\n");

// } 

#include <stdio.h>

// The custom macros
#define SIZE 50

//Definite the function to sor numbers
void sort_numbers_ascending(int number[], int count);
void sort_numbers_descending(int number[], int count);

int main() {
	int number[SIZE], i, count;
	printf("How many numbers you want to enter:");
    scanf("%d", &count);
    printf("\nEnter the numbers one by one:");

	// input numbers one by one
	for (i = 0; i < count; ++i) {
		scanf("%d", &number[i]);
	}

	// call these two functions
	sort_numbers_ascending(number, count);
	sort_numbers_descending(number, count);
}

// Function to sort numbers in ascending
void sort_numbers_ascending(int number[], int count) {
	int temp, i, j, k;
	for (j = 0; j < count; ++j) {
		for (k = j + 1; k < count; ++k) {
			// Sort numbers
			if (number[j] > number[k]) {
				temp = number[j];
				number[j] = number[k];
				number[k] = temp;
			}
		}
	}

	/* Numbers in ascending order: */
	printf("Numbers in ascending order:\n");
	for (i = 0; i < count; ++i) {
		printf("%d\t", number[i]);
	}
	
	printf("\n");
}


// Function to sort numbers in descending
void sort_numbers_descending(int number[], int count) {
	int temp, i, j, k;
	for (j = 0; j < count; ++j) {
		for (k = j + 1; k < count; ++k) {
			// Sort numbers
			if (number[j] < number[k]) {
				temp = number[j];
				number[j] = number[k];
				number[k] = temp;
			}
		}
	}

	/* Numbers in descending order: */
	printf("Numbers in descending order:\n");
	for (i = 0; i < count; ++i) {
		printf("%d\t", number[i]);
	}
	
	printf("\n");
}