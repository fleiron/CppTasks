/*  Перше завдання
#include <iostream>
using namespace std;

int main() {
    int a, b, c, n;

    cout << "Введіть три цілих числа: ";
    cin >> a >> b >> c;

    cout << "Введіть останню цифру порядкового номера: ";
    cin >> n;

    if (a >= 1 && a <= n) {
        cout << a << " ";
    }
    if (b >= 1 && b <= n) {
        cout << b << " ";
    }
    if (c >= 1 && c <= n) {
        cout << c << " ";
    }

    return 0;
}
Друге завдання
#include <iostream>

using namespace std;

int main() {
  int a, b, c;

  cout << "Введіть 3 числа: ";
  cin >> a >> b >> c;

  int min = a;
  int max = a;

  if (b < min) {
    min = b;
  }
  if (c < min) {
    min = c;
  }

  if (b > max) {
    max = b;
  }
  if (c > max) {
    max = c;
  }

  if (n % 2 == 0) {
    cout << "Мінімальне значення: " << min << endl;
  } else {
    cout << "Максимальне значення: " << max << endl;
  }

  return 0;
}

Третє завдання
#include <iostream>

using namespace std;

int main() {
  int n;
  double sum = 1;

  cout << "Введіть кількість елементів: ";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    sum *= 0.5;
    cout << sum << " ";
  }

  cout << endl << "Сума: " << sum << endl;

  return 0;
}

Четверте завдання

#include <iostream>

using namespace std;

int main() {
  int n;

  cout << "Введіть ціле число (не менше 2): ";
  cin >> n;

  int i = 2;
  while (n % i != 0) {
    i++;
  }

  cout << "Найменший дільник: " << i << endl;

  return 0;
}

П'яте завдання

#include <iostream>

using namespace std;

int main() {
  int a = 0, b = 1, n;

  cout << "Введіть кількість чисел: ";
  cin >> n;

  cout << a << " " << b << " ";
  for (int i = 3; i <= n; i++) {
    int c = a + b;
    cout << c << " ";
    a = b;
    b = c;
  }

  cout << endl;

  return 0;
}

Шосте завдання

#include <iostream>
#include <random>

using namespace std;

int main() {
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> dist(0, 20);

  int number = dist(gen);
  int guess;

  cout << "Введіть число від 0 до 20: ";
  cin >> guess;

  int attempts = 1;
  while (guess != number) {
    if (guess < number) {
      cout << "Запропоноване число менше задуманого." << endl;
    } else {
      cout << "Запропоноване число більше задуманого." << endl;
    }

    attempts++;
    cout << "Введіть число від 0 до 20: ";
    cin >> guess;
  }

  cout << "Ви вгадали число з " << attempts << " разу!" << endl;






*\