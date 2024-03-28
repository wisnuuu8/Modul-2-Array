**BAB 1**

**PENDAHULUAN**

**LATAR BELAKANG** 

Array merupakan struktur data yang sangat penting dalam pemrograman C++. Konsep array memungkinkan programmer untuk menyimpan dan mengakses sejumlah besar data dengann tipe yang sama dalam satu  variabel. Setiap elemen dalam array disimpan secara berurutan dalamm memori komputer dan dapat diakses melalui indeksnya. ndeks array dimulai dari 0 dan berlanjut hingga n-1, di mana n adalah jumlah total elemen dalam array. Salah satu keunggulan utama dari array adalah efisiensi dalam penyimpanan dan akses data. Karena elemen-elemennya tersimpan secara berurutan dalam memori, array memungkinkan akses cepat ke elemen-elemennya. Namun, penting untuk dicatat bahwa ukuran array harus ditentukan pada saat deklarasi dan tidak dapat diubah selama program berjalan. Oleh karena itu, pemrogram harus memperkirakan jumlah maksimum elemen yang dibutuhkan saat mendeklarasikan array. Dengan menggunakan array, programmer dapat mengorganisir data dengan lebih terstruktur dan mengaksesnya dengan lebih efisien, memungkinkan pengembangan aplikasi yang lebih kuat dan efektif.

**RUMUSAN MASALAH**

a. Bagaimana cara memahami konsep array?

b. Bagaimana cara mengetahui jenis dimensi array dan cara penulisannya?

c. Bagaiamana cara mengimplementasikan Array pada kode program yang dibuat?

**TUJUAN PRAKTIKUM**

a. Mahasiswa dapat memahami konsep Array.

b. Mahasiswa dapat mengetahui jenis dimensi Array dan cara penulisannya.

c. Mahasiswa dapat mengimplementasikan Array pada kode program yang dibuat

**BAB 2**

**PEMBAHASAAN**

**DASAR TEORI**

Array merupakan struktur data yang paling dasar. Sebelum mempelajari struktur data
lainnya, alangkah baiknya, kita perlu mempelajari Array terlebih dahulu. Berikut ini
adalah beberapa jenis array :

**1. ARRAY SATU DIMENSI**

Array satu dimensi adalah tipe variabel yang terdiri dari kumpulan data dengan tipe yang sama yang disusun dalam satu baris atau satu dimensi. Setiap elemen di dalam array memiliki sebuah indeks atau nomor yang digunakan untuk mengakses elemen tersebut. Indeks dimulai dari 0 dan berakhir pada jumlah elemen dikurangi satu. Contohnya, sebuah array satu dimensi yang berisi bilangan bulat {1, 2, 3, 4, 5} memiliki lima elemen dan indeksnya dimulai dari 0. Indeks 0 merujuk pada elemen pertama, indeks 1 merujuk pada elemen kedua, dan seterusnya hingga indeks 4 merujuk pada elemen kelima. Dengan menggunakan indeks, kita dapat mengakses nilai dari setiap elemen array secara individu, memungkinkan pengolahan dan manipulasi data dengan lebih efisien dalam program C++.

Contoh :
```C++

#include <iostream>
using namespace std;
int main() {
int arr[5] = {9, 3, 5, 2, 1}; //deklarasi array
cout<< arr[1] << endl;
cout<< arr[4];
}

```
Program tersebut mendeklarasikan sebuah array bernama arr yang terdiri dari 5 elemen bilangan bulat. Nilai-nilai elemen array adalah {9, 3, 5, 2, 1}. Kemudian, program mencetak nilai dari elemen kedua (arr[1]) dan elemen kelima (arr[4]) dari array arr. Karena indeks array dimulai dari 0, maka arr[1] merujuk pada elemen kedua array (nilai 3), sedangkan arr[4] merujuk pada elemen kelima array (nilai 1). 

Hasil output :

```C++

3
1

```
Nilai pertama adalah 3, yang merupakan nilai dari elemen kedua array (arr[1]). Hal ini sesuai dengan nilai yang telah diinisialisasi pada deklarasi array, yaitu {9, 3, 5, 2, 1}. Karena indeks array dimulai dari 0, maka elemen kedua memiliki indeks arr[1].

Nilai kedua adalah 1, yang merupakan nilai dari elemen kelima array (arr[4]). Ini juga sesuai dengan nilai yang telah diinisialisasi pada array. Elemen kelima memiliki indeks arr[4] karena indeks array dimulai dari 0.

