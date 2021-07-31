import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
class arrayAppend{
    private int[] value;
    private int newValue;
    private int[][] doubleValue;
    void addValue(int[] value,int newValue){
        this.value = value;
        this.newValue = newValue;
    }
    void addArray(int[][] doubleValue, int[] value){
        this.doubleValue = doubleValue;
        this.value = value;
    }
    int[] addOneDArray(){
        int i;
        int n = this.value.length;
        int[] newArr = new int[n + 1];
        for(i = 0; i < n; i++){
            newArr[i] = this.value[i];
        }
        newArr[n] = this.newValue;
        return newArr;
    }
    int[][] addTwoDArray(){
        int i, max = 0;
        int n = this.doubleValue.length;
        for(i = 0; i < n; i++){
            if(max<this.doubleValue[i].length){
                max = this.doubleValue[i].length;
            }
        }
        max = Math.max(max, this.value.length);
        int[][] newArr = new int[this.doubleValue.length+1][max];
        for(i = 0; i < n; i++){
            newArr[i] = this.doubleValue[i];
        }
        newArr[newArr.length - 1] = this.value;
        return newArr;
    }
}

public class first {
    public static void main(String[] args){
        int[][] arr = new int[0][0];
        for(int i=1; i<100;i++){
            int[] singleArr = new int[]{i};
            int value = i;
            do{
                arrayAppend arra = new arrayAppend();
                if(value%2==0){
                    value /= 2;
                }else{
                    value *= 3;
                    value++;
                }
                arra.addValue(singleArr, value);
                singleArr = arra.addOneDArray();
            }while(value!=1);
            arrayAppend outerArra = new arrayAppend();
            outerArra.addArray(arr, singleArr);
            arr = outerArra.addTwoDArray();
        }
        for(int[] a: arr){
            for(int b: a) {
                System.out.print(b+", ");
            }
            System.out.println();
        }
        try {
            File f0 = new File("./output.txt");
            if(f0.exists()){
                f0.delete();
                f0.createNewFile();
            }
            FileWriter fwrite = new FileWriter("./output.txt");
            for(int[] a: arr){
                for(int b: a) {
                    fwrite.write(b+", ");
                }
                fwrite.write("\n");
            }
            fwrite.close();

        } catch(IOException exception){
            System.out.println("An Unexpected error is occured");
            exception.printStackTrace();
        }
    }
}
