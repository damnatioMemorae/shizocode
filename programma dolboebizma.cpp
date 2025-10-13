
#include <iostream>
#include <random>
void cout(std::string word) {
    std::cout << word << std::endl;
}
void cout(long long int num) {
    std::cout << num;
}
void digits(long long int num) {
    short res = 0;
    if (num < 0)
        num = num * (-1);
    else if (num == 0) {
        cout(1);
        exit(3);
    }
    while (num > 0) {
        num /= 10;
        res++;
    }
    std::cout << " -- ";
    cout(res);
}
void simplest(long long int num) {
    int res, num1, count;
    short digit;
    num1 = num - 1;
    count = num;
    while (count > 2) {
        count = count - 1;
        digit = num % num1;
        if (digit == 0) {
            std::cout << " -- ";
            cout("не простое");
            break;
        }
        num1 = num1 - 1;
    }
    if (digit != 0)
        cout(" -- Простое");
}
void palendrom(long long int num) {
    long long int res = 0;
    short count=0;
    if (num % 10 == 0) {
        std::cout << " -- ";
        std::cout << "не является";
        exit(0);
    }
    while (num > 0) {
        count = num % 10;
        res = res * 10 + count;
        num /= 10;
    }
    if (res == num) {
        std::cout << " -- ";
        cout("Число является палендромом");
    }
    else {
        std::cout << " -- ";
        cout("Число не является палeндромом");
    }
}
void maximum(long long int num) {
    long long int max = 0, count = 1, el;
    while (count <= num) {
        if (num < 1) {
            std::cout << " -- ";
            cout("error");
            exit(0);
        }
        std::cout << " -- ";
        cout("Введите элемент последовательности : ");
        std::cin >> el;
        if (el > max)
            max = el;
        count++;
    }
    cout(max);
}
void checkdigit(int long long num) {
    int num1, count, digit = 0, checked;
    cout("Введите какую цифру вы хотите проверить : ");
    std::cin >> checked;
    while (num > 0) {
        digit = num % 10;
        if (digit == checked) {
            std::cout << " -- ";
            cout("Содержит.");
            exit(0);
        }
        num /= 10;
    }
    std::cout << " -- ";
    cout("Не содержит");
}
void alternatingSign(long long int num) {
    long long int nextel, el;
    short count = 2;
    bool flag=true;
    if (num < 1) {
        std::cout << " -- ";
        cout("error");
        exit(0);
    }
    std::cout << " -- ";
    std::cout << "Введите El 1 : ";
    std::cin >> el;
    while (count <= num) {
        std::cout << " -- ";
        std::cout << "Введите El " << count << " : ";
        std::cin >> nextel;
        if (el * nextel < 0) {
            el = nextel;
            count++;
        }
        else flag = false;
    }
    if (flag == true) {
        std::cout << " -- ";
        cout("Ряд знакочередующийся.");
    }
    else {
        std::cout << " -- ";
        cout("Ряд не знакочередующийся.");
    }
}
void increasing(long long int num) {
    long long int nextel, el;
    short count = 2;
    bool flag;
    if (num < 1) {
        std::cout << " -- ";
        cout("error");
        exit(0);
    }
    std::cout << " -- ";
    std::cout << "Введите El 1 : ";
    std::cin >> el;
    while (count <= num) {
        std::cout << " -- ";
        std::cout << "Введите El " << count << " : ";
        std::cin >> nextel;
        if (el < nextel) {
            el = nextel;
            count++;
        }
        else flag = false;
    }
    if (flag == true) {
        std::cout << " -- ";
        cout("Последовательность возрастающая");
    }
    else {
        std::cout << " -- ";
        cout("Последовательность не является возрастающей.");
    }
}
void howmuchdigits(long long int num) {
    short res = 0, exm;
    cout("Введите цифру, которую хотите проверить");
    std::cin >> exm;
    if (num < 0)
        num *= -1;
    else if (num == 0) {
        std::cout << " -- ";
        cout("0");
        exit(1);
    }
    if (num == exm) {
        std::cout << " -- ";
        cout("0");
        exit(2);
    }
    while (num > 0) {
        if (num % 10 == exm)
            res++;
        num /= 10;
    }
    std::cout << " -- ";
    std::cout << "Данных цифр в числе : " << res;
}
void Fibbonachi(short num) {
    size_t num1 = 0, num2 = 1, res;
    if (num == 1)
        std::cout << "F(0)n : 0" << std::endl;
    else if (num == 0)
        std::cout << "F(1)n : 1" << std::endl;
    else if (num < 0) {
        cout("Error");
        exit(2);
    }
    short count = 2;
    while (count <= num) {
        res = num1 + num2;
        num1 = num2;
        num2 = res;
        count++;
    }
    std::cout << " -- ";
    std::cout << "F(" << num << ")n : " << num2 << std::endl;
}
void calc() {
        setlocale(LC_ALL, "Ru");
        int num1, num2, res;
        char math;
        std::cout << " -- ";
        cout("введите число 1 ");
        std::cin >> num1;
        std::cout << " -- ";
        cout("введите число 2 ");
        std::cin >> num2;
        std::cout << " -- ";
        cout("введите math ");
        std::cin >> math;

        if (math == '+')
            res = num1 + num2;

        if (math == '-')
            res = num1 - num2;

        if (math == '*')
            res = num1 * num2;


        if (math == '/')
            res = num1 / num2;
        std::cout << " -- ";
        std::cout << res;
       
}
void genn() {
    srand(time(NULL));
    std::random_device rd; // класс стандартной библиотеки который в буквальном смысле .... ну............          использует тепловой шум процессора ... ну и всё:1
    std::mt19937 gen(rd()); // щас скажу да да да многоточие...... Эта твистер мерсена он совершает какое-то хитровыебанное преобразованние от полученного ранее шума (что=то связанное с 2^19937) ла всё std::endl
    std::uniform_int_distribution<int> x;// кастуем инт всё
    while (true) {
        new int; // перегрузка памяти
        std::cout << x(gen) << (x(gen)) << "         2122                     " << char(1 + rand() % 230) << "       1222              " << "    123123                          " << x(gen) << "    123123                          " << x(gen) << "    123123                          " << x(gen) << "    123123                          " << "    123123                          " << x(gen) << "    123123                          " << x(gen) << "    123123                          " << x(gen) << "    123123 " << x(gen) << char(x(gen)) << "         2122                     " << char(1 + rand() % 230) << "       1222              " << "    123123                          " << x(gen) << "    123123                          " << x(gen) << "    123123                          " << x(gen) << "    123123                          " << "    123123                          " << x(gen) << "    123123                          " << x(gen) << "    123123                          " << x(gen) << "    123123 " << x(gen) << char(x(gen)) << "         2122                     " << char(1 + rand() % 230) << "       1222              " << "    123123                          " << x(gen) << "    123123                          " << x(gen) << "    123123                          " << x(gen) << "    123123                          " << "    123123                          " << x(gen) << "    123123                          " << x(gen) << "    123123                          " << x(gen) << "    123123 " << std::endl;
    }
}
int main() {
    long long int num;
    int input_key;
    setlocale(0, "ru");
    std::cout << "                                            key                         " << std::endl;
    std::cout << "                                                                        " << std::endl;
    std::cout << "  --  Что вы хотите проверить?                                          " << std::endl;
    std::cout << "  --  Сколько цифр в числе                    (0)                       " << std::endl;
    std::cout << "  --  Является ли число простое?              (1)                       " << std::endl;
    std::cout << "  --  Является ли число палендромом?          (2)                       " << std::endl;
    std::cout << "  --  Наибольший элемент последовательности?  (3)                       " << std::endl;
    std::cout << "  --  Есть ли цифра в числе?                  (4)                       " << std::endl;
    std::cout << "  --  Знакочередующийся ли ряд?               (5)                       " << std::endl;
    std::cout << "  --  Возрастающая последоваетльность?        (6)                       " << std::endl;
    std::cout << "  --  Сколько цифр находится в числе?         (7)                       " << std::endl;
    std::cout << "  --  N-ый элемент Фиббоначи?                 (8)                       " << std::endl;
    std::cout << "  --  Простейший калькулятор                  (9)                       " << std::endl;
    std::cout << "  --  Пугать преподователя(+звук)             (10)                      " << std::endl;
    std::cout << "  --  В разработке...                                                   " << std::endl;
    std::cout << "                                                                        " << std::endl;
    std::cout << "                                                                        " << std::endl;
    std::cout << " -- ";
    std::cin >> input_key;
    switch (input_key) {
    case 0:
        cout("  -- -- Cколько цифр в числе ");
        cout("Введите число : ");
        std::cout << "  -- ";
        std::cin >> num;
        digits(num);
        break;
    case 1:
        cout("  -- -- Простотое число");
        cout("  -- Введите число : ");
        std::cout << " -- ";
        std::cin >> num;
        simplest(num);
        break;
    case 2:
        cout("  -- -- Число паледнром");
        cout(" -- Введите число : ");
        std::cout << "  -- ";
        std::cin >> num;
        palendrom(num);
        break;
    case 3:
        cout("  -- -- Наибольший элемент последовательности");
        cout("  -- Введите кол-во элементов в последовательности : ");
        std::cout << "  -- ";
        std::cin >> num;
        maximum(num);
        break;
    case 4:
        cout("  -- -- Цифра в числе");
        cout("  -- Введите число : ");
        std::cout << " -- ";
        std::cin >> num;
        checkdigit(num);
        break;
    case 5:
        cout("  -- -- Знакочередующийся ряд");
        cout("  -- Введите кол-во элементов в последовательности :  ");
        std::cout << "  -- ";
        std::cin >> num;
        alternatingSign(num);
        break;
    case 6:
        cout("  -- --Возрастающая последовательность");
        cout("  --Введите кол-во элементов в последовательности :  ");
        std::cout << " -- ";
        std::cin >> num;
        increasing(num);
        break;
    case 7:
        cout("  -- -- Сколько цифр в числе");
        cout("  -- Введите число : ");
        std::cout << "  -- ";
        std::cin >> num;
        howmuchdigits(num);
        break;
    case 8:
        cout("  -- -- Фиббоначи");
        cout("  -- Введите число : ");
        std::cout << "  -- ";
        std::cin >> num;
        Fibbonachi(num);
        break;
    case 9:
        cout("  -- -- Калькулятор");
        calc();
        break;
    case 10:
        genn();
    }
}
        







