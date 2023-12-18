#include <iostream>
#include "Fractie.h"

using namespace std;

int main()
{
    Fractie f1;
    Fractie f2(2);
    Fractie f3(3,4);
    Fractie f4(2,10);
    Fractie f5(6,12);
    Fractie f6(4,8);
    Fractie f7(1,0);

    Fractie calc;

    f1.print();
    cout<<endl;
    f2.print();
    cout<<endl;
    f3.print();
    cout<<endl;
    f3.reciproc().print();
    cout<<endl;
    f4.simplifica().print();
    cout<<endl;
    cout<<f5.egal(f6)<<endl;
    cout<<Fractie::cmmdc(165,120)<<endl;
    calc.adunare(f3,f4).print();
    cout<<endl;
    calc.scadere(f6,f3).print();
    cout<<endl;
    calc.inmultire(f4,f5).print();
    cout<<endl;
    calc.impartire(f3,f4).print();


    return 0;
}
