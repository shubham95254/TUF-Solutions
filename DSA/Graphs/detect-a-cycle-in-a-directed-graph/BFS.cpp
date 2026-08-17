        // indegree array maker
        for (int i = 0; i < V; i++) {
            for (auto it : adj[i]) indegree[it]++;
        }

        // add nodes with 0 indegree to queue
        for (int i = 0; i < V; i++) {
            if (indegree[i] == 0) q.push(i);
        }

        while (!q.empty()) {
            int ele = q.front();
            q.pop();
            vis[ele] = true;