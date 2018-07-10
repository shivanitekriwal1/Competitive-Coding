vector<int> Solution::primesum(int A) {
    if(A<3) return vector<int>();
    
    vector<bool> prime(A+1);
    vector<int > ans;
    
    prime[0] = prime[1] = false;
    
    for(int i=2; i<=A; i++){
        prime[i] = true;
    }
    
    for(int i=2; i*i<=A; i++){
        if(prime[i]){
            for(int j=i*2; j<=A; j+=i){
                prime[j] = false;
            }
        }
    }
    int a, b;
    
    for(int i=0; i<A; i++){
        if(prime[i] && prime[A-i]){
            a = i;
            b = A-i;
            break;
        }
    }
    
    ans.push_back(a);
    ans.push_back(b);
    return ans;
    
}
