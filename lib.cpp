#include "lib.h"
bool lettera (char c){
    if((c>=97 && c<=122)or(c>=65 && c<=90)){
        return true;
    }else{
        return false;
    }
}
char lettera_convertita(char c){
        if (c>=97 && c<=122){
            char r= c-32;
            return r;
        } else if (c>=65 && c<=90){
            char r= c+32;
            return r;
        }
    return 'r';
    }

