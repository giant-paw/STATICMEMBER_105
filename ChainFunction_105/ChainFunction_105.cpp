#include <iostream>
using namespace std;

class buku {
	string judul;

public :
	buku setJudul(string judul) {
		this->judul = judul;
		return *this;				// Chain function
	}
	string getJudul() {
		return this->judul;
	}
};

int main()
{
}