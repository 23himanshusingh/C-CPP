/*Togetherness of a Family
In the world of magic land, there is a park in which a group of people are playing a game. Every person in the group is a child of one another person in the group except one person who is the parent of all the people in the group. Here, each person is represented by a number that if there are ‘n’ persons in the group then they are represented by numbers 1 to 7. The direct and indirect child relationship is defined as follows:

(i) A person ‘b’ is said to be direct child of ‘a’ if ‘a’ is parent of ‘b’.

(ii) Person is ‘c’ is said to be indirect child of ‘a’ when ‘c’ is child of ‘b’ and ‘b’ is child of ‘a’.

(iii) A indirect child ‘i’ of a person ‘p’ is also an indirect child of parent of ‘p’.

In the game, everyone is given a token which has a number written on it and to test the togetherness of the family, the family is given some queries.

In one query, a number representing a person is given and it is asked to find the number of direct and indirect children of the person who have prime number in the token given to them.

For more clarifications see the example below.

There are seven person in the group and the tokens assigned to each of them are:

Person

Token Number

1

1

2

2

3

3

4

4

5

5

6

6

7

7

We are given 2 queries:

Query1: The person numbered as 1 is given and we need to findout the number of children(both direct and indirect under 1) which have a token with prime number value:

Answer: 4.

Explanation:

For the person numbered as 1, its direct children are persons numbered as 2 and 3 and they have tokens 2 and 3 respectively which are prime numbers.

The person numbered as 5 and 7 are also children (indirect) of the person number 1 hence they also added up to the count and hence there are a total of 4 people who are children of person number 1 and have a prime number token.

Query2: The person numbered as 6 is given

Answer: 0.

Explanation:

The person with number 6 has no children and hence there are 0 children under him having tokens with prime number values.

Input Format:

First line of the input contains N, the number of persons playing in the park

Second line contains token numbers assigned for the persons and they are separated by a space ith number in the line contains the value of the token assigned to the ith person.

Next N-1 lines contains two integers Xi and Yi separated by a space and indicates that Xi is the parent of Yi.

The next line contains the number of queries, Q

Next Q lines contain the person queried

Note: The persons are indexed from 1.

Output Format:

Output Q lines, each containing only 1 integer, the number of children for the given node, which have their token value as a prime number

Example:

Input:

7

1 2 3 4 5 6 7

1 2

1 3

2 4

2 5

3 6

3 7

2

1

6

Output:

4

0

As can be seen

1 is the parent of both 2 and 3.

2 is the parent of 4 and 5.

3 is the parent of 6 and 7 */

#include <iostream>
#include <vector>
using namespace std;

const int MAXN=1e3+5;

int result[MAXN];
bool isPrime(int num){
    if (num <= 1) return false;
    if (num <=3) return true;
    if (num%2==0 || num%3==0) return false;
    for (int i=5;i*i<=num;i+=6){
        if (num%i==0 || num%(i+2)==0)
            return false;
    }
    return true;
}
void depth_first_traversal(int source, vector<vector<int>> &tree,vector<int> tok){
    for (int child:tree[source]){
        depth_first_traversal(child,tree,tokens);
    }
    for (int child:tree[source]){
        if (isPrime(tokens[child-1])){
            result[source]+=1;
        }
        result[source]+=result[child];
    }
}

int main(){
    int n;
    cin>>n;
    int token;
    vector<int> tokens;
    vector<vector<int>> tree(n+1,vector <int>());
    for (int i=0;i<n;i++){
        cin>>token;
        tokens.push_back(token);
    }
    int x,y;
    for (int i=0;i<n-1;i++){
        cin>>x>>y;
        tree[x].push_back(y);
    }
    depth_first_traversal(1,tree,tokens);
    int q;
    cin>>q;
    while(q--){
        cin>>x;
        cout<<result[x]<<endl;
    }
    return 0;
}


