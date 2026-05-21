#ifndef _STACK_
#define _STACK_
namespace stack11 {
    int constexpr MAX_STACK_SIZE {10};
    class stack {
        private:
            int top_index {-1};
            int array_stack[MAX_STACK_SIZE] {0};
        public:
            int get_top_index() const {
                return this->top_index;
            }
            void push(int element) {
                if (
                    this->get_top_index() < 0
                    ||
                    this->get_top_index() < MAX_STACK_SIZE
                ) {
                    this->top_index += 1;
                    this->array_stack[this->top_index] = element;
                }
            }
            int pop() {
                int element {};
                if (
                    this->get_top_index() >= 0
                    &&
                    this->get_top_index() < MAX_STACK_SIZE
                ) {
                    element = this->array_stack[this->get_top_index()];
                    this->top_index -= 1;
                }
                return element;
            }
            int peek() const {
                return this->array_stack[this->top_index];
            }
            int size() const {
                return this->get_top_index()+1;
            }
            bool is_empty() const {
                return this->top_index < 0;
            }
            bool is_full() const {
                return this->top_index == MAX_STACK_SIZE-1;
            }
    };
}
#endif // _STACK_