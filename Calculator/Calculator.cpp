﻿#include <iostream> // подключение библиотеки что бы использовать ввод \ вывод

#include <cmath> // подключение библиотеки что бы использовать математические функции типо степени

int main() // главная функция
{

    setlocale(LC_ALL, "Russian"); // нужен для русского языка

    std::cout << "Приветствую я программа калькулятор от новичка в с++,койнова андрея витальевича, 1 курса\n" << std::endl;


   
    int num_one; // регистрация 1 переменной
    int num_two; // регистрация 2 переменной
    char operation; // регистрация 3 переменной

    operation = 0;

    while (true) // цикл с условием что бы бескончено использовать калькулятор
    {

        std::cout << "введите первое число(или если вы собирайтесь возводить в степень то первое число это число,а второе число это степень в которую надо возводить первое. )" << std::endl;

        std::cin >> num_one; // оператор ввода первого числа

        std::cout << "введите второе число" << std::endl; 

        std::cin >> num_two; // оператор ввода второго числа
       
        std::cout << "введите оперцию +, -, /, *, p - возведение в степень,если на этом этапе введете 'q' то произойдет выход из цикла - программы." << std::endl;

        std::cin >> operation; // оператор ввода операции

        if (operation == 'q') // проверки переменной на символ что бы закончить программу 
        {
            break;
        }

        switch (operation) // оператор свитч сравнивает константы и сокращает код заместо if else и тд
        {
            case '+':
                std::cout << "Сумма двух чисел = " << num_one + num_two << std::endl;
                break;
            case '-':
                std::cout << "Разница двух чисел = " << num_one - num_two << std::endl;
                break;
            case '*':
                std::cout << "Умножение двух чисел = " << num_one * num_two << std::endl;
                break;
            case '/':
                std::cout << "Деление двух чисел = " << num_one / num_two << std::endl;
                break;
            case 'p':
                std::cout << "Возведение в степень = " << pow(num_one, num_two) << std::endl;
                break;
        }
    }




    return 0; // оповещение того что программа закончилась и пора выключать ее.

}

