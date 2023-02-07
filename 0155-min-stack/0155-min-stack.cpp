class MinStack {
public:
stack<int>s, mn;
MinStack() {

}
void push(int val) {
	s.push(val);
	if ( !mn.empty()&& val >= mn.top())mn.push(mn.top());
	else mn.push(val);
}
void pop() {
	s.pop(), mn.pop();
}
int top() {
	return s.top();
}
int getMin() {
	return mn.top();
}
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */