#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void exit ();
int vol_kubus (int s);
int ls_kubus (int s);
int vol_balok (int p, int l, int t);
int ls_balok (int p, int l, int t);
int ls_limas (int s, int S);
int vol_limas (float s, float t);
int ls_prisma (float a, float t, float T, float s);
float vol_prisma (int a, int t, int T);
float ls_tabung (float r, float t);
float vol_tabung (float r, float t);
float ls_kerucut (float r, float s);
float vol_kerucut (float r, float t);
float ls_bola (float r);
float vol_bola (float r);
 
int main () {
	char pil;
	int pilih, n;
	int s,p,l,a,t,T,r,S ;
	
	cout<<"\t\t\t||================================================||"<<endl;
	cout<<"\t\t\t|| P E M R O G R A M A N   T E R S T R U K T U R  ||"<<endl;
	cout<<"\t\t\t||================================================||"<<endl;
	cout<<"\t\t\t||================================================||"<<endl;
	cout<<endl;
	cout<<"Ingin ke menu pilihan (Y/T) ? "; cin>>pil;
		if (pil=='Y' or pil=='y') 
			 goto menu;
		
		else 
				exit(0);
				
		menu:
		system ("cls");
	
		cout<<"\t\t\t PROGRAM MENGHITUNG LUAS DAN VOLUME BANGUN RUANG"<<endl;
		cout<<"\t\t\t 1. KUBUS"<<endl; 
		cout<<"\t\t\t 2. BALOK"<<endl;
		cout<<"\t\t\t 3. PRISMA"<<endl;
		cout<<"\t\t\t 4. LIMAS"<<endl;
		cout<<"\t\t\t 5. TABUNG"<<endl;
		cout<<"\t\t\t 6. KERUCUT"<<endl;
		cout<<"\t\t\t 7. BOLA"<<endl;
		cout<<"Bangun ruang berapa yang anda pilih ? "; cin>>pilih;
		
	switch (pilih) {
		case 1 : cout<<"masukkan sisi kubus : "; cin>>s;
					cout<<"volume kubus : "<<vol_kubus(s);
					cout<<endl;
					cout<<"Luas kubus : "<<ls_kubus(s)<<endl;
					break;
 	
 		case 2 : cout<<"masukkan panjang balok : "; cin>>p;
 					cout<<"masukkan lebar balok : "; cin>>l;
 					cout<<"masukkan tinggi balok : "; cin>>t;
 					cout<<"volume balok  : "<<vol_balok(p,l,t);
 					cout<<endl;
 					cout<<"luas balok : "<<ls_balok(p,l,t)<<endl;
 					break;
 					
		case 3 : cout<<"masukkan alas segitiga : "; cin>>a;
					cout<<"masukkan tinggi segita :";cin>>t;
					cout<<"masukkan sisi segitiga : ";cin>>s;
					cout<<"masukkan tinggi limas : ";cin>>T;
					cout<<"volume prisma : "<<vol_prisma(a,t,T)<<endl;
					cout<<"luas prisma : "<<ls_prisma(a,t,T,s)<<endl;
					break;
					
		case 4 : cout<<"masukkan sisi alas limas : ";cin>>s;
					cout<<"masukkan  tinggi limas : "; cin>>t;
					cout<<"masukkan Sisi tegak limas : "; cin>>S;
					cout<<"volume limas : "<<vol_limas(s,t)<<endl;
					cout<<"luas limas : "<<ls_limas(s,S)<<endl;
					break;
					
		case 5 : cout<<"masukkan jari-jari lingkaran tabung : ";cin>>r;
					cout<<"masukkan tinggi tabung : ";cin>>t;
					cout<<"volume tabung : "<<vol_tabung(r,t)<<endl;
					cout<<"luas tabung : "<<ls_tabung(r,t)<<endl;
					break;
					
		case 6 : cout<<"masukkan jari-jari lingkaran kerucut : ";cin>>r;
					cout<<"masukkan tinggi kerucut : "; cin>>t;
					cout<<"masukkan panjang sisi kerucut : "; cin>>s;
					cout<<"volume kerucut : "<<vol_kerucut(r,t)<<endl;
					cout<<"luas kerucut : "<<ls_kerucut(r,s)<<endl;
					break;
		
		case 7 : cout<<"masukkan jari-jari bola : "; cin>>r;
					cout<<"volume bola : "<<vol_bola(r)<<endl;
					cout<<"luas bola : "<<ls_bola(r)<<endl;
					break;
		
		default : cout<<"inputan anda salah!"<<endl;
					cout<<"Kembali ke menu pilihan ?(Y/T)";cin>>pil;
				if (pil=='Y' or pil=='y') 
			 		goto menu;
				else 
					exit(0);
					
					break;										
	}
		
getch();
}

int vol_kubus (int s) {
	return (s*s*s);
}

int ls_kubus (int s) {
	return (6*s*s);
}

int vol_balok (int p, int l, int t) {
	return (p*l*t);
}

int ls_balok (int p, int l, int t) {
	return (2*((p*l)+(p*t)+(l*t)));
}
int ls_limas (int s, int S) // s=sisi persigi pada alas, S=sisi tegak limas
{
	return ((s*s)+4*(S));
}
int vol_limas (float s, float t) //s=sisi dari persegi pada alas limas
{
	return ((s*s*t)/3);
}
int ls_prisma (float a, float t, float T, float s) // s=nilai dari setiap sisi segitiga pada alas dan tutup prisma, t1=tinggi segitiga, t2=tinggi prisma
{
	return (2*(0.5*a*t)+(s+s+s)*T);
}

float vol_prisma (int a, int t, int T) //a=alas segitiga, t=tinggi segitiga, T=tinggi prisma
 {
 	return ((0.15*a*t)*T);
 }
float ls_tabung (float r, float t) 
 {
 	return (2*3.14*r*(r+t));
 }
float vol_tabung (float r, float t) // r=jari-jari lingkaran, t=tinggi tabung itu sendiri
 {
 	return (3.14*r*r*t);
 }
float ls_kerucut (float r, float s) // r=jari-jaring lingkaran, s=selimut tabung
 {
 	return ((3.14*r*r)+(3.14*r*s));
 } 
 float vol_kerucut (float r, float t) // r=jari-jari lingkaran, t=tinggi kerucut itu sendiri
 {
 	return (0.33*3.14*r*r*t);
 }
 float ls_bola (float r)
 {
 	return (4*3.14*r*r);
 }
float vol_bola (float r) 
 {
 	return ((4*3.14*r*r)/3);
 }