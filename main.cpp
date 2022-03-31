#include <iostream>
#include <cctype>
#include <unistd.h>
#include "CompactDisk.h"
#include "Date.h"

using namespace std;

int main() {
    CompactDisk disks[5];
    int chosenDisk;
    char homo, repeat;

    do {
        system("clear");
        cout << "What do you want to do? \nA) Enter the data\nB) Show data\nC) Apply a discount\n>> ";
        cin >> homo;

        switch (toupper(homo)) {
            case 'A':
                cout << "What disk do you want to handle? (1-5)\n>> ";
                cin >> chosenDisk;
                disks[chosenDisk-1].obtainData();
                break;
            case 'B':
                cout << "What disk do you want to handle? (1-5)\n>> ";
                cin >> chosenDisk;
                disks[chosenDisk-1].printData();
                break;
            case 'C':
                cout << "What disk do you want to handle? (1-5)\n>> ";
                cin >> chosenDisk;
                cout << "The retail price was: " << disks[chosenDisk-1].getPrice() << "\nThe price with the discount is: " << disks[chosenDisk-1].discount() << endl;
                break;
            default:
                cout << "That's not a real option!!!!";
        }
        cout << "Do want to make another operation?(Y/n)\n>> ";
        cin >> repeat;
    } while (toupper(repeat) == 'Y');
    cout << "Good Bye!";
    sleep(2);
    system("clear");
    return 0;
}
