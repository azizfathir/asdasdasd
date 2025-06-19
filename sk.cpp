#include<iostream>
using namespace std;

class Toko{
	private:
		int barang[99],hari;
		int produk;
		string nama[99];
	
		
	public:
		void jumlah(){
			
			cout<<"+============================+\n";
			cout<<"|        TOKO PAK ANDI       |\n";
			cout<<"+============================+\n";
			cout<<"|Masukan jumlah maksimum hari: ";
			cin>>hari;
			cout<<"|Masukan jumlah maksimum Produk: ";
			cin>>produk;
		
			
			for (int j=0;j<produk;j++){
				cout<<"Masukan nama produk ke- "<<j+1<<": ";
				cin>>nama[j];
			}
		
			cout<<endl;
			for(int i=0;i<hari;i++){
				cout<<"Masukan penjualan untuk hari "<<i+1<<endl;
				for(int j=0;j<produk;j++){
				cout<<"Jumlah penjualan "<<nama[j]<<": ";cin>>barang[j];
				}
			}
			cout << " +======================================+\n";
			cout << "|     Data Penjualan Toko Pak Andi\n";
			cout << "+=======================================+\n";
			cout << "|Hari: ";
			for (int i =0; i < produk; i++){
				cout << " | "<<barang[i];
			}  
			
		}
		
	
};
int main(){
	Toko t;
	t.jumlah();
	return 0;
}
