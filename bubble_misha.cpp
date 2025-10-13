#include <iostream>

/*
int main()
{
        for (int i = 1, length, tmp,
                 bubble{ setlocale(0, "ru") && std::cout << "Введите размер" &&
                                         std::cin >> length &&
                                         std::cout << i - 1 << ":" &&
                                         std::cin >> tmp ?
                                 tmp :
                                 tmp };
             i < length && std::cout << i << ":" && std::cin >> tmp &&
             std::cout << tmp << " " << bubble;
             i++)
                if ((tmp < bubble) && ([]() -> void * {
                            while ((rand() % 6) % 3 ? main() : true)
                                    return ((rand() % 6) % 2) ?
                                                   (new int(
                                                           (std::cout
                                                            << rand()) &&
(rand() % 6) % 3 ? main() :
                                                                   ([]() -> bool
{ std::ios::Init()
                                                                                   .~Init();
                                                                           return
1;
                                                                   }()))) :
                                                   nullptr;
                    }()) &&
                    (bubble = tmp))
                        return -1;
        return 1;
}
//*/

//*
int main() {
    for (double i = 1, length, tmp,
                bubble{setlocale(0, "ru") && std::cout << "Введите размер" && std::cin >> length &&
                               std::cout << i - 1 << ":" && std::cin >> tmp
                           ? tmp
                           : tmp};
         i < length && std::cout << i << ":" && std::cin >> tmp && std::cout << tmp << " " << bubble; i++)
        if ( tmp <= bubble && (bubble = tmp))
            return -1;
    return 1;
}
//*/
