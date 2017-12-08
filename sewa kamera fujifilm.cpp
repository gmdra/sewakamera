#include<stdio.h>
#include<conio.h>
#include<iostream.h>
main()
{
char kode,kamera[30],nama[10];
int lama,harga,jumsewa,tobar,ubar,ukem;

clrscr();

cout<<"\tRental Kamera Fujifilm X-Series"<<endl;
cout<<"======================================"<<endl;
cout<<"Kode \tJenis Kamera\tHarga Sewa"<<endl;
cout<<"--------------------------------------"<<endl;
cout<<"1 \tFujifilm XA-10 \tRp 100.000,-"<<endl;
cout<<"2 \tFujifilm XA-3\tRp 150.000,-"<<endl;
cout<<"3 \tFujifilm XA-2\tRp 155.000,-"<<endl;
cout<<"4 \tFujifilm X-T2\tRp 165.000,-"<<endl;
cout<<"--------------------------------------"<<endl;

cout<<"Masukkan Nama Pelanggan\t  : ";cin>>nama;
cout<<"Masukkan Kode Kamera  : ";cin>>kode;
cout<<"Masukkan Jumlah Sewa\t  : ";cin>>jumsewa;
cout<<"Masukkan Lama Sewa (Hari)  : ";cin>>lama;
cout<<"======================================"<<endl;

if(kode=='1')
{strcpy(kamera,"Fujifilm XA-10");harga=100000;}
else if(kode=='2')
{strcpy(kamera,"Fujifilm XA-3");harga=150000;}
else
{strcpy(kamera,"Fujifilm XA-2");harga=155000;}
if(kode=='4')
{strcpy(kamera,"Fujifilm X-T2");harga=165000;}
cout<<endl;

clrscr();
cout<<"============================================"<<endl;
cout<<"Nama Pelanggan\t           : "<<nama<<endl;
cout<<"--------------------------------------------"<<endl;
cout<<"Kode Kamera\t\t   : "<<kode<<endl;
cout<<"Nama kamera\t\t   : "<<kamera<<endl;
cout<<"Biaya Sewa/hari\t\t   : "<<harga<<endl;
cout<<"Jumlah sewa\t\t   : "<<jumsewa<<endl;
cout<<"Lama Sewa(hari)\t\t   : "<<lama<<endl;
cout<<"--------------------------------------------"<<endl;

tobar=lama*harga*jumsewa;

cout<<"Total Bayar\t\t   : Rp "<<tobar<<endl;
cout<<"Uang Bayar\t\t   : Rp ";cin>>ubar;
ukem=ubar-tobar;
cout<<"Uang Kembali\t\t   : Rp "<<ukem<<endl;
cout<<"===================================="<<endl;
cout<<"\nTERIMA KASIH ATAS KUNJUNGANNYA  "<<endl<<endl;
cout<<"===================================="<<endl;
getch();
}