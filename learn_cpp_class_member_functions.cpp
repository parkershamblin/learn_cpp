#include <iostream>
using namespace std;

class MyClass {
public:
    int data;

    void setData(int value) {
        data = value;
    }

    int getData() {
        return data;
    }
};

int main() {
    MyClass obj;
    obj.setData(10);
    int value = obj.getData(); // Compiler translates this to: obj.getData(&obj);
    cout << value << endl;
    obj.setData(5);
    value = obj.getData(); 
    cout << value << endl;
    return 0;
}
