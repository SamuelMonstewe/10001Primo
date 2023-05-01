#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int Divisores;
    int QuantidadePrimos = 0;
    int Primo10001;

    for (int i = 2; QuantidadePrimos < 10001; i++)
    {
        Divisores = 1;

        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                Divisores++;
                break;
            }
        }

        if (Divisores == 1)
        {
            Primo10001 = i;
            QuantidadePrimos++;
        }
    }

    cout << "O 10001o numero primo e: " << Primo10001 << endl;
    return 0;
}
