#include <iostream>
using namespace std;

void sorting_by_insertion_crescent(int tab[], int size) 
{
    int i, j, key;
    for(j = 1; j < size; j++) {
        key = tab[j];
        i = j-1;
        while(i >= 0 && tab[i] > key) {
            tab[i+1] = tab[i];
            i--;
        }
        tab[i+1] = key;
    }
}

void sorting_by_insertion_decreasing(int tab[], int size) {
     int i, j, key;
    for(j = 1; j < size; j++) {
        key = tab[j];
        i = j-1;
        while(i >= 0 && tab[i] < key) {
            tab[i+1] = tab[i];
            i--;
        }
        tab[i+1] = key;
    }
}

void print_array(int tab[], int size) {
    for(int i = 0; i < size; i++) {
        cout << tab[i] << endl;
    }
}

int main(void) {
    int tab[] = {5,2,4,6,1,3};
    int tab2[] = {5,2,4,6,1,3};
    int size = sizeof(tab) / sizeof(tab[0]); 
    sorting_by_insertion_crescent(tab, size);
    print_array(tab, size);
    cout << "\n ************************** \n" << endl;
    sorting_by_insertion_decreasing(tab2, size);
    print_array(tab2, size);

}