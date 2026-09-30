class DisjointSet {
   private:
    vector<int> rank, parent, size;

   public:
    DisjointSet(int n) {
        // constructor
        rank.resize(n + 1, 0);
        size.resize(n + 1, 1);

        parent.resize(n + 1);
        for (int i = 0; i <= n; i++) {  // i till n, so that it will work for 0
                                        // and 1 based indexing both
            parent[i] = i;
        }
    }

    int findUPar(int u) {
        // function to find ultimate parent

        // base case
        if (u == parent[u]) return u;

        return parent[u] = findUPar(parent[u]);
    }

    bool find(int u, int v) {
        // function to check if 2 nodes are in same component or not
        return (findUPar(u) == findUPar(v));
    }

    void unionByRank(int u, int v) {
        int pu = findUPar(u);
        int pv = findUPar(v);

        //silly mistake - return if nodes already have same parent
        if(pu==pv) return ;

        //merge them if not
        if(rank[pu]>rank[pv]){
            parent[pv] = pu;
        } else if(rank[pu]< rank[pv]){
            parent[pu] = pv;
        } else{
            parent[pv] = pu;
            rank[pu]++;
        }
    }

    void unionBySize(int u, int v) {
        int pu = findUPar(u);
        int pv = findUPar(v);

        //if same parent, return
        if(pu==pv) return;

        //merge them if not
        if(size[pu]>size[pv]){
            parent[pv] = pu;
            size[pu]+=size[pv];
        } else{ //it will take into account equal case also
            parent[pu] = pv;
            size[pv]+=size[pu];

        }
    }
};
