#ifndef PPLUSPLUS
#define PPLUSPLUS

# include <iostream>
# include <vector>
# include <algorithm>
# include <memory>
# include <string>
# include <ranges>

// for a lot of syntactic sugar 
using namespace std; 

// for newlines 
inline void print() {
    std::cout << std::endl ; 
}

// for one word only 
template<typename T>
inline void _print(T& t){
    std::cout << t ; 
}
// for multiple words without newlines 
template<typename T, typename... Args>
inline void _print(T& t, Args... args){
    std::cout << t ; 
    _print(args...);
}

// for one word + newline 
template<typename T>
inline void print(T& t){
    std::cout << t << endl ; 
}

// for generic printing 
template<typename T, typename... Args>
inline void print(T& t, Args... args) 
{
    cout << t ;
    print(args...) ;
}

// for input of one variable 
template<typename T>
inline void input(T& t) 
{
    cin >> t ;
}

// for input of many variables 
template<typename T, typename... Args>
inline void input(T& t, Args... args) 
{
    cin >> t ;
    input(args...) ;
}


// syntactic sugar 
#define var auto 
#define ref auto& 
#define if if( 
#define while while(
#define for for(
#define elif else if 

#define then )
#define begin {
#define end }

#endif
