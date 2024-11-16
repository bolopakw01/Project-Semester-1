#include <iostream>
#include <string>
#include <cstdlib> //header untuk sistem pause
#include <conio.h> //header untuk getch
using namespace std;

void garis() {
	cout<<"\t\t=============================================================================\n";
}

void garis1(){
	cout<<"\t\t-----------------------------------------------------------------------------\n";
}

void garis2(){
	cout<<"\t\t_____________________________________________________________________________\n";
}
	
	// Array untuk menyimpan nomor RW dan RT yang telah ditentukan sebelumnya
	string mrw,mrt;
	string prw,prt;
	string rw[3]={"RW 010","RW 020","RW 030"};
	string rt[3]={"RT 001","RT 002","RT 003"};
								
	//Array untuk menyimpan informasi penduduk
	//Nama						
	string nk[3][3][50]={{{"Ezra Dwi Pradipta","Arsen Adhiyaksa","Ryan Esa Shankara","Rafka Arshad Fathan","Athar Rakhan Diaskara"},
						{"Gibran Pradipta","Elang Abimanyu","Dewa Abigail Putra","Sadewa Pangestu","Deandra Rajevan"},
						{"Bima Argantara","Dodi Reza Geofino","Arjuna Buanadipta","Galang Emerson","Pandu Tirtayasa"}},
						
						{{"Eko Dwi Prasetyo","Fikri Nur Irawan","Muhammad Andhika","Bayu Aji Prasetyo","Heri Nur Setiawan"},
						{"Agus Joko Sukino","Ali Nur Salimin","Farhan Ardiansyah","Budi HartonoMall","Yoga Ari Pratama"},
						{"Fajar Tri Widodo","Edy Agus Mustari","Dwi Eka Nugroho"," Sugiono Sumantoro","Joshua Suherman"}},
						
						{{"Asep Tri Hermawan","Gilang Pamungkas","Gunawan Su Pati","Irwan Syahputra","Firdaus Yudhoyono"},
						{"Eka Ahmad Saputra","Rahmat Nur Dian","Agus Kurniawan","Dani Fais Oktavian","Adit Kromo Sutejo"},
						{"David Febrianto","Ahong Hermawan","Riski ikhsan Saputra","Gilang Tri Dirga","Dedy Corbuzier"}}};
	//Nomor KK					
	string kk[3][3][50]={{{"3404057007060001","3404051234567890","3404050987654321","3404051234567098","3404056789054321"},
						{"3404051234509876","3404059876012345","3404051324576809","3404050897867564","3404051235465789"},
						{"3404059873648592","3404052183659083","3404052389071456","3404057239046583","3404053489201759"}},
	
						{{"3404020017060001","3404076234567000","3404072234962000","3404026114561000","3404058339002000"},
						{"3404020011161000","3404012315516000","3404022114781000","3404040047562200","3404029111164000"},
						{"3404020017333550","3404020046662828","3404020012484800","3404089002264000","3404010082764850"}},
						
						{{"3404040067005709","3404037006500001","3404072001900032","3404025686200006","3404052356870001"},
						{"3404026000547000","3404018976410000","3404022876470000","3404047800627000","3404027111679000"},
						{"3404024000431000","3404026570005000","3404023456729000","3404082652880001","3404010056721001"}}};
	//Jumlah Anggota Keluarga										
	int ak[3][3][50]={{{4,3,2,5,4},{3,3,4,6,2},{2,2,2,3,5}},
	
					 {{5,4,3,2,2},{3,4,3,4,4},{8,2,3,2,3}},
					 
					 {{4,4,4,3,2},{2,2,2,2,2},{1,2,3,4,3}}};
	
	string pilih,nkk;
	int batas[3][3];
	int i,a,b;
	char kembali;
	

	


#define red "\033[1;31m"
#define white "\033[0m"
#define yellow  "\x1b[93;1m"
#define green   "\033[32m" 
#define cyan    "\033[36m" 

// Informasi username, password, dan peran yang telah ditentukan sebelumnya untuk otentikasi pengguna
struct Akun {
	string username;
	string password;
	string role;
};

