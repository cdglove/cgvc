/******************************************************************************
 * cgvc/cgvc.h
 *
 * Copyright (c) Chris Glover, 2019
 *
 * Distributed under the Boost Software License, Version 1.0. (See accompanying
 * file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 *
 ******************************************************************************/
#ifndef CGVC_CGVC_H
#define CGVC_CGVC_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

typedef char cgvc_byte_t;

typedef struct cgvc_packet_t {
  uint32_t size;
  cgvc_byte_t* payload;
} cgvc_packet_t;

typedef struct cgvc_image_t {
  int colourspace;
  int bits_per_pixel;
  int plane_count;
  int plane_stride[4];
  cgvc_byte_t* plane[4];
} cgvc_image_t;

typedef struct cgvc_picture_t {
  cgvc_image_t image;
} cgvc_picture_t;

/*
 *
 */
struct cgvc_encoder_t;
typedef struct cgvc_encoder_t* cgvc_encoder;

/*
 *
 */
typedef struct cgvc_encoder_params_t {
  int width;
  int height;
} cgvc_encoder_params_t;

/*
 *
 */
cgvc_encoder cgvc_encoder_create(cgvc_encoder_params_t*);

/*
 *
 */
void cgvc_encoder_destroy(cgvc_encoder);

/*
 *
 */
int cgvc_encode_frame(
    cgvc_encoder, cgvc_picture_t const* source, cgvc_packet_t* destination);

/*
 *
 */
struct cgvc_decoder_t;
typedef struct cgvc_decoder_t* cgvc_decoder;

/*
 *
 */
typedef struct cgvc_decoder_params_t {
  int pad;
} cgvc_decoder_params_t;

/*
 *
 */
cgvc_decoder cgvc_decoder_create(cgvc_decoder_params_t*);

/*
 *
 */
void cgvc_decoder_destroy(cgvc_decoder);

/*
 *
 */
int cgvc_decode_frame(
    cgvc_decoder, cgvc_packet_t const* source, cgvc_picture_t* destination);

#ifdef __cplusplus
}
#endif

#endif // CGVC_CGVC_H_
