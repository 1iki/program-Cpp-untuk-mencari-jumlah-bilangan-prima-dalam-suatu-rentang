#include <iostream>

using namespace std;

int main() {
  int min, max;
  cout << "Masukkan batas minimum: ";
  cin >> min;
  cout << "Masukkan batas maksimum: ";
  cin >> max;

  int count = 0;
  for (int i = min; i <= max; i++) {
    bool isPrime = true;
    for (int j = 2; j * j <= i; j++) {
      if (i % j == 0) {
        isPrime = false;
        break;
      }
    }
    if (isPrime) {
      cout << i << " ";
      count++;
    }
  }

  cout << endl;
  cout << "Banyaknya bilangan prima adalah " << count << endl;

  return 0;
}

