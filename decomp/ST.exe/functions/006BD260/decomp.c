#include "../../pseudocode_runtime.h"


void FUN_006bd260(void)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  void *local_14;
  byte *puStack_10;
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
      /* ST_CALLSITE[006BD369]: CALL dword ptr [EDX + 0x14] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      while (DAT_00854fec = (**(code **)(*PTR_00854ee8->field_0044 + 0x14))
                                      (PTR_00854ee8->field_0044,0,PTR_00854ee8->field_0040,0,
                                       0x1000000,0), DAT_00854fec != 0) {
        if (DAT_00854fec == -0x7789fe3e) {
          FUN_006cec40((AnonShape_006CEC40_BB23E716 *)PTR_00854ee8);
        }
        else {
          if (((DAT_00854fec != -0x7789ff60) && (DAT_00854fec != -0x7789fe52)) ||
             (DAT_00854ed8 != 0)) break;
          /* ST_CALLSITE[006BD3A2]: CALL ESI */
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
      /* ST_CALLSITE[006BD2D0]: CALL dword ptr [ESI + 0x228] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      DAT_00854fec = (*(code *)g_int_00854FD4[0x8a])(PTR_00854ee8,g_int_00854FD4[0x8d]);
      if (DAT_00854fec == 0) {
        local_8 = 0;
        /* ST_CALLSITE[006BD2F3]: CALL dword ptr [EAX + 0x22c] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        DAT_00854fec = (*(code *)g_int_00854FD4[0x8b])(0,g_int_00854FD4[0x8d]);
        local_8 = 0xffffffff;
        /* ST_CALLSITE[006BD32F]: CALL dword ptr [EAX + 0x230] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
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
      PTR_00854f44 = (AnonShape_GLOBAL_00854F44_D3146D26 *)PTR_00854fdc[DAT_00854f60];
      *(uint *)PTR_00854f44 = *(uint *)PTR_00854f44 | 2;
      PTR_00854f44->field_0068 = 5;
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

