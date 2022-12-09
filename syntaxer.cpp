# include <fstream>
# include "p++.h" // always the last import, otherwise 
                  // namespace std gets overwritten !!

int read_file(string filename) begin 
    print("Filename to be read: ", filename); 
    ifstream fd; 
    string line; 
    
    // opening the to-be-formatted file 
    fd.open(filename); 
    if not fd.is_open() then 
    begin 
        print ("Couldn't open the file ...."); 
        return -1; 
    end 
    
    // storing the semi-colon'd file
    // in a temp_ file. 
    ofstream out; 
    string new_filename = "temp_" + filename; 
    out.open(new_filename) ; 
    if not out.is_open() then 
    begin 
        print ("Couldn't open temporary ..."); 
        return -1; 
    end 
    
    string beg{"beg"}; beg = beg + "in"; 
    string ed{"en"}; ed = ed +"d"; 
    string thn{"the"}; thn = thn + "n"; 

    // if we're here, then the file has opened. 
    // Time to read it and add missing semi-colons. 
    while fd then 
    begin 
        getline(fd, line); 
        var len = line.length();
        
        if len < 1 then continue; 
        if line.substr(len - 1) == ";" 
            or line.substr(1) == "#" then 
        begin
            out << line << "\n";
            continue; 
        end
        if line.substr( len - 1, len ) == "\\"  then continue; 
        if len < 3 then continue;  
        if line.substr(len - 3) == ed then 
        begin 
            out << line << "\n"; 
            continue;
        end  
        if len < 4 then continue;  
        if line.substr( len - 4 ) == thn  then
        begin 
            out << line << "\n"; 
            continue;
        end 
        if len < 5 then continue;  
        if line.substr( len - 5 ) == beg then 
        begin 
            out << line << "\n"; 
            continue;
        end  
        out << line << ";\n";  
    end  
    
    return 0; 
end 

int main(int argv, char** argc) begin 
    for var i : views::iota(1, argv) then begin  
        read_file(argc[i]);
    end  
end 
