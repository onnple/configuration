//
// Created by Administrator on 2021/2/22.
//

#ifndef PROJECT_VIEW_H
#define PROJECT_VIEW_H

#include <string>

namespace once {

    class view {

    private:
        std::string title;
        std::string message;
        void print();

    public:
        void start();
        void show();

    };

}


#endif //PROJECT_VIEW_H
