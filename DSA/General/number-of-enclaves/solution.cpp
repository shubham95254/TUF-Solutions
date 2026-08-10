                }
            }
        }
        int countLand = 0;
        // Unvisited O's are surrounded
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && grid[i][j]==1) {
                    countLand++;
                }
            }
        }