**2. ARRAY DUA DIMENSI**

Array dua dimensi adalah konsep yang penting dalam pemrograman yang memungkinkan penyimpanan data dalam bentuk matriks atau tabel. Dalam array dua dimensi, struktur data disusun dalam baris dan kolom, mirip dengan sebuah tabel. Setiap elemen dalam array dua dimensi memiliki dua indeks: indeks baris dan indeks kolom. Indeks baris menunjukkan posisi elemen dalam baris tertentu, sedangkan indeks kolom menunjukkan posisi elemen dalam kolom tersebut. Misalnya, jika kita ingin mengakses elemen pada baris ke-3 dan kolom ke-2 dari array dua dimensi, kita akan menggunakan indeks baris 2 dan indeks kolom 1. Penggunaan dua indeks ini memungkinkan kita untuk secara unik menentukan lokasi setiap elemen dalam array dua dimensi. Hal ini sangat berguna untuk menyimpan data yang memerlukan representasi dua dimensi, seperti data tabel, gambar, atau matriks matematika. Array dua dimensi memungkinkan kita untuk mengorganisir data dalam struktur yang terstruktur dan efisien, sehingga mempermudah akses dan manipulasi data dalam program. Dengan pemahaman yang baik tentang konsep ini, programmer dapat membuat aplikasi yang lebih kompleks dan efektif dalam memproses data dua dimensi.

Contoh :
```C++
#include <iostream>
using namespace std;
int main() {
int arr[2][2] = {{3, 2}, {2, 5}};
for (int i=0; i<2; i++) { //baris
for(int j=0; j<2; j++) { //kolom
cout<< arr[i][j] << ends;
};
cout << endl;
};
}
```
Program tersebut mendeklarasikan sebuah array dua dimensi dengan nama `arr` yang memiliki ukuran 2x2. Kemudian, program menggunakan loop bersarang (nested loop) untuk mencetak setiap elemen array ke layar. Setiap elemen dipisahkan oleh spasi, dan setiap baris array dipisahkan oleh newline.

Hasil output :
```C++
3 2
2 5
```
Elemen pada baris pertama dan kolom pertama memiliki nilai 3.
Elemen pada baris pertama dan kolom kedua memiliki nilai 2.
Elemen pada baris kedua dan kolom pertama memiliki nilai 2.
Elemen pada baris kedua dan kolom kedua memiliki nilai 5.

**3. ARRAY TIGA DIMENSI**

Array multidimensi adalah struktur data yang memungkinkan penyimpanan data dalam bentuk yang lebih kompleks daripada array satu dimensi atau dua dimensi. Meskipun memiliki kesamaan dasar dengan array satu dan dua dimensi, array multidimensi memiliki kapasitas memori yang lebih besar karena dapat merepresentasikan struktur data dengan lebih dari dua dimensi atau lebih dari dua indeks. Misalnya, dalam array tiga dimensi, setiap elemen memiliki tiga indeks yang mengidentifikasi posisinya dalam array. Penggunaan array multidimensi sangat luas dan dapat ditemukan dalam berbagai bidang. Contohnya termasuk dalam pemrosesan citra, di mana array tiga dimensi sering digunakan untuk merepresentasikan gambar berwarna dengan masing-masing dimensi mewakili tingkat warna merah, hijau, dan biru. Di bidang fisika, array tiga dimensi digunakan untuk menyimpan data pada ruang tiga dimensi, seperti dalam pemodelan fenomena alam seperti medan magnet atau distribusi suhu. Selain itu, array empat dimensi, lima dimensi, dan seterusnya, juga digunakan dalam komputasi ilmiah untuk memodelkan fenomena yang lebih kompleks. Dengan array multidimensi, programmer dapat menyusun data dalam struktur yang lebih terstruktur dan kompleks, memungkinkan analisis dan manipulasi data yang lebih canggih dan efisien.

Contoh:
```C++
#include <iostream>
using namespace std;
int main() {
int arr[2][2][3] = {{{2, 8, 7}, {6, 5, 1}}, {{8,
5, 2}, {9, 2 ,7}}};
for (int i=0; i<2; i++) {
for(int j=0; j<2; j++) {
for(int k=0; k<3; k++) {
cout<< arr[i][j][k] << ends;
};
cout<< endl;
};
cout<< endl;
};
}
```
Program tersebut mendemonstrasikan penggunaan array tiga dimensi untuk menyimpan data dalam struktur tiga dimensi. Array `arr` memiliki dimensi 2x2x3, dan setiap elemennya diakses menggunakan tiga loop bersarang. Program kemudian menampilkan nilai dari setiap elemen array dalam format yang sesuai dengan struktur tiga dimensinya.

