class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int full=numBottles;
        int empty=0;
        int total=0;
        while(full>0){
            total+=full;
            empty+=full;
            full=0;
            while(empty>=numExchange){
                full++;
                empty=empty-numExchange;
                numExchange++;
            }
            
        }
        return total;
    }
};