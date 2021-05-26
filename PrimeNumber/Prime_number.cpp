
#include <cstdio>

int main()
{
    bool prime_flag = false;    

   
    for(unsigned int candidate = 2; candidate < 100; ++candidate) {

       
        prime_flag = true;
        for(unsigned int factor = 2; factor < candidate; ++factor) {
            if(candidate % factor == 0) {
                prime_flag = false;
                break;
            }
        }

        
        if(prime_flag) printf("%d ", candidate);
    }

    
    puts("");
    return 0;
}
