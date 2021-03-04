#include <iostream>
#include "view.h"
#include "jsonxx.h"
#include "http.h"

static void test_main() {
    once::http h;
    std::string title = "";
    std::string message = "";
    int code = h.request(title, message);
    std::cout << "Main Http Code: " << code << std::endl;

    once::view v;
    v.start();
    v.show();
    jsonxx::Array a;
    a << 123;
    a << "hello world";
    a << 3.1415;
    a << 99.95f;
    a << 'h';
    a << jsonxx::Object("key", "value");
    jsonxx::Object o;
    o << "key1" << "value";
    o << "key2" << 123;
    o << "key3" << a;
    std::cout << o.json() << std::endl;
}

int main() {
    test_main();
    return 0;
}
