isPrime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }
}