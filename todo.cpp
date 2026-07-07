#include<iostream>
#include<string>
using namespace std;
int main(){
    string tasks[100];
    bool completed[100]={false};
    int totalTasks=0,choice;
    do{ cout<<"\n===== TO-DO LIST ====="<<endl;
        cout<<"1.Add Task"<<endl;
        cout<<"2.View Tasks"<<endl;
        cout<<"3.Mark Task as Completed"<<endl;
        cout<<"4.Remove Task"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        cin.ignore();
        if(choice==1){
            cout<<"Enter task: ";
            getline(cin,tasks[totalTasks]);
            completed[totalTasks]=false;
            totalTasks++;
            cout<<"Task added successfully!"<<endl;}
        else if(choice==2){
            if(totalTasks==0)
                cout<<"No tasks available."<<endl;
            else{
                cout<<"\nYour Tasks:"<<endl;
                for(int i=0;i<totalTasks;i++){
                    cout<<i+1<<". "<<tasks[i];
                    if(completed[i])
                        cout<<" [Completed]";
                    else
                        cout<<" [Pending]";
                    cout<<endl;
                }}}
        else if(choice==3){
            int num;
            cout<<"Enter task number: ";
            cin>>num;
            if(num>=1&&num<=totalTasks){
                completed[num-1]=true;
                cout<<"Task marked as completed."<<endl;
            }
            else
                cout<<"Invalid task number."<<endl;
        }
        else if(choice==4){
            int num;
            cout<<"Enter task number to remove: ";
            cin>>num;
            if(num>=1&&num<=totalTasks){
                for(int i=num-1;i<totalTasks-1;i++){
                    tasks[i]=tasks[i+1];
                    completed[i]=completed[i+1];
                }
                totalTasks--;
                cout<<"Task removed successfully."<<endl;}
            else
                cout<<"Invalid task number."<<endl;}
        else if(choice!=5)
            cout<<"Invalid choice!"<<endl;
    }while(choice!=5);
    cout<<"Thank you for using the To-Do List!"<<endl;
    return 0;}