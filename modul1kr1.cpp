#include <iostream>	
#include <cmath>
#include <math.h>
void num1(int num) {
	int copy_num, res = 0;
	copy_num = num;
	int count_num = 0;
	if (num < 0)
		num *= -1;
	while (num > 0) {
		count_num++;
		num /= 10;
	}
	printf("digits in numbers - %d\n", count_num);
	while (copy_num > 0) {
		res = copy_num % 10 + res;
		copy_num /= 10;
	}
	printf("summ digits = %d", res);
}
void num2(int num) {
	int copy_num, reversnum = 0;
	copy_num = num;
	if (num % 10 == 0) {
		printf("Not palendrom");
		return;
	}

	while (num > 0) {
		reversnum = reversnum * 10 + num % 10;
		num /= 10;
	}
	if (reversnum == copy_num)
		printf("palendrom");
	else
		printf("not palendrom");
}
int num3() {
	int n, m, copy_n, k;
	printf("enter number (for factorial number < 11 || for deegre num > 10) \n");
	scanf_s("%d", &n);
	copy_n = n;
	if (n < 10) {
		for (int i = 1; i < copy_n; i++) {
			n = i * n;
		}
		printf("%d", n);
	}
	else if (n >= 10) {
		printf("enter degree ");
		scanf_s("%d", &k);
		n = pow(n, k);
		printf("%d", n);
	}
	else
		return -1;
}
void num4() {
	int nextel, el, max, num;
	int count = 2;
	printf("enter number of elements : ");
	scanf_s("%d", &num);
	if (num <= 1) {
		printf("error");
		exit(0);
	}
	printf("Введите El 1 : ");
	scanf_s("%d", &el);
	max = el;
	while (count <= num) {
		printf("Введите El %d", count);
		printf(" : ");
		scanf_s("%d", &nextel);
		if (el < nextel)
			max = nextel;
		count++;
	}
	if (max % 2 == 0)
		printf("an even number");
	else
		printf("not an even number");
}
void num5() {
	int nextel, el, res = 0, num;
	int count = 2;
	printf("enter number of elements : ");
	scanf_s("%d", &num);
	if (num <= 1) {
		printf("error");
		exit(0);
	}
	printf("Введите El 1 : ");
	scanf_s("%d", &el);
	if (el % 10 == 5)
		res += el;
	while (count <= num) {
		printf("Введите El %d", count);
		printf(" : ");
		scanf_s("%d", &nextel);
		if (nextel % 10 == 5 || nextel % 10 == -5)
			res += nextel;
		count++;
	}
	if (res == 0)
		printf("the necessary elements were not found");
	else
		printf("%d", res);
}
void num6(int num) {
	if (num > 0 && (num & (num - 1)) == 0)
		printf("degree2");
	else
		printf("not degree2");
}
static void num7() {
	int nextel, el, res = 0, num, count_sq = 0;
	int count = 2;
	printf("enter number of elements : ");
	scanf_s("%d", &num);
	if (num <= 1) {
		printf("error");
		exit(0);
	}
	printf("Введите El 1 : ");
	scanf_s("%d", &el);
	if (el < 0) {
		res = el;
		count_sq = 1;
	}
	while (count <= num) {
		printf("Введите El %d", count);
		printf(" : ");
		scanf_s("%d", &nextel);
		if (nextel < 0) {
			if (res > nextel) {
				res = nextel;
				count_sq = count;
			}
		}
		count++;
	}
	if (res == 0)
		printf("the necessary elements were not found");
	else {
		printf("is element %d\n", count_sq);
		printf("el : %d\n", res);
	}
	exit(1);
}
int num8(int num) {
	if (num < 1)
		num *= -1;
	int b, res;
	short count = 2;
	b = num - 1;
	while (b > 1) {
		res = num % b;
		if (res == 0) {
			printf("not prime");
			exit(1);
		}
		b--;
	}
	printf("prime");
	return 0;
}
void num9(int num) {
	while (num > 10) {
		if (num % 10 == 9) {
			printf("There is a digit 9 in this number.");
			exit(0);
		}
		else num /= 10;
	}
	printf("haven't dig 9");
}
void num10() {
	int nextel, el, res = 0, num, size_array;
	int count = 2;
	bool flag = true;
	printf("enter number of elements : ");
	scanf_s("%d", &num);
	if (num <= 1) {
		printf("error");
		exit(0);
	}
	size_array = num;
	int* array = new int[num];
	printf("Введите El 1 : ");
	scanf_s("%d", &el);
	if (el != 0)
		array[0] = el;
	while (count <= num) {
		printf("Введите El %d", count);
		printf(" : ");
		scanf_s("%d", &nextel);
		array[count - 1] = nextel;
		if (nextel == 0)
			size_array -= 1;
		count++;
	}
	count = 0;
	int* array_sq = new int[size_array];
	for (int i = 0; i < num; i++) {
		if (array[i] != 0) {
			array_sq[count] = array[i];
			count++;
		}
	}
	printf("new squence \n");
	for (int i = 0; i < size_array; i++) {
		printf("El%d", (i + 1));
		printf(" = %d\n", array_sq[i]);
	}
	for (int i = 0; i < (size_array - 1); i += 2) {
		if (array_sq[i] * array_sq[i + 1] < 0) {
			array_sq[i] = array_sq[i + 1];
			count++;
		}
		else {
			flag = false;
			break;
		}
	}
	if (flag == true) {
		printf("squence alternating sign");
	}
	else {
		printf("squence not alternating sign");
	}
	delete[] array;
	delete[] array_sq;
}
void num11() {
	int arr[9]{ 1,2,3,4,5,6,7,123,10 };
	int min, max, count = 0, copy, minarr = arr[0], maxarr = arr[0];
	min = max = 0;
	for (int i = 0; i < 8; i++) {
		if (minarr > arr[i]) {
			min = i;
			minarr = arr[i];
		}
		else if (maxarr < arr[i]) {
			max = i;
			maxarr = arr[i];
		}
	}
	copy = arr[min];
	arr[min] = arr[max];
	arr[max] = copy;
}
void num12() {
	int nextel, el, num;
	int count = 2;
	bool flag = true;
	printf("enter number of elements : ");
	scanf_s("%d", &num);
	if (num <= 1) {
		printf("error");
		exit(0);
	}
	printf("Введите El 1 : ");
	scanf_s("%d", &el);
	while (count <= num) {
		printf("Введите El %d", count);
		printf(" : ");
		scanf_s("%d", &nextel);
		if (el < nextel) {
			el = nextel;
			count++;
		}
		else {
			flag = false;
			break;
		}
	}
	if (flag == true) {
		printf("squence increasing");
	}
	else {
		printf("squence not increasing");
	}
}
void num13(int num) {
	int copy_num = num, size_array = 0, dig0, dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8, dig9;
	dig0 = dig1 = dig2 = dig3 = dig4 = dig5 = dig6 = dig7 = dig8 = dig9 = 0;
	while (num > 0) {
		num /= 10;
		size_array++;
	}
	num = copy_num;
	int* array = new int[size_array];
	for (int i = 0; i < size_array; i++) {
		array[i] = num % 10;
		num /= 10;
	}
	for (int i = 0; i < size_array; i++) {
		switch (array[i]) {
		case 0: dig0++;
			break;
		case 1: dig1++;
			break;
		case 2: dig2++;
			break;
		case 3: dig3++;
			break;
		case 4: dig4++;
			break;
		case 5: dig5++;
			break;
		case 6: dig6++;
			break;
		case 7: dig7++;
			break;
		case 8: dig8++;
			break;
		case 9: dig9++;
			break;
		}
	}
	printf("digits 0 - %d\n", dig0);
	printf("digits 1 - %d\n", dig1);
	printf("digits 2 - %d\n", dig2);
	printf("digits 3 - %d\n", dig3);
	printf("digits 4 - %d\n", dig4);
	printf("digits 5 - %d\n", dig5);
	printf("digits 6 - %d\n", dig6);
	printf("digits 7 - %d\n", dig7);
	printf("digits 8 - %d\n", dig8);
	printf("digits 9 - %d\n", dig9);
}
void num14() { // right
	int nextel, el, num, k;
	int count = 2;
	bool flag = true;
	printf("enter how much do you want to move");
	scanf_s("%d", &k);
	printf("enter number of elements : ");
	scanf_s("%d", &num);
	if (num <= 1) {
		printf("error");
		exit(0);
	}
	int* array = new int[num];
	printf("Введите El 1 : ");
	scanf_s("%d", &el);
	array[0] = el;
	while (count <= num) {
		printf("Введите El %d", count);
		printf(" : ");
		scanf_s("%d", &nextel);
		array[count - 1] = nextel;
		count++;
	}
	for (int i = 0; i < k; i++) {
		int last = array[num - 1];
		for (int j = num - 1; j > 0; j--) {
			array[j] = array[j - 1];
		}
		array[0] = last;
	}
	for (int i = 0; i < num; i++)
		printf("%d", array[i]);
}
void num15() {
	int C = 10;
	int array[10]{ 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++) {
		if (array[i] = C) {
			printf("%d", i);
			exit(1);
		}
	}
	printf("Линейный поиск");
}
int main() {
	setlocale(0, "Ru");
	int nums;
	int input_key;
	printf("enter the task number ");
	scanf_s("%d", &input_key);
	switch (input_key) {
	case 1:
		printf("enter number ");
		scanf_s("%d", &nums);
		num1(nums);
		break;
	case 2:
		printf("enter number ");
		scanf_s("%d", &nums);
		num2(nums);
		break;
	case 3:
		num3();
		break;
	case 4:
		num4();
		break;
	case 5:
		num5();
		break;
	case 6:
		printf("enter number ");
		scanf_s("%d", &nums);
		num6(nums);
		break;
	case 7:
		num7();
	case 8:
		printf("enter number ");
		scanf_s("%d", &nums);
		num8(nums);
		break;
	case 9:
		printf("enter number ");
		scanf_s("%d", &nums);
		num9(nums);
		break;
	case 10:
		num10();
		break;
	case 11:
		printf("watch in code.");
		break;
	case 12:
		num12();
		break;
	case 13:
		printf("enter number");
		scanf_s("%d", &nums);
		num13(nums);
		break;
	case 14:
		num14();
		break;
	case 15:
		printf("watch in code.");
		break;
	}
	return 0;
}