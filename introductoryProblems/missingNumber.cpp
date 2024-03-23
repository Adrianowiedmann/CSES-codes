#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int value;

    bool numbers[1000000];

    for (int i = 1; i < n; i++){
        cin >> value;
        numbers[value] = true;
    }


    for (int i = 1; i <= n; i++){
        if (!numbers[i]){
            cout << i << endl;
            break;
        }
    }
}