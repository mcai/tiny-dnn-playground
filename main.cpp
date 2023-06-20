#include "tiny_dnn/tiny_dnn.h"

using namespace tiny_dnn;
using namespace tiny_dnn::activation;
using namespace tiny_dnn::layers;

void construct_mlp(network<sequential>& nn) {
    nn << fc(32 * 32, 300) << sigmoid() << fc(300, 10);

    assert(nn.in_data_size() == 32 * 32);
    assert(nn.out_data_size() == 10);
}

int main() {
    network<sequential> nn;
    construct_mlp(nn);

    // The rest of your code here to train the network and make predictions...
    // ...
    
    return 0;
}