#include "../../pseudocode_runtime.h"


int FUN_00755bc0(AnonShape_00755BC0_D59C64DD *param_1,int param_2)

{
  byte *puVar1;
  uint *puVar2;
  AnonNested_AnonShape_00755BC0_D59C64DD_000C_BB505EE4 *pAVar3;
  int iVar5_mg0;
  int iVar5;
  uint uVar6;
  RecoveredRecord_00755D40_97E6B3C8 *pRVar7;
  int iVar4;
  DWORD DVar8;
  uint uVar9;
  byte *puVar10;

  *(uint *)(param_1->field_0008 + 8) = *(uint *)(param_1->field_0008 + 8) | 0x10;
  if (param_2 != -1) {
    puVar10 = (byte *)(param_1->field_000C->field_001C);
    do {
      param_1->field_000C->field_001C = (undefined4 *)((int)param_1->field_000C->field_001C + 1);
      iVar5_mg0 = (int)FUN_00753b80((RecoveredRecordView_00750F20_49A60217 *)param_1,param_2,
                                    (int)param_1->field_000C->field_001C);
      *(undefined4 *)(&param_1->field_000C[2].field_0x4 + (int)param_1->field_000C->field_001C * 8)
           = 0xffffffff;
      param_2 = STField<int>(iVar5_mg0,0x4);
    } while (param_2 != -1);
    *(undefined4 *)(&param_1->field_000C[2].field_0x4 + (int)param_1->field_000C->field_001C * 8) =
         0;

    iVar5 = FUN_00757530((AnonShape_00757530_EEED7D69 *)param_1,1,(undefined4 *)(iVar5_mg0 + 0x10));
    if (iVar5 == 0) {
      return -2;
    }
    puVar2 = param_1->field_000C->field_001C;
    param_1->field_000C->field_001C = puVar10;

    uVar6 = FUN_00755da0((RecoveredRecordView_00753C80_637B4E8C *)param_1,param_1->field_001C);
    if (uVar6 != 0) {
      return uVar6;
    }
    param_1->field_000C->field_001C = puVar2;
  }
  while( true ) {
    puVar10 = (byte *)(param_1->field_000C->field_001C);
    pRVar7 = FUN_00753b80((RecoveredRecordView_00750F20_49A60217 *)param_1,
                          *(undefined4 *)(&param_1->field_000C[2].field_0x0 + (int)puVar10 * 8),
                          (int)puVar10);
    FUN_00755d40((RecoveredRecordView_00753C80_637B4E8C *)param_1,pRVar7,
                 *(int *)(&param_1->field_000C[2].field_0x4 +
                         (int)param_1->field_000C->field_001C * 8));
    puVar10 = (byte *)(param_1->field_000C->field_001C);
    if ((puVar10 == nullptr) && (pRVar7->field_0008 == 0)) {
      pAVar3 = param_1->field_000C;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      puVar10 = (byte *)(*(int *)&pAVar3[1].field_0x4 + *(int *)(param_1->field_0008 + 0x34));
      if (puVar10[1] != -1) {
        pAVar3->field_001C = (undefined4 *)((int)pAVar3->field_001C + 1);
        pRVar7 = FUN_00753b80((RecoveredRecordView_00750F20_49A60217 *)param_1,puVar10[1],
                              (int)param_1->field_000C->field_001C);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        uVar9 = (uint)*(short *)(param_1->field_0008 + 0x16);
        memmove(puVar10, pRVar7, uVar9); /* compiler REP MOVS byte copy */
        puVar1 = &param_1->field_000C[1].field_0xa;
        *(short *)puVar1 = *(short *)puVar1 + -1;

        DVar8 = FUN_00757670((AnonShape_00757670_86D3B9A7 *)param_1,param_1->field_0010);
        if (DVar8 != 0) {
          return DVar8;
        }
        *(undefined4 *)&param_1->field_000C->field_0x14 = 1;
      }
      return 0;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(short *)(param_1->field_0008 + 0x16) + -0x10 >> 1 <= (int)pRVar7->field_0008) {
      return 0;
    }
    if ((int)puVar10 < 1) break;

    iVar4 = FUN_00755e10((RecoveredRecordView_00755E10_DA2F2616 *)param_1,(int)pRVar7->field_0008,
                         *(undefined4 *)(&param_1->field_000C[2].field_0x0 + (int)puVar10 * 8));
    if (iVar4 < 0) {
      return iVar4;
    }
    if (iVar4 < 1) {
      return 0;
    }
  }
  return 0;
}

