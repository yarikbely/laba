#include <iostream>

int main(){
	setlocale(LC_ALL, "RU");
	//unsigned int x = 7; //7=00000111
	unsigned int x = 98;//98=01100010
	// unsigned int x = 241;//241=11110001
	int i;
	int y = 1;
	std::cout << "Введите какой бит числа вы хотите узнать: ";
	std::cin >> i;
	x = (x << 7-i );
	x = (x >> );
	std::cout << "Он равен: " << x;

	return 0;
  
}

