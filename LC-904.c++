class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        unordered_map<int,int>mp;
        int n=fruits.size();
        int low=0;
        int size=0;
        int temp;

        for(int i=0;i<n;i++){
           mp[fruits[i]]++;
            while(mp.size() > 2){
                mp[fruits[low]]--;
                if(mp[fruits[low]] == 0){
                    mp.erase(fruits[low]);
                }
                low++;
            }

           size= max(size,i-low+1);
        }


        return size;

        
    }
};