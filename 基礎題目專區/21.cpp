#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    float max = 0, min = 999999;
    float temp;
    for (int i = 0; i < 10; i++)
    {
        cin >> temp;
        if (temp > max)
            max = temp;
        if (min > temp)
            min = temp;
    }
    std::cout << std::fixed << std::setprecision(2);
    std::cout << std::left << "maximum:" << max << std::endl;
    std::cout << std::left << "minimum:" << min << std::endl;

    return 0;
}