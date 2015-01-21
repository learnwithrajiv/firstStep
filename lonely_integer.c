#include <stdio.h>
#define READ_INT(x) { char ch; do{ ch = getchar_unlocked();} while(ch < '0' || ch > '9'); x = 0; while(ch >= '0' && ch <= '9' ){ x = ( x <<3 )+ ( x <<1 ) + ( ch - '0'); ch = getchar_unlocked();}}
int main() {
    int _num, _num_size, res = 0;
    READ_INT(_num_size);
    while(_num_size > 0){
        READ_INT(_num);
        res ^= _num;
        --_num_size;
    }
    printf("%d", res);
    
    return 0;
}
