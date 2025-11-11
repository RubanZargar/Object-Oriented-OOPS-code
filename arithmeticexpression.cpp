#include <iostream>
using namespace std;

int main() {
    int i = 5;
    float f = 3.2;
    double d = 2.0;

  
    double result = i + f * d;

    cout << "Expression: 5 + 3.2 * 2.0" << endl;
    cout << "Result after type promotion = " << result << endl;

    return 0;
}
