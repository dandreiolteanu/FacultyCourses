package model;

public class Car extends Vehicle {
    private String brand;
    private String type;
    private String name;

    public Car(String type, String brand, String name, String color) {
        super(color);

        this.type = type;
        this.brand = brand;
        this.name = name;
    }

    public String getType() {
        return type;
    }

    public String getBrand() {
        return brand;
    }

    public String getName() {
        return name;
    }

    @Override
    public String getColor() {
        return super.getColor();
    }

    public void setType(String type) {
        this.type = type;
    }

    public void setBrand(String brand) {
        this.brand = brand;
    }

    public void setName(String name) {
        this.name = name;
    }

    @Override
    public void setColor(String color) {
        super.setColor(color);
    }

    @Override
    public String toString() {
        return "Car with brand: " + brand + ", type: " + type + ", name: " + name + " and color: " + this.getColor();
    }
}
