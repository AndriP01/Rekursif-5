#include <iostream>
using namespace std;

class SK5{
  public:
      void input();
      long rekursif(int hargaSks,int jumsks);
      int potong(int hargaSks);
      int bayar(int hargaSks, int diskon);
      void output();


  private:
  int nim, jumsks, totpemb, jumwa; 
  string nm, dmk;
  int hargaSks; 
  int diskon;
};

void SK5::input(){
  cout<<"~~~~~~~~~~ DATA MAHASISWA ~~~~~~~~~~"<<endl;
  cout<<"Masukkan NIM Mahasiswa : "; cin>>nim;
  cout<<"Masukkan Nama Mahasiswa : "; cin>>nm;
  cout<<"Masukkan Mata Kuliah yang diambil : "; cin>>dmk;
  cout<<"Masukkan Jumlah SKS : "; cin>>jumsks;
  cout<<"--------------------------------------"<<endl;
}

long SK5::rekursif(int hargaSks,int jumsks);{
  if(jumsks<0)
    return 0;
  else {
    return hargaSks + proses(hargaSks,jumsks-1);
  } 
}

int SK5::int diskon(jumlahSks){
  int diskon;
  diskon=0.2*hargaSks;
}

int SK5::int bayar(int jumlahSks,int diskon{
  int totBayar;
  totBayar=hargaSks-diskon;
}




SK5 :: ouput() {
  cout << "Nama : " << nm << endl;
  cout << "Nim  : " << nim << endl;
  
  cout << "Jumlah SKS : " << jumsks << endl;
  cout << "Total Biaya : " << totpemb << endl;
  cout << "=================================" << endl;
}

SK5 :: keluar()
{
  if (!=0)
  {
    cout << dmk << " ( " << jumsks << "Jumlah sks = )" << endl;
    
  }
}
int main(){
  SK5 study;
  study.input();


cout<<"Jumlah Bayar: "<<study.rekursif(hargaSks,jumsks)<<endl;
cout<<"Diskon: "<<study.discount(study.rekursif(hargaSks,jumsks))<<endl;
cout<<"Jumlah Bayar: "<<study.bayar(study.rekursif(hargaSks,jumsks),study.discount 
 (study.rekursif(hargaSks,jumsks)));
	
  
  cout << "Nama : " << nm << endl;
  cout << "Nim  : " << nim << endl;
  
  cout << "Jumlah SKS : " << jumsks << endl;
  cout << "Total Biaya : " << totpemb << endl;
  cout << "=================================" << endl;
  return 0;
}