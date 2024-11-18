import java.util.*;

public class WordJustifier {
    public static int getMaxWords(String[] words, int maxLines, int maxLineLength) {
        for (String word : words) {
            if (word.length() > maxLineLength) {
                return 0;
            }
        }

        int low = 0;
        int high = words.length;
        int maxWordsFit = 0;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (canFitWords(words, mid, maxLines, maxLineLength)) {
                maxWordsFit = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return maxWordsFit;
    }

    public static boolean canFitWords(String[] words, int wordCount, int maxLines, int maxLineLength) {
        int linesUsed = 1;
        int currentLineLength = 0;

        for (int i = 0; i < wordCount; i++) {
            int wordLength = words[i].length();

            if (currentLineLength == 0) {
                currentLineLength = wordLength;
            } else if (currentLineLength + 1 + wordLength <= maxLineLength) {
                currentLineLength += 1 + wordLength;
            } else {
                linesUsed++;
                if (linesUsed > maxLines) {
                    return false;
                }
                currentLineLength = wordLength;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int totalWords = scanner.nextInt();
        scanner.nextLine();

        String[] words = new String[totalWords];
        for (int i = 0; i < totalWords; i++) {
            words[i] = scanner.nextLine().trim();
        }

        int maxLines = scanner.nextInt();
        int maxLineLength = scanner.nextInt();

        System.out.println(getMaxWords(words, maxLines, maxLineLength));

        scanner.close();
    }
}
