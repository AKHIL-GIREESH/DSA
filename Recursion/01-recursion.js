const reverse = (first,last,string) => {
    if(first>=last){
        return string.join("")
    }
    temp = string[first]
    string[first] = string[last]
    string[last] = temp
    return reverse(first+1,last-1,string)
}

console.log(reverse(0,4,"hello".split("")))