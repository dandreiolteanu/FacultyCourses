package Model.Exceptions;

public class UnknownOperationException extends Exception {
    public UnknownOperationException(char operator) {
        super("Unknown operation: " + operator);
    }

    public UnknownOperationException(String operator) {
        super("Unknown operation: " + operator);
    }
}
