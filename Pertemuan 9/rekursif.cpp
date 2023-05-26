//Aditya Zola Sulistya Ramadhan
//A11.2022.14481
//4213


#include <iostream>

using namespace std;

int tambah(int a, int b){
    if(b==0)
        return a;
    else
        return 1 + tambah(a, b-1);
}

int kali(int a, int b){
    if(b==0)
        return 0;
    else
        return a + kali(a, b-1);
}

int kurang(int a, int b){
    if(b==0)
        return a;
    else
        return kurang(a-1, b-1);
}

int bagi(int a, int b){
    if(a<b)
        return 0;
    else
        return 1 + bagi(a-b, b);
}

int pangkat(int a, int b) {
  if (b == 0) {
    return 1;
  }
  else {
    return a * pangkat(a,b - 1);
  }
}

//int pangkat(int basis, int eksponen){
  //  if (basis == 0) {
      //  return 1;
    //}else{
        //return basis * pangkat(basis,eksponen -1) * basis;
    //}
//}

int main()
{
    int a,b;

    cout << "Penjumlahan" << endl;    //tambah
    cout << "Masukkan bilangan:";
    cin >> a;
    cout << "Masukkan bilangan:";
    cin >> b;
    cout << "-------- +" << endl;
    cout << tambah(a,b) << endl;
    cout << "Perkalian" <<endl;       //kali
    cout << "Masukkan bilangan:";
    cin>> a;
    cout << "Masukkan bilangan:";
    cin>> b;
    cout << "-------- *" << endl;
    cout << kali(a,b) << endl;
    cout << "Pengurangan" <<endl;     //Kurang
    cout << "Masukkan bilangan:";
    cin>> a;
    cout << "Masukkan bilangan:";
    cin>> b;
    cout << "-------- -" << endl;
    cout << kurang(a,b) << endl;
    cout << "Pembagian" <<endl;       //Bagi
    cout << "Masukkan bilangan:";
    cin>> a;
    cout << "Masukkan bilangan:";
    cin>> b;
    cout << "-------- /" << endl;
    cout << bagi(a,b) << endl;
    cout << "Pangkat" <<endl;
    cout << "Masukkan bilangan asli:";
    cin>>a;
    cout << "Masukkan bilangan pangkat:";
    cin>>b;
    int hasil = pangkat(a,b);
    cout << "Hasil pangkat adalah : " << hasil << endl;







   //cout << "Hasil Pangkat dari: " <<endl;  //Pangkat
    //cin>> a;
    //cin>> b;
    //cout << pangkat(a, b) <<endl
}
