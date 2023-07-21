// T3Dz8.1.D.A

#include <iostream>
#include <Windows.h>
using std::string;

int function(std::string str, int forbidden_length);

int main()
{  
    setlocale(LC_ALL, "rus");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int forb_lengh = 0;
    std::cout << "Введите запретную длину: "; std::cin >> forb_lengh;
    std::string word;
    while (true) {
           std::cout << "Введите слово: "; std::cin >> word;   
           try {
           std::cout << function(word, forb_lengh) << std::endl;
           }catch(const int &bad_length) { std::cout << "Вы ввели слово запретной длины! До свидания"; break; }
            
    }
    return 0;
}
//функция реализация
int function(string str, int forbidden_length) {
          
          if (forbidden_length == str.length())
              throw forbidden_length;
          else {
              std::cout << "Длина слова " << str << " равна ";
              return str.length();
          }         
  }

