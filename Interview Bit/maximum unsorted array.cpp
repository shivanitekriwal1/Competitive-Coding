vector<int> Solution::subUnsort(vector<int> &A) {
    int max,min,s,e;
    vector<int> ans;
    e = A.size()-1;
    for(s=0; s<e; s++){
        if(A[s]>A[s+1]){
            break;
        }
    }
    if(s==e){
        ans.push_back(-1);
    }
    else{
    
        for(e=A.size()-1; e>0; e--){
            if(A[e-1]>A[e]){
                break;
            }
        }
        max = A[s]; min = A[s];
        
        for(int i=s; i<=e; i++){
            if(A[i]>max){
                max = A[i];
            }
            if(A[i]<min){
                min = A[i];
            }
        }
        
        for(int i=0; i<s; i++){
            if(A[i]>min){
                s=i;
                break;
            }
        }
        
        for(int i=A.size()-1; i>e; i--){
            if(A[i]<max){
                e=i;
                break;
            }
        }
        
        ans.push_back(s);
        ans.push_back(e);
    }
    return ans;
}
