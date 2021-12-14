vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>>a;

   sort(arr.begin(), arr.end());

   for(int i = 0; i<arr.size(); i++)

   {

       for(int j = i+1; j<arr.size(); j++)

       {

           if((arr[i] + arr[j]) == s)

           {

              vector<int>b;

               b.push_back(arr[i]);

               b.push_back(arr[j]);

               a.push_back(b);

           }

       }

     

   }

    return a;
}