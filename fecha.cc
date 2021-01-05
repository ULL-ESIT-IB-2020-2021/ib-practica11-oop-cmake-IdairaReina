#include <iostream>
using namespace std;
class Fecha{
    private:
     int ano_{};
     int mes_{};
     int dia_{};

    public:
     void Imprimir() {
         cout << dia_ << '/' << mes_ << '/' << ano_ << endl;
     }
    int ObtenerMes() { return mes_; }
    void PonerMes(int mes) { mes_= mes; }

    int ObtenerDia() { return dia_; }
    void PonerDia(int dia) { dia_=dia; }

    int ObtenerAno() { return ano_; }
    void PonerAno(int ano) { ano_=ano; }
};

int main() {
    Fecha hoy;
    hoy.PonerDia(10);
    hoy.PonerMes(12);
    hoy.PonerAno(2020);
    hoy.Imprimir();
    return 0;
}
