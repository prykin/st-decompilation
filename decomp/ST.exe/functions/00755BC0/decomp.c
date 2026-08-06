#include "../../pseudocode_runtime.h"


int FUN_00755bc0(AnonShape_00755BC0_D59C64DD *param_1,int param_2)

{
  short *psVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar4;
  byte *puVar8;
  DWORD DVar9;
  uint uVar10;
  byte *puVar11;

  *(uint *)(param_1->field_0008 + 8) = *(uint *)(param_1->field_0008 + 8) | 0x10;
  if (param_2 != -1) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar2 = *(undefined4 *)(param_1->field_000C + 0x1c);
    do {
      *(int *)(param_1->field_000C + 0x1c) = *(int *)(param_1->field_000C + 0x1c) + 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar5 = FUN_00753b80((AnonShape_00750F20_F8C16F98 *)param_1,param_2,
                           *(int *)(param_1->field_000C + 0x1c));
      *(undefined4 *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) =
           0xffffffff;
      param_2 = *(int *)(iVar5 + 4);
    } while (param_2 != -1);
    *(undefined4 *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) = 0;
    uVar6 = FUN_00757530((AnonShape_00757530_EEED7D69 *)param_1,1,(undefined4 *)(iVar5 + 0x10));
    if (uVar6 == 0) {
      return -2;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar3 = *(undefined4 *)(param_1->field_000C + 0x1c);
    *(undefined4 *)(param_1->field_000C + 0x1c) = uVar2;
    uVar6 = FUN_00755da0((uint)param_1,param_1->field_001C);
    if (uVar6 != 0) {
      return uVar6;
    }
    *(undefined4 *)(param_1->field_000C + 0x1c) = uVar3;
  }
  while( true ) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar5 = *(int *)(param_1->field_000C + 0x1c);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar7 = FUN_00753b80((AnonShape_00750F20_F8C16F98 *)param_1,
                         *(undefined4 *)(param_1->field_000C + 0x40 + iVar5 * 8),iVar5);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    FUN_00755d40((AnonShape_00755D40_9BC6D2DA *)param_1,iVar7,
                 *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar5 = *(int *)(param_1->field_000C + 0x1c);
    if ((iVar5 == 0) && (*(short *)(iVar7 + 8) == 0)) {
      iVar5 = param_1->field_000C;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      puVar11 = (byte *)(*(int *)(iVar5 + 0x24) + *(int *)(param_1->field_0008 + 0x34));
      if (puVar11[1] != -1) {
        *(int *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x1c) + 1;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        puVar8 = (byte *)
                 FUN_00753b80((AnonShape_00750F20_F8C16F98 *)param_1,puVar11[1],
                              *(int *)(param_1->field_000C + 0x1c));
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        uVar10 = (uint)*(short *)(param_1->field_0008 + 0x16);
        memmove(puVar11, puVar8, uVar10); /* compiler REP MOVS byte copy */
        psVar1 = (short *)(param_1->field_000C + 0x2a);
        *psVar1 = *psVar1 + -1;
        DVar9 = FUN_00757670((AnonShape_00757670_86D3B9A7 *)param_1,param_1->field_0010);
        if (DVar9 != 0) {
          return DVar9;
        }
        *(undefined4 *)(param_1->field_000C + 0x14) = 1;
      }
      return 0;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(short *)(param_1->field_0008 + 0x16) + -0x10 >> 1 <= (int)*(short *)(iVar7 + 8)) {
      return 0;
    }
    if (iVar5 < 1) break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar4 = FUN_00755e10((AnonShape_00755E10_BD685653 *)param_1,(int)*(short *)(iVar7 + 8),
                         *(undefined4 *)(param_1->field_000C + 0x40 + iVar5 * 8));
    if (iVar4 < 0) {
      return iVar4;
    }
    if (iVar4 < 1) {
      return 0;
    }
  }
  return 0;
}

