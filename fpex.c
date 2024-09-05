#include <iostream>                                              
#include <string>                                                
#include <exception>                                             

using namespace std;                                             

int main(int argc, char **argv) {                                

    int num_1[] = {0, 2, 4, 6, 8}, num_2[] = {3, 2, 1, 0, -1};   

    for(int i = 0; i < sizeof(num_1) / sizeof(num_1[0]); i++) {  
        try {                                                    
            int result = num_1[i] / num_2[i];                    
            printf("%d / %d = %d\n", num_1[i], num_2[i], result);
        } catch(exception &e) {                                  
            cout << e.what() << endl;                            
            cout << "something is wrong." << endl;               
            continue;                                            
        }                                                        
    }                                                            

    return 0;                                                    
} 
