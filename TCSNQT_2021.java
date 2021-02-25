import java.util.*;

class Container{
	int id;
	double length;
	double breadth;
	double hight;
	double pricePerSqrFt;
	Container(int i,double l,double b,double h,double pPSF){
		id = i;
		length = l;
		breadth = b;
		hight = h;
		pricePerSqrFt = pPSF;
	}
	double findVolume(){
		return length*breadth*hight;
	}
}

class PackageingCompany{
	ArrayList<Container> containerList = new ArrayList<Container>();
	PackageingCompany(ArrayList<Container> cL){
		containerList = cL;
	}
	double findContainerCost(int id){
		double cost = -1;
		for(Container c: containerList){
			if(c.id == id){
				cost =  2*(c.length*c.breadth + c.length*c.hight + c.breadth*c.hight)*c.pricePerSqrFt;
			}
		}
		return cost;
	}
	Container findLargestContainer(){
		Container maxCon = null;
		double maxi = 0;
		for(Container c: containerList){
			if(maxi < c.findVolume()){
				maxCon = c;
				maxi = maxCon.findVolume();
			}
		}
		return maxCon;
	}
}

class TCSNQT_2021{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		ArrayList<Container> listCon = new ArrayList<Container>();
		int n = sc.nextInt();
		for(int i = 0;i<n;i++){
			listCon.add(new Container(sc.nextInt(),sc.nextDouble(),sc.nextDouble(),sc.nextDouble(),sc.nextDouble()));
		}
		PackageingCompany pc = new PackageingCompany(listCon);
		double findContainerCost = pc.findContainerCost(sc.nextInt());
		if(findContainerCost == -1){
			System.out.println("No container found");
		}else{
			System.out.println(findContainerCost);
		}
		Container c = pc.findLargestContainer();
		System.out.println(c.id+" "+(int)c.findVolume());
	}
}