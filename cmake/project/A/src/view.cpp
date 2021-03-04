//
// Created by Administrator on 2021/2/22.
//

#include "view.h"
#include "http.h"
#include "dao.h"
#include <iostream>

void once::view::print() {
    std::cout << this->title << std::endl;
    std::cout << this->message << std::endl;
}

void once::view::start() {
    this->title = "Init...";
    this->message = "A starlight from the window";
    print();
    once::http h;
    int code = h.request(title, message);
    std::cout << "Http Code: " << code << std::endl;
}

void once::view::show() {
    this->title = "WeChat";
    once::dao d;
    std::string message = d.newMessage();
    this->message = message;
    print();
}
