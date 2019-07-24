vector <int> merge(vector <int> &arr, vector <int> &brr){
    vector <int> ans;
    int i=0,j=0;
    while(i<arr.size()&&j<brr.size()){
        if(arr[i]<=brr[j]){
            ans.push_back(arr[i]);
            i++;
        }
        else{
            ans.push_back(brr[j]);
            j++;
        }
    }
    if(i==arr.size()){
        while(j<brr.size()){
            ans.push_back(brr[j++]);
        }
    }
    else if(j==brr.size()){
        while(i<arr.size()){
            ans.push_back(arr[i++]);
        }
    }
    return ans;
}
vector <int> mergesort(vector <int> &arr,int low,int high){
    if(high-low<=1){
        vector <int> a;
        a.push_back(arr[low]);
        return a;
    } 
    int mid=(high+low)/2;
    vector <int> ans=mergesort(arr,low,mid);
    vector <int> ans2=mergesort(arr,mid,high);
    ans=merge(ans,ans2);
    return ans;
    
}
