#include <iostream>
using namespace std;


int summa(int arr[4][4]){
    int sum = 0;
    for (int i = 0;i < 4; i++){
        for (int j = 0;j < 4; j ++){
            if (arr[i][j] % 2 == 0){
                sum = sum + arr[i][j];
            }
        }
    }
    return sum;
}

int (*(input)())[4]{
    static int arr[4][4];
    for (int i = 0;i < 4;i ++){
        for (int j = 0;j < 4;j ++){
           int temp;
           cin >> temp;
           arr[i][j] = temp;

        }
    }
    return arr;
}

void output(int arr[4][4]){
    for (int i = 0;i < 4;i ++){
        for (int j = 0;j < 4;j ++){
            cout << arr[i][j] << ' ';
        }
    cout << endl;
    }
}

int main() {
    int (*a)[4] = input();
    int sumn = summa(a);
    for (int i = 0;i < 4; i ++){
        a[i][i] = sumn;
    }
    output(a);
    return 0;
}

