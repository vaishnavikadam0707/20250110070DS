
#include <iostream>
using namespace std;

// PRN: 202501100070
// Scenario: Cold-drink flavours

int main()
{
    const int SIZE = 23;

    int values[20] = {
        70, 83, 96, 9, 22,
        35, 48, 61, 74, 87,
        0, 13, 26, 39, 52,
        65, 78, 91, 4, 17
    };

    cout << "COLD-DRINK FLAVOUR HASH TABLE\n";
    cout << "PRN: 202501100070\n";
    cout << "Hash Table Size: " << SIZE << endl;

    cout << "\nPersonalized Dataset:\n";

    for (int i = 0; i < 20; i++)
    {
        cout << values[i] << " ";
    }

    cout << endl;

    return 0;
}
