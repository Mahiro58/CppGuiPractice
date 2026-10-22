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
    Simple_window win {t1, 1000, 800, "Kanwa"};

    Function sine {dsin, 0, 100, Point(20,150), 1000, 50, 50};
    win.attach(sine);

    sine.set_color(Color::blue);

    Polygon poly;
    poly.add(Point{300, 200});
    poly.add(Point{300, 350});
    poly.add(Point{500, 350});
    poly.add(Point{500, 200});

    poly.set_color(Color::red);
    win.attach(poly);

    Rectangle r (Point{200, 200}, 100, 30);
    r.set_color(Color::blue);
    win.attach(r);
    Text txt {Point{210, 210}, "Hello"};
    win.attach(txt);

    Closed_polyline poly_rect;
    poly_rect.add(Point{100, 50});
    poly_rect.add(Point{200, 50});
    poly_rect.add(Point{200, 100});
    poly_rect.add(Point{100, 100});
    poly_rect.add(Point{50, 75});
    win.attach(poly_rect);
    
    Axis xa{Axis::x, Point(20,300), 280, 10, "Os x"};
    win.attach(xa);

    Axis ya{Axis::y, Point(20,300), 280, 10, "Os y"};
    win.attach(ya);

    Text t {Point{150, 150}, "Hello world!"};
    win.attach(t);
    
    win.set_label("Test");
    win.wait_for_button();


    return 0;
}