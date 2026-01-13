package HashMap;

import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.TreeMap;

public class TypeOfMap 
{
    public static void main(String[] args) 
    {

      HashMap<Integer,String>map=new HashMap<>();
    
      map.put(3,"Pratik");
      map.put(1,"Shubham");
      map.put(5,"Prasad");
      map.put(2,"Rushikesh");
      map.put(4,"Sourabh");   
      System.out.println("HashMap class Looked like  : "+map);

/*========================================================================================================================== */
      LinkedHashMap<Integer,String>map1=new LinkedHashMap<>();
          
      map1.put(3,"Pratik");
      map1.put(1,"Shubham");
      map1.put(5,"Prasad");
      map1.put(2,"Rushikesh");
      map1.put(4,"Sourabh");   
      System.out.println("LinkedHashMap class Looked like  : "+map1);
/*========================================================================================================================== */
      TreeMap<Integer,String>map2=new TreeMap<>();
              
      map2.put(3,"Pratik");
      map2.put(1,"Shubham");
      map2.put(5,"Prasad");
      map2.put(2,"Rushikesh");
      map2.put(4,"Sourabh");   
      System.out.println("TreeMap class Looked like  : "+map2);
    }      
}
