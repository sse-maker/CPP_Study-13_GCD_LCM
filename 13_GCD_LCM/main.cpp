//
//  main.cpp
//  13_GCD_LCM
//
//  Created by 세광 on 2021/06/22.
//

#include <iostream>

using namespace std;

struct num { int num1, num2; };

void Find_GCD_LCM(int a, int b, int min = 1, int max = 1) {
    for(int i = a; i >= 1; i--) {
        if((a % i == 0) && (b % i == 0)) {
            min = i; max = i * (a / i) * (b / i);
            break;
        }
    }
    cout << min << endl;
    cout << max << endl;
}

int main() {
    num z;
    cin >> z.num1 >> z.num2;
    
    if(z.num1 < z.num2) { Find_GCD_LCM(z.num1, z.num2); }
    else if(z.num1 >= z.num2) { Find_GCD_LCM(z.num2, z.num1); }
}
