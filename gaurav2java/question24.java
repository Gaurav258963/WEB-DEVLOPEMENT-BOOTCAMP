public class question24 {
    public static void main(String[] args) {
        
        
        int[] arr = {1,5,3,9,6};
        int ans = 0;
        for(int i = 0; i<arr.length; i++){
        if(arr[i] >ans){
            ans = arr[i];
        }

    }
    System.out.println("MAX " +ans);

}
}