// Fungsi untuk menambahkan data penduduk
void tambah() {
		system("cls");
		cin.sync();
		cout<<endl;
		garis();
			cout<<"\t\t||		  RW 010\t\tRW 020\t\tRW 030		   ||\n";
			cout<<"\t\t||		  RT 001\t\tRT 002\t\tRT 003		   ||\n";
		garis();	
			cout<<"\t\tMasukkan Nomor RW : ";cin>>mrw;
			cout<<"\t\tMasukkan Nomor RT : ";cin>>mrt;
			
			if(mrw=="010"||mrw=="10"){
				i=0;
			}else if(mrw=="020"||mrw=="20"){
				i=1;
			}else if(mrw=="030"||mrw=="30"){
				i=2;
			}else{
			}
			
			if(mrt=="001"||mrt=="01"||mrt=="1"){
				a=0;
			}else if(mrt=="002"||mrt=="02"||mrt=="2"){
				a=1;
			}else if(mrt=="003"||mrt=="03"||mrt=="3"){
				a=2;
			}else{
			}
			garis1();			
			for(int b=batas[i][a];b<=batas[i][a];b++){
				
				cout<<"\t\tMasukkan Nomor KK\t\t: ";cin>>kk[i][a][b];
				cin.sync();
				cout<<"\t\tMasukkan Nama Kepala keluarga\t: ";getline(cin,nk[i][a][b]);
				cout<<"\t\tJumlah Anggota keluarga\t\t: ";cin>>ak[i][a][b];
				garis();
				cout<<green<<"\t\t\t\t\t   DATA BERHASIL DITAMBAH"<<white<<endl;	
				garis();
				
				kk[i][a][b]=kk[i][a][b];
				nk[i][a][b]=nk[i][a][b];
				ak[i][a][b]=ak[i][a][b];
				
			}
			
			batas[i][a]++;
			cout<<"\n\n\t\tTekan Apa Saja Untuk Kembali Ke Menu\n";		
			getch();system("cls");
			
	
	

}

// Fungsi untuk menampilkan semua data penduduk
void tampilkan(){
		system("cls");
		garis();
		cout<<"\t\t\t\t\t   DATA SELURUH PENDUDUK"<<endl;
		
		for(int i=0;i<3;i++){
			garis();
			cout<<"\t\t\t\t\t\t"<<yellow<<rw[i]<<white<<endl;
			garis();
			for(int a=0;a<3;a++){
				cout<<"\t\t\t\t\t\t"<<rt[a]<<endl;
				garis();
				for(int b=0;b<batas[i][a];b++){
					cout<<endl;
					cout<<cyan<<"\t\t\t\t\t Nomor KK : "<<kk[i][a][b]<<white<<endl<<endl;
					cout<<cyan<<"\t\tKepala Keluarga : "<<nk[i][a][b]<<white<<"\t\t";
					cout<<cyan<<"Jumlah Anggota keluarga : "<<ak[i][a][b]<<white<<endl;
					garis2();
	
					
				}
				cout<<endl;
				garis1();	
			}
			cout<<endl<<endl<<endl;cout<<endl<<endl<<endl;
		}
		cout<<"\n\n\t\tTekan Apa Saja Untuk Kembali Ke Menu\n";
		getch();system("cls");
}

// Fungsi untuk mencari data penduduk
void cari(){
		system("cls");
		garis();
		cout<<"\t\t\t\tMasukkan Nomor KK Yang Ingin Anda Cari : ";cin>>nkk;
		garis();
		bool dataDitemukan=false;
		for(int i=0;i<3;i++){
			for(int a=0;a<3;a++){
				for(int b=0;b<batas[i][a];b++){
					if(nkk==kk[i][a][b]){
						system("cls");
						garis1();
						cout<<green<<"\t\t\t\t\t\tHASIL PENCARIAN\n"<<white;
						garis();
						cout<<endl<<endl;
						garis();
						cout<<"\t\t"<<rw[i]<<"\t\t\t\t\t\t\t\t       "<<rt[a]<<endl;
						garis();
						cout<<"\t\t\t\t\tNomor KK : "<<kk[i][a][b]<<endl<<endl;
						cout<<"\t\tKepala Keluarga : "<<nk[i][a][b]<<"\t\t";
						cout<<"Jumlah Anggota keluarga : "<<ak[i][a][b]<<endl;
						garis2();
						dataDitemukan=true;									
					}						
				}
			}
		}
		if(!dataDitemukan){
    		cout<<endl<<endl;
			garis();
			cout<<red<<"\t\t\t\t\t     Data Tidak Ditemukan"<<white<<endl;
			garis();
		}
		cout<<"\n\n\t\tTekan Apa Saja Untuk Kembali Ke Menu\n";
	    getch();system("cls");
		
	
	
				

}

