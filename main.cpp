#include "p++.h"

int main()
begin 
    int var_a = 3, var_b = 2, var_x ; 
    if var_b > var_a then begin 
        // This should not print 
        print( "2 is greater than 3 ... NANI !?! ");
    end elif var_a + 1 < var_b + 1 then begin 
        // This should also not print. 
        print ( "4 is less than 3? ... " ); 
    end else begin 
        // This should work, in the end. 
        _print ( "Math is not broken :) Give me a number : " ); 
        input ( var_x );
        print ( var_x, " is the best number ever :)"); 
    end
    
    // iterating through a vector  
    vector<int> vec{1,2,3}; 
    print("Printing a vector using non-newline print"); 
    for ( var& elem : vec ) begin
        _print(elem); 
    end
    print();
    
    print("Decrementing your number in a while loop ..."); 
    while var_x > 0 then 
    begin 
        _print(var_x); 
        _print(" "); 

        var_x --;
    end
    print(); 
end 
