#include <bits/stdc++.h>
using namespace std;
class TicTacToe{
private :
    char grid[3][3];char pl[2];
    int cnt=0;
public:
    TicTacToe(char ch){
        for(int i = 0 ; i < 3 ; i++){
            for(int j = 0 ; j < 3 ; j++){
                grid[i][j] = '-';
            }
        }
        pl[0] = ch;
        pl[1] = (ch == 'X') ? 'O' : 'X';
    }
    int result(){
        for(int i = 0 ; i < 3 ; i++){
            if(grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2]){
                if(grid[i][0] == pl[0]){
                    return 1;
                }
                if(grid[i][0] == pl[1]){
                    return 2;
                }
            }
        }
        for(int i = 0 ; i < 3 ; i++){
            if(grid[0][i] == grid[1][i] && grid[1][i] == grid[2][i]){
                if(grid[0][i] == pl[0]){
                    return 1;
                }
                if(grid[0][i] == pl[1]){
                    return 2;
                }
            }
        }
        if(grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]){
            if(grid[1][1] == pl[0]){
                return 1;
            }
            if(grid[1][1] == pl[1]){
                return 2;
            }
        }
        if(grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0]){
            if(grid[1][1] == pl[0]){
                return 1;
            }
            if(grid[1][1] == pl[1]){
                return 2;
            }
        }
        if(cnt < 9){
            return 4;
        }
        else{
            return 3;
        }
    }
    void display(){
        for(int i = 0 ; i < 3 ; i++){
            for(int j = 0 ; j < 3 ; j++){
                cout << " " << grid[i][j] << " ";
                if(j < 2){
                    cout << "|";
                }
            }
            cout << endl;
        }
    }
    int valid(int x, int y){
        if(x > 2 || x < 0 || y > 2 || y < 0){
            return 0;
        }
        if(grid[x][y] != '-'){
            return 0;
        }
        return 1;
    }
    void put(int x, int y, char ch){
        grid[x][y] = ch;
        cnt++;
    }
};
int main() {
    cout << "Welcome !!!" << endl;
    cout << "Press 1 to start the game, any other key to quit.." << endl;
    int inp;
    cin >> inp;
    while(inp == 1){
        cout << "Enter symbol for player 1 : " << endl;
        char ch;
        cin >> ch;
        while(ch != 'x' && ch != 'X' && ch != 'o' && ch != 'O'){
            cout << "Invalid option!!! Try again ....." << endl;
            cin >> ch;
        }
        if(ch == 'x'){
            ch = 'X';
        }
        if(ch == 'o'){
            ch = 'X';
        }
        char a[2];
        a[0] = ch;
        a[1] = (ch == 'X') ? 'O' : 'X';
        TicTacToe obj = TicTacToe(a[0]);
        int cnt = 0;
        while(obj.result() == 4){
            obj.display();
            cout << "Enter coordinates for player " << (cnt % 2) +1 << endl;
            int x, y;
            cin >> x >> y;
            while(!obj.valid(x, y)){
                cout << "Invalid position !! Try again...." <<endl;
                cin >> x >> y;
            }
            obj.put(x, y, a[(cnt % 2)]);
            cnt++;
        }
        if(obj.result() == 1){
            obj.display();
            cout << "Player 1 won !! " << endl;
        }
        else if(obj.result() == 2){
            obj.display();
            cout << "Player 2 won !! " << endl;
        }
        else{
            obj.display();
            cout << "Draw !! " << endl;
        }
        cout << "Press 1 to play again, any other key to quit.." << endl;
        cin >> inp;
    }
    cout << "Have a nice day!!" << endl;
    return 0;
}
