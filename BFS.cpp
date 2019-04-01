vector <int> bfs(vector <list <int> > l,int s){
vector <int> visit ;
list <int> q;
int i=0;
while(i<l.size()){
    visit.push_back(0);
    i++;
}
q.push_back(s);
visit[s]=1;
vector <int> res;
while(!q.empty()){
    list <int> :: iterator it;
    int buf=q.front();
    res.push_back(buf);
    q.pop_front();
    for(it=l[buf].begin();it!=l[buf].end();it++){
        if(!visit[*it]){
            q.push_back(*it);
            visit[*it]=1;
        }
    }

}
int k=0;
while(k<res.size()){
    cout << res[k]+1<<" ";
    k++;
}
}
