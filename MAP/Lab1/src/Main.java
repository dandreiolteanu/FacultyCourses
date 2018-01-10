/*
 *        1. Intr-o parcare exista masini, motociclete
 *  si biciclete. Sa se afiseze toate vehiculele
 *  de culoare rosie.
 */

import controller.Controller;
import exceptions.VehicleNotFoundException;
import model.Bicycle;
import model.Car;
import model.Motorcycle;
import repository.InMemoryRepository;
import repository.Repository;
import view.View;

public class Main {

    public static void main(String[] args) throws VehicleNotFoundException {

        System.out.println("Andrei started the project.");

        System.out.println("Welcome to your Garaje!");
        Repository r = new InMemoryRepository();
        r.addVehicle(new Car("SUV", "BMW", "X1", "red"));
        r.addVehicle(new Car("MCV", "Dacia", "Logan MCV", "green"));
        r.addVehicle(new Car("Sedan", "Tesla", "Model S", "red"));
        r.addVehicle(new Bicycle("bmx", 12.2, "red"));
        r.addVehicle(new Bicycle("mountain-bike", 10.0, "green"));
        r.addVehicle(new Motorcycle("Yamaha", "MotorX", 200.0, "red"));
        Controller c = new Controller(r);
        View view = new View(c);
        view.run();
    }
}
