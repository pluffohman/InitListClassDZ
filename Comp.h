#pragma once
#include <iostream>
#include <string>

template<typename T>
class Pc {
private:
    std::string model;
    T processor;
    T memory;
    T storage;

public:
    Pc(std::string model, const std::initializer_list<T>& specs) : model(std::move(model)) {
        auto it = specs.begin();
        processor = *it++;
        memory = *it++;
        storage = *it;
    }

    void print() {
        std::cout << "Model: " << model << std::endl;
        std::cout << "Processor: " << processor << std::endl;
        std::cout << "Memory: " << memory << std::endl;
        std::cout << "Storage: " << storage << std::endl;
    }
};

