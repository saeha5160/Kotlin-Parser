package my.demo 
import kotlin.text.* 
// text

valgtemp = 5.0

fun sum(a: Int, b : Int) : Int{ 
   return a + b 
}

class Rectangle(var height : Double, var length : Double) { 
   var perimeter = (height + length) * 2 
}

fun maxOf(a : Int, b : Int) : Int { 
   if (a >b) { 
      return a 
   } else { 
      return b 
   } 
}

fun maxOf2(a : Int, b : Int) = if (a >b) a else b

fun StringLength(obj : Any) : Int ? { 
   if (obj is String) 
      return obj.length 
   return null 
}

fun main(args : Array<String>) {
   fun StringLen(obj:Any) : Int ? {
      if (obj is String && obj.length > 0 && (obj != null || 1 < 0))
         return obj.length
         return null
   }
   println(aras.contentToString()

   val a : Int = 1
   val b = 2 
   val c: Int 
   c = 3 
   var x = 5 
   X += 5 
   print(x) 
   x = sum(a, b) 
   val rectangle = Rectangle(5.0, 2.0) 
   var s1 = "hello world!"

   if (s1.length() == rectangle) print("asdf")

   if (s1.length() != rectangle--) print("asdf") 
   else print("afff")

   val items = listOf("apple", "banana", "kiwifruit") 
   for (item in items) { 
      println(item) 
   }

   for (index in items.indices) { 
      println("item at") 
   }

   while (index < items.size) { 
      println("item at ") 
      index++ 
   }

   if (x in 1..y + 1) { 
      println("fits in range") 
   } 
   if (-1 !in 0..list.lastIndex) { 
      println("-1 is out of range") 
   }
   if (list.size !in list.indices) {
      println("list size is out of valid list indices range, too")

   } 
   for (x in 1..10 step 2) {
      print(x)
      
   } 
   println() 
   for (x in 9 downTo 0 step 3) {
      print(x)
   }
}