#include <iostream>

using namespace std;

class cmyobject
{
    public:
        cmyobject() { cout << "cmyobject()" << endl;}
        virtual ~cmyobject() {}
};

class cmyimage : public cmyobject
{
    public:
        cmyimage() { cout << "cmyimage(int, int)" << endl;}
};
class cmyshape : public cmyobject
{
    public:
        cmyshape() { cout << "cmyshape(int)" << endl;}
};
class cmypicture : public cmyimage, public cmyshape
{
    public:
        cmypicture() { cout << "cmypicture()" << endl;}
};
int main()
{
    cmypicture a;
}