//Ա�����䰸��
//#include <iostream>
//#include "vector"
//#include "string"
//#include "map"
//using namespace std;
//void push_information(vector<string> &vector_work,vector<string> &vector_person,map<string,string> &employee_information ){
//    int length = vector_work.size();
//    for(auto it=vector_person.begin();it!=vector_person.end();it++){
//            employee_information[*it] = vector_work[rand()%length];
//    }
//}
//void print_information(map<string,string> &employee_information ){
//    for(auto it=employee_information.begin();it!=employee_information.end();it++){
//        cout<<"name: "<<it->first<<"--- work: "<<it->second<<endl;
//    }
//}
//int main() {
//    vector<string> vector_work;
//    vector_work.emplace_back("�߻�");
//    vector_work.emplace_back("����");
//    vector_work.emplace_back("�з�");
//    vector<string> vector_person;
//    vector_person.emplace_back("one");
//    vector_person.emplace_back("two");
//    vector_person.emplace_back("three");
//    vector_person.emplace_back("four");
//    vector_person.emplace_back("five");
//    vector_person.emplace_back("six");
//    vector_person.emplace_back("seven");
//    vector_person.emplace_back("eight");
//    vector_person.emplace_back("nine");
//    vector_person.emplace_back("ten");
//    map<string,string> employee_information;
//    push_information(vector_work,vector_person,employee_information);
//    print_information(employee_information );
//
//    return 0;
//}

//===================================================================================STL��������

//#include "iostream"
//#include "string"
//#include "vector"
//#include "algorithm"
//using namespace std;
//
//template<class T>
//class MyPrint{
//public:
//    int count;
//    MyPrint(){
//        this->count=0;
//    }
//    void operator()(T content){
//        cout<<content<<endl;
//        this->count++;
//    }
//};
////�������������Ϊ��������
//template <class T1,class T2>
//void doPrint(MyPrint<T1> &myPrint,T2 content){
//    myPrint(content);
//}
////�º�������������bool�������ͣ���Ϊν��
////һԪν��
//class GreatFive{
//public:
//        bool operator()(int val){
//            return val>5;
//        }
//    };
////��Ԫν��
//class MyCompare{
//public:
//    bool flag;//�Ƿ�����
//    bool operator()(int number1,int number2){
//        if(flag)
//            return number1<number2;
//        return number1>number2;
//        //����
//    }
//    MyCompare(bool flag){
//        this->flag = flag;
//    }
//};
//void printVector(vector<int> &int_vector){
//    for(vector<int>::iterator it = int_vector.begin();it!=int_vector.end();it++)
//        cout<<*it<<" ";
//    cout<<endl;
//}
//int main(){
//    MyPrint<string> myPrint;
//    myPrint("Hello");
//    myPrint("Hello");
//    myPrint("Hello");
//    myPrint("Hello");
//    myPrint("Hello");
//    doPrint(myPrint,"END");
//    cout<<"the count is "<<myPrint.count<<endl;
//
//    //ν�ʵ�ʹ�÷���
//    vector<int> int_vector;
//    int_vector.emplace_back(89);
//    int_vector.emplace_back(79);
//    int_vector.emplace_back(69);
//    int_vector.emplace_back(49);
//    int_vector.emplace_back(99);
////    vector����
//    sort(int_vector.begin(),int_vector.end());
////    ����ʹ�ú���ʵ�ֵ�������
//    sort(int_vector.begin(),int_vector.end(),MyCompare(false));
//    printVector(int_vector);
//    vector<int>::iterator it = find_if(int_vector.begin(),int_vector.end(),GreatFive());
//    if(it==int_vector.end()){
//        cout<<"Don't find the number which is bigger 5"<<endl;
//    } else{
//        cout<<"Have found the number which is bigger 5 and the value is "<<*it;
//    }
//
//    return 0;
//}


//=============================================================================================�ڽ��������󡪡������º���

//#include "iostream"
//#include "functional"//�ڽ���������ͷ�ļ�
//
//using namespace std;
//
//int main(){
//    negate<int> n;//һԪ�º�����ȡ���º���
//    cout<<n(39)<<endl;
//    plus<int> plus;//��Ԫ�º������ӷ�����
//    cout<<plus(89,78)<<endl;
//    return 0;
//}

