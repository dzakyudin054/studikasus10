#include "../library/base.h"

void SK10::input() {
  string nama, nim;
  mhs = NULL;
  cout<<endl;
  cout<<"--------------Pendataan Lomba-----------------"<<endl;
  cout<<"============= P A R M A T I K A ==============";  
  cout << "\nMasukkan jumlah finalis : ";
  cin >> n;
  cin.ignore();
  for (int i = 1; i <= n; i++) {
    cout << "\nMasukan Finalis Ke " << i << " :\n";
    cout << "Nama\t: ";
    cin >> nama;
    cout << "NIM\t\t: ";
    cin >> nim;
    pushNode(nama, nim);
  }
  
}
void SK10::output() {
  Node *tampilkan = mhs;
  int i = n;
  cout <<"==========================================\n";
  cout<<"|------- D A F T A R  F I N A L I S -----|\n";
  cout<<"==========================================";
  while (tampilkan != NULL) {
    cout << "\nFinalis Ke " << i << " :\n";
    cout << "Nama\t: " << tampilkan->nama << endl;
    cout << "NIM\t\t: " << tampilkan->nim << endl;
    i--;
    tampilkan = tampilkan->berikut;
  }
}


void SK10::pushNode(string nnama, string nnim) {
  Node *baru = new Node();
  baru->nama = nnama;
  baru->nim = nnim;
  baru->berikut = mhs;
  mhs = baru;

}