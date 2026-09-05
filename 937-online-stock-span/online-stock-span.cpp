class StockSpanner {
public:
    vector<int> a;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int count = 0;
        a.push_back(price);
        
        for(int i=a.size()-1;i>=0;i--)
        {
            if(a[i]>price) break;
            count++;
        }

        return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */