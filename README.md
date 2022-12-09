# P++

This is the Python/Pascal inspired C++ syntax. All of this is just syntactic
sugar, aimed to give any users of the header a fun new syntax to play with. For
example, 

```
print("This is a string", " and so is this!" ); 
```

evaluates to 

```
std::cout << "This is a string" << " and so is this!" << std::endl; 
```

Neat, huh? The most jarring change made as part of this header is the change in
bracket, if-else and while syntax. For example, 

```
if condition then 
begin 
    code
end else begin 
    code again
end 
```
is your new jam. If This is too long, we've got an elif! 

```
if cond1 then 
begin
    code 
end elif cond2 then 
begin 
    more code 
end  
```

Notice the complete freedom from brackets and parentheses - you'll never have to
leave your keyboard ever again! That's really the goal, in the end. 

## Usage 

```
# include "p++.h"
```

and you're good to go! When you're compiling, use 

```
make file FILE="<your_filename_here>"
```

to generate the right object file. 
