import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

public class datetime_convert {
    public static void main(String[] args) {
        // store date string in dateStr variable
        String dateStr = "2022-03-17 10:45:30";
        
        // specify date format
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("yyyy-MM-dd HH:mm:ss");
        
        // create new date object with the stored dateStr as an input
        LocalDateTime dateObj = LocalDateTime.parse(dateStr, formatter);
        
        // convert the date object to a string
        String formattedDate = dateObj.format(DateTimeFormatter.ofPattern("MM/dd/yyyy HH:mm:ss"));

        // print the date string to console
        System.out.println(formattedDate);
    }
}
