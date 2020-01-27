//Soy Sergio Navarro con github:Navarro21111
#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;

/*int fib(int n){

    if(n < 2)
        return n;

    return fib(n-1) + fib(n-2);
}
int main() {
    int n;
    cin >> n;

    auto start = high_resolution_clock::now();


    fib(n);
    for(int i =0; i <= n; i++)
        cout << fib(i) << " ";
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout<<"\n"<<duration.count();

    return 0;
}
*/

void fib(int num) {
    int x = 0, y = 1, z = 0;
    for (int i = 0; i < num; i++) {
        cout << x << " ";
        z = x + y;
        x = y;
        y = z;
    }
}
int main() {
    int num;

    cout << "Enter the number : ";
    cin >> num;
    auto start = high_resolution_clock::now();
    cout << "\nThe fibonacci series : " ;
    fib(num);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout<<"\n"<<duration.count()<<"milisegundos";
    return 0;
}