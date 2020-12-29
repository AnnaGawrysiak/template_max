/*
Napisz szablon funkcji maxn() pobieraj¹cej jako parametry tablicê typu T oraz liczbê elementów tej tablicy,
zwracaj¹cej najwiêkszy element tablicy.
Przetestuj w programie 5-elementow¹ tablicê wartoœci int i 4-elementow¹ tablicê double.
Program powinien korzystaæ ze specjalizacji przyjmuj¹cej jako parametr tablicê typu char, zwracaj¹cej adres najd³u¿szego napisu.
Jeœli jest kilka najd³u¿szych ³añcuchów, funkcja powinna zwracaæ adres pierwszego z nich.
SprawdŸ specjalizacjê z tablic¹ piêciu ³añcuchów.
*/
#include <iostream>
#include <string>

using namespace std;
/*
template <typename T1, typename T2>
T1 maxn( T1 arr[], T2 size_)
{

 T1 *the_longest = &arr[0];

 for (T2 i = 0; i < size_; i++)
 {
     if (arr[i] > *(the_longest))
        the_longest = &arr[i];
 }

 return the_longest;

}
*/

template <typename T1, typename T2>
T1 maxn( T1 arr[], T2 size_)
{

 T1 *the_longest = &arr[0];

 for (T2 i = 0; i < size_; i++)
 {
     if (arr[i] > *(the_longest))
        the_longest = &arr[i];
 }

 return *the_longest;

}


int main()
{

const int size = 5;

int array_of_ints[size] = {1, 2, 5, 6, 1};

cout << " The longest element of the array: "  << &maxn(array_of_ints, size) << endl;



return 0;
}
