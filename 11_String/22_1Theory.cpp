//String is Character Array
//ASCII Values => 'A' -> 65    'Z' -> 90
//                'a' -> 97    'z' -> 122
//                '0' -> 48    '9' -> 57

//Null Charecter=>'\0' -> 0 //Use null character as terminator
/*We use null charecter in charecter array as check mark 
it's hard to count all the charecter every time we make a array
so we use '\0' in the end & we run a loop untilwe get '\0'.*/
/*Ex=>
    char arr[] = {'H', 'e', 'l', 'l', 'o', 'w','\0'}; // we don't need to count number of element here
    int i = 0;
    while(arr[i]!='\0'){
        cout<<arr[i];
        i++
    }*/
    
//char str[] = "Hello World"; // it is string
//Size of string is (number of element + 1)
//since by default in the end compiler take '\0' 

//Ways of printing particular element :
//  arr[i]
//  *(arr + i)
//  *(i+arr)
//  i[arr]