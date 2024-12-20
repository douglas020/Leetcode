int distributeCandies(int* candyType, int candyTypeSize) {
    int diferente=0;
    int n = candyTypeSize/2;
    int flag=0;
    int diferentes=1;
    int *p = (int*) malloc (candyTypeSize * sizeof (int));

    p[0] = candyType[0];
      
    for (int i=1;i<candyTypeSize;i++){
        flag = 0;
        
        for (int j=0;j < diferentes;j++){
            if (p[j] ==  candyType[i]){
            flag = 1;   
            
            }       
  
        }

        if (diferentes == n){
         return diferentes;  
        }

        if (flag == 0){
         p[diferentes] = candyType[i];
         diferentes++;
        }
    }
    free(p);

 return diferentes;
}