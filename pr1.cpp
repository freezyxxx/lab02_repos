#include <iostream>
using namespace std;
int main()
{
cout << "Hello, World!" << endl;
int p = 1;
int i;
for (i = 0; i < 10; i++) {
    p = p + i;

};
cout << "p = " << p << " i = " << i << endl;
cin.get();
return 0;
}