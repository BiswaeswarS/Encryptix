#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main() {
    int pl=1;
    srand(time(0));
    int num=rand();
    int cnt=0;
    cout<<"I made a number !! Try to guess it"<<endl;
    while(pl) {
        cnt++;
        int inp;
        cin >> inp;
        if (inp > num) {
            cout << "You guessed a higher number than me!! " << endl;
            Sleep(1000);
            cout << "Press 1 to try again or any other key to quit!!" << endl;
            cin >> pl;
        } else if (inp < num) {
            cout << "You guessed a number lower than me !!" << endl;
            Sleep(1000);
            cout << "Press 1 to try again or any other key to quit!!"<< endl;
            cin >> pl;
        } else {
            cout << "Congratulations you guessed the correct number !!" << endl;
            pl = 0;
        }
        if(pl!=1){
            cout<<"See you later !!"<<endl;
            break;
        }
        cout<<"Guess again !! "<<endl;
    }
    return 0;
}
