int Solution::maxArr(vector<int> &A) {
    int a = INT_MIN, b = INT_MIN, c = INT_MIN, d = INT_MIN; 
    int max_ans = INT_MIN;
    for(int i =0; i<A.size(); i++){
        a = max(a, A[i]+i);
        b = max(b, A[i]-i);
        c = max(c, -A[i]+i);
        d = max(d, -A[i]-i);
    }
    for(int i=0; i<A.size(); i++){
        max_ans = max(max_ans, -A[i]-i);
        max_ans = max(max_ans, -A[i]+i);
        max_ans = max(max_ans, A[i]-i);
        max_ans = max(max_ans, A[i]+i);
    }
    return max_ans;
    
}
