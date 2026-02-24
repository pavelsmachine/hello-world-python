#include "../src/greet.h"
#include <cassert>
int main(){
    auto s = greet("Pavel");
    if(s != "Hello, Pavel!") return 1;
    return 0;
}
