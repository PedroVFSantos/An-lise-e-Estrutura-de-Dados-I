import java.util.HashSet;
/**
 * findPair
 */
public class findPair {
  public static void encontrarPar(int[] nums){
    HashSet<Integer> set = new HashSet<>();

    for(int num : nums){
      
      int target = 10 - num;

      if (set.contains(target)){
         System.out.println("Par encontrado: (" + num + ", " + target + ")");
      }

      set.add(num);
    }
  }

  public static void main(String[] args) {
    int [] numbers = {8,7,2,5,3,1};
    encontrarPar(numbers);
  }
}
