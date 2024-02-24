#include <iostream>
#include <cmath>
using namespace std;
class Point {
    private:
    double x_value;
    double y_value;
    public:
    Point() {
        x_value = 0.0;
        y_value = 0.0;
    }
    Point (double x, double y)
    {
        x_value = x;
        y_value = y;
    }
    void setPoint (double x, double y)
    {
        x_value = x;
        y_value = y;
    }
    double getXPoint() {
        return x_value;
    }
    double getYPoint() {
        return y_value;
    }
    double distance (Point otherPoint){
    return sqrt(pow(otherPoint.getXPoint() - getXPoint(),2) + pow(otherPoint.getYPoint() - getYPoint(),2));
}
};
int main () {
    Point instance = Point (5.5, 6.5);
    cout << instance.distance(Point (7.5, 2.5)) << endl;
    return 0;
}