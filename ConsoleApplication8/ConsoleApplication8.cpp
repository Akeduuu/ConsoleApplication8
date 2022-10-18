#include <iostream>
#include<conio.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	const int N = 5;
	int map[N][N] = { 0 };
	int x, y;
	for (int i = 0; i < 5; i++);
	{
		x = rand() % N;
		y = rand() % N;
		map[x][y] = 1;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
		{
			cout << map[i][j] << "\t";
		}
	}

	cout << endl;
	while (true)
	{
		cout << "Введите координаты цели: " << endl;
		cin >> x;
		cin >> y;
		if (map[x][y] == 1) {
			cout << "Попал" << endl;
			map[x][y] = 0;
		}
		else {
			cout << "Промах" << endl;
		}

	}

	char ch = _getch();
	//system("pause");
	return 0;
}
