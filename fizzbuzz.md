# FizzBuzz

```cpp
/*
My take on the famous 'fizzbuzz' interview question.

"Write a program that prints the numbers from 1 to 100. 
But for multiples of three print “Fizz” instead of the number and for the multiples of five print “Buzz”. 
For numbers which are multiples of both three and five print “FizzBuzz”."

*/
#include <iostream>
using namespace std;
int main(){
        for(int x=0; x <= 100; ++x){
                if(x%3 == 0 && x%5== 0)
                        cout << "fizzbuzz --> " << x << endl;
                else if(x % 3 == 0)
                        cout << "fizz --> " << x << endl;
                else if(x % 5 == 0)
                        cout << "buzz --> " << x  << endl;
                else
                        cout << x << endl;
}
        return 0;
}
```