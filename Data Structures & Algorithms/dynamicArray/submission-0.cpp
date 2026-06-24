class DynamicArray {
public:
    vector<int> ar;
    int capacity;

    DynamicArray(int cap) {
        capacity = cap;
        ar.reserve(capacity);
    }

    int get(int i) {
        return ar[i];
    }

    void set(int i, int n) {
        ar[i] = n;
    }

    void pushback(int n) {
        if (ar.size() == capacity) {
            resize();
        }
        ar.push_back(n);
    }

    int popback() {
        int val = ar.back();
        ar.pop_back();
        return val;
    }

    void resize() {
        capacity *= 2;
        ar.reserve(capacity);
    }

    int getSize() {
        return ar.size();
    }

    int getCapacity() {
        return capacity;
    }
};