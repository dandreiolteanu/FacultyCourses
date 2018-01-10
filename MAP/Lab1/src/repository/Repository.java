package repository;

import exceptions.VehicleNotFoundException;
import model.Vehicle;

public interface Repository {

    void addVehicle(Vehicle v);
    void removeVehicle(Vehicle v) throws VehicleNotFoundException;
    boolean findVehicle(Vehicle v);
    Vehicle[] getAll();
}
