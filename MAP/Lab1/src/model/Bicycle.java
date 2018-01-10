package model;

public class Bicycle extends Vehicle {
    private String type;
    private Double wheelSize;

    public Bicycle(String type, Double wheelSize, String color) {
        super(color);

        this.type = type;
        this.wheelSize = wheelSize;
    }

    public String getType() {
        return type;
    }

    public Double getWheelSize() {
        return wheelSize;
    }

    @Override
    public String getColor() {
        return super.getColor();
    }

    public void setType(String type) {
        this.type = type;
    }

    public void setWheelSize(Double wheelSize) {
        this.wheelSize = wheelSize;
    }

    @Override
    public void setColor(String color) {
        super.setColor(color);
    }

    @Override
    public String toString() {
        return "Bicycle with type: " + type + ", wheel size: " + wheelSize + " and color: " + this.getColor();
    }
}
