#include <iostream>
#include <stdio.h>
using namespace std;
struct data
{
    string nama, dosen, jurusan, agama, gender, mk;
    char kontak[15];
    char nim[20];
    int nilai;
    struct
    {
        string namaJalan, kota, provinsi;
        int nomorRumah;
    } alamat;
    struct
    {
        int tanggal, tahun;
        string tempatLahir;
        char bulan[15];
    } tanggalLahir;
};

void dataMhs()
{
    int i, n;
    cout << "Jumlah data yang akan diinput? ";
    cin >> n;
    data mhs[n];

    for (i = 0; i < n; i++)
    {
        cout << "DATA MAHASISWA - " << i + 1 << endl;

        cout << "Nama: ";
        getline(cin, (mhs[i].nama));
        cin.ignore(1000, '\n');

        cout << "NIM : ";
        cin >> mhs[i].nim;

        cout << "Jurusan : ";
        getline(cin, (mhs[i].jurusan));
        cin.ignore(1000, '\n');

        cout << "Jenis Kelamin : ";
        getline(cin, (mhs[i].gender));
        cin.ignore(1000, '\n');

        cout << "Agama : ";
        cin >> mhs[i].agama;
        cout << endl;

        cout << "===TEMPAT TANGGAL LAHIR===  \n";
        cout << "Kota : ";
        getline(cin, (mhs[i].tanggalLahir.tempatLahir));
        cin.ignore(1000, '\n');

        cout << "Tanggal (angka): ";
        cin >> mhs[i].tanggalLahir.tanggal;
        cout << "Bulan (angka) : ";
        cin >> mhs[i].tanggalLahir.bulan;
        cout << "Tahun (angka) : ";
        cin >> mhs[i].tanggalLahir.tahun;
        cout << endl;
        cout << "===ALAMAT=== \n";
        cout << "Jalan : ";
        getline(cin, (mhs[i].alamat.namaJalan));
        cin.ignore(1000, '\n');
        cout << "Nomor Rumah (angka) : ";
        cin >> mhs[i].alamat.nomorRumah;
        cout << "Kota : ";
        getline(cin, (mhs[i].alamat.kota));
        cin.ignore(1000, '\n');

        cout << "Provinsi : ";
        cin >> mhs[i].alamat.provinsi;
        getline(cin, (mhs[i].alamat.provinsi));

        cout << "No Kontak : ";
        cin >> mhs[i].kontak;

        cout << "________________________________ \n";
        cout << endl;
    };
}
void nilaiMhs()
{
    int i, n;
    cout << "Jumlah data yang akan diinput? ";
    cin >> n;
    data mhs[n];

    for (i = 0; i < n; i++)
    {
        cout << "NILAI MATA KULIAH No. " << i + 1 << endl;

        cout << "Nama: ";
        getline(cin, (mhs[i].nama));
        cin.ignore(1000, '\n');

        cout << "NIM : ";
        cin >> mhs[i].nim;

        cout << "Jurusan : ";
        getline(cin, (mhs[i].jurusan));
        cin.ignore(1000, '\n');

        cout << "Mata Kuliah : ";
        getline(cin, (mhs[i].mk));

        cout << "Dosen : ";
        getline(cin, (mhs[i].dosen));

        cout << "Input Nilai : ";
        cin >> mhs[i].nilai;
        if (mhs[i].nilai >= 85)
        {
            cout << "Nilai = A ( LULUS )";
        }
        else if (mhs[i].nilai >= 70)
        {
            cout << "Nilai = B ( LULUS )";
        }
        else if (mhs[i].nilai >= 55)
        {
            cout << "Nilai = C ( LULUS )";
        }
        else if (mhs[i].nilai >= 35)
        {
            cout << "Nilai = D ( TIDAK LULUS )";
        }
        else
        {
            cout << "Nilai = E ( TIDAK LULUS )";
        }
    }
}
int main()
{
    int menu;
    cout << "Menu : \n 1. Data Mahasiswa \n 2. Nilai Mata Kuliah \n Pilih menu : ";
    cin >> menu;
    switch (menu)
    {
    case 1:
        dataMhs();
        break;
    case 2:
        nilaiMhs();
        break;
    default:
        cout << "\n Maaf menu tidak ada";
        break;
    }
    return 0;
}
