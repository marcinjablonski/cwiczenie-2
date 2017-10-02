#include <iostream>

using namespace std;


class programistaMarcin
{
private:
    int ilosc;
public:
    void iloscw (int ul )
    {
      ilosc = ul;
    }
    void jolo ()
    {
        for (int i=1; i<=ilosc; i++)
            {
                for (int j=1; j<=ilosc-i; j++)
                    cout << " ";
                for (int k=1; k<=(2*i)-1; k++)
                    cout << "*";
                cout << endl;
            }
    }
};


int main(int argc, char* argv)
{
  programistaMarcin p;
  int ilosc;
  cin >> ilosc;
  p.iloscw(ilosc);
  p.jolo();
  return 0;
}
