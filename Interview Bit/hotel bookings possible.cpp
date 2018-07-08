bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    int n = arrive.size();
    int m = depart.size();
    int i=0, j=0, count=0;
    sort(arrive.begin(), arrive.begin()+n);
    sort(depart.begin(), depart.begin()+m);
    while(i<n & j<m){
        if(arrive[i]<depart[j]){
            count+=1;
            i++;
        }
        else{
            count-=1;
            j++;
        }
        if(count>K){
            return 0;
        }
    }
    return 1;
}

