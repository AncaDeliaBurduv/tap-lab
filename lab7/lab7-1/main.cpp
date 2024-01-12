#include <iostream>

using namespace std;

template <class T>
T maxim(T vec[], unsigned length){
    T m=vec[0];
    for(int i=1;i<length;++i){
        if(vec[i]>m)
            m=vec[i];
    }
    return m;
}

template <class T>
T minim(T vec[], unsigned length){
    T m=vec[0];
    for(int i=1;i<length;++i){
        if(vec[i]<m)
            m=vec[i];
    }
    return m;
}

template <class T>
int cautareSec(T vec[], unsigned length, T key){
    for(int i=0;i<length;++i){
        if(vec[i]==key)
            return i;
    }
    return -1;
}

template <class T>
int cautareBin(T vec[], T key, unsigned first, unsigned last){
    if(first>=last) return -1;
    int mid=(first+last)/2;
    if (vec[mid]==key) return mid;
    else if(vec[mid]>key) return cautareBin(vec,key,first,mid-1);
    else return cautareBin(vec,key,mid+1,last);
}

template <class T>
void bubblesort(T vec[], unsigned length){
    for(int i=0;i<length-1;++i){
        for(int j=i;j<length;++j){
            if(vec[i]>vec[j]){
                T tmp=vec[i];
                vec[i]=vec[j];
                vec[j]=tmp;
            }
        }
    }
}

template <>
void bubblesort<string>(string vec[], unsigned length){
    for(int i=0;i<length-1;++i){
        for(int j=i;j<length;++j){
            if(vec[i]<vec[j]){
                string tmp=vec[i];
                vec[i]=vec[j];
                vec[j]=tmp;
            }
        }
    }
}

int main()
{
    int v[]={56, 37, 45, 86, 38, 1, 66, 67, 3, 38};
    cout<<maxim<int>(v,10)<<endl;
    cout<<minim<int>(v,10)<<endl;
    cout<<cautareSec<int>(v,10,38)<<endl;
    bubblesort(v,10);
    for (int i=0;i<10;++i){
        cout<<v[i]<<' ';
    }
    cout<<endl;
    cout<<cautareBin(v,67, 0, 9)<<endl;

    string v2[]={"rtyui", "ascv" , "vbwtnbw", "asGHBNYETGEFW", "ynuqefqgrB"};
    bubblesort(v2,5);
    for (int i=0;i<5;++i){
        cout<<v2[i]<<endl;
    }
    return 0;
}
