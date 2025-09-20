package TypesOfClasses;

public class Database {
    private static Database dbObject;

    private Database() {
    }

    public static Database getInstance() {
        if (dbObject==null) {
            dbObject = new Database();
        }
        return dbObject;
    }

    public void GetConnection() {
        System.out.println("You Are Now Connected To The Database");
    }
}

class Main {
   public static void main(String[] args) {
      Database db1;
      // refers to the only object of Database
      db1= Database.getInstance();
      
      db1.GetConnection();
   }
}
