#include <iostream>
using namespace std;
int main()
{
	const int NUMBERMAX_BOAT = 10; /// Количество кораблей.
	const int NUMBERMAX_BOAT_TYPE = 5; /// Количество типов кораблей.
	const int NUMBERMAX_PALUB = 4; /// Mаксимальное количество палуб.
	const int NUMBER_BOAT_PALUB[NUMBERMAX_BOAT_TYPE] =
	{ 0, 4, 3, 2, 1          /// однопалубных у нас будет 4, ну и т.д..
	};
}
class Ship
{
public:
    bool trySet(int _x, int _y, int _rotation)
    {
        bool isSet = true;
        //код пытается воткнуть кораблик в указанную позицию
        //возвращает true в случае успеха
        return isSet;
    }

    void remove()
    {
        //удаляет кораблик с поля
    }

    int x, y;
    int rotation;
};

void setShip(Ship* shipList, Ship* endShipList)
{
    //продолжаем до победного конца
    while (true)
    {
        //пытаемся распихать все кораблики по рандомным позициям
        Ship* ship = shipList;
        for (; ship < endShipList; ++ship)
        {
            if (!ship->trySet(rand() % 10, rand() % 10, rand() % 2))
            {
                //ежели какой кораблик не встает куда сказано,
                //смахиваем все корабли и начинаем сначала
                for (; ship >= shipList; --ship)
                    ship->remove();
                break;
            }
        }
        if (ship == endShipList)
            return;
    }
}