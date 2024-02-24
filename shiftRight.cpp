#include <iostream>
using namespace std;

void print(int data[], int size) {
    for(int i = 0; i < size; i++) {
        cout << data[i] << ", ";
    }
    cout << endl;
}

void shiftRight(int array[], int size, int ammount){
    for (int i = 0; i < ammount; i++)
    {   
        int max = array[size-1];
        for (int j = size-1; j > 0; j--)
        {
            array[j] = array[j-1];
        }
        array[0] = max;
    }
}

bool contain (int array [ ], int size, int value) {
    int low = 0; 
    int high = size-1; 
    int check = 0;
    while(low <= high) { 
        int mid = (low + high)/2; 
        if(value < array[mid]) { 
            high = mid - 1; 
        } 
        else if(value > array[mid]){ 
        low = mid + 1; 
        } 
        else { 
        check ++; 
        } 
    } 
    if (check != 0) {
        return true;
    }
    else {
        return false;
    }

    }

/*void shiftRight(int array[], int size, int ammount){
    for (int i = 0; i < ammount; i++){
        int max = array[size-1];
        for (int j = size - 1; j >= 0; j--){
            array[j]=array[j-1];
            if (j == 0) {
                array[j] = max;
            }
        }
    }
}
*/

int main() {
    int* data = new int[6];
    data[0] = 12;
    data[1] = 19;
    data[2] = 6;
    data[3] = 7;
    data[4] = 8;
    data[5] = 3;

    cout << contain (data, 6, 3);
    cout << contain (data,6,9);

    // delete at the end;
    delete[] data;
    return 0;
}