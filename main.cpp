#include "p++.h"

int main()
begin 
 
    // variable definitions are unchanged. 
    int var_a = 3, var_b = 2, var_x ; 
    
    // This is a mess of nested if-elses.
    if var_b > var_a then begin 
        // This should not print 
        print( "2 is greater than 3 ... NANI !?! ");
    end elif var_a++ < var_b++ then begin 
        // This should also not print. 
        print ( "4 is less than 3? ... " ); 
    end else begin 
        // This should work, in the end. 
        // Note the use of _print to not have a newline
        // at the end. 
        _print ( "Math is not broken :) Give me a number : " ); 
        input ( var_x );
        print ( var_x, " is the best number ever :)"); 
    end
    
    // iterating through a vector  
    // note that we use var instead of auto 
    // in the for loop !!!
    vector<int> vec{1,2,3}; 
    print("Printing a vector using non-newline print"); 
    for ref elem : vec then
    begin
        _print(elem, " "); 
    end
    
    // As expected, the empty print 
    // outputs a new line. 
    print();
    
    // using a while loop   
    print("Decrementing your number in a while loop ..."); 
    while var_x > 0 then 
    begin 
        _print(var_x, " "); 
        var_x --;
    end
    print(); 
end 
