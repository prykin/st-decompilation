#include "../../pseudocode_runtime.h"


void __cdecl
FUN_00575640(RecoveredRecord_00575640_E6D414E2 *param_1,undefined4 *param_2,short *param_3)

{
  uint uVar1;
  RecoveredRecord_00575640_E6D414E2 *pRVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  short *psVar8;
  uint uVar9;
  byte *puVar10;
  int iVar11;
  int iVar12;
  int local_1c;
  RecoveredRecord_00575640_E6D414E2 *local_18;
  int local_14;
  uint local_8;
  RecoveredRecord_00575640_E6D414E2 *psVar9;

  pRVar2 = param_1;
  iVar4 = (int)*(short *)param_1 * (int)*(short *)&param_1->field_0x2;
  uVar9 = iVar4 * 10;
  local_1c = 0;
  puVar10 = (byte *)(param_2);
  memset(puVar10, 0, uVar9); /* compiler bulk-zero initialization */
  if (0 < param_1->field_0455) {
    local_18 = param_1 + 1;
    do {
      iVar12 = *(int *)local_18;
      if (((iVar12 != 0) && (STField<short>(iVar12,0x8) != 0)) &&
         ((STField<byte>(iVar12,0x4F) & 0x40) == 0)) {
        uVar7 = 0x8000;
        local_8 = 8;
        uint param_1_after_write = 0x80; /* compiler stack-slot lifetime split */
        local_14 = 0;
        psVar8 = (short *)((int)param_2 +
                          ((int)STField<short>(iVar12,0x6) * (int)*(short *)pRVar2 +
                           (STField<short>(iVar12,0x8) + -1) * iVar4 + (int)STField<short>(iVar12,0x4)) * 2);
        if (STField<char>(iVar12,0x48) != '\0') {
          do {
            uVar1 = STField<uint>(iVar12,0x2C);
            if ((local_8 & uVar1) != 0) {
              if (((uint)param_1_after_write & uVar1) == 0) {
                sVar3 = (-(ushort)((uVar1 & uVar7) != 0) & 0x3fff) + 0xbfff;
              }
              else {
                sVar3 = -1;
              }
              *psVar8 = sVar3;
            }
            uVar1 = STField<uint>(iVar12,0x30);
            if ((local_8 & uVar1) != 0) {
              if (((uint)param_1_after_write & uVar1) == 0) {
                sVar3 = (-(ushort)((uVar1 & uVar7) != 0) & 0x3fff) + 0xbfff;
              }
              else {
                sVar3 = -1;
              }
              psVar8[1] = sVar3;
            }
            uVar1 = STField<uint>(iVar12,0x34);
            if ((local_8 & uVar1) != 0) {
              if (((uint)param_1_after_write & uVar1) == 0) {
                sVar3 = (-(ushort)((uVar1 & uVar7) != 0) & 0x3fff) + 0xbfff;
              }
              else {
                sVar3 = -1;
              }
              psVar8[*(short *)pRVar2] = sVar3;
            }
            uVar1 = STField<uint>(iVar12,0x38);
            if ((local_8 & uVar1) != 0) {
              if (((uint)param_1_after_write & uVar1) == 0) {
                sVar3 = (-(ushort)((uVar1 & uVar7) != 0) & 0x3fff) + 0xbfff;
              }
              else {
                sVar3 = -1;
              }
              psVar8[*(short *)pRVar2 + 1] = sVar3;
            }
            local_14 = local_14 + 1;
            psVar8 = psVar8 + -iVar4;
            param_1_after_write = ((int)param_1_after_write >> 1);
            local_8 = (int)local_8 >> 1;
            uVar7 = (int)uVar7 >> 1;
          } while (local_14 < (int)(uint)STField<byte>(iVar12,0x48));
        }
      }
      local_1c = local_1c + 1;
      local_18 = (RecoveredRecord_00575640_E6D414E2 *)&local_18->field_0x4;
    } while (local_1c < pRVar2->field_0455);
  }
  if (param_3 != nullptr) {

    RecoveredRecord_00575640_E6D414E2 * param_1_after_write_2 = Library::DKW::LIB::MemAlloc(uVar9); /* compiler stack-slot lifetime split */
    puVar10 = (byte *)(param_2);
    psVar9 = param_1_after_write_2;
    for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)psVar9 = *puVar10;
      puVar10 = (byte *)(puVar10 + 1);
      psVar9 = (RecoveredRecord_00575640_E6D414E2 *)&psVar9->field_0x4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)psVar9 = *(undefined1 *)puVar10;
      puVar10 = (byte *)((int)puVar10 + 1);
      psVar9 = (RecoveredRecord_00575640_E6D414E2 *)&psVar9->field_0x1;
    }
    iVar12 = 0;
    if (0 < *(short *)&pRVar2->field_0x2) {
      do {
        iVar5 = (int)*(short *)pRVar2;
        iVar11 = 0;
        auto param_3_after_write = (short *)(&param_1_after_write_2->field_0x0 + (iVar5 * iVar12 + iVar4 * 4) * 2); /* compiler stack-slot lifetime split */
        if (0 < iVar5) {
          do {
            if (*param_3_after_write == 0) {

              FUN_006ab090((int)param_1_after_write_2,iVar5,(int)*(short *)&pRVar2->field_0x2,5,iVar11,iVar12,4,-1
                           ,-1,-1);
            }
            iVar5 = (int)*(short *)pRVar2;
            iVar11 = iVar11 + 1;
            param_3_after_write = param_3_after_write + 1;
          } while (iVar11 < iVar5);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(short *)&pRVar2->field_0x2);
    }
    short * param_3_after_write_2 = nullptr; /* compiler stack-slot lifetime split */
    local_1c = 5;
    do {
      iVar12 = 0;
      if (0 < *(short *)&pRVar2->field_0x2) {
        do {
          iVar5 = (int)(*(short *)pRVar2 * iVar12 + (int)param_3_after_write_2) * 2;
          psVar8 = (short *)(&param_1_after_write_2->field_0x0 + iVar5);
          puVar6 = (undefined2 *)(iVar5 + (int)param_2);
          iVar5 = 0;
          if (0 < *(short *)pRVar2) {
            do {
              if (*psVar8 == 0) {
                *puVar6 = 0xfffe;
              }
              iVar5 = iVar5 + 1;
              psVar8 = psVar8 + 1;
              puVar6 = puVar6 + 1;
            } while (iVar5 < *(short *)pRVar2);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < *(short *)&pRVar2->field_0x2);
      }
      param_3_after_write_2 = (short *)((int)param_3_after_write_2 + iVar4);
      local_1c = local_1c + -1;
    } while (local_1c != 0);
    FreeAndNull(&param_1_after_write_2);
  }
  return;
}

