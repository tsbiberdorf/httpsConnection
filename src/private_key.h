#ifndef PRIVATE_KEY_H_
#define PRIVATE_KEY_H_
unsigned char example_key_DER[] = {
  0x30, 0x82, 0x02, 0x5b, 0x02, 0x01, 0x00, 0x02, 0x81, 0x81, 0x00, 0xcc,
  0x94, 0x56, 0x2d, 0xa6, 0x9e, 0x98, 0x2a, 0x17, 0x20, 0xe9, 0xe4, 0x9a,
  0x3b, 0xd8, 0xd0, 0xc9, 0xf4, 0xd8, 0x7e, 0xd5, 0x0d, 0x67, 0x54, 0x47,
  0xac, 0xcd, 0x21, 0xe9, 0xf9, 0x3e, 0x3d, 0xf1, 0x9c, 0x98, 0x4a, 0x57,
  0x87, 0xdb, 0x24, 0xf1, 0x21, 0x5b, 0xe4, 0x01, 0x0c, 0x4a, 0x94, 0x6c,
  0x76, 0xc4, 0xfd, 0xa8, 0x46, 0xf4, 0x51, 0x15, 0x02, 0x27, 0xa7, 0xea,
  0xa8, 0x07, 0x3d, 0x2a, 0xec, 0x26, 0x19, 0xee, 0x02, 0xdd, 0x1f, 0xa1,
  0x93, 0x5e, 0xbd, 0x5e, 0x03, 0x3f, 0x9e, 0x05, 0x3a, 0x25, 0xc0, 0x56,
  0xbb, 0x36, 0x98, 0xa0, 0x8e, 0xad, 0x0f, 0xe1, 0xc6, 0x29, 0xa2, 0x9b,
  0x37, 0x9e, 0x70, 0xb7, 0x03, 0x67, 0xeb, 0xfe, 0x92, 0xcf, 0x30, 0xb6,
  0xec, 0x75, 0xef, 0x64, 0xe6, 0xc8, 0x01, 0x9a, 0xc1, 0x52, 0xed, 0x4f,
  0xef, 0x7c, 0xa4, 0x7a, 0xa5, 0x30, 0xc5, 0x02, 0x03, 0x01, 0x00, 0x01,
  0x02, 0x81, 0x80, 0x69, 0x91, 0xa6, 0x82, 0xfa, 0x37, 0x5e, 0xf8, 0x61,
  0x65, 0x07, 0xad, 0x82, 0xf5, 0x9d, 0x25, 0xe9, 0x01, 0xa3, 0x72, 0x97,
  0xc8, 0xc9, 0xe8, 0x90, 0xf0, 0x18, 0x0f, 0x07, 0x29, 0x2a, 0x38, 0x56,
  0xe4, 0xe3, 0x25, 0x81, 0xd3, 0xc6, 0x7f, 0x62, 0xbb, 0x3f, 0x2b, 0x02,
  0x6b, 0x70, 0x54, 0xf5, 0x3f, 0xb8, 0xd9, 0xd8, 0xab, 0x7c, 0xca, 0x16,
  0x98, 0x3d, 0x14, 0x86, 0x9f, 0xdc, 0xd3, 0x83, 0x9c, 0x6b, 0x9c, 0x2c,
  0xc6, 0xe1, 0xad, 0xdc, 0x75, 0x1d, 0x19, 0x21, 0x9e, 0x23, 0x51, 0x62,
  0x01, 0x7a, 0xee, 0xbf, 0xc8, 0x7e, 0x5b, 0xf8, 0xe2, 0xe0, 0x9b, 0x69,
  0xa8, 0xca, 0x83, 0x73, 0x38, 0x5d, 0x22, 0x39, 0xc6, 0xf2, 0xaf, 0x92,
  0xeb, 0x29, 0x27, 0xf9, 0x39, 0x59, 0x41, 0x99, 0xc4, 0xc3, 0xa0, 0x19,
  0x21, 0x0f, 0xd0, 0x40, 0xd4, 0xef, 0xaa, 0x40, 0xb2, 0xdc, 0x81, 0x02,
  0x41, 0x00, 0xfa, 0x62, 0x7d, 0xaf, 0x64, 0x4b, 0x83, 0x1a, 0x14, 0x2b,
  0x86, 0xd1, 0x5a, 0x06, 0xa0, 0xf4, 0x59, 0x83, 0x6e, 0xff, 0x61, 0x79,
  0xbd, 0x8a, 0x1e, 0xac, 0xe3, 0x74, 0x31, 0x2c, 0x01, 0xb6, 0xaf, 0x42,
  0x90, 0xf1, 0x78, 0xc1, 0x7a, 0x29, 0x8e, 0x48, 0x7f, 0x92, 0x0c, 0xe2,
  0x1f, 0xd2, 0xbb, 0xf9, 0x60, 0xf2, 0xaf, 0x36, 0x5a, 0x51, 0x44, 0x3a,
  0xef, 0x83, 0x25, 0xb1, 0x12, 0x61, 0x02, 0x41, 0x00, 0xd1, 0x2a, 0xde,
  0x49, 0x08, 0x0f, 0xd2, 0xad, 0x5f, 0x2d, 0x78, 0x1e, 0x2a, 0xc3, 0xae,
  0x50, 0x20, 0x4f, 0x9d, 0x6a, 0x8b, 0x5c, 0x7b, 0x03, 0x81, 0xb7, 0x72,
  0x48, 0x24, 0x15, 0x88, 0x88, 0x2d, 0x7b, 0x67, 0xa1, 0xf7, 0x53, 0xfa,
  0x9f, 0xc3, 0xc9, 0x43, 0x15, 0x54, 0xe8, 0xb3, 0x55, 0x53, 0x97, 0x5c,
  0xbd, 0xe7, 0x41, 0xd7, 0x31, 0xc8, 0xea, 0x92, 0x92, 0x46, 0xd7, 0xc0,
  0xe5, 0x02, 0x40, 0x03, 0x81, 0xd9, 0xac, 0xd9, 0x44, 0xcd, 0x83, 0x52,
  0x01, 0x02, 0x14, 0x70, 0xa4, 0x63, 0x20, 0xc9, 0x18, 0x34, 0x37, 0xd3,
  0x8f, 0xb6, 0xfd, 0xf6, 0x4c, 0x09, 0xab, 0x98, 0xfc, 0xba, 0xd1, 0x6a,
  0x47, 0x0e, 0x6c, 0xb3, 0x7a, 0x52, 0x51, 0xbe, 0xb2, 0x79, 0x46, 0xfc,
  0x73, 0x36, 0x6a, 0xe7, 0x43, 0x28, 0xfe, 0x7d, 0x41, 0xcf, 0xa6, 0x0f,
  0xc4, 0x9b, 0x92, 0x44, 0xb6, 0xe4, 0x41, 0x02, 0x40, 0x46, 0x49, 0xd8,
  0x8e, 0xc4, 0x25, 0xc5, 0x0f, 0x3b, 0xa7, 0xa4, 0xf0, 0xc6, 0x40, 0x21,
  0xa8, 0x8d, 0x63, 0x13, 0xac, 0x05, 0x0e, 0xdb, 0xcb, 0xae, 0xe0, 0x7d,
  0x87, 0xde, 0x90, 0x59, 0xe4, 0x21, 0x1c, 0x92, 0x13, 0xac, 0x70, 0x4d,
  0x0d, 0x39, 0x16, 0xbd, 0xf3, 0x42, 0x28, 0x3c, 0x73, 0x54, 0xf6, 0xcd,
  0x54, 0x87, 0x8c, 0xe9, 0x8a, 0xb2, 0x50, 0x99, 0x56, 0x8c, 0x75, 0xde,
  0x3d, 0x02, 0x40, 0x69, 0x34, 0xa7, 0x0b, 0xf7, 0x9a, 0x01, 0x47, 0x07,
  0x53, 0xb1, 0xfb, 0x9e, 0xea, 0x0a, 0x85, 0x76, 0xd5, 0x94, 0x36, 0x88,
  0xbd, 0x96, 0x07, 0xfb, 0xc8, 0x0a, 0x32, 0xe9, 0x42, 0xbe, 0x65, 0x7e,
  0xd5, 0xa3, 0x1f, 0x44, 0x8b, 0xc7, 0x49, 0xcf, 0x2f, 0x04, 0x29, 0x07,
  0xef, 0xa0, 0x4e, 0x96, 0xcd, 0x9e, 0xa1, 0xd3, 0x87, 0x26, 0xc7, 0x4e,
  0x7c, 0x80, 0xdf, 0x34, 0x73, 0xf4, 0x2d
};
unsigned int example_key_DER_len = 607;
#endif
