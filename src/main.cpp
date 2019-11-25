#include "cgvc/cgvc.h"
#include <boost/program_options.hpp>
#include <iostream>

int main(int argc, char** argv) {
  cgvc_encoder_params_t encoder_params = {};
  cgvc_encoder encoder                 = cgvc_encoder_create(&encoder_params);

  cgvc_decoder_params_t decoder_params = {};
  cgvc_decoder decoder                 = cgvc_decoder_create(&decoder_params);
  return 0;
}