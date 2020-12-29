/*
Napisz szablon funkcji maxn() pobieraj¹cej jako parametry tablicê typu T oraz liczbê elementów tej tablicy,
zwracaj¹cej najwiêkszy element tablicy.
Przetestuj w programie 5-elementow¹ tablicê wartoœci int i 4-elementow¹ tablicê double.
Program powinien korzystaæ ze specjalizacji przyjmuj¹cej jako parametr tablicê typu char, zwracaj¹cej adres najd³u¿szego napisu.
Jeœli jest kilka najd³u¿szych ³añcuchów, funkcja powinna zwracaæ adres pierwszego z nich.
SprawdŸ specjalizacjê z tablic¹ piêciu ³añcuchów.
*/
#include <iostream>
#include <cstring>

using namespace std;


template <typename T>
T maxn( T arr[], int size_)
{

 T *the_longest = &arr[0];

 for (int i = 0; i < size_; i++)
 {
     if (arr[i] > *(the_longest))
        the_longest = &arr[i];
 }

 return *the_longest;

}



char* maxn(char* arr[], int size_)
{

if(size_ == 0)
    return nullptr;

char *the_longest = arr[0];

 for (int i = 0; i < size_; i++)
 {
     if (strlen( arr[i]) > strlen(the_longest))
        the_longest = arr[i];
 }

 return the_longest;

}

int main()
{

const int size = 5;

int array_of_ints[size] = {1, 2, 5, 6, 1};


cout << " The longest element of the array of integers: "  << maxn(array_of_ints, size) << endl;

const int size_ = 4;

double array_of_doubles[size_] = {45, 23, 34, 47};

cout << " The longest element of the array of doubles: "  << maxn(array_of_doubles, size_) << endl;

const char *arrText[size] =
    {
        "Berlin",
        "Frankfurt",
        "Drezno",
        "Monachium",
        "Brema"
    };

//char array_of_chars[size] = {'a', 'j', 'k', 's', 'h'};

cout << " The longest element of the array of chars: "  << maxn(arrText, size_) << endl;

//cout << " The longest element of the array of chars: "  << maxn(array_of_chars, size_) << endl;

return 0;
}
