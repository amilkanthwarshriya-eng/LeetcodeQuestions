class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        while(!students.empty())
        {
            if(students.front()==sandwiches.front())
            {
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
            }else{

                int count = 0;
                while(students.front()!=sandwiches.front())
                {
                    int val = students.front();
                    students.erase(students.begin());
                    students.push_back(val);
                    count++;

                    if(count >= students.size())
                    {
                        return students.size();
                    }
                }
            }
        }
     return 0;
    }
};