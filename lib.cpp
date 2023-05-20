#include "lib.h"


char conversione (char n){
    char c;
    do {
        if (n >= 'a' && n <= 'z') {
            c = n - 32;
            return c;
        } else if (n >= 'A' && n <= 'Z') {
            c = n + 32;
            return c;
        }
    } while((n>='a' and n<='z')or (n>='A' and n<='Z'));
    return 0;
}
