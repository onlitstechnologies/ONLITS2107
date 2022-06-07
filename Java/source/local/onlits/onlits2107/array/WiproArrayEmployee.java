package local.onlits.onlits2107.array;

public class WiproArrayEmployee {
    public static void main(String[] args) {
        String[][] employees = {
            {"E001", "Raju Kumar", "SWE2"},
            {"E002", "Santosh Kumar", "SWE2"},
            {"E003", "Prince Kumar", "SWE2"},
            {"E004", "Venkat Rama Raghav Rao", "SWE4"}
        };
        System.out.printf("%-15s%-30s%s\n","Employee Id", "Employee Name", "Designation");
        for (String[] employee : employees) {
            System.out.printf("%-15s%-30s%s\n", employee[0], employee[1], employee[2]);
        }
    }
}
