function reverseArray(arr){
  let st = 0;
  let end = arr.length -1 ;

  while(st < end){
    let temp = arr[st];
    arr[st] = arr[end];
    arr[end] = temp;

      st ++;
      end --;

  }
 return arr;


}

const arr= [20 , 90 , 80 , 50 , 40 ,30];
console.log(reverseArray(arr))