// Fungsi untuk menghapus data penduduk
void hapus() {
	system("cls");
	garis();
    cout <<"\t\t\tMasukkan Nomor KK Yang Ingin Anda Hapus : ";
    cin >> nkk;
	garis();
	bool dataDitemukan=false;
    for (int i = 0; i < 3; i++) {
        for (int a = 0; a < 3; a++) {
            for (int b = 0; b < batas[i][a]; b++) {
                if (nkk == kk[i][a][b]) {
                    // Data found, now delete it
                    for (int k = b; k < batas[i][a] - 1; k++) {
                        kk[i][a][k] = kk[i][a][k + 1];
                        nk[i][a][k] = nk[i][a][k + 1];
                        ak[i][a][k] = ak[i][a][k + 1];
                    }

                    batas[i][a]--;
                    cout << "\t\t\tData dengan Nomor KK " << nkk <<red<< " (BERHASIL DIHAPUS)" <<white<< endl;
                    getch();
                    system("cls");
                    return;
					dataDitemukan=true;					
				}
            }
        }
    }
    if(!dataDitemukan){
    	cout<<endl<<endl;
		garis();
		cout<<red<<"\t\t\t\t\t     Data Tidak Ditemukan"<<white<<endl;
		garis();
	}
    cout<<"\n\n\t\tTekan Apa Saja Untuk Kembali Ke Menu\n";
	getch();system("cls");
	
    
}

// Fungsi untuk memperbarui data penduduk
void ubah(){
		system("cls");
		garis();
		cout<<"\t\t\tMasukkan Nomor KK Yang Ingin Anda Edit : ";cin>>nkk;	
		garis();
		bool dataDitemukan=false;	
		for(int i=0;i<3;i++){			
			for(int a=0;a<3;a++){
				for(int b=0;b<batas[i][a];b++){
					if(nkk==kk[i][a][b]){
						cin.sync();
						cout<<"\t\tMasukkan Nama Kepala Keluarga\t: ";getline(cin,nk[i][a][b]);
						cout<<"\t\tJumlah Anggota Keluarga\t\t: ";cin>>ak[i][a][b];
						garis1();
						cout << "\t\t\tData dengan Nomor KK " << nkk <<yellow<< " (BERHASIL DIEDIT)" <<white<< endl;
						garis1();
						dataDitemukan=true;
					}
				}
			}
		}
		if(!dataDitemukan){
    		cout<<endl<<endl;
			garis();
			cout<<red<<"\t\t\t\t\t     Data Tidak Ditemukan"<<white<<endl;
			garis();
		}
		cout<<"\n\n\t\tTekan Apa Saja Untuk Kembali Ke Menu\n";
		getch();system("cls");	
}

