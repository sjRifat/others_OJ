class Solution {
public:
    vector<int>v[100010];
    int visited[100010];
    bool ans = true;
    void dfs(int node){
       if(ans==false)  return;
       visited[node] = 1;
       for(int i=0;i<v[node].size();i++){
           if(visited[v[node][i]]==0) dfs(v[node][i]);
           else ans = false;
       }
        visited[node] =false;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& vv) {
        int i,j,x;
        for(i=0;i<vv.size();i++){
            int a=vv[i][0];
            int b=vv[i][1];
            v[a].push_back(b);
            x=a;
        }
        for(int i=0;i<numCourses;i++)
        {
              // memset(visited,0,sizeof(visited));
              if(visited[i]==0 && v[i].size()>0)
               dfs(i);
        }
        if(!ans) return false;
        return true;
    }
};
