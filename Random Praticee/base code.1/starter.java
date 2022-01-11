import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
int x;
int y;
int z;
Random rand;
rand = new Random();

x = 5;
x = rand.nextInt(56) + 10;
System.out.println(x);


double a;
a=0;
a=rand.nextDouble();
System.out.println(a);
a = a + 12.5;
System.out.println(a);


double b;
b=rand.nextDouble();
System.out.println(b);
b = b + 35.3;
System.out.println(b);

double c;
c=rand.nextInt(200);
System.out.println(c);
c = c + 5;
System.out.println(c);
c=c + rand.nextDouble();
System.out.println(c);

double x = rand.nextInt(10)+10+rand.nextDouble();

	}
}
