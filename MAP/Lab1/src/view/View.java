package view;

import controller.Controller;
import exceptions.VehicleNotFoundException;
import model.Bicycle;
import model.Car;
import model.Motorcycle;
import model.Vehicle;
import java.util.Scanner;

public class View {
    Controller c;
    public View(Controller c) {
        this.c = c;
    }
    void showMenu() {
        System.out.println("Menu: ");
        System.out.println("    1. Add vehicle");
        System.out.println("    2. Remove vehicle");
        System.out.println("    3. Show all red vehicles");
        System.out.println("    4. Show all");
        System.out.println("    5. Exit");
    }
    private int readInteger(Scanner scanner) {
        while(!scanner.hasNextInt()) {
            scanner.next();
            System.out.println("Please input an integer");
        }
        int x = scanner.nextInt();
        scanner.nextLine();
        return x;
    }

    private String readString(Scanner scanner, String text) {
        System.out.println(text);
        return scanner.nextLine();
    }

    private double readDouble(Scanner scanner, String text) {
        System.out.println(text);
        while(!scanner.hasNextDouble()) {
            scanner.next();
            System.out.println("Please input a double");
        }
        double x = scanner.nextDouble();
        scanner.nextLine();
        return x;
    }

    private Vehicle readVehicle(Scanner scanner) {
        System.out.println("Vehicle type (Bicycle, Car, Motorcycle)");
        String vehicleType;
        vehicleType = scanner.nextLine();
        String type, color, brand, name;
        double size, maxSpeed;
        switch(vehicleType.toLowerCase()) {
            case "bicycle":
                type = readString(scanner, "Type: ");
                color = readString(scanner, "Color: ");
                size = readDouble(scanner, "Wheel Size: ");
                return new Bicycle(type,size,color);
            case "car":
                type = readString(scanner, "Type: ");
                brand = readString(scanner, "Brand: ");
                name = readString(scanner, "Name: ");
                color = readString(scanner, "Color: ");
                return new Car(type, brand, name, color);
            case "motorcycle":
                brand = readString(scanner, "Brand: ");
                name = readString(scanner, "Name: ");
                color = readString(scanner, "Color: ");
                maxSpeed = readDouble(scanner, "Max Speed: ");
                return new Motorcycle(brand,name,maxSpeed,color);
        }
        return null;
    }

    public void run() throws VehicleNotFoundException {
        Scanner scanner = new Scanner(System.in);
        while(true) {
            showMenu();
            int x = readInteger(scanner);
            Vehicle v;
            switch(x) {
                case 1:
                    System.out.println("1");
                    v = readVehicle(scanner);
                    System.out.println(v.toString());
                    this.c.addVehicle(v);
                    break;
                case 2:
                    System.out.println("2");
                    v = readVehicle(scanner);
                    System.out.println(v.toString());
                    this.c.removeVehicle(v);
                    System.out.println("Vehicle removed.");
                    break;
                case 3:
                    System.out.println("3");
                    Vehicle[] arr = c.vehiclesByColor();
                    System.out.println(arr.length);
                    for(Vehicle veh : arr)
                        System.out.println(veh.toString());
                    break;
                case 4:
                    System.out.println("4");
                    Vehicle[] array = c.getAllVehicles();
                    System.out.println(array.length);
                    for(Vehicle veh : array)
                        System.out.println(veh.toString());
                    break;
                case 5:
                    System.out.println("Bye bye!");
                    return ;
            }
        }
    }
}


