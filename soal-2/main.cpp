#include <iostream>
#include <string>

using namespace std;

struct menu
{
    string name;
    int price;
};

int main()
{
    int input, lot, total;
    bool isDone = false;
    int i = 0;

    menu foods[] = {{"Soto", 15000},
                    {"Rawon", 20000},
                    {"Pecel", 10000},
                    {"Bakso", 12500},
                    {"Siomay", 25000}};

    cout << "======= Menu Makanan =======" << endl;
    for (int i = 0; i < size(foods); i++)
    {
        cout << i + 1 << ". " << foods[i].name << "  \tHarga: " << foods[i].price << endl;
    }
    cout << "0. Selesai" << endl;
    cout << "============================" << endl;

    while (isDone == false)
    {
        cout << "Masukkan Pesanan : ";
        cin >> input;

        if (input <= 5)
        {
            if (input == 0)
            {
                isDone = true;
            }
            else
            {
                cout << "Anda Memilih " << foods[input - 1].name << endl;
                cout << "Masukkan Jumlah " << foods[input - 1].name << " : ";
                cin >> lot;

                total += foods[input - 1].price * lot;
                cout << "Total : " << total << endl;
            }
        }
        else
        {
            cout << "Tidak Ada Menu" << endl;
        }
    }

    cout << "Terima Kasih";

    return 0;
}
