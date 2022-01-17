#include<iostream>

using namespace std;

int main()
{
	int pilihan;
	char ulang;
	do
	{
		cout<<"##nama bulan##"<<endl;
		cout<<"=============================="<<endl;
		cout<<"1. January"<<endl;
		cout<<"2. February"<<endl;
		cout<<"3. Maret"<<endl;
		cout<<"4. April"<<endl;
		cout<<"5. Mei"<<endl;
		cout<<"6. Juni"<<endl;
		cout<<"7. Juli"<<endl;
		cout<<"8. Agustus"<<endl;
		cout<<"9. September"<<endl;
		cout<<"10. Oktober"<<endl;
		cout<<"11. November"<<endl;
		cout<<"12. Desember"<<endl;
		cout<<endl;
		
		cout<<"pilihan anda:"
		
cin<<pilihan;
		
		switch(pilihan){
			case 1:
				cout<<"anda memilih January"<<endl;
				break;
			case 2:
				cout<<"anda memilih February"<<endl;
				break;
			case 3:
				cout<<"anda memilih Maret"<<endl;
				break;
			case 4:
				cout<<"anda memilih April"<<endl;
				break;
			case 5:
				cout<<"anda memilih Mei"<<endl;
				break;
			case 6:
				cout<<"anda memilih Juni"<<endl;
				break;
			case 7:
				cout<<"anda memilih Juli"<<endl;
				break;
			case 8:
				cout<<"anda memilih Agustus"<<endl;
				break;
			case 9:
				cout<<"anda memilih September"<<endl;
				break;
			case 10:
				cout<<"anda memilih Oktober"<<endl;
				break;
			case 11:
				cout<<"anda memilih November"<<endl;
				break;
			case 12:
				cout<<"anda memilih Desember"<<endl;
				break;
			default:
				cout<<"menu tidak tersedia"<<endl;
		}
		cout<<endl;
		
		cout<<"ingin memilih menu lain(y/t)?";
		cin>>ulang;
		cout<<endl;
	}
	while(ulang!='t');
	
	cout<<"terima kasih...";
	
	cout<<endl;
}
