
void FUN_004e82b0(void)

{
  BuildBitSet128(g_bitset_00800F30,0x42,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x4a,0x4b,0x4c,0x4d,0x67,
                 0xffffffff);
  BuildBitSet128(g_bitset_00800F40,0x4e,0x4f,0x50,0x51,0x52,0x53,0x54,0x55,0x56,0x57,0x58,0x59,0x66,
                 0x68,0xffffffff);
  BuildBitSet128(g_bitset_00800F50,0x5a,0x5b,0x5c,0x5d,0x5e,0x5f,0x60,0x61,0x62,99,100,0x65,0x69,
                 0xffffffff);
  g_bitset_00801330[3] = g_bitset_00800F30[3] & 0xffffff7f;
  g_bitset_00801330[0] = g_bitset_00800F30[0];
  g_bitset_00801330[1] = g_bitset_00800F30[1];
  g_bitset_00801340[3] = g_bitset_00800F40[3] & 0xfffffeff;
  g_bitset_00801330[2] = g_bitset_00800F30[2];
  g_bitset_00801340[0] = g_bitset_00800F40[0];
  g_bitset_00801340[1] = g_bitset_00800F40[1];
  g_bitset_00801340[2] = g_bitset_00800F40[2];
  g_bitset_00801350[3] = g_bitset_00800F50[3] & 0xfffffdff;
  g_bitset_00801350[0] = g_bitset_00800F50[0];
  g_bitset_00801350[1] = g_bitset_00800F50[1];
  g_bitset_00801350[2] = g_bitset_00800F50[2];
  BuildBitSet128(g_bitset_008013F0,0x4e,0x4f,0x50,0x51,0x52,0x57,0x58,0x66,0xffffffff);
  BuildBitSet128(g_bitset_00801400,0x42,0x43,0x44,0x45,0x46,0x4b,0x4c,0xffffffff);
  BuildBitSet128(g_bitset_00801410,0xffffffff);
  BuildBitSet128(g_bitset_008013B0,0x56,0xffffffff);
  BuildBitSet128(g_bitset_008013C0,0x4a,0xffffffff);
  BuildBitSet128(g_bitset_008013D0,0xffffffff);
  BuildBitSet128(g_bitset_00800FB0,0,1,2,3,4,5,7,8,9,10,0xb,0x1d,0x1e,0x20,0xc,0xd,0xe,0xf,0x10,0x11
                 ,0x12,0x13,0x1f,0x3d,0xffffffff);
  BuildBitSet128(g_bitset_00800FC0,0,1,2,3,4,5,7,8,9,10,0xb,0x1d,0x1e,0x20,0x14,0x15,0x16,0x17,0x18,
                 0x19,0x1a,0x1b,0x1c,0xffffffff);
  BuildBitSet128(g_bitset_00800FD0,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,0x29,0x2a,0x2b,0x2c,0x2d,
                 0x2e,0x2f,0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x3a,0x3b,0x3c,0x3e,
                 0x3f,0x40,0x41,0xffffffff);
  BuildBitSet128(g_bitset_00801380,0x14,0x15,0x16,0x17,0x18,0x19,0x1a,0x1b,0x1c,0xffffffff);
  BuildBitSet128(g_bitset_00801390,0xc,0xd,0xe,0xf,0x10,0x11,0x12,0x13,0x1f,0xffffffff);
  BuildBitSet128(g_bitset_008013A0,0xffffffff);
  BuildBitSet128(g_bitset_00801420,0x14,0xc,0x18,0xd,0x39,0x34,0xffffffff);
  BuildBitSet128(g_bitset_008013E0,0x10,0x19,0x1f,0x15,0x33,0x35,0x37,0x38,0x3f,0x36,0xffffffff);
  BuildBitSet128(g_bitset_00800EE0,0x1a,0xb,0x1b,0xf,0x3d,0x3b,0xffffffff);
  BuildBitSet128(g_bitset_00801490,0,3,0xe,0x17,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,0x2a,
                 0xffffffff);
  BuildBitSet128(g_bitset_00800F20,2,0x16,1,0x29,0x30,0xffffffff);
  BuildBitSet128(g_bitset_00800EF0,0x20,0x31,0x2d,0xffffffff);
  BuildBitSet128(g_bitset_00801430,7,0x1d,0x1e,8,9,0x2c,0x2e,0x2f,0x32,0xffffffff);
  BuildBitSet128(g_bitset_00801440,5,0x11,0x12,0x13,0x1c,0x3e,0x40,0x3a,0x41,0x3c,0xffffffff);
  BuildBitSet128(g_bitset_00800F60,10,4,0x2b,0xffffffff);
  BuildBitSet128(g_bitset_00801000,0x49,0x55,0x5b,0xffffffff);
  BuildBitSet128(g_bitset_00801010,0x4d,0x59,0x5a,0xffffffff);
  BuildBitSet128(g_bitset_00800F00,0x4b,0x51,0x4e,0x42,0x4f,0x43,0x44,0x50,0x5f,0x60,0x61,0xffffffff
                );
  BuildBitSet128(g_bitset_00801370,0x45,0x47,0x53,0x52,0x46,0x62,99,0x65,0xffffffff);
  BuildBitSet128(g_bitset_00800FA0,0x48,0x54,0x5c,0x5e,0xffffffff);
  BuildBitSet128(g_bitset_00800FF0,0x58,0x57,0x66,0x4c,0x5d,100,0xffffffff);
  BuildBitSet128(g_bitset_00801460,0x4a,0x56,0xffffffff);
  BuildBitSet128(g_bitset_00800FE0,0x67,0x68,0x69,0xffffffff);
  g_bitset_00801450[0] = g_bitset_00801010[0] | g_bitset_00801000[0] | g_bitset_00800FA0[0];
  g_bitset_00801450[2] = g_bitset_00800FA0[2] | g_bitset_00801010[2] | g_bitset_00801000[2];
  g_bitset_00801450[1] = g_bitset_00800FA0[1] | g_bitset_00801010[1] | g_bitset_00801000[1];
  g_bitset_00801450[3] = g_bitset_00800FA0[3] | g_bitset_00801010[3] | g_bitset_00801000[3];
  g_bitset_00800F10[0] = g_bitset_00800FF0[0] | g_bitset_00801370[0] | g_bitset_00800FE0[0];
  g_bitset_00800F10[2] = g_bitset_00800FE0[2] | g_bitset_00800FF0[2] | g_bitset_00801370[2];
  g_bitset_00801480[0] = g_bitset_00800F00[0];
  g_bitset_00800F10[3] = g_bitset_00800FE0[3] | g_bitset_00800FF0[3] | g_bitset_00801370[3];
  g_bitset_00801480[1] = g_bitset_00800F00[1];
  g_bitset_00801480[3] = g_bitset_00800F00[3];
  g_bitset_00800F10[1] = g_bitset_00800FE0[1] | g_bitset_00800FF0[1] | g_bitset_00801370[1];
  g_bitset_00801480[2] = g_bitset_00800F00[2];
  g_bitset_008014A0[0] = g_bitset_00800F20[0] | g_bitset_00801490[0] | g_bitset_00800F60[0];
  g_bitset_008014A0[2] = g_bitset_00800F60[2] | g_bitset_00800F20[2] | g_bitset_00801490[2];
  g_bitset_008014A0[1] = g_bitset_00800F60[1] | g_bitset_00800F20[1] | g_bitset_00801490[1];
  g_bitset_008014A0[3] = g_bitset_00800F60[3] | g_bitset_00800F20[3] | g_bitset_00801490[3];
  g_bitset_00800F80[0] = g_bitset_00801430[0] | g_bitset_00800EF0[0];
  g_bitset_00800F80[1] = g_bitset_00801430[1] | g_bitset_00800EF0[1];
  g_bitset_00800F80[2] = g_bitset_00801430[2] | g_bitset_00800EF0[2];
  g_bitset_00800F80[3] = g_bitset_00801430[3] | g_bitset_00800EF0[3];
  g_bitset_00800F90[0] = g_bitset_008013E0[0] | g_bitset_00801420[0];
  g_bitset_00800F90[1] = g_bitset_008013E0[1] | g_bitset_00801420[1];
  g_bitset_00800F90[2] = g_bitset_008013E0[2] | g_bitset_00801420[2];
  g_bitset_00800F90[3] = g_bitset_008013E0[3] | g_bitset_00801420[3];
  g_bitset_00801360[3] = g_bitset_00801440[3] | g_bitset_00800EE0[3];
  g_bitset_00801360[0] = g_bitset_00801440[0] | g_bitset_00800EE0[0];
  g_bitset_00801360[1] = g_bitset_00801440[1] | g_bitset_00800EE0[1];
  g_bitset_00801360[2] = g_bitset_00801440[2] | g_bitset_00800EE0[2];
  return;
}

