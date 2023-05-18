#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    char c_input;
    cin>>c_input;
   bool carattere=verifica(c_input);
    if (carattere ) {
        cout <<  conversione (c_input)<< endl;
    }else{
        cout<<"errore";
    }

    return 0;
}
