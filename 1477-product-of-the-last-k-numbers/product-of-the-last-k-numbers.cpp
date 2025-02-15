class ProductOfNumbers {
public:
    vector<int> vtr;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        vtr.push_back(num);
    }
    
    int getProduct(int k) {
        int product=1;
        int start=max(0, int(vtr.size()-k));
        for(int i=vtr.size()-1; i>=start; i--){
            product*=vtr[i];
        }
        return product;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */