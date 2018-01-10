package repository;

import model.Vehicle;

public class InMemoryRepository implements Repository {
    private Vehicle vehicles[];
    private int size;

    public InMemoryRepository() {
        vehicles = new Vehicle[100];
        size = 0;
    }
    @Override
    public void addVehicle(Vehicle v) {
        if(size == vehicles.length)
            resize();

        this.vehicles[size++] = v;
    }

    @Override
    public void removeVehicle(Vehicle v) {
        for(int i = 0; i < size; i++ )
            if( vehicles[i].equals(v) ) {
                vehicles[i] = this.vehicles[size];
                size--;
            }
    }

    @Override
    public Vehicle[] getAll() {
        Vehicle[] sizeV = new Vehicle[size];
        for(int i = 0; i < size ; i++)
            sizeV[i] = vehicles[i];

        return sizeV;
    }

    private void resize() {
        Vehicle [] sizeV = new Vehicle[size * 2];

        for(int i = 0; i < size; i++)
            sizeV[i] = vehicles[i];

        vehicles = sizeV;
    }

    @Override
    public boolean findVehicle(Vehicle v) {
        for(int i = 0; i < size; ++ i)
            if(vehicles[i].equals(v))
                return true;
        return false;

    }
}
