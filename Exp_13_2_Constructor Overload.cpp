#include <iostream>
using namespace std;

class fetch {
    int num;

public:
    
    fetch() {
        num = 3;
    }

    
    fetch(int x) {
        num = x;
    }

    
    fetch(const fetch &b) {
        num = b.num;
    }

    
    void disp() {
        cout << num << endl;
    }
};

int main() {
    fetch f1;        
    fetch f2(6);     
    fetch f3(f1);   

    f1.disp();   
    f2.disp();   
    f3.disp();   

    return 0;
}
