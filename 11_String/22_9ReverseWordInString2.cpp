/*Given a character array s, reverse the order of the words.
A word is definesd as a sequence of non-space characters. The words in s will be separated by a single space.
Your code must solve the problem in-place, i.e. without allocating extra space.
i/p => s = "The sky is blue"
o/p => s = "blue is sky the"*/

//due


#include<iostream>
using namespace std;
void rightShift(char arr[], int start, int len, int times){
    for(int j = len - 1 - times; j!=start; j--) arr[j+times] = arr[j];
    return;
}
void leftShift(char arr[], int start, int len, int times){
    for(int j = start; j!=len - 1 - times; j++) arr[j-times] = arr[j];
    return;
}
int lengthChar(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++) count++;
    return count;
}
void ReverseOrderOfWord(char str[], int l){
    int s = 0, e = l-1, ss, stE, stS; 
    while(s!=e){
        //if(s==e) break;

        int ce = 0, cs = 0;
        while((str[e] != ' ')) {

            e--;
            ce++;
        }
        cout<<ce<<"  "<<e<<endl;
        //e++;
        stE = e;
        ss = s;
        while((str[s] != ' ')) {
            if(s==e) break;
            s++;
            cs++;
        }
        if(s==e) break;
       // s--;
        stS = s;
        s = ss;
        cout<<cs<<"  "<<s<<endl;
        if(ce>cs){//right shift
            while(s<=stS) swap(str[s++],str[e++]);//Maybe wrong check later//condition can be while(str[s] != ' ')
            char temp[ce-cs];
            for(int i = 0; i<(ce-cs); i++, e++) temp[i] = str[e];
            rightShift(str,s-1,l,ce-cs);
            for(int i = 0; s <= stS+(ce-cs); i++,s++) str[s] = temp[i];//check again
        }

        if(ce<cs){//left shift
            while(e!=e+(cs-ce)) swap(str[s++],str[e++]);//Maybe wrong check later//condition can be while(str[s] != ' ')
            char temp[cs-ce];
            for(int i = 0; i<(cs-ce); i++, s++) temp[i] = str[s];
            leftShift(str,e,l,cs-ce);
            for(int i = 0; e < e+(cs-ce); i++,e++) str[e] = temp[i];//check again
        }
        s = stS + 1;
        e = stE - 1;
    }
    return;
}

int main(){
    char str[] = "Roy Sneha";
    int len = lengthChar(str);
    ReverseOrderOfWord(str, len);
    cout<<str;
}