#include <iostream>   // Library untuk input dan output (cin, cout)
#include <string>     // Library untuk menggunakan tipe data string
#include <iomanip>    // Library untuk mengatur format output (seperti setprecision)
using namespace std;  // Menggunakan namespace standar agar tidak perlu menulis std:: setiap kali

int main() {
    // Deklarasi variabel
    string namaProduk;   // Menyimpan nama produk yang dimasukkan pengguna
    int jumlah;          // Menyimpan jumlah produk yang ingin dibeli
    double total = 0;    // Total harga sebelum diskon (dihitung dari harga * jumlah)
    double harga = 0;    // Harga satuan dari produk yang dipilih

    // Daftar harga produk dalam Rupiah (tanpa titik pemisah ribuan)
    double adizeroAruka = 2100000;
    double barredaDecode = 1100000;
    double courtBlock = 900000;
    double gazelleIndoor = 1800000;
    double sambaOg = 2000000;
    double r71 = 1100000;
    double vlCourt = 1100000;
    double sl72 = 1600000;
    double handBall = 1700000;

    // Mengatur format output agar angka desimal tidak ditampilkan (karena harga dalam satuan rupiah bulat)
    cout << fixed << setprecision(0);

    // Menampilkan header dan daftar produk beserta harganya
    cout << "===== TOKO SEPATU ADIDAS =====" << endl << endl;
    cout << "Adidas Adizero Aruka      Rp. 2.100.000" << endl;
    cout << "Adidas Barreda Decode     Rp. 1.100.000 " << endl;
    cout << "Adidas CourtBlock         Rp. 900.000" << endl;
    cout << "Adidas Gazelle Indoor     Rp. 1.800.000" << endl;
    cout << "Adidas Samba OG           Rp. 2.000.000" << endl;
    cout << "Adidas R71                Rp. 1.100.000" << endl;
    cout << "Adidas VL Court 3.0       Rp. 1.100.000" << endl;
    cout << "Adidas SL 72 RS           Rp. 1.600.000" << endl;
    cout << "Adidas Handball Spezial   Rp. 1.700.000" << endl << endl;

    // Menampilkan informasi promo spesial
    cout << "Edisi Memperingati Hari Jadi Karawang Ke-392 Tahun" << endl;
    cout << "Setiap Pembelian Produk Mendapatkan Discount" << endl;
    cout << "Pembelian 2Jt dapat Discount 10%" << endl;
    cout << "Pembelian 1Jt dapat Discount 5%" << endl << endl;

    // Meminta input nama produk dari pengguna
    // Menggunakan getline() agar bisa menerima input yang mengandung spasi (misal: "Samba OG")
    cout << "Masukkan nama produk: ";
    getline(cin, namaProduk);

    // Meminta input jumlah produk
    cout << "Masukkan jumlah produk: ";
    cin >> jumlah;

    // Membandingkan input nama produk dengan daftar produk yang tersedia
    // Mendukung penulisan huruf besar/kecil (case-insensitive sederhana)
    if (namaProduk == "Adizero Aruka" || namaProduk == "adizero aruka") {
        harga = adizeroAruka;
    } else if (namaProduk == "Barreda Decode" || namaProduk == "barreda decode") {
        harga = barredaDecode;
    } else if (namaProduk == "CourtBlock" || namaProduk == "courtblock") {
        harga = courtBlock;
    } else if (namaProduk == "Gazelle Indoor" || namaProduk == "gazelle indoor") {
        harga = gazelleIndoor;
    } else if (namaProduk == "Samba OG" || namaProduk == "samba og") {
        harga = sambaOg;
    } else if (namaProduk == "R71" || namaProduk == "r71") {
        harga = r71;
    } else if (namaProduk == "VL Court 3.0" || namaProduk == "vl court 3.0") {
        harga = vlCourt;
    } else if (namaProduk == "SL 72 RS" || namaProduk == "sl 72 rs") {
        harga = sl72;
    } else if (namaProduk == "Handball Spezial" || namaProduk == "handball spezial") {
        harga = handBall;
    } else {
        // Jika nama produk tidak cocok dengan daftar, tampilkan pesan error dan hentikan program
        cout << "Produk tidak ditemukan!" << endl;
        return 0; // Keluar dari program
    }

    // Menghitung total harga sebelum diskon
    total = harga * jumlah;

    // Inisialisasi variabel diskon
    double discount = 0;

    // Menentukan besar diskon berdasarkan total pembelian
    // Sesuai aturan promo:
    // - Jika total >= Rp2.000.000 → diskon 10%
    // - Jika total >= Rp1.000.000 (tapi < Rp2.000.000) → diskon 5%
    // - Jika di bawah Rp1.000.000 → tidak ada diskon
    if (total >= 2000000) {
        discount = 0.10; // 10% diskon
    } else if (total >= 1000000) {
        discount = 0.05; // 5% diskon
    } else {
        discount = 0; // Tidak ada diskon
        cout << "Tidak Mendapatkan Diskon WKWKW";
    }

    // Menghitung nominal uang yang didiskon
    double totalDiskon = total * discount;

    // Menghitung total akhir yang harus dibayar setelah dikurangi diskon
    double totalBayar = total - totalDiskon;

    // Menampilkan rincian pembayaran kepada pengguna
    cout << "\nHarga sebelum diskon: Rp. " << total << endl;
    cout << "Diskon: " << discount * 100 << "% = Rp. " << totalDiskon << endl;
    cout << "Total yang harus dibayar: Rp. " << totalBayar << endl;

    return 0; // Program selesai dengan sukses
}
