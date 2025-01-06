class Solution {
    public int[] minOperations(String boxes) {

        int m = boxes.length();
        int count = 0;
        int operation = 0;

        int [] answers = new int[m];


        for(int i=0;i<m;i++)
        {
            answers[i]+=operation;
            count+=boxes.charAt(i)-'0';
            operation+=count;


        }
        count =0;
        operation = 0;

        for(int i=m-1;i>=0;i--)
        {
            answers[i]+=operation;
            count+=boxes.charAt(i)-'0';
            operation+=count;

        }
        // return count++;
        return answers;



        


        
    }
}
