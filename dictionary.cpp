/****
* PSEUDOCODE:
store first word length as minimum length
loop through words array
get word length at index i
if current len is lesser than minlength
 update minimum length
 return minimum lengthstore first word length as maximum length
loop through arrayget word
get word length
if word length higher than max
update max length

*
*/
#include <string>
using namespace std;
#include "dictionary.h"

int MinWordLength(string words[], int length) { 
   int minlength = words[0].length();
   int len;

   
   for(int i=0; i<length; i++){

       
       len = words[i].length();
       
       if( len < minlength){
           
           minlength = len;
       }
   }
   
   return minlength;
    throw "Unsupported Operation";
}

int MaxWordLength(string words[], int length) {
       
   int maxlength = words[0].length();
   int len;
   
   for(int i=0; i<length; i++){
       
       len = words[i].length();
       
       if( len > maxlength){
          
           maxlength = len;
       }
   }
   
   return maxlength;
   throw "Unsupported Operation";
}
    


int WordLengthRange(string words[], int length) {
    
   return MaxWordLength(words,length)-MinWordLength(words,length);
}

int AverageWordLength(string words[], int length) {
   
   long total = 0;

   
   for(int i=0; i<length; i++){
       
       total = total+words[i].length();
   }

   
   int average = total/length;
   return average;

throw "Unsupported Operation";
}
    


int MostCommonWordLength(string words[], int length) {
    
   int counts[length];
   string common_words[length];
   int count = 0;

   
   for(int i=0; i<length; i++){

       
       bool found = false;
       
       for(int j=0; j<count; j++){
           
           if(words[i].compare(common_words[j]) == 0){
               
               counts[j]++;
               found = true;
               break;
           }
       }
       
       if(!found){
           
           counts[count] = 1;
           common_words[count++] = words[i];
       }
   }

   
   int index = 0;
   int maxCommon = counts[0];

   
   for(int i=0; i<count; i++){
       
       if(counts[i] > maxCommon){
           
           index = i;
       }
   }

   
   return common_words[index].length();

    throw "Unsupported Operation";
}
