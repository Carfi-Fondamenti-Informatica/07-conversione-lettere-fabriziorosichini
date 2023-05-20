#include "lib.h"

bool conversione (char &n){
    if((n>='a' and  n<='z')or (n>='A' and n<='Z')){
        if(n>='a' and n<='z'){
            n= n-32;
        }else{
            n=n+ 32;
        }
        return true;
    }else{
        return false;
    }
}
