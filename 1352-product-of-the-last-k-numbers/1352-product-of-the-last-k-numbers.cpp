class ProductOfNumbers {
public:
    vector<int>v;
    ProductOfNumbers() {
        v={1};
    }
    
    void add(int num) {
        if(num==0){
            v={1};
            return ;
        }
        v.push_back(v.back()*num);
    }
    
    int getProduct(int k) {
        int last=v.size()-1-k;
        if(last<0){
            return 0;
        }
        return v.back()/v[last];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */