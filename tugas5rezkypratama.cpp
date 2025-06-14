#include <iostream>
#include <cmath> // untuk perhitungan lingkaran (sumur)
using namespace std;

int main() {
    // Data ukuran tanah
    float panjangAB = 50.0; // Panjang bagian atas
    float panjangBC = 40.0; // Panjang sisi kanan
    float panjangCD = 30.0; // Panjang sisi bawah kanan
    float panjangDE = 20.0; // Panjang sisi kiri bawah
    float panjangEA = 20.0; // Panjang sisi kiri

    // Ukuran rumah
    float panjangRumah = 15.0;
    float lebarRumah = 10.0;

    // Ukuran sumur
    float diameterSumur = 1.5;
    float jariJariSumur = diameterSumur / 2.0;

    // Input biaya
    float biayaPondasiPagarPermeter, biayaPavingBlokPermeter;
    cout << "Masukkan biaya pemasangan pondasi dan pagar per meter: Rp. ";
    cin >> biayaPondasiPagarPermeter;
    cout << "Masukkan biaya pemasangan paving blok per m2: Rp. ";
    cin >> biayaPavingBlokPermeter;

    // Hitung keliling tanah
    float kelilingTanah = panjangAB + panjangBC + panjangCD + panjangDE + panjangEA;

    // Hitung luas total tanah
    float luasTanah = (panjangAB * panjangBC);

    // Hitung luas rumah
    float luasRumah = panjangRumah * lebarRumah;

    // Hitung luas sumur (lingkaran)
    float luasSumur = M_PI * pow(jariJariSumur, 2);

    // Hitung luas area yang akan dipasangi paving blok
    float luasPavingBlok = luasTanah - luasRumah - luasSumur;

    // Hitung total biaya pemasangan pondasi dan pagar
    float totalBiayaPondasiPagar = kelilingTanah * biayaPondasiPagarPermeter;

    // Hitung total biaya pemasangan paving blok
    float totalBiayaPavingBlok = luasPavingBlok * biayaPavingBlokPermeter;

    // Tampilkan hasil perhitungan
    cout << "\n=== Hasil Perhitungan ===\n";
    cout << "Keliling tanah: " << kelilingTanah << " meter\n";
    cout << "Luas tanah: " << luasTanah << " m2\n";
    cout << "Luas rumah: " << luasRumah << " m2\n";
    cout << "Luas sumur: " << luasSumur << " m2\n";
    cout << "Luas paving blok: " << luasPavingBlok << " m2\n";
    cout << "Total biaya pemasangan pondasi dan pagar: Rp. " << totalBiayaPondasiPagar << endl;
    cout << "Total biaya pemasangan paving blok: Rp. " << totalBiayaPavingBlok << endl;
    
    cin.get();
    cin.get();

    return 0;
}