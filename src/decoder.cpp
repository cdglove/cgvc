/******************************************************************************
 * src/decoder.cpp
 *
 * Copyright (c) Chris Glover, 2019
 *
 * Distributed under the Boost Software License, Version 1.0. (See accompanying
 * file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 *
 ******************************************************************************/
#include "cgvc/cgvc.h"

namespace {
}

#ifdef __cplusplus
extern "C" {
#endif

struct cgvc_decoder_t {};
cgvc_decoder cgvc_decoder_create(cgvc_decoder_params_t*) {
  return new cgvc_decoder_t();
}

void cgvc_decoder_destroy(cgvc_decoder decoder) {
  delete decoder;
}

int cgvc_decode_frame(
    cgvc_decoder, cgvc_packet_t const* source, cgvc_picture_t* destination) {
  return 0;
}

#ifdef __cplusplus
}
#endif