#include <iostream>
#include <random>

//* TRUE RANDOM
int main(int argc, char *argv[])
{
	std::random_device dev;
	std::mt19937 gen(dev());
	std::uniform_int_distribution<unsigned long long int> x;
	std::cout << x(gen) << std::endl;
}
//*/

/* SHITTY VERSION
 int main() {
    std::random_device rd; // класс стандартной библиотеки который в буквальном смысле .... ну............          использует тепловой шум процессора ... ну и всё:1
    std::mt19937 gen(rd()); // щас скажу да да да многоточие...... Эта твистер мерсена он совершает какое-то хитровыебанное преобразованние от полученного ранее шума (что=то связанное с 2^19937) ла всё std::endl
    std::uniform_int_distribution<int> x;// кастуем инт всё
    while (true) std::cout << x(gen) << (x(gen)) << "         2122                     " << char(1 + rand() % 230) << "       1222              " << "    123123                          " << x(gen) << "    123123                          " << x(gen) << "    123123                          " << x(gen) << "    123123                          " << "    123123                          " << x(gen) << "    123123                          " << x(gen) << "    123123                          " << x(gen) << "    123123 " << x(gen) << char(x(gen)) << "         2122                     " << char(1 + rand() % 230) << "       1222              " << "    123123                          " << x(gen) << "    123123                          " << x(gen) << "    123123                          " << x(gen) << "    123123                          " << "    123123                          " << x(gen) << "    123123                          " << x(gen) << "    123123                          " << x(gen) << "    123123 " << x(gen) << char(x(gen)) << "         2122                     " << char(1 + rand() % 230) << "       1222              " << "    123123                          " << x(gen) << "    123123                          " << x(gen) << "    123123                          " << x(gen) << "    123123                          " << "    123123                          " << x(gen) << "    123123                          " << x(gen) << "    123123                          " << x(gen) << "    123123 " << std::endl;
}
//*/
