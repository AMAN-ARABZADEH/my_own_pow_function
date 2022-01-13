#include <iostream>


double power(double x){
 return x * x * x * x * x;
}

double my_pow_function(double x, double b){
 // This is just a home made version of pow function in <cmath>
 double a = x;
 for (size_t i = 1; i < b; i++)
 {
   a = a * x;
 }
 return a;
 
 }

int main(){



// Using build in library function from #include <cmath>
/* 
std::cout << "Enter two integers to see the powers of the: ";
double x,y;
std::cin >> x >> y;
double power = pow(x, y);
std::cout << x << " to the power of " << y f<< " is " << power << std::endl;
*/

int pow1 = power(2);
int pow2 = my_pow_function(2, 5);
std::string result;
std::cout << pow1 << std::endl;
std::cout << pow2 << std::endl;
if(pow1 == pow2){
result = "equal";
} else {
 result = "not equal";
}
std::cout << "The " << pow1 << " and " << pow2 << " are: " << result << std::endl;
 return 0;
}  