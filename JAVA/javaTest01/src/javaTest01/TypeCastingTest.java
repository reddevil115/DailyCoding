package javaTest01;

public class TypeCastingTest 
{
	public static void main(String[] args) 
	{
		byte a = 100;
		int i = 50;
		
		System.out.println(a+i);
		System.out.println(20/6);
		System.out.println(20.0/6);
		System.out.println((char)0x12340044);
		System.out.println((int)5.5 + 4.6);
		System.out.println((int)(5.5 + 4.6));
		System.out.println((int)5.5 + (int)4.6);
	}
}
