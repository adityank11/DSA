// class Solution {
// public:
//     int compress(vector<char>& chars) {
//        int i = 0;
//        int ans = 0;
//        int s = chars.size();
//        while(i<s)
//        {
//           int j = i+1;
//           while(j<s && chars[i]==chars[j])
//           {
//             j++;
//           }
//           chars[ans++]=chars[i];
//           int count = j-i;
//           if(count>1)
//           {
//             string cnt = to_string(count);
//             for(char ch: cnt)
//             {
//               chars[ans++]=ch;
//             }
//           }
//           i=j;
//        }
//        return ans;
//     }
// };