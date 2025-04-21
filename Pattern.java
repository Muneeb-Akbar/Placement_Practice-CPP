

class Pattern {
    // This is a simple Java program to print a rectangular pattern
    public static void RectPattern(int a , int b) {
        for(int i =0; i<a; i++){
            for(int j=0; j<b; j++){
                System.out.print("*"+" ");
            }
            System.out.println();
        }
    }

    // hollow rectangle
    public static void HollowRectPattern(int a , int b) {
       for(int i=0; i<a; i++){
            for(int j = 0 ;j<b; j++){
                if(i==0 || i==a-1 || j==0 || j==b-1){
                    System.out.print("*"+" ");
                }else{
                    System.out.print(" "+" ");
                }
            }
            System.out.println();
       }
    }
    // half paramid pattern
    public static void HalfParamidPattern(int a) {
        for(int i=0; i<a; i++){
            for(int j=0; j<=i; j++){
                System.out.print("*"+" ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
       
        // Rectangular Pattern
        RectPattern(4, 5);
        System.out.println();       
        // Hollow Rectangular Pattern
        HollowRectPattern(4, 5);
        System.out.println();
        // Half Paramid Pattern
        HalfParamidPattern(5);

         
        }
}

