#include <iostream>
using namespace std;

void Plus();
void Minus();
void TotalArray();
void AvgArray();

int main() {
  int ask;
  cout << "1. Penjumlahan 2 bilangan \n";
  cout << "2. Pengurangan 2 bilangan \n";
  cout << "3. Menghitung total array\n";
  cout << "4. Menghitung rata rata array\n";
  cout << "Pilih fungsi ";
  cin >> ask;
  if (ask == 1){
   Plus();
  }else if (ask == 2){
    Minus();
  }else if (ask == 3){
    TotalArray();
  }else if (ask == 4){
    AvgArray();
  }else
  {
    cout << "Error";
  }
  return 0;
}

void Plus(){
    int x, y, z;
    cout << "Masukkan angka : ";
    cin >> x;
    cout << "Masukkan angka : ";
    cin >> y;
    z = x+y;
    cout << "Hasilnya adalah : " << z;
}

void Minus(){
  int x, y, z;
    cout << "Masukkan angka : ";
    cin >> x;
    cout << "Masukkan angka : ";
    cin >> y;
    z = x-y;
    cout << "Hasilnya adalah : " << z;
}

void TotalArray(){
  int x[100],i,n,total;
  i = 0;
  total = 0;
  cout << "Masukkan Jumlah Array : ";
  cin >> n;
  for ( int i = 0; i < n; i++)
  {
    cout << "Masukkan angka : ";
    cin >> x[i];
    total += x[i];
  }
  cout << "total : " << total ;
}

void AvgArray(){
  int x[100],i,n;
  float total, hasil;
  i = 0;
  total = 0;
  cout << "Masukkan Jumlah Array : ";
  cin >> n;
  for ( int i = 0; i < n; i++)
  {
    cout << "Masukkan angka : ";
    cin >> x[i];
    total += x[i];
  }
  hasil = total / n;
  cout << "Hasil Rata - Rata : " << hasil ;
}
