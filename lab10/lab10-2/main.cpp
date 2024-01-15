#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

template <class ForwardIterator, class T>
void replace(ForwardIterator itstart, ForwardIterator itstop,
    const T& old, const T& val)
{
    while (itstart != itstop) {
        if (*itstart == old) *itstart = val;
        ++itstart;
    }
}
int main(void) {
    int arr[] = { 10, 20, 30, 30, 20, 10, 10, 20 };
    vector<int> vect(arr, arr + 8);
    vector<int>::iterator it;
    replace(vect.begin(), vect.end(), 20, 99);

    for (it = vect.begin(); it != vect.end(); ++it)
        cout << ' ' << *it;
    cout << endl;
}
