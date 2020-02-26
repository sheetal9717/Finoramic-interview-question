vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    vector<string> temp;
    vector<int>temp1;
    vector<vector<int>>result;
    bool flag[A.size()];
    for(int i=0;i<A.size();i++){
        temp.push_back(A[i]);
        sort(temp[i].begin(),temp[i].end());
        flag[i]=false;
    }
    unordered_map<string,vector<int>> mymap;
    for(int i=0;i<temp.size();i++){
        if(mymap.find(temp[i]) == mymap.end()){
            temp1.clear();
            temp1.push_back(i+1);
            mymap[temp[i]]= temp1;
        }
        else{
            if(flag[i]==false){
                mymap[temp[i]].push_back(i+1);
            }
        }
        flag[i]=true;
    }
    unordered_map<string, vector<int>>:: iterator itr;
    for(itr=mymap.begin();itr!=mymap.end();itr++){
        result.push_back(itr->second);
    }
    return result;
}
