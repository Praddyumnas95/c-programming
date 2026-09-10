#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double width;
    double height;

public:
    Box() {
        length = 0;
        width = 0;
        height = 0;
        cout << "Default Constructor called (Dimensions set to 0)." << endl;
    }
    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
        cout << "Parameterized Constructor called." << endl;
    }
    Box(const Box &obj) {
        length = obj.length;
        width = obj.width;
        height = obj.height;
        cout << "Copy Constructor called." << endl;
    }

    void displayVolume() {
        double volume = length * width * height;
        cout << "Volume of Box: " << volume << endl << endl;
    }
};

int main() {
    double l, w, h;

    cout << "--- Box 1 (Default) ---" << endl;
    Box b1;
    b1.displayVolume();

    cout << "--- Box 2 (Parameterized) ---" << endl;
    cout << "Enter Length: ";
    cin >> l;
    cout << "Enter Width: ";
    cin >> w;
    cout << "Enter Height: ";
    cin >> h;

    Box b2(l, w, h);
    b2.displayVolume();

    cout << "--- Box 3 (Copy) ---" << endl;
    cout << "Creating Box 3 as a copy of Box 2..." << endl;

    Box b3 = b2; 
    b3.displayVolume();

    return 0;
}
