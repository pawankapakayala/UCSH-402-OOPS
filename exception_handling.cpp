//simple example to show exception handling in C++

#include <iostream>

using namespace std;

class exceptionHandling{
    
        public:
    
        void test() {
    
            try {
    
                throw 10;
    
            }
    
            catch (int x) {
    
                cout << "Caught \n";
    
            }
    
        }
}

 int main()

{   int x = -1;

    // Some code

   cout << "Before try \n";

   try {

      cout << "Inside try \n";

      if (x > 0) // trying / exceptional condition

      {

         throw x;

         cout << "After throw (Never executed) \n";

      }

   }

   catch (int x ) {

      cout << "Exception Caught \n";

   }

    cout << "After catch (Will be executed) \n";

   return 0;

}