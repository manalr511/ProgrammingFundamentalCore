#include <iostream>
using namespace std;
int main()
{
    string figure;
    cout << "enter the name of figure:";
    cin >> figure;
    float square, rectangle, circle, triangle;
    if (figure == "square")
    {
        float s;
        cout << "enter the length of one side:";
        cin >> s;
        square = s * s;
        cout << square;
    }
    else if (figure == "rectangle")
    {
        float length;
        cout << "enter length:";
        cin >> length;
        float width;
        cout << "enter width:";
        cin >> width;
        rectangle = length * width;
        cout << rectangle;
    }
    else if (figure == "circle")
    {
        float pi;
        pi = 3.14;
        float radius;
        cout << "enter radius:";
        cin >> radius;
        circle = pi * radius * radius;
        cout << circle;
    }
    else if (figure == "triangle")
    {
        float base;
        cout << "enter base:";
        cin >> base;
        float height;
        cout << "enter height:";
        cin >> height;
        triangle = 0.5 * base * height;
        cout << triangle;
    }
}