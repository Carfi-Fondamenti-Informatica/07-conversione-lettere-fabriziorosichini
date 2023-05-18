#include "lib.h"

bool verifica (char n){
    if ((n>='a' and n<='z')or (n>='A' and n<='Z')){
        return true;
    }else {
        return false;
    }
}

char conversione (char n){
    char c;
    if (n>='a' && n<='z'){
        c=n-32;
        return c;
    }else if (n>='A' && n<='Z'){
        c=n+32;
        return c;
    }
    return 0;
}
