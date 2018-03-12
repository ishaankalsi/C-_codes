#include<iostream>
#include<string>


using namespace std;

class node{
    public:
	string name;
	int salary;

	node(string n,int sal){
        
        name=n;
        salary=sal;  
	}
};

// piv_idx(node *arr,int nof_emp,int piv_sal){

// 	int beg=0,end=nof_emp-1;
//     int mid=(beg+end)/2;

// 	while(true){
        
//         if(a[mid]>piv_sal)
// 	}
// }

bubble_sort(node *arr,int nof_emp){

	for(int i=0;i<nof_emp;i++){

		for(int j=i;j<nof_emp-i;j++){
             
             if(arr[j].salary<arr[j+1].salary){
             	node temp("",0);

             	temp.name=arr[j].name;
             	temp.salary=arr[j].salary;

                arr[j].name=arr[j+1].name;
                arr[j].salary=arr[j+1].salary;
                
                arr[j+1].name=temp.name;
                arr[j+1].salary=temp.salary; 
             }

		}
	}

}

void dec_sort(node *arr,int nof_emp,int piv_sal){
    
    //int piv_idx=findpiv(arr,nof_emp,piv_sal);
    bubble_sort(arr,nof_emp);//rev sorted array

    for(int i=0;i<nof_emp;i++){

    	if(arr[i].salary>piv_sal){
                cout<<arr[i].name<<" "<<arr[i].salary<<endl;
    		if(arr[i+1].salary<piv_sal){
    			break;
    		}
    	}
    	else{
    		break;
    	}
    }



}


int main(){
    void dec_sort(node *,int,int);
    int piv_sal;
    cin>>piv_sal;

    int nof_emp;
    cin>>nof_emp;

    node *arr=new node[nof_emp];
    string n;int sal;
    for(int i=0;i<nof_emp;i++){
    	cin>>n;
    	cin>>sal;
    	arr[i]=new node(n,sal);
    }
    
    dec_sort(arr,nof_emp,piv_sal);

	return 0;
}