//===========================================================================================�����㷨
//#include "iostream"
//#include "algorithm"
//#include "vector"
//using namespace std;
//
//class SumResult{
//public:
//    int sum;
//    SumResult(int start_value){
//        this->sum = start_value;
//    }
//    void operator()(int e){
//        cout<<e<<" ";
//        this->sum = this->sum + e;
//        cout<< this->sum<<"...";
//    }
//};
//
//int main(){
//    vector<int> int_vector;
//    for(int i=0;i<10;i++)
//        int_vector.emplace_back(i*18);
//    SumResult sumResult(0);
//    for_each(int_vector.begin(),int_vector.end(), sumResult);
//    cout<<"---the result is "<<sumResult.sum;
//    return 0;
//
//}

//=======================================================================transformʹ�÷���
//#include "iostream"
//#include "vector"
//#include "algorithm"
//using namespace std;
//
//class Transform{
//public:
//    int operator()(int v){
//        return v*10;
//    }
//};
//void print(int val){
//    cout<<val<<" ";
//}
//int main(){
//   vector<int> vector_src;
//   for(int i=0;i<19;i++)
//       vector_src.push_back(i);
//    for_each(vector_src.begin(),vector_src.end(), print);
//    vector<int> vector_target;
//    vector_target.resize(vector_src.size());
//    cout<<endl;
//
//    //����֮ǰӦ����ǰ���ٿռ�
//   transform(vector_src.begin(),vector_src.end(),vector_target.begin(),Transform());
//   for_each(vector_target.begin(),vector_target.end(), print);
//    return 0;
//}


//==========================================================================test01
//��Ŀ����n��������ʹ��ǰ�����˳�������m��λ�ã����m���������ǰ���m������

//#include "iostream"
//#include "vector"
//
//using namespace std;
//
//void printArr(int *arr,int len){
//    for(int i=0;i<len;i++)
//        printf("%d ",arr[i]);
//}
//void arrMove(int *arr,int len ,int m){
//    int arr_temp[m];
//    for(int i=0;i<m;i++){
//        arr_temp[i]=arr[len-1-m+i];
//    }
//    for(int i=len-1;i>=len-1-m;i--){
//        arr[i]=arr[i-m];
//    }
//    for(int i=0;i<m;i++){
//        arr[i] = arr_temp[i];
//    }
//}
//int main(){
//    int n;
//    cout<<"������n :";
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        scanf("%d",&arr[i]);
//    }
//    printArr(arr,n);
//
//    return 0;
//}


//================================================find����ָ��Ԫ�ط���ָ��������
//#include "iostream"
//#include "vector"
//#include "algorithm"
//using namespace std;
//
//
//int main(){
//    vector<int> vector_int;
//    for(int i=0;i<10;i++)
//        vector_int.emplace_back(i);
//    vector<int>::iterator it= find(vector_int.begin(),vector_int.end(),6);
//    if(it==vector_int.end())
//        cout<<"don't find "<<endl;
//    else{
//        cout<<"find "<<*it<<" successfully"<<endl;
//    }
//    return 0;
//}




//=======================================class�������캯��
//=======================================��ʼ���б�





#include "iostream"
#include "string"

using namespace std;

class Person{
public:
    int age;
    string name;
    int *height;
    int sex;
    //��̬��Ա����
    //1.�ڱ���׶η����ڴ�
    //2.
    static string teacher;


public:
    Person(int Age,string Name,int Height,int Sex=1){
        this->age = Age;
        this->name = Name;
        this->height = new int (Height);
        this->sex;
    }

    ~Person(){
        if(this->height!=nullptr){
            delete this->height;
            this->height = nullptr;
        }
        cout<<"you have used the destruct function"<<endl;
    }

    Person(Person &person){
        this->age = person.age;
        this->name = person.name+"-copy!!";
        this->height = new int (*person.height);
    }

    void printInformation(){
        cout<<"name : "<< this->name<<" age : "<< this->age<<" height :"<<*height<< " sex : "<< this->sex<<endl;
    }

    void goodFriend(Person &person){
        cout<<person.name <<" is "<< this->name<< "'s good friend!!!"<<endl;
    }
};
void test1(){
    Person person(23,"Edison",178);
    Person person1(67,"Vince",166);
    Person person_copy(person);
    person.goodFriend(person1);
    person.printInformation();

}
int main(){
    test1();
    return 0;
}



