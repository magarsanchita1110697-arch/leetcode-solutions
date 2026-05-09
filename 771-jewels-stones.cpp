class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
       int count=0;

       int j;
       for(j=0; j<jewels.size(); j++){
        int i;
        for(i=0; i<stones.size(); i++){
            if(jewels[j]==stones[i])
            count++;
        }
        }
        return count;
    }
};