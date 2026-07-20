
void FUN_006bd260(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079d940;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *(undefined4 *)g_int_00854FD4[0x70] = 0;
  *(undefined4 *)(g_int_00854FD4[0x70] + 4) = 0;
  if (g_int_00854FD4[0x76] == 0) {
    if (g_int_00854FD4[0x8b] == 0) {
      DAT_00854ed8 = 0;
      while (DAT_00854fec = (**(code **)(*PTR_00854ee8->field_0044 + 0x14))
                                      (PTR_00854ee8->field_0044,0,PTR_00854ee8->field_0040,0,
                                       0x1000000,0), DAT_00854fec != 0) {
        if (DAT_00854fec == -0x7789fe3e) {
          FUN_006cec40((AnonShape_006CEC40_BB23E716 *)PTR_00854ee8);
        }
        else {
          if (((DAT_00854fec != -0x7789ff60) && (DAT_00854fec != -0x7789fe52)) ||
             (DAT_00854ed8 != 0)) break;
          Sleep(2);
        }
        DAT_00854ed8 = DAT_00854ed8 + 1;
        if (1 < DAT_00854ed8) break;
      }
      if ((DAT_00854fec == -0x7789ff60) || (DAT_00854fec == -0x7789fe52)) {
        DAT_00854fec = 0;
      }
    }
    else {
      DAT_00854fec = (*(code *)g_int_00854FD4[0x8a])(PTR_00854ee8,g_int_00854FD4[0x8d]);
      if (DAT_00854fec == 0) {
        local_8 = 0;
        DAT_00854fec = (*(code *)g_int_00854FD4[0x8b])(0,g_int_00854FD4[0x8d]);
        local_8 = 0xffffffff;
        (*(code *)g_int_00854FD4[0x8c])(g_int_00854FD4[0x8d]);
      }
    }
  }
  if (DAT_00854fe4 == 0) {
    DAT_00854fe4 = DAT_00854fec;
  }
  DAT_00854f60 = 0;
  if (0 < DAT_00854fc8) {
    do {
      DAT_00854f44 = *(uint **)(DAT_00854fdc + DAT_00854f60 * 4);
      *DAT_00854f44 = *DAT_00854f44 | 2;
      DAT_00854f44[0x1a] = 5;
      DAT_00854f60 = DAT_00854f60 + 1;
    } while (DAT_00854f60 < DAT_00854fc8);
  }
  if (DAT_00854f94 != 0) {
    uVar1 = ((int)(g_int_00854FD4[0x7d] + 7 + (g_int_00854FD4[0x7d] + 7 >> 0x1f & 7U)) >> 3) *
            g_int_00854FD4[0x7e];
    puVar3 = (undefined4 *)g_int_00854FD4[0x84];
    for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar3 = 0xff;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    uVar1 = ((int)(g_int_00854FD4[0x7d] + 7 + (g_int_00854FD4[0x7d] + 7 >> 0x1f & 7U)) >> 3) *
            g_int_00854FD4[0x7e];
    puVar3 = (undefined4 *)g_int_00854FD4[0x88];
    for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar3 = 0xff;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  ExceptionList = local_14;
  return;
}

