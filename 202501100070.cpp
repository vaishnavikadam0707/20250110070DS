
#include <iostream>
using namespace std;

// PRN: 202501100070
// Scenario: Cold-drink flavours
// Hash Function: Division Method

const int SIZE = 23;

int hashFunction(int key)
{
    return key % SIZE;
}

int main()
{
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

    cout << "\n\nDivision Method Hash Calculation:\n";

    for (int i = 0; i < 20; i++)
    {
        cout << "Key: " << values[i]
             << " -> Index: "
             << hashFunction(values[i])
             << endl;
    }

    return 0;
}