Hasil ouput:
```C++
2 8 7 
6 5 1 

8 5 2 
9 2 7 
```
Output yang ditampilkan merupakan representasi dari sebuah array tiga dimensi dengan struktur 2x2x3. Dalam konteks ini, array tersebut dapat diinterpretasikan sebagai sebuah kumpulan data yang tersusun dalam beberapa "lapisan", di mana setiap lapisan memiliki beberapa "baris", dan setiap baris tersebut memiliki beberapa "kolom". Baris-baris pertama dan kedua dari output mewakili dua lapisan pertama dari array, dengan setiap baris menunjukkan nilai-nilai yang terkandung dalam lapisan tersebut. Pemisah berupa baris kosong membedakan antara lapisan pertama dan kedua dari array. Di dalam setiap lapisan, nilai-nilai tersebut diatur dalam baris-baris, dan setiap angka dalam baris mewakili satu elemen dari array.

**GUIDED**

**GUIDED 1**
```C++
#include <iostream>
using namespace std;
// PROGRAM INPUT ARRAY 3 DIMENSI
int main()
{
// Deklarasi array
int arr[2][3][3];
// Input elemen
for (int x = 0; x < 2; x++)
{
for (int y = 0; y < 3; y++)
{
for (int z = 0; z < 3; z++)
{
cout << "Input Array[" << x << "][" << y << "][" << z <<
"] = ";
cin >> arr[x][y][z];
}
}
cout << endl;
}
// Output Array
for (int x = 0; x < 2; x++)
{
for (int y = 0; y < 3; y++)
{
for (int z = 0; z < 3; z++)
{
cout << "Data Array[" << x << "][" << y << "][" << z <<
"] = " << arr[x][y][z] << endl;
}
}
}
cout << endl;
// Tampilan array
for (int x = 0; x < 2; x++)
{
for (int y = 0; y < 3; y++)
{
for (int z = 0; z < 3; z++)
{
cout << arr[x][y][z] << ends;
}
cout << endl;
}
cout << endl;
}
}
```

**Bagian 1**
```C++
#include <iostream>
using namespace std;
```
Penjelasan:

program menyertakan perpustakaan iostream yang menyediakan fungsi-fungsi untuk input/output standar. Kemudian, digunakan deklarasi "using namespace std;" yang mengarahkan penggunaan istilah standar dalam perpustakaan iostream, seperti cin dan cout, ke dalam namespace std

**Bagian 2**
```C++
int main()
{
// Deklarasi array
int arr[2][3][3];
// Input elemen
for (int x = 0; x < 2; x++)
{
for (int y = 0; y < 3; y++)
{
for (int z = 0; z < 3; z++)
{
cout << "Input Array[" << x << "][" << y << "][" << z <<
"] = ";
cin >> arr[x][y][z];
}
}
cout << endl;
}
```
Penjelasan:

Array tiga dimensi dideklarasikan sebagai int arr[2][3][3], yang memiliki 2 lapis, masing-masing dengan 3 baris dan 3 kolom. Program kemudian menggunakan loop bersarang untuk mengiterasi melalui setiap lapis, baris, dan kolom dalam array, meminta pengguna untuk memasukkan nilai untuk setiap elemen array. Pengguna diminta untuk memasukkan nilai untuk setiap elemen array dengan menggunakan pesan "Input Array[x][y][z] =", di mana x, y, dan z mewakili indeks lapis, baris, dan kolom dari array. Setelah semua elemen array diisi, array tersebut dapat digunakan untuk operasi lebih lanjut dalam program.

**Bagian 3**
```C++
// Output Array
for (int x = 0; x < 2; x++)
{
for (int y = 0; y < 3; y++)
{
for (int z = 0; z < 3; z++)
{
cout << "Data Array[" << x << "][" << y << "][" << z <<
"] = " << arr[x][y][z] << endl;
}
}
}
cout << endl;
// Tampilan array
for (int x = 0; x < 2; x++)
{
for (int y = 0; y < 3; y++)
{
for (int z = 0; z < 3; z++)
{
cout << arr[x][y][z] << ends;
}
cout << endl;
}
cout << endl;
}
}
```
Penjelasan :

