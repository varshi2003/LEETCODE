int strStr(char * haystack, char * needle){
   for(int i=0;i<strlen(haystack);i++)
   {
       if(haystack[i]==needle[0])
       {
           int i1=i+1;
           int j=1;
           while(haystack[i1]&&needle[j])
           {
               if(haystack[i1]!=needle[j]) 
               break; 
               i1++;j++;
           } 
            if(j==strlen(needle)) 
       {
           return i;
       }
       } 
      
   } 
   return -1;
}
