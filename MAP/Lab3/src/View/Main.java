package View;
import Model.Expression.*;
import Model.*;
import Controller.*;
import Repository.*;
import Model.Statement.*;
import Model.File.*;

public class Main {
    public static void main(String arg[]) {
        IPrgStateRepo repository1 = new PrgStateRepo(prg1(), "ProgramState1.txt");
        Controller controller1 = new Controller(repository1);
        IPrgStateRepo repository2 = new PrgStateRepo(prg2(), "ProgramState2.txt");
        Controller controller2 = new Controller(repository2);
        IPrgStateRepo repository3 = new PrgStateRepo(prg3(), "ProgramState3.txt");
        Controller controller3 = new Controller(repository3);
        IPrgStateRepo repository4 = new PrgStateRepo(prg4(), "ProgramState4.txt");
        Controller controller4 = new Controller(repository4);
        TextMenu menu = new TextMenu();
        menu.addCommand(new ExitCommand("0", "exit"));
        menu.addCommand(new RunExample("1", prg1().getStatement().toString(), controller1));
        menu.addCommand(new RunExample("2", prg2().getStatement().toString(), controller2));
        menu.addCommand(new RunExample("3", prg3().getStatement().toString(), controller3));
        menu.addCommand(new RunExample("4", prg4().getStatement().toString(), controller4));
        menu.show();
    }

    private static PrgState prg1() {
        //a=10;
        //if (a-10) then
        //    print(30);
        //else
        //    print(1);
        //print((3 + 7) * a);

        Statement ex1 = new CompStmt(
                new AssignStmt("a", new ConstExpr(10)),
                new CompStmt(
                        new IfStmt(
                                new ArithmeticExpr(
                                        '-',
                                        new VarExpr("a"),
                                        new ConstExpr(5)
                                ),
                                new PrintStmt(new ConstExpr(30)),
                                new PrintStmt(new ConstExpr(1))
                        ),
                        new PrintStmt(
                                new ArithmeticExpr(
                                        '*',
                                        new ArithmeticExpr(
                                                '+',
                                                new ConstExpr(3),
                                                new ConstExpr(7)
                                        ),
                                        new VarExpr("a")
                                )
                        )
                )
        );
        IExecStack<Statement> stack = new ExeStack<>();
        IDictionary<String, Integer> dict = new Dictionary<>();
        IList<Integer> l = new outputList<>();
        FileTable ft = new FileTable();
        stack.push(ex1);
        PrgState state = new PrgState(stack, dict, l, ex1, ft);
        return state;
    }

    private static PrgState prg2() {
        /*
        a = 10 + 15
        b = a + 5
        Print(a + b)
         */
        Statement ex2 = new CompStmt( new AssignStmt("a", new ArithmeticExpr('+', new ConstExpr(10), new ConstExpr(40))),
                                      new CompStmt( new AssignStmt("b", new ArithmeticExpr('+', new VarExpr("a"), new ConstExpr(50))),
                                              new PrintStmt(new ArithmeticExpr('+', new VarExpr("a"), new VarExpr("b"))))


        );
        IExecStack<Statement> stack = new ExeStack<>();
        IDictionary<String, Integer> dict = new Dictionary<>();
        IList<Integer> l = new outputList<>();
        FileTable ft = new FileTable();
        stack.push(ex2);
        PrgState state = new PrgState(stack, dict, l, ex2, ft);
        return state;
    }

    private static PrgState prg3() {

        Statement ex3 = new AssignStmt("c", new ConstExpr(100));

        IExecStack<Statement> stack = new ExeStack<>();
        IDictionary<String, Integer> dict = new Dictionary<>();
        IList<Integer> l = new outputList<>();
        FileTable ft = new FileTable();
        stack.push(ex3);
        PrgState state = new PrgState(stack, dict, l, ex3, ft);
        return state;
    }

    private static PrgState prg4() {

        Statement ex4 = new AssignStmt("exception", new ArithmeticExpr('%', new ConstExpr(10), new ConstExpr(20)));

        IExecStack<Statement> stack = new ExeStack<>();
        IDictionary<String, Integer> dict = new Dictionary<>();
        IList<Integer> l = new outputList<>();
        FileTable ft = new FileTable();
        stack.push(ex4);
        PrgState state = new PrgState(stack, dict, l, ex4, ft);
        return state;
    }
}
