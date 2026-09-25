#include <iostream>
using namespace std;

int main() {
    // Use 'double' for measurements with potential decimals
    double lablength, labwidth, labarea, tilearea;
    int numOfTiles; // Number of tiles is a whole count

    cout << "Enter lab width: ";
    cin >> labwidth;

    cout << "Enter lab length: ";
    cin >> lablength;

    tilearea = 0.36; // Don't forget the semicolon ';'
    labarea = lablength * labwidth; // Don't forget the semicolon ';'

    // Calculating total tiles needed
    numOfTiles = labarea / tilearea;

    cout << "Number of tiles is: " << numOfTiles << endl;

    return 0;
}
