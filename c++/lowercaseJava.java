import java.util.*;
import java.io.*;

public class lowercaseJava {
	public static void main(String[] args) throws IOException {
		String filename = args[0]; 

		File file = new File(filename);
		Scanner input = new Scanner(file);

		String test = "";
		int count = 0;
		
		while (input.hasNext()) {
			// test += "Line " + count + ": " + input.nextLine() + "\n";
			// count++;
			test = input.nextLine();
			System.out.println(test.toLowerCase());
		}

	}
}