/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    let idx=0;
    let tmp=[];
    for(let i=0;i<arr.length;i++){
        if(fn(arr[i],i))tmp[idx++]=arr[i];
    }
    return tmp;
};