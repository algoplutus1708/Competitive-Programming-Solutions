/***  KNOWLEDGE IS POWER  ***/

class Solution {
    public int[][] merge(int[][] intervals) {
        Arrays.sort(intervals,(a,b) ->Integer.compare(a[0],b[0]));
        LinkedList<int[]> ans = new LinkedList<>();

        for(int[] tem:intervals){
            if(ans.isEmpty() || ans.getLast()[1]<tem[0])
                ans.add(tem);
            else if(ans.getLast()[1]>=tem[0])
                ans.getLast()[1] = Math.max(ans.getLast()[1],tem[1]);
        }
        return ans.toArray(new int[ans.size()][]);
    }
}
