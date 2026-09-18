#include <iostream>
using namespace std;

int AstronautRec(int person[], int size, int k, int index) {
    if (size == 1) {
        return person[0];
    }

    index = (index + k) % size;

    for (int i = index; i < size - 1; i++) {
        person[i] = person[i + 1];
    }

    return AstronautRec(person, size - 1, k, index);
}

int Astronaut(int n, int k) {
    int index = 0;
    int person[1000]; 
    for (int i = 0; i < n; i++) {
        person[i] = i;
    }
    return AstronautRec(person, n, k, index);
}

int main() {
    int n, k;
    cout << "Masukkan jumlah astronaut: ";
    cin >> n;
    cout << "Masukkan jumlah langkah: ";
    cin >> k;
    cout << "Astronaut yang selamat adalah: " << Astronaut(n, k) << endl;
    
    return 0;
}