Bagian kode tersebut bertujuan untuk menampilkan data dari sebuah array tiga dimensi. Pertama, kode menampilkan setiap elemen array beserta indeks baris, kolom, dan lapisannya. Kemudian, kode menampilkan array dalam format yang lebih sederhana tanpa indeks, hanya menampilkan nilai dari setiap elemen dengan elemen-elemen dari baris yang sama dicetak bersama-sama dan setiap baris dari lapisan yang sama dipisahkan dengan baris baru

**Hasil output**

![image](https://github.com/wisnuuu8/Modul-2-Array/assets/162652149/8805e16e-79b4-4c4e-bbe4-35aae8ac6476)

output pertama menampilkan nilai-nilai array tiga dimensi secara detail dengan indeks masing-masing elemen. Output kedua menampilkan nilai-nilai array tiga dimensi dalam format yang lebih sederhana tanpa indeks, dengan setiap baris dari lapisan yang sama dipisahkan oleh baris baru.

**GUIDED 2**
```C++
#include <iostream>
using namespace std;

int main() {
    int maks, a, i = 1, lokasi;
    cout << "Masukkan panjang array: ";
    cin >> a;
    int array[a];
    cout << "Masukkan " << a << " angka\n";
    for (i = 0; i < a; i++) {
        cout << "Array ke-" << (i + 1) << ": ";
        cin >> array[i];
    }
    maks = array[0];
    for (i = 0; i < a; i++) {
        if (array[i] > maks) {
            maks = array[i];
            lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << (lokasi + 1) << endl;
    return 0;
}
```
**Bagian 1**
```C++
#include <iostream>
using namespace std;
```
Penjelasan:

program menyertakan perpustakaan iostream yang menyediakan fungsi-fungsi untuk input/output standar. Kemudian, digunakan deklarasi "using namespace std;" yang mengarahkan penggunaan istilah standar dalam perpustakaan iostream, seperti cin dan cout, ke dalam namespace std

**Bagian 2**
```C++
int main() {
    int maks, a, i = 1, lokasi;
    cout << "Masukkan panjang array: ";
    cin >> a;
    int array[a];
    cout << "Masukkan " << a << " angka\n";
    for (i = 0; i < a; i++) {
        cout << "Array ke-" << (i + 1) << ": ";
        cin >> array[i];
    }
    maks = array[0];
    for (i = 0; i < a; i++) {
        if (array[i] > maks) {
            maks = array[i];
            lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << (lokasi + 1) << endl;
    return 0;
}
```
Penjelasan:

Dari program diatas pengguna diminta untuk memasukkan panjang array yang diinginkan, Kemudian, pengguna diminta untuk memasukkan angka-angka untuk membentuk array, Program mencari nilai maksimum dalam array tersebut.Setelah nilai maksimum ditemukan, dan program mencetak nilai maksimum beserta lokasinya dalam array.

**Hasil output**

```C++
Masukkan panjang array: 5
Masukkan 5 angka
Array ke-1: 4
Array ke-2: 5
Array ke-3: 8
Array ke-4: 2
Array ke-5: 7
Nilai maksimum adalah 8 berada di Array ke 3
```
Penjelasan:

1. Pengguna diminta untuk memasukkan panjang array, yang dalam contoh tersebut adalah 5.
2. Kemudian, pengguna diminta untuk memasukkan 5 angka untuk membentuk array.
3. Pengguna memasukkan angka-angka berikut:
Array ke-1: 4
Array ke-2: 5
Array ke-3: 8
Array ke-4: 2
Array ke-5: 7
4. Setelah semua angka dimasukkan, program mencari nilai maksimum dalam array tersebut, yang dalam kasus ini adalah angka 8.
5. Program kemudian mencetak pesan yang menyatakan bahwa nilai maksimum adalah 8 dan berada di Array ke-3. Ini berarti angka 8 ditemukan pada posisi ke-3 dalam array yang dihitung mulai dari indeks 0, sesuai dengan urutan masukan pengguna.

**UNGUIDED**

**UNGUIDED1**
```C++
#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Masukkan panjang array: ";
    std::cin >> n;

    std::vector<int> array(n);

    std::cout << "Masukkan " << n << " angka: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> array[i];
    }

    std::cout << "Data Array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << array[i];
        if (i < n - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    std::cout << "Nomor Genap: ";
    for (int i = 0; i < n; ++i) {
        if (array[i] % 2 == 0) {
            std::cout << array[i];
            if (i < n - 1) {
                std::cout << ", ";
            }
        }
    }
    std::cout << std::endl;

    std::cout << "Nomor Ganjil: ";
    for (int i = 0; i < n; ++i) {
        if (array[i] % 2 != 0) {
            std::cout << array[i];
            if (i < n - 1) {
                std::cout << ", ";
            }
        }
    }
    std::cout << std::endl;

    return 0;
}
```

**BAGIAN 1**
```C++
#include <iostream>
#include <vector>
```
Penjelasan:
#include <iostream> digunakan untuk memungkinkan penggunaan fungsi-fungsi input-output standar seperti cout dan cin. Sedangkan #include <vector> digunakan untuk mengizinkan penggunaan struktur data vector, yang merupakan array dinamis yang memungkinkan penyimpanan dan manipulasi data dengan fleksibilitas lebih besar daripada array statis

**BAGIAN 2**
```C++
int main() {
    int n;
    std::cout << "Masukkan panjang array: ";
    std::cin >> n;

    std::vector<int> array(n);

    std::cout << "Masukkan " << n << " angka: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> array[i];
    }

    std::cout << "Data Array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << array[i];
        if (i < n - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    std::cout << "Nomor Genap: ";
    for (int i = 0; i < n; ++i) {
        if (array[i] % 2 == 0) {
            std::cout << array[i];
            if (i < n - 1) {
                std::cout << ", ";
            }
        }
    }
    std::cout << std::endl;

    std::cout << "Nomor Ganjil: ";
    for (int i = 0; i < n; ++i) {
        if (array[i] % 2 != 0) {
            std::cout << array[i];
            if (i < n - 1) {
                std::cout << ", ";
            }
        }
    }
    std::cout << std::endl;

    return 0;
}
```
Penjelasan:
1. Program meminta pengguna untuk memasukkan panjang array.

2. Array dengan panjang yang dimasukkan oleh pengguna dideklarasikan menggunakan std::vector<int> array(n);
   .
3. Pengguna diminta untuk memasukkan angka-angka sebanyak panjang array yang telah ditentukan.
   
4. Program mengisi array dengan angka-angka yang dimasukkan oleh pengguna menggunakan loop for.
   
5. Program mencetak seluruh data yang ada di dalam array.
   
6. Program mencetak angka-angka genap yang terdapat dalam array dengan menggunakan loop for dan kondisi if.
   
7. Program mencetak angka-angka ganjil yang terdapat dalam array dengan menggunakan loop for dan kondisi if

**Hasil output**
```C++
Masukkan panjang array: 6
Masukkan 6 angka: 4 1 3 8 7 10
Data Array: 4 1 3 8 7 10
Nomor Genap: 4, 8, 10
Nomor Ganjil: 1, 3, 7
```
Penjelasan:

Menunjukkan hasil dari eksekusi program yang meminta pengguna untuk memasukkan panjang array dan 6 angka. Setelah pengguna memasukkan angka-angka tersebut, program menampilkan array tersebut, diikuti dengan nomor-nomor genap yang terdapat dalam array, dan terakhir nomor-nomor ganjil.

Hasil output:

1. Data Array: Menampilkan seluruh angka yang dimasukkan oleh pengguna ke dalam array, yaitu: 4, 1, 3, 8, 7, dan 10.
   
2. Nomor Genap: Menampilkan angka-angka genap yang terdapat dalam array, yaitu: 4, 8, dan 10. Angka-angka ini dipisahkan oleh koma.
   
3. Nomor Ganjil: Menampilkan angka-angka ganjil yang terdapat dalam array, yaitu: 1, 3, dan 7. Angka-angka ini juga dipisahkan oleh koma.

**UNGUIDED2**
```C++

#include <iostream>
#include <vector>

int main() {
    int panjang, lebar, tinggi;

    // Meminta pengguna untuk memasukkan panjang, lebar, dan tinggi array
    std::cout << "Masukkan panjang array: ";
    std::cin >> panjang;
    std::cout << "Masukkan lebar array: ";
    std::cin >> lebar;
    std::cout << "Masukkan tinggi array: ";
    std::cin >> tinggi;

    // Deklarasi array tiga dimensi sesuai dengan input pengguna
    std::vector < std::vector < std::vector < int >  > > array(panjang, std::vector < std::vector < int > > (lebar, std::vector < int > (tinggi)));

    // Input elemen array
    std::cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < panjang; ++i) {
        for (int j = 0; j < lebar; ++j) {
            for (int k = 0; k < tinggi; ++k) {
                std::cout << "Array[" << i << "][" << j << "][" << k << "]: ";
                std::cin >> array[i][j][k];
            }
        }
    }

    // Menampilkan elemen-elemen array
    std::cout << "\nElemen-elemen array:\n";
    for (int i = 0; i < panjang; ++i) {
        for (int j = 0; j < lebar; ++j) {
            for (int k = 0; k < tinggi; ++k) {
                std::cout << "Array[" << i << "][" << j << "][" << k << "]: " << array[i][j][k] << std::endl;
            }
        }
    }

    return 0;
}
```
**BAGIAN 1**
```C++
#include <iostream>
#include <vector>
```
Penjelasan:

#include <iostream> digunakan untuk memungkinkan penggunaan fungsi-fungsi input-output standar seperti cout dan cin. Sedangkan #include <vector> digunakan untuk mengizinkan penggunaan struktur data vector, yang merupakan array dinamis yang memungkinkan penyimpanan dan manipulasi data dengan fleksibilitas lebih besar daripada array statis

**BAGIAN 2**
```C++
int main() {
    int panjang, lebar, tinggi;

    // Meminta pengguna untuk memasukkan panjang, lebar, dan tinggi array
    std::cout << "Masukkan panjang array: ";
    std::cin >> panjang;
    std::cout << "Masukkan lebar array: ";
    std::cin >> lebar;
    std::cout << "Masukkan tinggi array: ";
    std::cin >> tinggi;

    // Deklarasi array tiga dimensi sesuai dengan input pengguna
    std::vector < std::vector < std::vector < int >  > > array(panjang, std::vector < std::vector < int > > (lebar, std::vector < int > (tinggi)));

    // Input elemen array
    std::cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < panjang; ++i) {
        for (int j = 0; j < lebar; ++j) {
            for (int k = 0; k < tinggi; ++k) {
                std::cout << "Array[" << i << "][" << j << "][" << k << "]: ";
                std::cin >> array[i][j][k];
            }
        }
    }
```
Penjelasan:

1. Mendeklarasikan tiga variabel panjang, lebar, dan tinggi untuk menyimpan ukuran array tiga dimensi.
   
2. Meminta pengguna untuk memasukkan nilai panjang, lebar, dan tinggi array.
   
3. Mendeklarasikan array tiga dimensi menggunakan vektor dari vektor dari vektor, dengan ukuran sesuai input dari pengguna. Ini dilakukan dengan menggunakan inisialisasi vektor yang mengambil tiga parameter: panjang, lebar, dan tinggi.
   
4. Meminta pengguna untuk memasukkan elemen-elemen array dengan menggunakan nested loop (loop bersarang) yang menampilkan pesan "Array[i][j][k]: " di mana i, j, dan k adalah indeks array tiga dimensi.
   
5. Setelah semua elemen dimasukkan, program akan selesai.

**Hasil output**

```C++
Masukkan panjang array: 2
Masukkan lebar array: 2
Masukkan tinggi array: 2
Masukkan elemen-elemen array:
Array[0][0][0]: 1
Array[0][0][1]: 2
Array[0][1][0]: 3
Array[0][1][1]: 4
Array[1][0][0]: 5
Array[1][0][1]: 6
Array[1][1][0]: 7
Array[1][1][1]: 8

Elemen-elemen array:
Array[0][0][0]: 1
Array[0][0][1]: 2
Array[0][1][0]: 3
Array[0][1][1]: 4
Array[1][0][0]: 5
Array[1][0][1]: 6
Array[1][1][0]: 7
Array[1][1][1]: 8
```
Penjelasan:

Pengguna diminta untuk memasukkan panjang, lebar, dan tinggi array, yang dalam contoh di atas adalah 2 untuk setiap dimensi.

Setelah itu, program meminta pengguna untuk memasukkan elemen-elemen array sesuai dengan ukuran yang telah dimasukkan sebelumnya. Pengguna memasukkan elemen-elemen array satu per satu.

Setelah semua elemen array dimasukkan, program menampilkan elemen-elemen array yang telah dimasukkan oleh pengguna ke layar. Setiap elemen array ditampilkan dengan format Array[i][j][k]: value, di mana i, j, dan k adalah indeks elemen array dalam tiga dimensi, dan value adalah nilai dari elemen tersebut

**UNGUIDED 3**
```C++



