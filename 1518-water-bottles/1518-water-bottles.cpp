class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int full = numBottles;   
        int empty = 0;            
        int total = 0;            

        while (full > 0) {
            total += full;        
            empty += full;
            full = empty / numExchange;  
            empty = empty % numExchange; 
        }
        return total;

    }
};