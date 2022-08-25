#include <iostream>

using namespace std;

class peoplea
{
    private:
        string name;
        int height;
        friend class peopleb;
    public:
        peoplea(string name, int height)
        {
            this -> name = name;
            this -> height = height;
        }
};
class peopleb
{
    public:
        void info_a(peoplea a) 
        {
            cout << "name : " << a.name << endl;
            cout << "height : " << a.height << endl;
        }
};
int main()
{
    peoplea ex1("hong", 180);
    peopleb ex2;
    ex2.info_a(ex1);
}