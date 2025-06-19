#include<iostream>
using namespace std;

class Toko{
	private:
		int barang;
		string produk[99];
		int hari;
		int jum[99][99];
	public:
	void jumlah(){
	cout<<"+===================================+\n";
	cout<<"|           TOKO PAK ANDI           |\n";
	cout<<"+===================================+\n";
	cout<<"|Masukan jumlah maksimum hari: ";
	cin>>hari;
	cout<<"|Masukan jumlah maksimum produk: ";
	cin>>barang;
	cout<<"|\n";
	for(int i=0;i<barang;i++){
	cout<<"|Masukan nama produk ke- "<<i+1<<": ";
	cin>>produk[i];
	}
	cout<<"|"<<endl;
	for(int i=0;i<hari;i++){
	cout<<"|Masukan penjualan untuk hari "<<i+1<<endl;
	for(int j=0;j<barang;j++){
	cout<<"|jumlah penjualan "<<produk[j]<<": ";
			cin>>jum[i][j];
		}
		cout<<"|"<<endl;
	}
	cout<<"|"<<endl;
	cout<<"+======================================+\n";
	cout<<"|    DATA PENJUALAN TOKO PAK ANDI      |\n";
	cout<<"+======================================+\n";
	cout<<"|Hari ";
	for(int i=0;i<barang;i++){
		 cout<<"   |  "<<produk[i];
	}
	cout<<"|"<<endl;
	cout<<"+======================================+\n";
	
	
	for(int i=0;i<hari;i++){
	cout<<"|Hari "<<i+1<<"  |  ";
		for(int j=0;j<barang;j++){
		cout<<jum[i][j]<<"        |";	
		}
	cout<<"         |"<<endl;
	}
		int total = 0;
	cout<<"+======================================+" << endl;
			for (int i = 0 ; i < hari;i++){
			for(int j = 0 ; j < barang; j++){
					total += jum[i][j];
				}
			}
		cout << "|Total Penjualan: "<<total;
				cout << "              |\n";
	cout<<"+======================================+" << endl;
		}
	

};

int main(){
	Toko t;
	t.jumlah();
}
