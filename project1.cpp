#include<iostream>
using namespace std;
void checkcarcer(int a){
    if(a==1){                                 //check for Bladder cancer..........
    int b;
    cout<<"Press 1 for medicine related enquiry"<<endl;
    cout<<" press 2 for doctor related enquiry"<<endl;
    cin>>b;
    if(b==1){                                 //medicine information...........
        cout<<"click here:https://www.cancer.gov/about-cancer/treatment/drugs/bladder";
    }
    else if(b==2){
        cout<<"Dr.xxxxx xxxxxx"<<endl;
        cout<<"mobile No:+91xxxxxxxx"<<endl;
        cout<<"Address:xxxxxxxxxxxxxxx"<<endl;
        cout<<"Email address:xxxxxxx@gmail.com";
    }
    else{
    cout<<"U pressed invalid key "<<endl;
    cout<<"thank u for intracting with us...";
    }
    }
    else if(a==2){                                          //check for lung cancer............
        int c;
    cout<<"Press 1 for medicine related enquiry"<<endl;
    cout<<" press 2 for doctor related enquiry"<<endl;  
    cin>>c;
    if(c==1){                                            //medinice information..........
cout<<"Click here:https://www.cancer.gov/about-cancer/treatment/drugs/lung";
    }
    else if(c==2){                                         // doctor information..........
        cout<<"Dr.xxxxx xxxxxx"<<endl;
        cout<<"mobile No:+91xxxxxxxx"<<endl;
        cout<<"Address:xxxxxxxxxxxxxxx"<<endl;
        cout<<"Email address:xxxxxxx@gmail.com";
    }
    else{
    cout<<"U pressed invalid key "<<endl;
    cout<<"thank u for intracting with us...";
    }
    }
    else if(a==3){                                        //check for Breast Cancer.........
        int d;
    cout<<"Press 1 for medicine related enquiry"<<endl;
    cout<<" press 2 for doctor related enquiry"<<endl;
    cin>>d;
    if(d==1){                                           //medicine information....
    cout<<"Click here:https://www.cancer.gov/about-cancer/treatment/drugs/breast";
    }
    else if(d==2){
        cout<<"Dr.xxxxx xxxxxx"<<endl;
        cout<<"mobile No:+91xxxxxxxx"<<endl;
        cout<<"Address:xxxxxxxxxxxxxxx"<<endl;
        cout<<"Email address:xxxxxxx@gmail.com";
    }
    else{
    cout<<"U pressed invalid key "<<endl;
    cout<<"thank u for intracting with us...";
    }
    }
    else if(a==4){                                              //check for Prostate Cancer.......
        int e;
    cout<<"Press 1 for medicine related enquiry"<<endl;
    cout<<" press 2 for doctor related enquiry"<<endl;
    cin>>e;
    if(e==1){                                          //medinice information
 cout<<"Click here:https://www.cancer.gov/about-cancer/treatment/drugs/prostate";
    }
    else if(e==2){                                   //doctor information..........
        cout<<"Dr.xxxxx xxxxxx"<<endl;
        cout<<"mobile No:+91xxxxxxxx"<<endl;
        cout<<"Address:xxxxxxxxxxxxxxx"<<endl;
        cout<<"Email address:xxxxxxx@gmail.com";
    }
    else{
    cout<<"U pressed invalid key "<<endl;
    cout<<"thank u for intracting with us...";
    }
    }
    else{
        cout<<"U pressed invalid key "<<endl;
        cout<<"thank u for intracting with us...";
    }

}
void cancer(){
    int check2;
    cout<<"Press 1 for Bladder Cancer"<<endl;
    cout<<"Press 2 for Lung Cancer"<<endl;
    cout<<" press 3 for Breast Cancer"<<endl;
    cout<<"press 4 for Prostate Cancer"<<endl;
    cout<<"Enter the number after reading above instruction:";
    cin>>check2;
    checkcarcer(check2);
}
void bloodpressure(){
    int check5;
    cout<<"Press 1 for medicine related enquiry"<<endl;
    cout<<" press 2 for doctor related enquiry"<<endl;
    cout<<"press 3 for exercise related enquiry"<<endl;
    cin>>check5;
    if(check5==1){
        cout<<"Click here:https://www.healthline.com/health/high-blood-pressure-hypertension-medication#alphabetablockers";
    }
    else if(check5==2){
        cout<<"Dr.xxxxx xxxxxx"<<endl;
        cout<<"mobile No:+91xxxxxxxx"<<endl;
        cout<<"Address:xxxxxxxxxxxxxxx"<<endl;
        cout<<"Email address:xxxxxxx@gmail.com";
    }
    else if(check5==3){
        cout<<"exercise that can help lower blood pressure include walking, jogging, cycling, swimming or dancing";
    }
    else{
    cout<<"U pressed invalid key......"<<endl;
    bloodpressure();
    }
}
void dibetese(){
    int check6;
    cout<<"Press 1 for medicine related enquiry"<<endl;
    cout<<" press 2 for doctor related enquiry"<<endl;
    cout<<"press 3 for exercise related enquiry"<<endl;
    cin>>check6;
    if(check6==1){
        cout<<"click here:https://www.healthline.com/health/diabetes/medications-list";
    }
    else if(check6==2){
    cout<<"Dr.xxxxx xxxxxx"<<endl;
    cout<<"mobile No:+91xxxxxxxx"<<endl;
    cout<<"Address:xxxxxxxxxxxxxxx"<<endl;
    cout<<"Email address:xxxxxxx@gmail.com";
    }
    else if(check6==3){
        cout<<"Walking....Cycling....Swimming....Team sports....Aerobic dance....Weightlifting....Resistance band exercises....Calisthenics.";
    }
    else{
    cout<<"U pressed invalid key......"<<endl;
    dibetese();
    }
}
void kneepain(){                                      
    int check7;
    cout<<"Press 1 for medicine related enquiry"<<endl;
    cout<<" press 2 for doctor related enquiry"<<endl;
    cout<<"press 3 for exercise related enquiry"<<endl;
    cin>>check7;
    if(check7==1){

    }
    else if(check7==2){
    cout<<"Dr.xxxxx xxxxxx"<<endl;
    cout<<"mobile No:+91xxxxxxxx"<<endl;
    cout<<"Address:xxxxxxxxxxxxxxx"<<endl;
    cout<<"Email address:xxxxxxx@gmail.com";
    }
    else if(check7==3){
        cout<<"Heel and calf stretch,Quadriceps stretch,Hamstring stretch,Half squat,Calf raises,Hamstring curl";
    }
    else{
    cout<<"U pressed invalid key "<<endl;
    kneepain();
    }
}
void astama(){
   int check8;
    cout<<"Press 1 for medicine related enquiry"<<endl;
    cout<<" press 2 for doctor related enquiry"<<endl;
    cout<<"press 3 for exercise related enquiry"<<endl;
    cin>>check8;
    if(check8==1){
        cout<<"Click here:https://medlineplus.gov/ency/patientinstructions/000008.htm";
    }
    else if(check8==2){
    cout<<"Dr.xxxxx xxxxxx"<<endl;
    cout<<"mobile No:+91xxxxxxxx"<<endl;
    cout<<"Address:xxxxxxxxxxxxxxx"<<endl;
    cout<<"Email address:xxxxxxx@gmail.com";
    }
    else if(check8==3){
        cout<<"Swimming,Walking,Hiking,Recreational biking,Short-distance track and field,Sports with short bursts of activity";
    }
    else{
    cout<<"U pressed invalid key "<<endl;
    astama();
    }
}
void diease(){
    int check3;
    cout<<"Press 1 for Blood Pressure"<<endl;
    cout<<"Press 2 for Dibetese(sugar)"<<endl;
    cout<<" press 3 for Knee pain"<<endl;
    cout<<"press 4 for Astama"<<endl;
    cin>>check3;
    if(check3==1){
        bloodpressure();
    }
    else if(check3==2){
        dibetese();
    }
    else if(check3==3){
        kneepain();
    }
    else if(check3==4){
        astama();
    }
    else{
        cout<<"U pressed invalid key "<<endl;
        diease();
    }

}

