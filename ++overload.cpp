#include <iostream>
using namespace std;
class counter {
    private:
        int count;
    public:
        counter(int value) {
            count = value;
        }
        void operator++() {
            ++count;
        }
        void operator++(int) {
            count++;
        }
        void display() {
            cout << count << endl;
        }
};
int main() {
    counter c(10);
    
    c++;//postfix
    c.display();
    c.display();
    ++c;//prefix
    c.display();
    return 0;
}