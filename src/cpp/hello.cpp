#include "emscripten.h"
#include <string>

using std::string;

extern "C" {
    const char* hello();
}

EMSCRIPTEN_KEEPALIVE
const char* hello(){
    return "Hello World!";
}
