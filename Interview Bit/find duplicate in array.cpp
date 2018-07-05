int Solution::repeatedNumber(const vector<int> &A) {
    vector <bool> ans(A.size());
    fill(ans.begin(), ans.end(), true);

    for(int i=0;i<A.size();i++){
        if(ans[A[i]]){
            ans[A[i]]=false;
        }
        
        else
            return A[i];
    }
}