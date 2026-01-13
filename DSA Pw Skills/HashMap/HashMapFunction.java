package HashMap;

import java.util.HashMap;
import java.util.Map;

public class HashMapFunction 
{
    public static void main(String[] args) 
    {
      HashMap<Integer,String>hm=new HashMap<>();
       //functionality of the put() function
      hm.put(1,"Pratik");
      hm.put(2,"Shubham");
      hm.put(3,"Prasad");
      hm.put(4,"Rushikesh");
      hm.put(5,"Sourabh");   

      System.out.println("HashMap of the given data is : "+hm);  

      //functionality of the get() function

      String result=hm.get(3);
      System.out.println("Value fot the given key is : "+result);

      //functionality of the containsKey() function
      System.out.println(hm.containsKey(1));

       //functionality of the remove() function
       System.out.println(hm.remove(1));

       System.out.println("Updated hashmap : "+hm);

        //iterating using the for loop
        for(Map.Entry<Integer,String>e:hm.entrySet())
        {
          System.out.println(e.getKey()+":"+e.getValue());
        }
    }      
}
