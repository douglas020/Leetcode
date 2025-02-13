


int valor (char s){

    switch (s){
        case 'I':
        return 1;
        

        case 'V':
        return 5;
        

        case 'X':
        return 10;
        

        case 'L':
        return 50;
       

        case 'C':
        return 100;
        

        case 'D':
        return 500;
        

        case 'M':
        return 1000;
        

        default: 
        return 0;
    }  

}



int romanToInt(char* s) {
   int soma=0;

   for (int i=0;s[i] != '\0';i++){
        if (valor (s[i]) < valor (s[i+1]) ){
            soma -=   valor(s[i]);
        }
        else{
            soma += valor(s[i]);
        }

    }

    return soma;
}