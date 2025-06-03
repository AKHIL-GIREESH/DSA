const fib = (e1,e2,n) => {
    if(n==1){
        console.log(e1);
        return;
    }
    //console.log(e1)
    fib(e2,e1+e2,n-1)
}

fib(0,1,5)