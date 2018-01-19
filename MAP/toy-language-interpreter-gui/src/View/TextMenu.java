package View;

import Model.Command;

import java.util.*;

public class TextMenu {
    private Map<String, Command> cmds;

    public TextMenu(){ this.cmds=new HashMap<>(); }

    public void addCommand(Command cmd) {
        this.cmds.put(cmd.getKey(), cmd);
    }

    public void printMenu() {
        System.out.println("Available commands: ");
        for(Command cmd : this.cmds.values()) {
            String line = String.format("Command %4s: %s", cmd.getKey(), cmd.getDescription());
            System.out.println(line);
        }
    }

    public List<String> getCommandList() {
        List<String> l = new ArrayList<String>();
        for(Command cmd: this.cmds.values())
            l.add(cmd.getDescription());
        return l;
    }

    public void show() {
        Scanner scanner = new Scanner(System.in);
        while(true) {
            printMenu();
            System.out.println("Input the command: ");
            Command cmd = cmds.get(scanner.nextLine());
            if(cmd == null) {
                System.out.println("Invalid command");
                continue;
            }
            cmd.execute();
        }
    }
}
