#include "../../pseudocode_runtime.h"


undefined4
FUN_006bf710(AnonShape_006BF710_259ECA93 *param_1,int param_2,int param_3,int param_4,int param_5,
            int param_6,byte *param_7,int *param_8)

{
  byte *pbVar1;
  int iVar3;
  int iVar4;
  int iVar2;
  byte *pbVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  byte *pbVar18;
  int local_4c;
  int local_44;
  int local_3c;
  byte *local_34;
  byte *local_30;
  int local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_0079d980;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  pbVar1 = param_1->field_0210;
  iVar4 = param_1->field_01E4;
  if (*(int *)(&param_1->field_0xf0 + iVar4 * 4) != 0) {
    iVar3 = param_1->field_01F4 * param_5 + param_4;
    local_24 = param_1->field_0204;
    if (local_24 != 0) {
      local_24 = local_24 + iVar3;
    }
    pbVar5 = param_1->field_021C;
    if (pbVar5 != nullptr) {
      pbVar5 = pbVar5 + iVar3;
    }
    local_8 = 0;
    iVar3 = param_1->field_0208;
    if (iVar3 == 0) {
      pbVar18 = param_1->field_0220;
      iVar17 = 0;
      iVar9 = 0;
      iVar6 = 0;
      iVar3 = 0;
      iVar16 = param_1->field_01F0;
      iVar15 = param_1->field_01EC;
      iVar14 = param_1->field_0218;
      iVar13 = param_1->field_0214;
      iVar12 = param_1->field_0200;
      iVar11 = param_1->field_01FC;
      iVar10 = param_1->field_01F4;
    }
    else {
      iVar9 = *(int *)(iVar3 + 4);
      pbVar18 = param_1->field_0220;
      iVar17 = *(int *)(iVar3 + 8);
      iVar6 = -((uint)*(ushort *)(iVar3 + 0xe) * iVar9 + 0x1f >> 3 & 0x1ffffffc);
      iVar3 = param_1->field_020C;
      iVar16 = param_1->field_01F0;
      iVar15 = param_1->field_01EC;
      iVar14 = param_1->field_0218;
      iVar13 = param_1->field_0214;
      iVar12 = param_1->field_0200;
      iVar11 = param_1->field_01FC;
      iVar10 = param_1->field_01F4;
    }
    ExceptionList = &local_14;
    FUN_006d3d80(param_2 + *(int *)(&param_1->field_0x18 + iVar4 * 0x10) * param_3 +
                           *(int *)(&param_1->field_0x14 + iVar4 * 0x10),param_3,local_24,pbVar5,
                 iVar10,param_4,param_5,param_6,param_7,iVar11,iVar12,iVar13,iVar14,iVar15,iVar16,
                 iVar3,iVar6,iVar9,iVar17,pbVar1,pbVar18);
    if (*param_8 == 0) {
      iVar4 = param_1->field_01F4 + 7;
      iVar4 = (int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3;
      local_30 = nullptr;
      if (pbVar1 != nullptr) {
        local_30 = pbVar1 + iVar4 * param_5 + (param_4 >> 3);
      }
      local_4c = *(int *)(&param_1->field_0x120 + param_1->field_01E4 * 8) +
                 param_1->field_01F0 * param_5;
      for (local_44 = 0; local_44 < (int)param_7; local_44 = local_44 + 1) {
        uVar8 = 0x80 >> ((byte)param_4 & 7);
        iVar3 = param_1->field_01EC;
        iVar9 = *(int *)(&param_1->field_0x11c + param_1->field_01E4 * 8) + iVar3 * param_4;
        local_34 = local_30;
        for (local_3c = 0; local_3c < param_6; local_3c = local_3c + 1) {
          if (((*local_34 & (byte)uVar8) != 0) &&
             (iVar2 = FUN_006d1ad0(param_1->field_01C0,100,iVar9,local_4c,iVar3,param_1->field_01F0,
                                   param_1->field_000C,param_1->field_0010,1), iVar2 == -1)) {
            *param_8 = 1;
            break;
          }
          bVar7 = (byte)uVar8 >> 1;
          uVar8 = (uint)bVar7;
          if (bVar7 == 0) {
            uVar8 = 0x80;
            local_34 = local_34 + 1;
          }
          iVar3 = param_1->field_01EC;
          iVar9 = iVar9 + iVar3;
        }
        if (*param_8 != 0) {
          ExceptionList = local_14;
          return 0;
        }
        if (local_30 != nullptr) {
          local_30 = local_30 + iVar4;
        }
        local_4c = local_4c + param_1->field_01F0;
      }
    }
  }
  ExceptionList = local_14;
  return 0;
}

