#include <iostream>
#include<Windows.h>

class Pair 
{
private:
    int first;
    int second;

public:
    void Init(int h, int m) 
    {
        if (h >= 0 && m >= 0 && m < 60) 
        {
            first = h;
            second = m;
        }
        else 
        {
            std::cerr << "��������� �������� ����� ��� ������!" << std::endl;
        }
    }

    void Read() 
    {
        int h, m;
        std::cout << "������ ������: ";
        std::cin >> h;
        std::cout << "������ �������: ";
        std::cin >> m;
        Init(h, m);
    }

    void Display() 
    {
        std::cout << "������: " << first << ", �������: " << second << std::endl;
    }

    int minutes() 
    {
        return first * 60 + second;
    }
};

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Pair pair;
    pair.Read();
    pair.Display();
    int totalMinutes = pair.minutes();
    std::cout << "�������� ������� ������: " << totalMinutes << std::endl;
    return 0;
}
