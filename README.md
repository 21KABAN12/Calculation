#Простой калькулятор на C++

Проект реализует базовые арифметические операции с обработкой ошибок.

## Функциональность
- Сложение, вычитание, умножение, деление
- Обработка деления на ноль
- Модульные тесты

## Сборка
```bash
mkdir build && cd build
cmake ..
make

calculator/
├── CMakeLists.txt
├── src/
│   ├── main.cpp
│   └── calculator.cpp
├── include/
│   └── calculator.h
├── tests/
│   └── test_calculator.cpp
└── README.md