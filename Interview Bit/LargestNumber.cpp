bool checkGreater(int a, int b){
    string aa = to_string(a);
    string bb = to_string(b);
    if(aa+bb>bb+aa){
        return true;
    }
    else{
        return false;
    }
}

string Solution::largestNumber(const vector<int> &A) {
    vector<int> sol = A;
    sort(sol.begin(), sol.end(), checkGreater);
    
    string ans = "";
    for(int i=0; i<sol.size(); i++){
        ans = ans + to_string(sol[i]);
    }
    
    if(ans[0]=='0'){
        return "0";
    }
    
    return ans;
}
