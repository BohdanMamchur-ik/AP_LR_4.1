// Мамчур Богдан ІК-12
//Алгоритмізація та програмування
//ЛР 4.1

#include <iostream>	
#include <cmath>
using namespace std;

int main() {
    double S = 0;
    int i = 1;
    while (i <= 15)
    {
        S += (sin(10 * i) + cos(10.0 / i)) / sqrt(i);
        i++;
    }
   
    cout << "S = " << S << std::endl;
    S = 0;
	i = 1;

    do
    {
        S += (sin(10 * i) + cos(10.0 / i)) / sqrt(i);
        i++;
    } while (i <= 15);
    cout << "S = " << S << std::endl;
	S = 0;

    for (i = 1; i <= 15; i++)
    {
        S += (sin(10 * i) + cos(10.0 / i)) / sqrt(i);
    }
	
    cout << "S = " << S << std::endl;
    S = 0;

    for (i = 15; i != 0; i--)
    {
        S += (sin(10 * i) + cos(10.0 / i)) / sqrt(i);
        
    } 
    cout << "S = " << S << std::endl;
    return 0;
}
