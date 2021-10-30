class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
       int len = arr.size();
       if(len==1){return arr;} 
       sort(arr.begin(),arr.end());
       vector<vector<int>> v;
       int l1=arr[0][0],r1=arr[0][1]; //First Interval
        int l2,r2;
        for(int i=1;i<len;i++){
            l2=arr[i][0];
            r2=arr[i][1];//       (l1,r1) (l2,r2)
           if(l1==l2){// example :  1, 3    1,6
               if(r1<r2){    
                   r1=r2;
               }
           }else{//                  (l1,r1)  (l2,r2)
               if(r1<l2){// example :  1, 2     3,6
                   v.push_back({l1,r1});l1=l2;r1=r2;
               }else{//r1>r2 and r1>=l2 is being manages
                   if(r1<r2){//           (l1,r1)  (l2,r2)
                       r1=r2;// example :  1, 3      2,6
                   }
               }
           }
        }
      v.push_back({l1,r1});   
    return v;
    }
};