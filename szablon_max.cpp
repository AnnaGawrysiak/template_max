/*
Napisz szablon funkcji maxn() pobieraj�cej jako parametry tablic� typu T oraz liczb� element�w tej tablicy,
zwracaj�cej najwi�kszy element tablicy.
Przetestuj w programie 5-elementow� tablic� warto�ci int i 4-elementow� tablic� double.
Program powinien korzysta� ze specjalizacji przyjmuj�cej jako parametr tablic� typu char, zwracaj�cej adres najd�u�szego napisu.
Je�li jest kilka najd�u�szych �a�cuch�w, funkcja powinna zwraca� adres pierwszego z nich.
Sprawd� specjalizacj� z tablic� pi�ciu �a�cuch�w.
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
