#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 006CEF60 -> 006D86E0 @ 006CF83E */

void FUN_006d86e0(RecoveredGlobalRecordView_00854F00 *param_1,int param_2,
                 RecoveredGlobalRecordView_00854F68 *param_3,int param_4,int param_5,int param_6,
                 uint param_7,byte param_8,char param_9)

{
  short sVar1;
  byte *puVar2;
  byte bVar3;
  byte uVar4;
  RecoveredGlobalRecordView_00854F68 *pRVar5;
  RecoveredGlobalRecordView_00854F00 RVar6;
  RecoveredGlobalRecordView_00854F00 RVar7;
  RecoveredGlobalRecordView_00854F68 *pRVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  uint local_c;
  byte local_8;

  if ((param_6 < 1) || ((int)param_7 < 1)) {
    return;
  }
  local_8 = (param_8 - 1) + param_9;
  if (param_5 < 1) {
    pRVar5 = (RecoveredGlobalRecordView_00854F68 *)
             (&param_3[1].field_0002 + (param_3->field_000D >> 1 & 0xe));
  }
  else {
    pRVar5 = (RecoveredGlobalRecordView_00854F68 *)
             FUN_006cfe10((RecoveredRecord_006CFE10_B59F6D2D *)param_3,param_5);
  }
  sVar1 = param_3->field_0012;
  local_c = param_7;
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_006d8738:
  param_7 = (uint)*(byte *)pRVar5;
  pRVar5 = (RecoveredGlobalRecordView_00854F68 *)&pRVar5->field_0001;
  iVar11 = param_4;
  if (param_7 != 0) {
    while( true ) {
      while ((param_7 & 0x80) == 0) {
        uVar10 = param_7 & 0x7f;
        if (iVar11 < (int)uVar10) goto LAB_006d8786;
        bVar9 = *(byte *)pRVar5;
        pRVar5 = (RecoveredGlobalRecordView_00854F68 *)&pRVar5->field_0001;
        iVar11 = iVar11 - uVar10;
        param_7 = (uint)bVar9;
      }
      uVar10 = param_7 & 0x3f;
      if (iVar11 < (int)uVar10) break;
      if ((param_7 & 0x40) == 0) {
        param_7 = (uint)(byte)(&pRVar5->field_0x0)[uVar10];
        pRVar5 = (RecoveredGlobalRecordView_00854F68 *)(&pRVar5->field_0x0 + uVar10 + 1);
        iVar11 = iVar11 - uVar10;
      }
      else {
        param_7 = (uint)pRVar5->field_0001;
        pRVar5 = (RecoveredGlobalRecordView_00854F68 *)&pRVar5->field_0002;
        iVar11 = iVar11 - uVar10;
      }
    }
LAB_006d8786:
    auto param_9_after_write = (char)uVar10 - (char)iVar11; /* compiler stack-slot lifetime split */
    auto param_3_after_write = pRVar5; /* compiler stack-slot lifetime split */
    if (((byte)param_7 & 0xc0) == 0x80) {
      param_3_after_write = (RecoveredGlobalRecordView_00854F68 *)(&pRVar5->field_0x0 + iVar11);
    }
    bVar9 = (byte)param_7 & 0xc0;
    if ((param_7 & 0x80) == 0) {
      bVar9 = 0;
    }
    uVar10 = (uint)(byte)(bVar9 + param_9_after_write);
    iVar11 = param_6;
    do {
      pRVar5 = param_3_after_write;
      if ((uVar10 & 0x80) == 0) {
        if (iVar11 < (int)uVar10) goto cf_common_join_006D88D7;
        iVar11 = iVar11 - uVar10;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (RecoveredGlobalRecordView_00854F00 *)((int)&param_1->field_0x0 + uVar10);
      }
      else if ((uVar10 & 0x40) == 0) {
        uVar10 = uVar10 & 0x3f;
        if (iVar11 < (int)uVar10) goto cf_common_join_006D88D7;
        iVar11 = iVar11 - uVar10;
        if ((*(byte *)param_3_after_write < param_8) || (local_8 < *(byte *)param_3_after_write)) {
          if (3 < uVar10) {
            if (((uint)param_1 & 1) != 0) {
              uVar10 = uVar10 - 1;
              *(byte *)param_1 = *(byte *)param_3_after_write;
              param_3_after_write = (RecoveredGlobalRecordView_00854F68 *)&param_3_after_write->field_0001;
              param_1 = (RecoveredGlobalRecordView_00854F00 *)&param_1->field_0001;
            }
            if (((uint)param_1 & 2) != 0) {
              bVar9 = param_3_after_write->field_0001;
              uVar10 = uVar10 - 2;
              param_1->field_0x0 = param_3_after_write->field_0x0;
              param_1->field_0001 = bVar9;
              param_3_after_write = (RecoveredGlobalRecordView_00854F68 *)&param_3_after_write->field_0002;
              param_1 = (RecoveredGlobalRecordView_00854F00 *)&param_1->field_0002;
            }
            while (3 < (int)uVar10) {
              puVar2 = &param_3_after_write->field_0x0;
              bVar9 = param_3_after_write->field_0001;
              bVar3 = param_3_after_write->field_0002;
              uVar4 = param_3_after_write->field_0x3;
              param_3_after_write = (RecoveredGlobalRecordView_00854F68 *)&param_3_after_write->field_0x4;
              param_1->field_0x0 = *puVar2;
              param_1->field_0001 = bVar9;
              param_1->field_0002 = bVar3;
              param_1->field_0x3 = uVar4;
              param_1 = param_1 + 1;
              uVar10 = uVar10 - 4;
            }
            if (uVar10 == 0) goto LAB_006d88c6;
          }
          if ((char)uVar10 != '\x01') {
            if ((char)uVar10 != '\x02') {
              param_1->field_0002 = param_3_after_write->field_0002;
            }
            param_1->field_0001 = param_3_after_write->field_0001;
          }
          bVar9 = *(byte *)param_3_after_write;
          param_3_after_write = (RecoveredGlobalRecordView_00854F68 *)((int)&param_3_after_write->field_0x0 + uVar10);
          *(byte *)param_1 = bVar9;
          param_1 = (RecoveredGlobalRecordView_00854F00 *)((int)&param_1->field_0x0 + uVar10);
        }
        else {
          param_3_after_write = (RecoveredGlobalRecordView_00854F68 *)((int)&param_3_after_write->field_0x0 + uVar10);
          param_1 = (RecoveredGlobalRecordView_00854F00 *)((int)&param_1->field_0x0 + uVar10);
        }
      }
      else {
        bVar9 = *(byte *)param_3_after_write;
        uVar10 = uVar10 & 0xffffff3f;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        STPiece<0,2>(RVar6) = CONCAT11(bVar9,bVar9);
        STPiece<2,2>(RVar6) = 0;
        if (iVar11 < (int)uVar10) goto cf_common_join_006D88D7;
        iVar11 = iVar11 - uVar10;
        param_3_after_write = (RecoveredGlobalRecordView_00854F68 *)&param_3_after_write->field_0001;
        if (3 < uVar10) {
          if (((uint)param_1 & 1) != 0) {
            *(byte *)param_1 = bVar9;
            param_1 = (RecoveredGlobalRecordView_00854F00 *)&param_1->field_0001;
            uVar10 = uVar10 - 1;
          }
          if (((uint)param_1 & 2) != 0) {
            *(ushort *)param_1 = STPiece<0,2>(RVar6);
            param_1 = (RecoveredGlobalRecordView_00854F00 *)&param_1->field_0002;
            uVar10 = uVar10 - 2;
          }
          STPiece<2,2>(RVar6) = STPiece<0,2>(RVar6);
          while (3 < (int)uVar10) {
            *param_1 = RVar6;
            param_1 = param_1 + 1;
            uVar10 = uVar10 - 4;
          }
          if (uVar10 == 0) goto LAB_006d88c6;
        }
        bVar9 = STPiece<0,1>(RVar6);
        if ((char)uVar10 != '\x01') {
          if ((char)uVar10 != '\x02') {
            param_1->field_0002 = bVar9;
          }
          param_1->field_0001 = bVar9;
        }
        *(byte *)param_1 = bVar9;
        param_1 = (RecoveredGlobalRecordView_00854F00 *)((int)&param_1->field_0x0 + uVar10);
      }
LAB_006d88c6:
      uVar10 = 0;
      pRVar5 = param_3_after_write;
      if (iVar11 < 1) goto cf_common_join_006D88D7;
      uVar10 = (uint)*(byte *)param_3_after_write;
      param_3_after_write = (RecoveredGlobalRecordView_00854F68 *)&param_3_after_write->field_0001;
      param_7 = uVar10;
    } while( true );
  }
  param_1 = (RecoveredGlobalRecordView_00854F00 *)(&param_1->field_0x0 + param_2);
  goto LAB_006d8a3c;
cf_common_join_006D88D7:
  if (0 < iVar11) {
    uVar10 = uVar10 - iVar11;
    if ((param_7 & 0x80) == 0) {
      param_1 = (RecoveredGlobalRecordView_00854F00 *)((int)&param_1->field_0x0 + iVar11);
    }
    else if ((param_7 & 0x40) == 0) {
      if ((*(byte *)pRVar5 < param_8) || (local_8 < *(byte *)pRVar5)) {
        if (3 < iVar11) {
          if (((uint)param_1 & 1) != 0) {
            *(byte *)param_1 = *(byte *)pRVar5;
            pRVar5 = (RecoveredGlobalRecordView_00854F68 *)&pRVar5->field_0001;
            param_1 = (RecoveredGlobalRecordView_00854F00 *)&param_1->field_0001;
            iVar11 = iVar11 + -1;
          }
          if (((uint)param_1 & 2) != 0) {
            bVar9 = pRVar5->field_0001;
            param_1->field_0x0 = pRVar5->field_0x0;
            param_1->field_0001 = bVar9;
            pRVar5 = (RecoveredGlobalRecordView_00854F68 *)&pRVar5->field_0002;
            param_1 = (RecoveredGlobalRecordView_00854F00 *)&param_1->field_0002;
            iVar11 = iVar11 + -2;
          }
          while (3 < iVar11) {
            puVar2 = &pRVar5->field_0x0;
            bVar9 = pRVar5->field_0001;
            bVar3 = pRVar5->field_0002;
            uVar4 = pRVar5->field_0x3;
            pRVar5 = (RecoveredGlobalRecordView_00854F68 *)&pRVar5->field_0x4;
            param_1->field_0x0 = *puVar2;
            param_1->field_0001 = bVar9;
            param_1->field_0002 = bVar3;
            param_1->field_0x3 = uVar4;
            param_1 = param_1 + 1;
            iVar11 = iVar11 + -4;
          }
          if (iVar11 == 0) goto LAB_006d89c6;
        }
        if ((char)iVar11 != '\x01') {
          if ((char)iVar11 != '\x02') {
            param_1->field_0002 = pRVar5->field_0002;
          }
          param_1->field_0001 = pRVar5->field_0001;
        }
        *(byte *)param_1 = *(byte *)pRVar5;
        pRVar5 = (RecoveredGlobalRecordView_00854F68 *)((int)&pRVar5->field_0x0 + iVar11);
        param_1 = (RecoveredGlobalRecordView_00854F00 *)((int)&param_1->field_0x0 + iVar11);
      }
      else {
        pRVar5 = (RecoveredGlobalRecordView_00854F68 *)((int)&pRVar5->field_0x0 + iVar11);
        param_1 = (RecoveredGlobalRecordView_00854F00 *)((int)&param_1->field_0x0 + iVar11);
      }
    }
    else {
      bVar9 = *(byte *)pRVar5;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      STPiece<0,2>(RVar7) = CONCAT11(bVar9,bVar9);
      STPiece<2,2>(RVar7) = 0;
      pRVar5 = (RecoveredGlobalRecordView_00854F68 *)&pRVar5->field_0001;
      if (3 < iVar11) {
        if (((uint)param_1 & 1) != 0) {
          *(byte *)param_1 = bVar9;
          param_1 = (RecoveredGlobalRecordView_00854F00 *)&param_1->field_0001;
          iVar11 = iVar11 + -1;
        }
        if (((uint)param_1 & 2) != 0) {
          *(ushort *)param_1 = STPiece<0,2>(RVar7);
          param_1 = (RecoveredGlobalRecordView_00854F00 *)&param_1->field_0002;
          iVar11 = iVar11 + -2;
        }
        STPiece<2,2>(RVar7) = STPiece<0,2>(RVar7);
        while (3 < iVar11) {
          *param_1 = RVar7;
          param_1 = param_1 + 1;
          iVar11 = iVar11 + -4;
        }
        if (iVar11 == 0) goto LAB_006d89c6;
      }
      bVar9 = STPiece<0,1>(RVar7);
      if ((char)iVar11 != '\x01') {
        if ((char)iVar11 != '\x02') {
          param_1->field_0002 = bVar9;
        }
        param_1->field_0001 = bVar9;
      }
      *(byte *)param_1 = bVar9;
      param_1 = (RecoveredGlobalRecordView_00854F00 *)((int)&param_1->field_0x0 + iVar11);
    }
  }
LAB_006d89c6:
  iVar11 = (sVar1 - param_4) - param_6;
  bVar9 = (byte)param_7;
  if ((int)uVar10 < iVar11) {
    do {
      iVar11 = iVar11 - uVar10;
      pRVar8 = pRVar5;
      if (((byte)param_7 & 0xc0) == 0x80) {
        pRVar8 = (RecoveredGlobalRecordView_00854F68 *)((int)&pRVar5->field_0x0 + uVar10);
      }
      bVar9 = *(byte *)pRVar8;
      param_7 = (uint)bVar9;
      pRVar5 = (RecoveredGlobalRecordView_00854F68 *)&pRVar8->field_0001;
      uVar10 = param_7;
      if (((bVar9 & 0x80) != 0) && (uVar10 = param_7 & 0x3f, (bVar9 & 0x40) != 0)) {
        pRVar5 = (RecoveredGlobalRecordView_00854F68 *)&pRVar8->field_0002;
      }
    } while ((int)uVar10 < iVar11);
  }
  if ((bVar9 & 0xc0) == 0x80) {
    pRVar5 = (RecoveredGlobalRecordView_00854F68 *)(&pRVar5->field_0x0 + iVar11);
  }
  param_1 = (RecoveredGlobalRecordView_00854F00 *)((int)param_1 + (param_2 - param_6));
LAB_006d8a3c:
  local_c = local_c - 1;
  if (local_c == 0) {
    return;
  }
  goto LAB_006d8738;
}

