package javaTest01;

public class constantTest 
{
	public static void main(String[] argv)
	{
		final double PI = 3.14;
		
		double radius = 5.0;
		double circleArea = radius * radius * PI;
		
		System.out.println("Circle Area Value : " + circleArea);
	}
}
