#define POINT

class Point {
    public:
    //point values
        int x;
        int y;

    //Constructor
        Point ();
        Point (int a, int b);

    //setters
        void setX(int a){
            x = a;
            }
        void setY(int b){
            y = b;
            }

    //getters
        int getX(){ 
            return x;
        }
        int getY(){
            return y; 
        }

        double distance(Point p);
        void translate(int num);
};