int main(){
	
	// Inisialisasi jumlah penduduk untuk setiap keluarga
	batas[0][0]=5;batas[0][1]=5;batas[0][2]=5;
	batas[1][0]=5;batas[1][1]=5;batas[1][2]=5;
	batas[2][0]=5;batas[2][1]=5;batas[2][2]=5;
	
	// Array untuk menyimpan akun pengguna (username, password, peran)	
	const int max=10;
	Akun akun[max];
	int pilih;
	string username,password;
	bool registrasi=false; //cek registrasi atau tidak
	
	//akun admin
	int jumlahAkun=5;
	akun[0].username="bolopa";
	akun[0].password="001";
	akun[0].role="admin";

	akun[1].username="dava";
	akun[1].password="123";
	akun[1].role="admin";

	akun[2].username="irene";
	akun[2].password="123";
	akun[2].role="admin";

	akun[3].username="Desti";
	akun[3].password="123";
	akun[3].role="admin";

	akun[4].username="ifah";
	akun[4].password="001";
	akun[4].role="admin";


	do {
		system("cls");
		garis();
		cout<<"\t\t\t\t\tProgram Database Penduduk"<<endl;
		garis();
		cout<<"\t\t1. Login "<<endl;
		cout<<"\t\t2. Registrasi "<<endl;
		cout<<"\t\t3."<<red<<" Keluar "<<white<<endl;
		garis();
		cout<<"\t\tMasukan Perintah yang ingin Anda lakukan : ";
		cin>>pilih;

		switch(pilih) {
			case 1: {
				system("cls");
				garis();
				cout<<"\t\t\t\t\t      MASUKKAN AKUN ANDA"<<endl;
				garis();
				cout<<"\t\tUsername : ";
				cin>>username;

				for(int n=0; n<max; n++) {
					if(username==akun[n].username) {
						cout<<"\t\tPassword : ";

						password="";
						char ch;
						while((ch=_getch())!=13) {//melakukan loop hingga code ASCII enter di tekan
							if(ch==8) {//Jika karakter adalah kode ASCII Backspace untuk meperbarui tampilan
								if(!password.empty()) {
									password = password.substr(0, password.size() - 1);
									cout<<"\b \b";
								}
							} else {//selain itu semua menampilkan *
								password.push_back(ch);
								cout<<"*";
							}
						}
						if(password==akun[n].password) {
							cout<<endl;
							garis1();
							cout<<"\t\t\t\t\t\tLOGIN BERHASIL!!"<<endl;
							garis1();
							cin.ignore(); //clear input buffer
							cin.get(); //tunggu tekan enter
							if(akun[n].role=="admin") {
								system("cls");
								garis();
								cout<<yellow<<"\t\t\t\t\t\tWELCOME ADMIN :)"<<white<<endl;
								garis();
								string menuAdmin;
								menu:
								do{
									garis1();
									cout<<"\t\t\t\t\t\tMENU ADMIN \n";
									garis1();
									cout<<"\t\t1. Masukkan Data"<<endl;
									cout<<"\t\t2. Tampilkan Semua Data"<<endl;
									cout<<"\t\t3. Cari Data"<<endl;
									cout<<"\t\t4. Hapus Data"<<endl;
									cout<<"\t\t5. Edit Data"<<endl;
									cout<<"\t\t6. "<<red<<"Log Out"<<white<<endl;
									garis1();
									cout<<"\t\tMasukkan Perintah yang ingin Anda lakukan : ";
									cin>>menuAdmin;
									
									if(menuAdmin=="1"){
										tambah();
									}else if(menuAdmin=="2"){
										tampilkan();
									}else if(menuAdmin=="3"){
										cari();
									}else if(menuAdmin=="4"){
										hapus();
									}else if(menuAdmin=="5"){
										ubah();
									}else if(menuAdmin=="6"){
										system("cls");
										garis();
										cout<<"\t\t\t\t\t\tTERIMAKASIH "<<red<<"\3"<<white<<endl;
										garis();
									}
	
								}while(menuAdmin !="6");
							} else if(akun[n].role=="penduduk"){
								system("cls");
								garis();
								cout<<"\t\t\t\t\t\tWELCOME :)"<<endl;
								garis();
								int menuPenduduk;
								do{
									garis1();
									cout<<"\t\t\t\t\t\t     MENU \n";
									garis1();
									cout<<"\t\t1. Daftarkan Data Keluarga"<<endl;
									cout<<"\t\t2. Tampilkan Data Penduduk"<<endl;
									cout<<"\t\t3. Cari Data Penduduk"<<endl;
									cout<<"\t\t4. "<<red<<"Log Out"<<white<<endl;
									garis1();
									cout<<"\t\tMasukan Perintah Yang ingin Anda lakukan : ";
									cin>>menuPenduduk;
									
									switch(menuPenduduk){
										case 1:
											tambah();
											break;
										case 2:
											tampilkan();
											break;
										case 3:
											cari();
											break;
										case 4:
											garis();
											cout<<"\t\t\t\t\t\tTERIMAKASIH "<<red<<"\3"<<white<<endl;
											garis();
											break;
										default:
											cout<<"\t\tPilihan Tidak Valid"<<endl;
											break;
									}
								}while (menuPenduduk!=4);
							}
								
						} else {
							cout<<endl;
							cout<<"\t\tLOGIN FAILED."<<endl<<endl;
							cout<<"\t\tINVALID PASSWORD."<<endl;
						}
						break; // Untuk Berhenti jika Username ada
					} else if(n==max-1) {
						cout<<endl;
						cout<<red<<"\t\tLogin Failed."<<white<<endl<<endl;
						cout<<"\t\tUsername tidak ditemukan. Harap buat akun terlebih dahulu."<<endl<<endl;
						system("pause"); //enter dulu baru lanjut
					}
				}
				break;
			}
			case 2: {
				system("cls");
				garis();
				cout<<"\t\t\t\t\t\tBUAT AKUN"<<endl;
				garis();
				cout<<"\t\tUsername : ";
				cin>>username;
				
				bool usernameADA=false;
				for(int t=0;t<jumlahAkun;t++){
					if(username==akun[t].username){
						cout<<"\t\tUsername Sudah terdaftar."<<endl;
						cout<<"\t\tSilahkan Gunakan Username Lain"<<endl;
						usernameADA=true;
						break;
					}
				}
				if(!usernameADA){
					cout<<"\t\tPassword : ";
					cin>>akun[jumlahAkun].password;
					
					akun[jumlahAkun].role="penduduk";
					akun[jumlahAkun].username=username;
					jumlahAkun++;
					registrasi=true;
					garis();
					cout<<"\t\t\t\t\tAnda Berhasil Ter-Registrasi"<<endl;
					garis();
				}
				break;
			}
			case 3: {
				system("cls");
				garis();
				cout<<"\t\t\t\t\t    Keluar dari program"<<endl;
				garis();
				cout<<endl<<endl<<endl;
				garis();
				cout<<"\t\t\t\t  TERIMA KASIH SUDAH MENGGUNAKAN PROGRAM INI\n";
				cout<<red<<"\t\t\t\t\t\t  \3  \3  \3"<<white<<endl;
				garis();
				cout<<endl<<endl<<endl;
				exit(0); //untuk keluar dari program
				break;
			}
			default: {
				cout<<"\t\tPerintah tidak valid";
				break;
			}
		}
		cin.ignore(); //clear input buffer
		cin.get(); //tunggu tekan enter
	} while(pilih !='3');
	return 0;
}
