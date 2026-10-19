#include <iostream>
#include "PPP/Simple_window.h"
#include "PPP/Graph.h"

 double dsin(double d) {
        return sin(d);
    }


int main(){
    using namespace Graph_lib;

    Application app;

    Point t1 {900,500};
    Simple_window win {t1, 600, 400, "Kanwa"};

    Function sine {dsin, 0, 100, Point(20,150), 1000, 50, 50};
    win.attach(sine);
    win.set_label("Sinus");
    
    Axis xa{Axis::x, Point(20,300), 280, 10, "Os x"};
    win.attach(xa);
    win.set_label("Os x");

    Axis ya{Axis::y, Point(20,300), 280, 10, "Os y"};
    win.attach(ya);
    win.set_label("Os y");
    
    win.wait_for_button();


    return 0;
}