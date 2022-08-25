#include <iostream>

using namespace std;

class cmydata
{
    public:
        cmydata(int nparam) : m_ndata(nparam) {}
        int getdata() const {return m_ndata;}
        void setdata(int nparam) {m_ndata = nparam;}
        
        friend void printdata(const cmydata&);
    private:
        int m_ndata = 0;
};

void printdata( const cmydata& rdata) 
{
    cout << "printdata() : " << rdata.m_ndata << endl;
}
int main()
{
    cmydata a(5);
    printdata(a);
}
