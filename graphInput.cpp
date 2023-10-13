#include <iostream>
using namespace std;
int main(){

int node, edge;
cout<<"Node: ";
cin>>node;
cout<<"Edge: ";
cin>>edge;

int arr[100][100];

for(int i=0; i<node; i++){
    for(int j=0; j<edge; j++){
        cin>>arr[i][j];
    }
}

for(int i=0; i<node; i++){
    for(int j=0; j<edge; j++){
        cout<<arr[i][j];
    }
  cout<<endl;
}
}
