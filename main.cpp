#include <iostream>
using namespace std;

int main() {
   int array[2][4] ={0};
   int minTerm[8];
   int count;
   cout<<"Enter The number of Minterm you want"<<endl;
   cin>>count;

   for(int i=0; i<count; i++){
    cout<<"Enter"<<" "<<i+1<<" Minterm : ";
    cin>>minTerm[i];
   }
   for(int i=0; i<count; i++){
    int minterm = minTerm[i];
    if(minterm == 2){
        minterm++;
    }
    else if(minterm == 3){
        minterm--;
    }
    else if(minterm == 7){
        minterm--;
    }
    else if(minterm == 6){
        minterm++;
    }
     array[i/4][minterm] = 1;

   }
   for(int i=0; i<2; i++){
    for(int j=0; j<4; j++){
        cout<<array[i][j]<<" ";
    }
    cout<<endl;
   }

    cout << "K-map expression: ";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            if (array[i][j] == 1) {
                cout << "(";
                if (i == 0) cout << "A'";
                else cout << "A";
                if (j == 0) cout << "B'C'";
                else if (j == 1) cout << "B'C";
                else if (j == 2) cout << "BC";
                else if (j == 3) cout << "BC'";
                cout << ") + ";
            }
        }
    }

    return 0;
}
