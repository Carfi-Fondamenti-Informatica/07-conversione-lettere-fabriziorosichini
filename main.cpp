#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    char n;
    cin>>n;
    if (conversione (n)==true){
        cout<<n;
    }else{
        cout<<"errore";
    }
    return 0;
}
