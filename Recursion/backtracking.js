function bt(num){
    if(num>5)return;
    bt(num+1)
    console.log(num)
}


bt(1)