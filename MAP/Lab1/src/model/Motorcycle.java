package model;

public class Motorcycle extends Vehicle {
    private String brand;
    private String name;
    private Double maxSpeed;

    public Motorcycle(String brand, String name, Double maxSpeed, String color) {
        super(color);

        this.brand = brand;
        this.name = name;
        this.maxSpeed = maxSpeed;
    }

    public String getBrand() {
        return brand;
    }

    public String getName() {
        return name;
    }

    public Double getMaxSpeed() {
        return maxSpeed;
    }

    @Override
    public String getColor() {
        return super.getColor();
    }

    public void setBrand(String brand) {
        this.brand = brand;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setMaxSpeed(Double maxSpeed) {
        this.maxSpeed = maxSpeed;
    }

    @Override
    public void setColor(String color) {
        super.setColor(color);
    }

    @Override
    public String toString() {
        return "Motorcycle with brand: " + brand + ", name: " + name + " and color: " + this.getColor();
    }
}


