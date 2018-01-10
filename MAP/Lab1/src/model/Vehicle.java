package model;

public abstract class Vehicle {
    private String color;

    public Vehicle(String color) {
        this.color = color;
    }

    public String getColor() {
        return  color;
    }

    public void setColor(String color) {
        this.color = color;
    }
}
