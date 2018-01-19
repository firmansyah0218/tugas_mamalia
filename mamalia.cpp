#include <iostream>
#include <string>
using namespace std;

class mamalia{
	public:
		void bersuara(string bunyi);
		string jenisMakanan;
		string warnaBulu;
};

int main(){

	mamalia mamaliaTikus,mamaliaHamster,mamaliaTupai;
	
	mamaliaTikus.warnaBulu = "ABU ABU ";
	mamaliaHamster.warnaBulu = "PUTIH BERGARIS COKLAT ";
	mamaliaTupai.warnaBulu = "COKLAT BERGARIS ORANGE ";
	
	mamaliaTikus.jenisMakanan = "Daging ,Buah.";
	mamaliaHamster.jenisMakanan = "Biji-bijian.";
	mamaliaTupai.jenisMakanan = "Biji-bijian , Buah.";
	
	cout <<"mamalia Hamster berwarna " <<(mamaliaHamster.warnaBulu);
	cout <<"makanannya " <<(mamaliaHamster.jenisMakanan);
	mamaliaHamster.bersuara("citt");

	cout <<"mamalia Tupai berwarna " <<(mamaliaTupai.warnaBulu);
	cout <<"makanannya " <<(mamaliaTupai.jenisMakanan);
	mamaliaTupai.bersuara("cuutt");
}
