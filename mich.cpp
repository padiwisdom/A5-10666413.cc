
#include <iostream>
#include <fstream>
#include <string>

using namespace std;




struct studentdetail(
int id number;
 string Name;
 int Age;
 string gender;
 float score;
 char grade;
 )
 
 int main()
 int i,j,a=1, totalscore, total age, malecount=0, female=0; double average, avgscore;
  studentdeatail student[5];
  
 for(i=0, i<5, i++){
 cout<<"student :" <<a<<end1<<end1; a++
 cout<<"id:"; cin>>student[i].idNumber;
 cout<<:"Name:"; cin>>student[i].Name;
 cout<<:"age:"; cin>>student[i].age;
  cout<<:"gender:"; cin>>student[i].gender;
 if( student[i].gender==male){
 	malecount++;
 }
 else
 femalecount++;
 cout<<"score:"; cin>>student[i].score;
  if( student[i].score=>80)
   student[i].grade 'A';
 else    if( student[i].score=>70)
   student[i].grade 'B';
    else if( student[i].score=>60)
   student[i].grade 'C';
   else  if( student[i].score=>50)
   student[i].grade 'D';
   else  if( student[i].score=>40)
   student[i].grade 'E';
    else if( student[i].score=>30)
   student[i].grade 'F';
   cout<<"grade:"<<student[i].grade;
   cout<<end1<<end1;
}
totalage=student[0].age+student[1].age+ student[2].age+student[3].age+student[4].age;
totalscore=student[0].score+student[1].score+ student[2].score+student[3].score+student[4].score;
average=totalage/5.0;
avgscore=totalscore/5.0;
ofstring.outf("student.txt");

   cout<<"ID number"<<"name"<<"age"<<"Gender"<<"score"<<"grade"<<end1
   
 cout<<"*****************************************************************";
 for(j=0; j<=5; j++){
 	cout<<j <<" "<<"  "<<"  "<<student[j].idnumber<<"   "<<student[j].name <<student[j].score <<student[j].grade <<student[j].age;
 outf<<"***************************************************************************************"<<end1;
 	
 }
 

 
outf<<"number of male"<<malecount<<end1;
outf<<"number of female"<<femalecount<<end1;
outf<<"average age"<<avg age<<end1;

