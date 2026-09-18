#include <iostream>
#include <vector>
using namespace std;

int AstronautRec(vector<int> person, int k, int index){
    if (person.size() == 1){ ;
        return person[0];
    }
 
    index = (index + k) % person.size();
    person.erase(person.begin() + index);

    return AstronautRec(person, k, index);

}

int Astronaut(int n, int k){
    int index= 0;
    vector<int> person;
    for (int i = 0; i < n; i++){
        person.push_back(i);
    }
    return AstronautRec(person, k, index);
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