#include <iostream>
using namespace std;
/*
int main() { // skolko cifr v chisle
  int n, copy_n, count;
  count = 0;
  cin >> n;
  if (n < 0) {
    n = n * (-1);
  }
  else if (n == 0) {
    cout << "Error";
    exit(2);
  }

  while (n > 0) {
    n /= 10;
    count++;
  }
  cout << count;
  return 123;
}
//*/
/*
int main() { // palendorm
  setlocale(0, "ru");
  int res, n, copy_n,count;
  res = 0;
  count = 0;
  cin >> n;
  copy_n = n;
  while (n > 0) {
    count = n % 10;
    n /= 10;
    res =res*10+count;
  }
  if (copy_n == res)
    cout << "число палендром";
  else cout << "нет";
  return 0;
}
//*/
/*
int main() // простое
{
  setlocale(LC_ALL, "Ru");
  size_t num, b, count;
  short a;
  std::cin >> num;
  a = 0;
  b = num - 1;
  count = num;
  while (count > 2) {
    count = count - 1;
    a = num % b;
    if (a == 0) {
      std::cout << " не простое ";
      break;
    }
    b = b - 1;
  }
  if (a != 0) {
    std::cout << "простое";
  }
  return 0;
  //*/
/*
  int main() { // максимум
    setlocale(0, "ru");
    int n, max=0, count=1, a;//a-очередной эл-т послед.
    cout << "Введите кол-во элементов последовательности : ";
    cin >> n;
    while (count <= n) {
      cout << "введите элемент: ";
      cin >> a;
      if (a > max)
        max = a;
        count++;
    }
    cout << max;
  }
  //*/
/*
  int main() { // содержит ли цифру 7?
    setlocale(0, "Ru");
    int num, count, digit;
    bool flag = true;
    cout << "введите число : ";
    cin >> num;
    digit = 0;
    while (num > 0) {
      digit = num%10;
      num /= 10;
      if (digit != 7)
        flag = false;
    }
    if (flag == true)
      cout << "содержит";
    else
      cout << "Не содержит";
    return 0;
  }
  //*/
/* последовательность знакочеред.?
  int main() {
    setlocale(0, "ru");
    int Elements, firstel, count, nextel;
    bool flag=true;
    cout << "Введите кол-во элементов последовательности : " << endl;
    cin >> Elements;
    if (Elements <= 1) {
      cout << "Error";
      exit(1);
    }
    cout << "El1 :";
    cin >> firstel;
    count = 2;
    while (Elements >= count) {
      cout << "El" << count << " :";
      cin >> nextel;
      if (firstel * nextel < 0) {
        firstel = nextel;
        count++;
      }
      else {
        flag = false;
        break;
      }
    }
    if (flag == true)
      cout << "Последовательность законочеред.";
    else
      cout << "Последовательность не законочеред.";
    return 12;
  }
  //*/
/* последовательность возрастающая?
  int main() {
    setlocale(0, "ru");
    int Elements, firstel, count, nextel;
    bool flag = true;
    cout << "Введите кол-во элементов последовательности : " << endl;
    cin >> Elements;
    if (Elements <= 1) {
      cout << "Error";
      exit(1);
    }
    cout << "El1 :";
    cin >> firstel;
    count = 2;
    while (Elements >= count) {
      cout << "El" << count << " :";
      cin >> nextel;
      if (firstel < nextel) {
        firstel = nextel;
        count++;
      }
      else {
        flag = false;
        break;
      }
    }
    if (flag == true)
      cout << "Последовательность возрастающая";
    else
      cout << "Последовательность не возрастающая";
    return 12;
  }
  //*/
/* сколько цифр 7 в числе (через массив)
  int main() {
    setlocale(0, "Ru");
    size_t num, size_array = 0, count = 0, copy_num;
    cin >> num;
    copy_num = num;
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
      if (array[i] == 7)
        count++;
    }
    delete[] array;
    cout << "В данном числе ровно " << count << " цифр 7";
    return 0;
  }
  //*/
/* без массива
  int main() {
    size_t a, count = 0;
    cin >> a;
    while (a > 0) {
      if (a % 10 == 7)
        count++;
      a /= 10;
    }
    cout << count;
  }
  //*/
  