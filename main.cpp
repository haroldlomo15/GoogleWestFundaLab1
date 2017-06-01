//
//  main.cpp
//  Fundamental 1
//
//  Created by Demo User on 5/31/17.
//  Copyright © 2017 Demo User. All rights reserved.
//

#include <iostream>

using namespace std;

template <class intstring>

void bubbleSort(intstring arr[], int numarr_Size){
    
    
    for (int i = 0; i<(numarr_Size-1); i++) {
        for (int j = i+1; j<numarr_Size; j++) {
            intstring temp;
            
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for(int i = 0; i < numarr_Size; i++) {
        cout << arr[i] << endl;
    }
    
}

int main() {
    
    cout << "Sort Strings\n----------------" << endl;
    string arrString[4] = {"Bob", "David", "Alice", "Carol"};
    bubbleSort(arrString, 4);
    
    cout << "\nSort Integer\n---------------" << endl;
    int arrInt[5] = {1, 5, 3, 4, 5};
    bubbleSort(arrInt, 5);
    
}
