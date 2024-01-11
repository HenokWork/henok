import java.util.*;
 class Rectangle{
	double width=1;
	double height=1;
	Rectangle(){
	}
	Rectangle(double width,double height ){
		this.width=width;
		this.height=height;
	}
	public double getArea(){
	return Math.PI*height*width;}
	public double getPerimeter(){
	return 2*(height+width);}
	public void setArea(double height,double width){
	double area=Math.PI*height*width;}
	public void setPerimetere(double width,double height)
	{
		double perimeter=2*(height+width);
}}
public class testObjectClass{
		public static void main(String[] args){
			Rectangle rect1=new Rectangle(4,40);
		    Rectangle rect2=new Rectangle(3.9,39);
		System.out.println("The area  of width "+rect1.width+" and "+rect1.height+" is "+rect1.getArea()+" and the perimeter is "+rect1.getPerimeter());	
		System.out.println("The area  of width "+rect2.width+" and "+rect2.height+" is "+rect2.getArea()+" and the perimeter is "+rect2.getPerimeter());	
	java.util.Date date=new java.util.Date(1000);
	System.out.println(date.toString());
	System.out.println(date.getTime());
	java.util.Random random1=new java.util.Random(1000);
	for(int i=0;i<10;i++)
	System.out.print(random1.nextInt(100)+" ");
    tri();
	Account account=new Account(1122,20000);
	account.setAnnualInterest(450);
	account.withdraw(2500);
	account.deposit(3000);
	System.out.println("The current balance is "+account.getBalance());
	System.out.println("The monthly interest is "+account.getMonthlyInterest());
	//System.out.println("The monthly interest is "+account.getMonthlyInterest());
	System.out.println("The account is created on "+account.getDatecreated().toString());
	
   fan f=new fan();
   f.setOn(true);
   f.setRadies(10);
   f.setSpeed(f.FAST);
   f.setColor("yellow");
   
   if(f.isOn()==true)
	   System.out.println("The fan speed = "+f.getSpeed()+" ,color = "+f.getColor()+" 'radies= "+f.getRadies());
 else
	   System.out.println("The fan is off and its color = "+f.getColor()+" 'radies= "+f.getRadies());
	
	regularPolygon poly1=new regularPolygon();
  regularPolygon poly2=new regularPolygon(6,4);
  regularPolygon poly3=new regularPolygon(10,4,5.6,7.8);
  System.out.printf("The area of the first object is %2.2f ",poly1.getArea());
  System.out.println();
  System.out.print("The area of the second object is ");
  System.out.printf("%3.2f",poly2.getArea());
  System.out.println();
  System.out.printf("The area of the third object is %4.2f",poly3.getArea());
  System.out.println();
	
		 QuadraticEquation q=new QuadraticEquation(2,4,2);
	 if(q.getDiscriminant()>0)
		 System.out.println("The first root is "+q.getRoot1()+" and the second root is "+q.getRoot2());
	 else if(q.getDiscriminant()==0)
		 System.out.println("The equation has only one  root which is "+q.getRoot1());
	else
		System.out.println("The equation has no real root ");
	}
	public static void tri()
	{
			GregorianCalendar calender=new GregorianCalendar(2023,10,20);
			System.out.println();
	System.out.println("The current year is "+calender.get(GregorianCalendar.YEAR));
	System.out.println("The current month is "+calender.get(GregorianCalendar.MONTH));
	System.out.println("The current day is "+calender.get(GregorianCalendar.DAY_OF_MONTH));
	}
	}
	
	class Account{
		private int id;
		private double balance;
		private static double annualInterestRate;
		private Date dateCreated;
     Account(){}
	 Account(int id,double balance){
		 this.id=id;
		 this.balance=balance;
	 }
	 public Date getDatecreated(){
		 dateCreated=new Date();
		 return dateCreated;
	 }
	 public int getId(){
		 return id;
	 }
	 public double getBalance(){
		 return balance;
	 }
	 public double getAnualInterest(){
	 return annualInterestRate;}
	 public void setId(int id){
	 this.id=id;}
	 public void setBalance(double balance){
	 this.balance=balance;}
	 public void setAnnualInterest(double annualInterestRate){
	this.annualInterestRate=annualInterestRate/100;
	}
	public double getMonthlyInterestRate(){
	return annualInterestRate/12;
	}
	public double getMonthlyInterest(){
		return balance*annualInterestRate/12;
	}
	public double withdraw(double withdraws){
		balance=balance-withdraws;
		return balance;
	}
	public double deposit(double deposits){
		balance=balance+deposits;
		return balance;
	} 
	}
	class fan{
		final int SLOW=1;
		final int MEDIUM=2;
		final int FAST=3;
		
	private int speed=SLOW;
	private boolean on;
	private double radius=5;
	String color="blue";
	
 public int getSpeed(){
	 return speed;
 }
 public boolean isOn(){
	 return on;
 }
 public double getRadies(){
	 return radius;
 }
   String getColor(){
   return color;
   }
   public void setSpeed(int speed)
   {
	   this.speed=speed;
   }
   public void setOn(boolean on){
	   this.on=on;
   }
   public void setRadies(double Radius){
	   if(Radius<=0)
		   radius=0;
	   else
		   radius=Radius;
   }
   public void setColor(String color){
	   this.color=color;
	}}
	class regularPolygon{
		private int n=3;
		private double sides=1;
		private double x=0;
		private double y=0;
		regularPolygon(){}
		regularPolygon(int n,int sides)
		{
			this.n=n;
			this.sides=sides;
			x=0;
			y=0;
		}
		regularPolygon(int n,double sides,double x,double y){
			this.n=n;
			this.sides=sides;
			this.x=x;
			this.y=y;
		}
		public int getN(){
			return n;
		}
		public double getSides(){
			return sides;
		}
		public double getX(){
			return x;
		}
		public  double getY(){
			return  y;
		}
  public double getArea(){
	  return (n*sides*sides)/(4*Math.tan(Math.PI/n));
	}}
  

 class QuadraticEquation{
	 private double a;
	 private double b;
	 private double c;
	 QuadraticEquation(double a,double b,double c){
		 this.a=a;
		 this.b=b;
		 this.c=c;
	 }
	 public double getA(){
		 return a;
	 }
	 public double getB(){
		 return b;
	 }
	 public double getC(){
		 return c;
	 }
	 public double getDiscriminant(){
		 return (b*b)-(4*a*c);
	 }
	 public double getRoot1(){
		 if((b*b)-(4*a*c)>=0)
		 return ((-b)+Math.sqrt(b*b-(4*a*c)))/(2*a);
	 else 
		 return 0;
	 }
	 public double getRoot2(){
		 if((b*b)-(4*a*c)>=0)
		 return ((-b)-Math.sqrt(b*b-(4*a*c)))/(2*a);
	 else 
		 return 0;
	 }
 }
 