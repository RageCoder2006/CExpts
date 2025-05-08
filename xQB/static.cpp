#include <iostream>
using namespace std;

class Sample {
public:
    static int count;
    int num;

    Sample(int num) {
        this->num = num;
        count++;
    }

    static int getCount() {
        cout << count << endl;
    }
};

int Sample::count = 0;

int main() {
    Sample s1(2), s2(3), s3(4), s4(5);
    Sample::getCount();
}
