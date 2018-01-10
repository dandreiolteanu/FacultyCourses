package Model.File;

public class IDGenerator
{
    private static int counter = 0;
    public static int generate_ID()
    {
        return counter++;
    }
}