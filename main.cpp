#include <iostream>
#include "lib.h"

using namespace std;
int main() {
    char c=0;
    cin >> c;

    if (lettera(c)){
        cout << lettera_convertita(c) << endl;
    } else{
        cout << "errore" << endl;
    }
    return 0;
}
