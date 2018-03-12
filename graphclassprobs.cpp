#include<iostream>
#include<vector>
#include<queue>
using namespace std;

// class vertice{
//    public:

//    int data;
//    node* next;
   
//    node(int x){
     
//      data=x;
//      next=NULL;

//    }

// };

class graph{
public:
	vector<vector<int>> v;
	int nv;

	graph(int n){
		nv=n;
        vector<bool> visited(nv,false);
		v.resize(nv,vector<int>());
	}
     
    void addedge(int src,int dest){
    	v[src].push_back(dest);
    	v[dest].push_back(src);
    }

    
    void dfs(int src,vector<bool>& visited){
    	visited[src]=true;
    	cout<<src<<" ";
    	vector<int> & adjlist=v[src];

    	for(int i=0;i<adjlist.size();i++){
    		int curnbr=adjlist[i];
    		if(visited[curnbr]==false){
    		dfs(curnbr,visited);
    	    }
    	}
    }

    void bfs(int src){
    	//cout<<endl; 
   	queue<int> q;
    	vector<bool> visited(nv,false); 
    	q.push(src);

    	visited[src]=true;

    	while(!q.empty()){
             
    		int curvrt=q.front();
    		cout<<curvrt<<" ";
    		q.pop();

    		vector<int>& adjlist=v[curvrt];
    		for(int i=0;i<adjlist.size();i++){
    			int ngh=adjlist[i];
    			if(visited[ngh]==false){
                   visited[ngh]=true;
                   q.push(ngh);
    			}
    		}
    	}
    }
    void dfs(int src){
    	vector<bool> visited(nv,false);
    	dfs(src,visited);

    } 

    bool isconnect(int src,int ele){
       
    	vector<int>& adjlist=v[src];
        vector<bool> visited(nv,false);
        visited[src]=true;
        //cout<<src<<"->";
    	for(int i=0;i<adjlist.size();i++){
    	     int ngh=adjlist[i];
    	     if(ngh==ele){
    	     	return true;
    	     }
    	     if(visited[ngh]==false){
                visited[ngh]=true;
                //cout<<ngh<<"->";
    	     }	
    	}
    	
    }


    int connectcomponents(int src){
        
        vector<int>& adjlist=v[src];
        //vector<bool> visited(nv,false);
        
        return adjlist.size();
    }

    int shortestdistance(int src,int dest){
        


    }

    vector<int> topologicalsortBFS(){

    }

    vector<int> topologicasortDFS(){

    }

};



int main(){
    
    //creategraph();
    graph g(4);
    g.addedge(0,1);
    g.addedge(0,2);
    g.addedge(2,3);
    g.addedge(3,0);
    g.dfs(0);
    cout<<endl;
    cout<<"============";
    cout<<endl;
    g.bfs(0);
    cout<<endl;
    (g.isconnect(2,3))?cout<<"true":cout<<"false";
    cout<<endl;
    cout<<g.connectcomponents(0);    
    g.shortestdistance(0,3);
	

	return 0;
}