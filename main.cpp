
#include <iostream>
#include <iomanip>

auto menu() -> uint32_t;

int main() {
  auto A = true;

  while (A) {
    auto value1 = 0.0;
    auto value2 = 0.0;
    auto result = 0.0;
    auto operation = menu();
    std::cout << '\n';

    if (operation == 9) {
      A = false;
      continue;
    }

    std::cout << "Enter first value: ";
    std::cin >> value1;
    std::cout << '\n';
    std::cout << "Enter second value: ";
    std::cin >> value2;
    std::cout << '\n';

    if (operation == 1) {
      result = value1 + value2;
    }
    else if (operation == 2) {
      result = value1 - value2;
    }
    else if (operation == 3) {
      result = value1 * value2;
    }
    else if (operation == 4) {
      result = value1 / value2;
    }
    else {
      A = false;
    }
    std::cout << "Result = " << result << '\n' << std::endl;
  }

  return 0;
}

auto menu() -> uint32_t {
  auto oper = 'Q';
  auto operation = 9u;
  std::cout << "'+', '-', '*', '/', 'Q': ";
  std::cin >> oper;
  switch (oper) {
    case '+':
      operation = 1;
      break;
    case '-':
      operation = 2;
      break;
    case '*':
      operation = 3;
      break;
    case '/':
      operation = 4;
      break;
    case 'Q':
    case 'q':
      operation = 9;
      break;
    default:
      operation = 0;
      break;
  }
  return operation;
}
