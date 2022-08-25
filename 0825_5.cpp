#include <iostream>

using namespace std;

class wallet
{
    friend void getmoney(wallet& mywallet, int money);
    friend void won_cal(wallet& mywallet, int money1, int op1);

    private:
        int money = 0;
        int inwon = 0;
        int exwon = 0;
    public:
        wallet(int m1)
        {
            money = m1;
        }
        void addmoney(int m1)
        {
            money = money + m1;
        }
        void print_money()
        {
            cout << "change : " << money << endl;
        }
        void total_print()
        {
            cout << "========== Today is result ==========" << endl;
            cout << "income of total : " << inwon << endl;
            cout << "expenses of total : " << exwon << endl;
        } 
};
void getmoney(wallet& mywallet, int money1)
{
    mywallet.money = mywallet.money - money1;
}

void won_cal(wallet& mw, int money1, int op1)
    {
        switch(op1)
    {
        case 1:
            mw.addmoney(money1);
            mw.inwon = mw.inwon + money1;
            break;
        case 2:
            getmoney(mw,money1);
            mw.exwon = mw.exwon + money1;
            break;
    };
    }
int main()
{
    int op1 = 1, won;
    int inwon = 0, exwon;
    
    wallet ex1(5000);

    cout <<"the current moeny is : ";
    ex1.print_money();
    cout << endl;

    while(op1 != 3)
    {
    cout << "input choice (1 : income, 2 : expenses, 3 : end)" ;
    cin >> op1;
    cout << "how much : " ;
    cin >> won;

    ex1.print_money();
    cout << endl;   
    }
    ex1.total_print();
}
