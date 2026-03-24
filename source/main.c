#include <stdio.h>
#include <stdint.h>
#include <ctype.h>
#include <string.h>

#define CHIP8_MEMORY_SIZE	4096
#define CHIP8_DISPLAY_WIDTH	64
#define CHIP8_DISPLAY_HEIGHT	32
#define V_REGISTER_COUNT	16
#define STACK_DEPTH		16
#define CHIP8_KEY_COUNT		16

void lab_7_task_4(){
		int A[15];
		int i;
		int max, min;
		int maxI = 0, minI = 0;
		int temp;

		printf("Введите 15 элементов массива:\n");

		for (i = 0; i < 15; i++) {
			scanf("%d", &A[i]);
		}

		max = min = A[0];

		for (i = 1; i < 15; i++) {
			if (A[i] > max) {
				max = A[i];
				maxI = i;
			}

			if (A[i] < min) {
				min = A[i];
				minI = i;
			}
		}

		temp = A[maxI];
		A[maxI] = A[minI];
		A[minI] = temp;

		printf("Измененный массив:\n");

		for (i = 0; i < 15; i++) {
			printf("%d ", A[i]);
		}
	}
void lab_7_task_5(){
		int A[15];
		int i;
		int bolshe_0 = 0, menshe_0 = 0, nolik = 0;

		printf("Введите 15 элементов массива:\n");

		for (i = 0; i < 15; i++) {
			scanf("%d", &A[i]);

			if (A[i] > 0)
				bolshe_0++;
			else if (A[i] < 0)
				menshe_0++;
			else
				nolik++;
		}

		printf("Положительных: %d\n", bolshe_0);
		printf("Отрицательных: %d\n", menshe_0);
		printf("Нулевых: %d\n", nolik);
	}
void lab_7_task_6(){
		int A[4][4];
		int i, j;
		int count = 0;

		printf("Введите элементы матрицы 4x4:\n");

		for (i = 0; i < 4; i++) {
			for (j = 0; j < 4; j++) {
				scanf("%d", &A[i][j]);

				if (A[i][j] > 0)
					count++;
			}
		}

		printf("Количество элементов больше нуля: %d\n", count);
	}
void lab_9_task_3(){
	char text[1000];

	printf("Введите текст: ");
	fgets(text, sizeof(text), stdin);

	for (int i = 0; text[i] != '\0'; i++) {
		if (isalpha(text[i])) {
			int pos = tolower(text[i]) - 'a' + 1;
			printf("%d ", pos);
		}
		else {
			printf("%c", text[i]);
		}
	}
}
void lab_9_task_10(){
		char text[1000];
		char symbol;
		int k;

		printf("Введите строку: ");
		fgets(text, sizeof(text), stdin);

		printf("Введите символ: ");
		scanf(" %c", &symbol);

		printf("Введите k: ");
		scanf("%d", &k);

		int countWords = 0;
		int countSymbol = 0;

		for (int i = 0; i <= strlen(text); i++) {
			if (text[i] == symbol) {
				countSymbol++;
			}

			if (text[i] == ' ' || text[i] == '\0' || text[i] == '\n') {
				if (countSymbol == k) {
					countWords++;
				}
				countSymbol = 0;
			}
		}

		printf("Количество слов: %d\n", countWords);
	}
}
int main() {
	lab_7_task_4();
	lab_7_task_5();
	lab_7_task_6();
	lab_9_task_3();
	lab_9_task_10();
	printf("Hello, Wolrld!\n");
	typedef struct Chip8State{
		int a;
		int b;
	};
	return 0;
}
