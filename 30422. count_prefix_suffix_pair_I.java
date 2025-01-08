class Solution {

    public boolean isPrefixAndSuffix(String check, String s) {
        int n = check.length();
        int m = s.length();

        String s1 = s.substring(0, n);
        String s2 = s.substring(m- n);

        return s1.equals(check) && s2.equals(check);
    }

    public int countPrefixSuffixPairs(String[] words) {

        int count = 0;

        for (int i = 0; i < words.length; i++) {
            for (int j = i + 1; j < words.length; j++) {
                if (words[i].length() <= words[j].length() && isPrefixAndSuffix(words[i], words[j])) {

                    count++;

                }
            }
        }
        return count++;

    }
}
