#include <iostream>

using namespace std;

int main()
{
    float width, length;
    string units;
    cin >> width >> length >> units;
    cout << "Area of the room= " << width * length << units;
}