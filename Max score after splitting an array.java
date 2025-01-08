class Solution {
    public int maxScore(String s) {

        int n = s.length();

        int result = Integer.MIN_VALUE;

        for(int i=0;i<n-1;i++)
        {
            int zero_count = 0;

            for(int j=0;j<=i;j++)
            {
                if(s.charAt(j)=='0')
                {
                    zero_count++;
                }
            }

            int one_count = 0;

            for(int j=i+1;j<n;j++)
            {
                if(s.charAt(j)=='1')
                {
                    one_count++;
                }
            }
        result = Math.max(result, zero_count+one_count);

        }
        return result;
        
    }
}
