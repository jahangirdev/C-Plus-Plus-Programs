// class ATM{
//     private:
//     validateCard(pin){
//         if(validPIN) return true; else return false;
//     }
//     checkBalance(userId){
//         return queryBalance(userId);
//     }
//     widthDraw(amouont, userId){
//         if(amount >= checkBalance(userId)){
//             processWidthdraw(userId);
//         }
//     }
//     public:
//     inputPIN(){
//         input(pin);
//         if(input.length >= 4){
//             validateCard(pin);
//         }
//         else {
//             giveError("Invalid Pin");
//         }
        
//     }
//     widthdrawMoney(amount){
//         widthDraw();
//     }
// }


#include <iostream>
using namespace std;
class Addition
{
private:
    int num1, num2, sum;

// public

    void calculate()
    {
        sum = num1 + num2;
    }

    public:
        void input(){
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            calculate();
        }
        void output(){
            cout << "Sum = " << sum << endl;
        }
    };

int main()
{
    Addition add;
    add.input();
    add.output();
    return 0;
}