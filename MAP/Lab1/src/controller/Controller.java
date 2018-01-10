package controller;

import exceptions.VehicleNotFoundException;
import model.Vehicle;
import repository.Repository;

public class Controller {
    Repository repo;

    public Controller(Repository repo) {
        this.repo = repo;
    }

    public void addVehicle(Vehicle v) {
        repo.addVehicle(v);
    }

    public void removeVehicle(Vehicle v) throws VehicleNotFoundException {
        try {
            repo.removeVehicle(v);
        } catch (VehicleNotFoundException e) {
            e.printStackTrace();
        }
    }

    public Vehicle[] getAllVehicles() {
       Vehicle[] vehicles = repo.getAll();
       return vehicles;
    }

    public Vehicle[] vehiclesByColor() {
        int cnt = 0;
        for(Vehicle v : this.repo.getAll())
            if(v != null && v.getColor().equals("red")) {
                ++ cnt;
            }
        Vehicle[] arr = new Vehicle[cnt];
        cnt = 0;
        for(Vehicle v: this.repo.getAll())
            if(v != null && v.getColor().equals("red"))
                arr[cnt ++] = v;
        return arr;
    }
}
