class Solution {
public:
    int countValidWords(string str) 
    {    
           //tokenization
           int idx = 0;
           int count = 0;
           while(idx < (str.length()))
           {
               string temp = "";
               while((idx < str.length()) and (str[idx] != ' '))
               {
                    temp.push_back(str[idx]);
                    idx++;
               }
               while((idx < str.length()) and (str[idx] == ' '))
               {
                    idx++;
               }
               if(isValid(temp) == true)
               count++;
           }
           return count;
    }
    bool isValid(string &str)
    {
        //checking digits
        for(int i = 0 ; i < str.length() ; i++)
        {
            if((str[i] >= '0') and (str[i] <= '9'))
            return false;
        } 

        //checking for the hyphen
        int hcount = 0;
        int hpos   = -1;
        for(int i = 0 ; i < str.length() ; i++)
        {
            if(str[i] == '-')
            {
                hcount++;
                hpos = i;
            }
        }
        if((hcount > 1)) return false;
        if((hpos == 0) or (hpos == str.length()-1)) return false;
        bool hflag = false;
        if(hpos!= -1 and ((str[hpos-1] >= 'a') and (str[hpos-1] <= 'z')) and ((str[hpos+1] >= 'a') and (str[hpos+1] <= 'z')))
        hflag = true;


        //checking for the puntuation
        int puncount =  0;
        int punpos   = -1;
        for(int i = 0 ; i < str.length() ; i++)
        {
            if((str[i] == '!') or (str[i] == '.') or (str[i] == ','))
            {
                puncount++;
                punpos = i;
            }
        }
        if(puncount > 1) return false;
        bool punflag = false;
        if(punpos == (str.length()-1))
        punflag = true;
        
        cout<<"Str = "<<str<<endl;
        cout<<"hflag = "<<hflag<<endl;
        cout<<"punflag = "<<punflag<<endl;
        
        cout<<endl<<endl;
       
        if(hpos!=-1 and punpos!=-1)
        return punflag and hflag;
        else if(hpos == -1 and punpos == -1)
        return true;
        else if(hpos == -1 and punpos!=-1)
        return punflag;
        else return hflag;
        

    }  
};