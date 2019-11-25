/******************************************************************************
 * src/encoder.cpp
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

struct cgvc_encoder_t {};
cgvc_encoder cgvc_encoder_create(cgvc_encoder_params_t*) {
  return new cgvc_encoder_t();
}

void cgvc_encoder_destroy(cgvc_encoder encoder) {
  delete encoder;
}

int cgvc_encode_frame(
    cgvc_encoder enc, cgvc_picture_t const* source, cgvc_packet_t* destination);

#ifdef __cplusplus
}
#endif