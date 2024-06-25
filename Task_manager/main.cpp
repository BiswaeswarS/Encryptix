#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int,int>mp;
    cout<<"Welcome to the task Manger!! "<<endl;
    int inp=1;
    while(true){
        cout<<"Press 1 to add tasks to the list."<<endl;
        cout<<"Press 2 to mark task as completed."<<endl;
        cout<<"Press 3 to delete tasks from the list."<<endl;
        cout<<"Press 4 to display all the tasks with status."<<endl;
        cout<<"Press 0 to quit"<<endl;
        int inp;cin>>inp;
        int cnt=0;
        if(inp==0){
            break;
        }
        int t;
        switch(inp) {
            case 1:
                cout << "Enter the task : " << endl;
                cin >> t;
                while (mp[t] == 1 || mp[t] == -1) {
                    cout << "Task already present!! Choose a different task ...." << endl;
                    cin >> t;
                }
                mp[t] = -1;
                break;
            case 2:
                if (mp.empty()) {
                    cout << "No tasks are present, enter atleast one task" << endl;
                    break;
                }
                for(auto v:mp){
                    if(v.second==-1){
                        cnt++;
                    }
                }
                if(cnt==0){
                    cout<<"All tasks completed"<<endl;
                    break;
                }
                cnt=0;
                cout << "Enter task to be completed : " << endl;
                cout << "Tasks present : ";
                for(auto v:mp){
                    cout<<v.first<<" ";
                }
                cout<<endl;
                cin >> t;
                while (mp[t] == 1 || mp[t] == 0) {
                    if (mp[t] == 1) {
                        cout << "Task already completed!! Choose a different task ...." << endl;
                    }
                    if (mp[t] == 0) {
                        cout << "No such task is present!! Choose a different task ...." << endl;
                        mp.erase(t);
                    }
                    cin >> t;
                }
                mp[t] = 1;
                break;
            case 3:
                if (mp.empty()) {
                    cout << "No tasks are present, enter atleast one task" << endl;
                    break;
                }
                cout << "Enter task to be deleted : " << endl;
                cout << "Tasks present : ";
                for(auto v:mp){
                    cout<<v.first<<" ";
                }
                cout<<endl;
                cin >> t;
                while (mp[t] == 0) {
                    cout << "No such task is present!! Choose a different task ...." << endl;
                    mp.erase(t);
                    cin >> t;
                }
                mp.erase(t);
                break;
            case 4:
                if (mp.empty()) {
                    cout << "No tasks are present, enter atleast one task" << endl;
                    break;
                }
                cout << "Tasks";
                for (int i = 0; i < 20; i++) {
                    cout << " ";
                }
                cout << "Status" << endl;
                for (auto v: mp) {
                    cout << v.first;
                    int copy = v.first;
                    int cnt = 0;
                    while (copy != 0) {
                        cnt++;
                        copy /= 10;
                    }
                    for (int i = 0; i < 25 - cnt; i++) {
                        cout << " ";
                    }
                    cout << ((v.second == 1) ? "COMPLETED" : "NOT COMPLETED") << endl;
                }
                break;
            default:
                    cout << "Invalid option!! Try again" << endl;
        }
    }
    cout<<"Have a nice day!!"<<endl;
    return 0;
}
