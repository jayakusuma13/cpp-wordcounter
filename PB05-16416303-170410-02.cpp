// NIM/Nama : 16416303 / M.Qodir Ibrahim
// Nama File: PB05-16416303-170410-02
// Tanggal  : 10 April 2017
// Deskripsi: Program jigsaw

#include <iostream>
#include <fstream>
using namespace std;

int main(){
//kamus
ifstream input;
ofstream output;
int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
char hitung;
char cek;

/*
for(i=0;i<26;i++){
    int cout << hitung[i] << "=" <<  0;
};
*/

//buka input & siapkan output file
input.open("input.txt");
output.open("frekuensi.txt");

//hitung jumlah huruf
if(input.eof()){
    cout << "File kosong";
}else{
    while(!input.eof()){
        input >> cek;
        switch(cek){
            case 'A': a++; break;
            case 'B': b++; break;
            case 'C': c++; break;
            case 'D': d++; break;
            case 'E': e++; break;
            case 'F': f++; break;
            case 'G': g++; break;
            case 'H': h++; break;
            case 'I': i++; break;
            case 'J': j++; break;
            case 'K': k++; break;
            case 'L': l++; break;
            case 'M': m++; break;
            case 'N': n++; break;
            case 'O': o++; break;
            case 'P': p++; break;
            case 'Q': q++; break;
            case 'R': r++; break;
            case 'S': s++; break;
            case 'T': t++; break;
            case 'U': u++; break;
            case 'V': v++; break;
            case 'W': w++; break;
            case 'X': x++; break;
            case 'Y': y++; break;
            case 'Z': z++; break;
        }
    }
}
//tulis format output file
output << "A \n = " << a;
output << "B \n = " << b;
output << "C \n = " << c;
output << "D \n = " << d;
output << "E \n = " << e;
output << "F \n = " << f;
output << "G \n = " << g;
output << "H \n = " << h;
output << "I \n = " << i;
output << "J \n = " << j;
output << "K \n = " << k;
output << "L \n = " << l;
output << "M \n = " << m;
output << "N \n = " << n;
output << "O \n = " << o;
output << "P \n = " << p;
output << "Q \n = " << q;
output << "R \n = " << r;
output << "S \n = " << s;
output << "T \n = " << t;
output << "U \n = " << u;
output << "V \n = " << v;
output << "W \n = " << w;
output << "X \n = " << x;
output << "Y \n = " << y;
output << "Z \n = " << z;
//tutup input output
input.close();
output.close();
return 0;

}

