//In C++, try-catch blocks can be nested. Also, an exception can be re-thrown using catch
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    try { 
        try  { 
            throw 20; 
        } 
        catch (int n) { 
             cout << "Handle Partially "<<endl; 
             throw 'A';   //Re-throwing an exception 
        } 
    } 
    catch (int n) { 
        cout << "Handle remaining "; 
    } 
    return 0; 
}

