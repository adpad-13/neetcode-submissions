class KthLargest {
public:
    int k_val;
    priority_queue<int,vector<int>,greater<int>> pq;
    KthLargest(int k, vector<int>& nums) {
        k_val = k;
        for(int i:nums){
            add(i);
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size()>k_val){
            pq.pop();
        }
        return pq.top();
    }
};
