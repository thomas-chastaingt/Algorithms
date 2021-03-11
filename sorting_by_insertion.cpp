#include <iostream>
using namespace std;

void sorting_by_insertion(int tab[], int size) 
{
    int i, j, key;
    int tab_size = size;
    for(j = 1; j < tab_size; j++) {
        key = tab[j];
        i = j-1;
        while(i >= 0 && tab[i] > key) {
            tab[i+1] = tab[i];
            i--;
            cout << "test" << endl;
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
    int size = sizeof(tab) / sizeof(tab[0]); 
    sorting_by_insertion(tab, size);
    print_array(tab, size);
}