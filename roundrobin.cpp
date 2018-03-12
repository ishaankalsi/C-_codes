#include<iostream>
#include<queue>
using namespace std;
#define pii pair <int,int>  

void display(int *arr_time,int *burst_time,int* check,int* completion_time,int* waiting_time,int no_process){
    cout<<endl;
    //cout<<"arr_time"<<" "<<"burst_time"<<" "<<"check"<<" "<<"completion_time"<<" "<<"waiting_time"<<endl;
    cout<<"AT"<<" "<<"BT"<<" "<<"CK"<<" "<<"CT"<<" "<<"WT"<<endl;
    for(int i=0;i<no_process;++i){
    	cout<<arr_time[i]<<" "<<burst_time[i]<<" "<<check[i]<<" "<<completion_time[i]<<" "<<waiting_time[i]<<endl;
    }
}

float AWT(int *arr_time,int *burst_time,int no_process,int time_quantum){
    
    int cur_time=0;
    pii burst_id;
    queue<pii> job_queue;
    
    //find least arrival time set cur time

    int min_ele=1000;
    int min_ele_index=1000;
    //sort arrival time by selecion and burst acordingly
    for(int i=0;i<no_process;i++){
    	for(int j=i;j<no_process;j++){
    		if(arr_time[j]<min_ele){
    			min_ele=arr_time[j];
    			min_ele_index=j;
    		} 
    	}
    	int temp_arr=arr_time[min_ele_index];
    	arr_time[min_ele_index]=arr_time[i];
    	arr_time[i]=temp_arr;
    	int temp_burst=burst_time[min_ele_index];
    	burst_time[min_ele_index]=burst_time[i];
    	burst_time[i]=temp_burst;
    	min_ele=1000;
    		
    }

    // now i have arrival array sorted and burst acoordingly

    cur_time=arr_time[0];
    burst_id.first=burst_time[0];
    burst_id.second=0;
    job_queue.push(burst_id);
    int *check=new int[no_process];
    int *completion_time=new int[no_process];
    for (int i = 0; i <no_process; ++i)
    {
    	/* code */
    	check[i]=0;
    	completion_time[i]=0;
    }
    int check_count =0;

    


    while(job_queue.empty()==false){
        //process added to job queue
        for(int i=0;i<no_process;i++){
        	if(check_count==no_process){
        		break;
        	}
    		if (cur_time>=arr_time[i]&&check[i]==0){
    			burst_id.first=burst_time[i];
    			burst_id.second=i;
    			job_queue.push(burst_id);
                check[i]=1;
                ++check_count;
    		}
    	}

    	if(job_queue.front().first<time_quantum){
    		cur_time+=job_queue.front().first;
            completion_time[job_queue.front().second]=cur_time;  
            job_queue.pop();
    	}
        else{ 
    	    burst_id.first=job_queue.front().first - time_quantum;
    	    burst_id.second=job_queue.front().second;
    	    job_queue.pop();
    	    job_queue.push(burst_id);
        }




    }

    int *turnaround_time=new int[no_process];

    for(int i=0;i<no_process;i++){
    	turnaround_time[i]=arr_time[i]-completion_time[i];
    }
    
    int *waiting_time=new int[no_process];
    int sum_wait_time=0;
    for (int i = 0; i <no_process; ++i)
    {
        waiting_time[i]=turnaround_time[i]-burst_time[i];	
        sum_wait_time+=waiting_time[i];
    }

    float avg_wait_time=(sum_wait_time)/(no_process);
    
    display(arr_time,burst_time,check,completion_time,waiting_time,no_process);
    
    cout<<endl;
    cout<<"sum_wait_time"<<" "<<sum_wait_time<<endl; 
    return avg_wait_time;

}
int main(){
    int no_process;
    cin>>no_process;
    
    int *arr_time=new int[no_process];
    int *burst_time=new int[no_process];

    for(int i=0;i<no_process;i++){
    	cin>>arr_time[i];
    }
    for(int i=0;i<no_process;i++){
    	cin>>burst_time[i];
    }
    
    int time_quantum;
    cin>>time_quantum;
    float avg_wait_time=AWT(arr_time,burst_time,no_process,time_quantum);
    cout<<endl;
    cout<<avg_wait_time;
	return 0;
}

