#include <iostream>

using namespace std;

class figure
{
    protected:
        int width;
        int height;
    public:
        figure(int agwidth, int agheight) : width(agwidth),height(agheight){}
        virtual void calculate() = 0;
};
class circle : public figure
{
    public:
        circle(int radius) : figure (radius, 0) {}
        void calculate ()
        {
            cout << "circle : radius = " << width << "," << width * width * 3.14 << endl;
        }
};
class square : public figure
{
    public:
        square(int agwidth, int agheight) : figure(agwidth, agheight){}
        void calculate ()
        {
            cout << "square : (width, height) = " << width << "," << height << ", " << width * height << endl;
        }
};
class triangle : public figure
{
    public:
        triangle(int agwidth, int agheight) : figure(agwidth, agheight){}
        void calculate ()
        {
            cout << "triangle : (width, height) = " << width << "," << height << ", " << width * height / 2 << endl;
        }
};
int main()
{
    figure *fig[3] = {new circle(5), new square(2,5), new triangle(4,5)};
    for(int i = 0; i < 3; i++)
        fig[i] -> calculate();
}
