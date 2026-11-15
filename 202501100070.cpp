
#include <iostream>
using namespace std;

// PRN: 202501100070
// Scenario: Cold-drink flavours
// Dataset Size: 20
// Hash Table Size: 23
// Hash Function: Division Method
// Collision Strategy: Linear Probing

const int SIZE = 23;
const int N = 20;

int hashFunction(int key)
{
    return key % SIZE;
}

void displayTable(int table[])
{
    cout << "\nFINAL HASH TABLE\n";
    cout << "-------------------------\n";

    cout << "Index\tValue\n";

    for (int i = 0; i < SIZE; i++)
    {
        cout << i << "\t";

        if (table[i] == -1)
            cout << "EMPTY";
        else
            cout << table[i];

        cout << endl;
    }
}

int main()
{
    int values[N] = {
        70, 83, 96, 9, 22,
        35, 48, 61, 74, 87,
        0, 13, 26, 39, 52,
        65, 78, 91, 4, 17
    };

    int table[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        table[i] = -1;
    }

    cout << "COLD-DRINK FLAVOUR HASH TABLE\n";
    cout << "PRN: 202501100070\n";
    cout << "Hash Table Size: " << SIZE << endl;

    cout << "\nPersonalized Dataset:\n";

    for (int i = 0; i < N; i++)
    {
        cout << values[i] << " ";
    }

    cout << "\n\nINSERTION TRACE\n";
    cout << "-------------------------\n";

    for (int i = 0; i < N; i++)
    {
        int key = values[i];

        int index = hashFunction(key);
        int originalIndex = index;

        while (table[index] != -1)
        {
            cout << "Collision for " << key
                 << " at index " << index << endl;

            index = (index + 1) % SIZE;
        }

        table[index] = key;

        cout << "Key: " << key
             << " | Hash Index: " << originalIndex
             << " | Inserted At: " << index
             << endl;
    }

    displayTable(table);

    return 0;
}




