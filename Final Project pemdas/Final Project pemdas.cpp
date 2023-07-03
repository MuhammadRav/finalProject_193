#include <iostream>
using namespace std;

class bidangDatar {
private:
int x, y;

public:
    bidangDatar() {
        x = 0;
        y = 0;
    }

    virtual void input(){}
    virtual float Luas(int a) {
        return 0;
    }
    virtual float Keliling(int a) {
        return 0;
    }
    virtual void cekUkuran() {
        return /*0*/;
    }
    void setX(int a) {
        this->x = a;
    }
    int getX() {
        return x;
    }

                     /*lengkapi disini*/
    virtual float Luas(int p, int l) {
        return 0;
    }
    virtual float Keliling(int p, int l) {
        return 0;
    }
    virtual void cekUkuran() {
        return /*0*/;
    }
    void setY(int p, int l) {
        this->y = p, l;
    }
    int getY() {
        return y;
    }
};

class Lingkaran :public bidangDatar {
    /*lengkapi disini*/ 
public:
    void input() {
        int a;
        cout << "\nLingkaran dibuat\n";
        cout << "Masukkan jejari: ";
        cin >> a;
    }
    float Luas(int a) {
        return 3.14 * a * a;

    }
    float Keliling(int a) {
        return 2 * 3.14 * a;
    }

    void cekUkuran() {
        return;
    }
};

class Persegipanjang :public bidangDatar {
    /*lengkapi disini*/ 
public:
    void input() {
        int p, int l;
        cout << "\nPersegi panjang dibuat\n";
        cout << "Masukkan Panjang: ";
        cin >> p;
        cout << "Masukkan Lebar: ";
        cin >> l;
    }
    float Luas(int p, int l) {
        return p * l;

    }
    float Keliling(int p, int l) {
        return 2 * (p + l);
    }
    void cekUkuran() {
        return;
    }
};


int main() {
    
    /*lengkapi disini*/ 
    Lingkaran a;
    a.input();

    Persegipanjang b;
    b.input();
   
   
}