int main(){
    cout<<"Hello Sir/Mam....."<<endl;
    int age;
    cout<<"Please Enter the Age:";
    cin>>age;
    if(age>=65){
    string name;
    cout<<"Please enter your Name:";
    cin>>name;
    int dob;
    cout<<"Enter the date of birth year:";
    cin>>dob;
    char ch;
    cout<<"Enquiry for any senior citizon disease(type 'Y' for yes OR 'N' for no)";
    cout<<"press Y OR N:";
    cin>>ch;
    ch=toupper(ch);
    if(ch=='Y'){
        char check;
        cout<<"press 'C' for cancer related dieses"<<endl;
        cout<<"Press 'O' for other dieses"<<endl;
        
        cin>>check;
        check=toupper(check);
        if(check=='C'){
            cancer();
        }
        else if(check=='O'){
        //int check1;
        diease();
        }
        // cout<<"Press 1 for medicine related enquiry"<<endl;
        // cout<<"Press 2 for exercise Related Enquiry"<<endl;
        // cout<<" press 3 for doctor related enquiry"<<endl;
        // cout<<"press 4 for symptoms related any diease"<<endl;
        // cout<<"Enter the number after reading above instruction:";
        // cin>>check1;
        else{
            cout<<"U pressed invalid key "<<endl;
            cout<<"thank u for intracting with us...";
            return 0;
        }
    }
    else{
            cout<<"thank u for intracting with us...";
            return 0;
    }
    }
    else{
        cout<<"thank you for interact with us....."<<endl;
        cout<<"Have a Nice day";
        return 0;
    }
    return 0;
}