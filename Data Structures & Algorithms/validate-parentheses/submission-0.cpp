class Stack{
    private:
    std::vector<char> data;

    public:
    void push(char c){
        data.push_back(c);
    }

    char pop(){
        if (empty()) return '\0';
        char top_element = data.back();
        data.pop_back();
        return top_element;
    }
    bool empty(){
        return data.empty();
    }
    char top(){
        if (empty()) return '\0';
        return data.back();
    }
};

class Solution {
public:
    bool isValid(string s) {
        Stack arr;

        for(char c:s){
            if(c=='('||c == '{' || c == '['){
                arr.push(c);
            }
            else{
                if(arr.empty()) return false;

                char top_element = arr.top();

                if((c==')'&&top_element=='(')||(c=='}'&&top_element=='{')||(c==']'&&top_element=='[')){
                    arr.pop();
                }
                else{
                    return false;
                }
            }
        } 
        return arr.empty();
    }
};
