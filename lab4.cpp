#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int min_pos(vector <int> vector1){
    int local_min = 999999,local_min_pos = 0;

    for (int i = 0;i < vector1.size();i ++){
        if (vector1[i] < local_min){
            local_min = vector1[i];
            local_min_pos = i;
        }
    }
    return local_min_pos;
}

int main() {

    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    vector <int>::iterator it;
    int mx = min_pos(a );
    for (int i = 0; i < a.size();i ++ ){
        it = a.begin() + i;
        if (i < mx && a[i] < 0){
            a.erase(it );
        }
    }



    for (int i = 0;i < a.size();i++){
        cout << a[i] << ' ';
    }

    cout << mx;
    return 0;
}



