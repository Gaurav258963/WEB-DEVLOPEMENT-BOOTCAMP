public class question25 {
    public static void main(String[] args) {
        int[] arr = {10,9,8,7,6,5};
        int x = 8;
    int ans = -1; 
    for(int i = 0;i<arr.length; i++){
    if(arr[i] == x){
        ans = i;
        break;



    }
        
    }
    if(ans == -1){
        System.out.println("Not Founded");
    } else{
        System.out.println("Found "+ x + " at Index " + ans);
    }

}
}
