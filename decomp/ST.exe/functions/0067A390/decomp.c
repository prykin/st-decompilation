#include "../../pseudocode_runtime.h"


void __fastcall FUN_0067a390(AnonShape_00679600_B8E418A8 *param_1)

{
  short sVar1;
  undefined4 uVar2;
  short local_AX_1386;
  short local_AX_1503;
  short local_AX_2340;
  short local_AX_2459;
  short local_AX_2599;
  short local_AX_2742;
  int iVar4;
  int iVar5;
  int iVar3;
  short local_AX_518;
  int local_EAX_589;
  short uVar3;
  int local_EAX_965;
  int local_EAX_1204;
  short local_AX_1643;
  short local_AX_1855;
  short local_AX_1953;
  short local_AX_2077;
  Global_sub_0043E640_param_2Enum GVar6;
  uint uVar7;
  int local_EAX_2177;
  undefined4 *puVar8;
  uint uVar9;
  AnonShape_0068FD00_A5257008 **ppAVar10;
  uint uVar11;
  AnonShape_0068FD00_A5257008 *local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 *local_68;
  undefined4 local_40 [3];
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined1 local_2c;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;

  if ((*(int *)&param_1->field_0x650 != 0) &&
     ((uint)param_1->field_06FE <
      (uint)(*(int *)&param_1->field_0x654 + *(int *)&param_1->field_0x650))) {
    return;
  }
  *(undefined4 *)&param_1->field_0x654 = param_1->field_06FE;
  thunk_FUN_00679600(param_1);
  if (g_allPlayers_007FA174 == nullptr) {
    return;
  }
  if (*(short *)&param_1->field_0x5ec != 3) {
    iVar4 = thunk_FUN_004b71c0((char)param_1->field_05D7);
    iVar5 = thunk_FUN_004b72b0((char)param_1->field_05D7);
    if ((iVar4 <= iVar5) && (0 < iVar5)) {
      uVar2 = param_1->field_06FE;
      ppAVar10 = &local_74;
      for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
        *ppAVar10 = nullptr;
        ppAVar10 = ppAVar10 + 1;
      }
      local_74 = (AnonShape_0068FD00_A5257008 *)0x6f;
      local_68 = (undefined4 *)0x50;
      local_70 = uVar2;
      /* ST_CALLSITE[0067A447]: CALL 0x00405dc6; direct=00405DC6 AiPlrClassTy::sub_0067A020 */
      AiPlrClassTy::sub_0067A020
                ((AiPlrClassTy *)param_1,(AnonShape_0068FD00_A5257008 *)&local_74,-1);
      /* ST_CALLSITE[0067A455]: CALL 0x004041d8; direct=004041D8 _GetEmbrTobjGrpExch */
      iVar3 = _GetEmbrTobjGrpExch(param_1->field_05D7,0x50);
      if (iVar3 + local_6c < iVar5 / 0x28 + 1) {
        memset(local_40, 0, 0x2c); /* compiler bulk-zero initialization */
        iVar4 = 0;
        local_40[1] = 0;
        local_2e = 0xffff;
        local_30 = 0xffff;
        local_32 = 0xffff;
        ppAVar10 = &local_74;
        for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
          *ppAVar10 = nullptr;
          ppAVar10 = ppAVar10 + 1;
        }
        local_70 = param_1->field_06FE;
        local_68 = local_40;
        iVar4 = param_1->field_0695;
        local_40[0] = 0x50;
        local_34 = 0x31;
        local_2c = 0xff;
        local_74 = (AnonShape_0068FD00_A5257008 *)0x70;
        uVar11 = *(uint *)(iVar4 + 0xc);
        uVar9 = 0;
        if (0 < (int)uVar11) {
          do {
            if (((iVar4 != 0) && (-1 < (int)uVar9)) && ((int)uVar9 < (int)uVar11)) {
              if (uVar9 < uVar11) {
                puVar8 = (undefined4 *)(*(int *)(iVar4 + 8) * uVar9 + *(int *)(iVar4 + 0x1c));
              }
              else {
                puVar8 = nullptr;
              }
              if (((puVar8[1] != 0) && ((AiTactClassTy *)*puVar8 != nullptr)) &&
                 (&stack0x00000000 != (undefined1 *)0x74)) {
                /* ST_CALLSITE[0067A514]: CALL 0x004010e1; direct=004010E1 AiTactClassTy::GetAiMess */
                AiTactClassTy::GetAiMess
                          ((AiTactClassTy *)*puVar8,(AnonShape_0068FD00_A5257008 *)&local_74);
              }
            }
            if (0 < local_6c) break;
            iVar4 = param_1->field_0695;
            uVar9 = uVar9 + 1;
            uVar11 = *(uint *)(iVar4 + 0xc);
          } while ((int)uVar9 < (int)uVar11);
        }
      }
    }
    uVar11 = *(int *)&param_1->field_0xa4 * 0x41c64e6d + 0x3039;
    *(uint *)&param_1->field_0xa4 = uVar11;
    if (((uVar11 >> 0x10) % 0x5dd + 0x1d4c < (uint)param_1->field_06FE) &&
       (local_10 = thunk_FUN_004de4f0(g_allPlayers_007FA174,param_1->field_05D7), 0 < (int)local_10)
       ) {
      local_AX_518 = thunk_FUN_0043e640((char)param_1->field_05D7,0x34,0,-1);
      ppAVar10 = &local_74;
      for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
        *ppAVar10 = nullptr;
        ppAVar10 = ppAVar10 + 1;
      }
      local_70 = param_1->field_06FE;
      local_74 = (AnonShape_0068FD00_A5257008 *)0x6f;
      local_68 = (undefined4 *)0x34;
      /* ST_CALLSITE[0067A5CF]: CALL 0x00405dc6; direct=00405DC6 AiPlrClassTy::sub_0067A020 */
      AiPlrClassTy::sub_0067A020
                ((AiPlrClassTy *)param_1,(AnonShape_0068FD00_A5257008 *)&local_74,-1);
      /* ST_CALLSITE[0067A5DD]: CALL 0x004041d8; direct=004041D8 _GetEmbrTobjGrpExch */
      local_EAX_589 = _GetEmbrTobjGrpExch(param_1->field_05D7,0x34);
      if (local_EAX_589 + local_6c < (int)((ushort)local_AX_518 + local_10)) {
        local_70 = param_1->field_06FE;
        memset(local_40, 0, 0x2c); /* compiler bulk-zero initialization */
        iVar4 = 0;
        local_40[1] = 0;
        local_2e = 0xffff;
        local_30 = 0xffff;
        local_32 = 0xffff;
        ppAVar10 = &local_74;
        for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
          *ppAVar10 = nullptr;
          ppAVar10 = ppAVar10 + 1;
        }
        local_68 = local_40;
        local_40[0] = 0x34;
        iVar4 = param_1->field_0695;
        local_34 = 0x19;
        local_2c = 0xff;
        local_74 = (AnonShape_0068FD00_A5257008 *)0x70;
        uVar11 = *(uint *)(iVar4 + 0xc);
        uVar9 = 0;
        if (0 < (int)uVar11) {
          do {
            if (((iVar4 != 0) && (-1 < (int)uVar9)) && ((int)uVar9 < (int)uVar11)) {
              if (uVar9 < uVar11) {
                puVar8 = (undefined4 *)(*(int *)(iVar4 + 8) * uVar9 + *(int *)(iVar4 + 0x1c));
              }
              else {
                puVar8 = nullptr;
              }
              if (((puVar8[1] != 0) && ((AiTactClassTy *)*puVar8 != nullptr)) &&
                 (&stack0x00000000 != (undefined1 *)0x74)) {
                /* ST_CALLSITE[0067A68C]: CALL 0x004010e1; direct=004010E1 AiTactClassTy::GetAiMess */
                AiTactClassTy::GetAiMess
                          ((AiTactClassTy *)*puVar8,(AnonShape_0068FD00_A5257008 *)&local_74);
              }
            }
            if (0 < local_6c) break;
            iVar4 = param_1->field_0695;
            uVar9 = uVar9 + 1;
            uVar11 = *(uint *)(iVar4 + 0xc);
          } while ((int)uVar9 < (int)uVar11);
        }
      }
    }
    uVar11 = *(int *)&param_1->field_0xa4 * 0x41c64e6d + 0x3039;
    *(uint *)&param_1->field_0xa4 = uVar11;
    if (((uVar11 >> 0x10) % 0x5dd + 0x1d4c < (uint)param_1->field_06FE) &&
       (local_10 = thunk_FUN_004dfc70(g_allPlayers_007FA174,(int *)param_1->field_05D7),
       0 < (int)local_10)) {
      uVar3 = thunk_FUN_0043e640((char)param_1->field_05D7,0x48,0,-1);
      ppAVar10 = &local_74;
      for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
        *ppAVar10 = nullptr;
        ppAVar10 = ppAVar10 + 1;
      }
      local_70 = param_1->field_06FE;
      local_74 = (AnonShape_0068FD00_A5257008 *)0x6f;
      local_68 = (undefined4 *)0x48;
      /* ST_CALLSITE[0067A747]: CALL 0x00405dc6; direct=00405DC6 AiPlrClassTy::sub_0067A020 */
      AiPlrClassTy::sub_0067A020
                ((AiPlrClassTy *)param_1,(AnonShape_0068FD00_A5257008 *)&local_74,-1);
      /* ST_CALLSITE[0067A755]: CALL 0x004041d8; direct=004041D8 _GetEmbrTobjGrpExch */
      local_EAX_965 = _GetEmbrTobjGrpExch(param_1->field_05D7,0x48);
      if (local_EAX_965 + local_6c < (int)((ushort)uVar3 + local_10)) {
        local_70 = param_1->field_06FE;
        memset(local_40, 0, 0x2c); /* compiler bulk-zero initialization */
        iVar4 = 0;
        local_40[1] = 0;
        local_2e = 0xffff;
        local_30 = 0xffff;
        local_32 = 0xffff;
        ppAVar10 = &local_74;
        for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
          *ppAVar10 = nullptr;
          ppAVar10 = ppAVar10 + 1;
        }
        local_68 = local_40;
        local_40[0] = 0x48;
        iVar4 = param_1->field_0695;
        local_34 = 0x19;
        local_2c = 0xff;
        local_74 = (AnonShape_0068FD00_A5257008 *)0x70;
        uVar11 = *(uint *)(iVar4 + 0xc);
        uVar9 = 0;
        if (0 < (int)uVar11) {
          do {
            if (((iVar4 != 0) && (-1 < (int)uVar9)) && ((int)uVar9 < (int)uVar11)) {
              if (uVar9 < uVar11) {
                puVar8 = (undefined4 *)(*(int *)(iVar4 + 8) * uVar9 + *(int *)(iVar4 + 0x1c));
              }
              else {
                puVar8 = nullptr;
              }
              if (((puVar8[1] != 0) && ((AiTactClassTy *)*puVar8 != nullptr)) &&
                 (&stack0x00000000 != (undefined1 *)0x74)) {
                /* ST_CALLSITE[0067A804]: CALL 0x004010e1; direct=004010E1 AiTactClassTy::GetAiMess */
                AiTactClassTy::GetAiMess
                          ((AiTactClassTy *)*puVar8,(AnonShape_0068FD00_A5257008 *)&local_74);
              }
            }
            if (0 < local_6c) break;
            iVar4 = param_1->field_0695;
            uVar9 = uVar9 + 1;
            uVar11 = *(uint *)(iVar4 + 0xc);
          } while ((int)uVar9 < (int)uVar11);
        }
      }
    }
  }
  if (g_allPlayers_007FA174 == nullptr) {
    return;
  }
  if (*(short *)&param_1->field_0x5ec != 3) {
    uVar11 = 0xffffffff;
    local_EAX_1204 = thunk_FUN_004e6fe0(param_1->field_05D7);
    local_8 = thunk_FUN_004d8870((char)param_1->field_05D7);
    local_10 = thunk_FUN_004d89b0((char)param_1->field_05D7);
    local_c = thunk_FUN_004d8af0((char)param_1->field_05D7);
    local_14 = ((local_EAX_1204 < 100) - 1 & 0xffffffce) + 0x32;
    iVar4 = ((local_EAX_1204 < 100) - 1 & 0xfffffe0c) + 500;
    if ((int)local_10 < 0x32) {
      if (iVar4 < local_8) {
        sVar1 = *(short *)&param_1->field_0x5ec;
        if (sVar1 < 1) {
LAB_0067a8e6:
          GVar6 = 0;
        }
        else if (sVar1 < 3) {
          GVar6 = 0x52;
        }
        else {
          if (sVar1 != 3) goto LAB_0067a8e6;
          GVar6 = 0x5f;
        }
        local_AX_1386 = thunk_FUN_0043e640((char)param_1->field_05D7,GVar6,0,-1);
        uVar11 = (uint)(ushort)local_AX_1386;
        if (uVar11 != 0) {
          uVar9 = local_8;
          if (100 < local_8) {
            uVar9 = 100;
          }
          uVar7 = param_1->field_05D7;
          iVar5 = 0xdc;
LAB_0067a9a0:
          thunk_FUN_004eb300(uVar7,iVar5,0xdd,uVar9);
        }
      }
      else if (2000 < (int)local_c) {
        sVar1 = *(short *)&param_1->field_0x5ec;
        if (sVar1 < 1) {
LAB_0067a95b:
          GVar6 = 0;
        }
        else if (sVar1 < 3) {
          GVar6 = 0x52;
        }
        else {
          if (sVar1 != 3) goto LAB_0067a95b;
          GVar6 = 0x5f;
        }
        local_AX_1503 = thunk_FUN_0043e640((char)param_1->field_05D7,GVar6,0,-1);
        uVar11 = (uint)(ushort)local_AX_1503;
        if (uVar11 != 0) {
          uVar9 = local_c;
          if (500 < (int)local_c) {
            uVar9 = 500;
          }
          uVar7 = param_1->field_05D7;
          iVar5 = 0xde;
          goto LAB_0067a9a0;
        }
      }
    }
    uVar9 = local_10;
    if ((int)local_c < 0x32) {
      if (iVar4 < local_8) {
        if ((int)uVar11 < 0) {
          sVar1 = *(short *)&param_1->field_0x5ec;
          if (sVar1 < 1) {
LAB_0067a9e7:
            GVar6 = 0;
          }
          else if (sVar1 < 3) {
            GVar6 = 0x52;
          }
          else {
            if (sVar1 != 3) goto LAB_0067a9e7;
            GVar6 = 0x5f;
          }
          local_AX_1643 = thunk_FUN_0043e640((char)param_1->field_05D7,GVar6,0,-1);
          uVar11 = (uint)(ushort)local_AX_1643;
        }
        uVar9 = local_10;
        if (uVar11 != 0) {
          iVar4 = local_8;
          if (100 < local_8) {
            iVar4 = 100;
          }
          thunk_FUN_004eb300(param_1->field_05D7,0xdc,0xde,iVar4);
          uVar9 = local_10;
        }
      }
      else if (0x5dc < (int)local_10) {
        if ((int)uVar11 < 0) {
          sVar1 = *(short *)&param_1->field_0x5ec;
          if (sVar1 < 1) {
LAB_0067aabb:
            GVar6 = 0;
          }
          else if (sVar1 < 3) {
            GVar6 = 0x52;
          }
          else {
            if (sVar1 != 3) goto LAB_0067aabb;
            GVar6 = 0x5f;
          }
          local_AX_1855 = thunk_FUN_0043e640((char)param_1->field_05D7,GVar6,0,-1);
          uVar11 = (uint)(ushort)local_AX_1855;
        }
        if (uVar11 != 0) {
          uVar7 = 500;
          if ((int)uVar9 < 0x1f5) {
            uVar7 = uVar9;
          }
          thunk_FUN_004eb300(param_1->field_05D7,0xdd,0xde,uVar7);
        }
      }
    }
    if (local_8 < local_14) {
      if ((int)local_c < 0x7d1) {
        if (0x5dc < (int)uVar9) {
          if ((int)uVar11 < 0) {
            sVar1 = *(short *)&param_1->field_0x5ec;
            if (sVar1 < 1) {
LAB_0067ab99:
              GVar6 = 0;
            }
            else if (sVar1 < 3) {
              GVar6 = 0x52;
            }
            else {
              if (sVar1 != 3) goto LAB_0067ab99;
              GVar6 = 0x5f;
            }
            local_AX_2077 = thunk_FUN_0043e640((char)param_1->field_05D7,GVar6,0,-1);
            uVar11 = (uint)(ushort)local_AX_2077;
          }
          if (uVar11 != 0) {
            uVar11 = 100;
            if (local_8 < 0x65) {
              uVar11 = local_8;
            }
            uVar9 = param_1->field_05D7;
            iVar4 = 0xdd;
            goto LAB_0067abe0;
          }
        }
      }
      else {
        if ((int)uVar11 < 0) {
          sVar1 = *(short *)&param_1->field_0x5ec;
          if (sVar1 < 1) {
LAB_0067ab1d:
            GVar6 = 0;
          }
          else if (sVar1 < 3) {
            GVar6 = 0x52;
          }
          else {
            if (sVar1 != 3) goto LAB_0067ab1d;
            GVar6 = 0x5f;
          }
          local_AX_1953 = thunk_FUN_0043e640((char)param_1->field_05D7,GVar6,0,-1);
          uVar11 = (uint)(ushort)local_AX_1953;
        }
        if (uVar11 != 0) {
          uVar11 = local_c;
          if (500 < (int)local_c) {
            uVar11 = 500;
          }
          uVar9 = param_1->field_05D7;
          iVar4 = 0xde;
LAB_0067abe0:
          thunk_FUN_004eb300(uVar9,iVar4,0xdc,uVar11);
        }
      }
    }
  }
  if (g_allPlayers_007FA174 == nullptr) {
    return;
  }
  if (*(short *)&param_1->field_0x5ec != 3) {
    return;
  }
  uVar11 = 0xffffffff;
  local_EAX_2177 = thunk_FUN_004e6fe0(param_1->field_05D7);
  local_10 = thunk_FUN_004e41c0(param_1->field_05D7);
  local_8 = thunk_FUN_004d89b0((char)param_1->field_05D7);
  local_c = thunk_FUN_004e4410((byte *)param_1->field_05D7);
  iVar4 = ((local_EAX_2177 < 100) - 1 & 0xfffffc18) + 3000;
  if (local_8 < 0x32) {
    if (iVar4 < (int)local_10) {
      sVar1 = *(short *)&param_1->field_0x5ec;
      if (sVar1 < 1) {
LAB_0067aca0:
        GVar6 = 0;
      }
      else if (sVar1 < 3) {
        GVar6 = 0x52;
      }
      else {
        if (sVar1 != 3) goto LAB_0067aca0;
        GVar6 = 0x5f;
      }
      local_AX_2340 = thunk_FUN_0043e640((char)param_1->field_05D7,GVar6,0,-1);
      uVar11 = (uint)(ushort)local_AX_2340;
      if (uVar11 != 0) {
        uVar9 = local_10;
        if (1000 < (int)local_10) {
          uVar9 = 1000;
        }
        uVar7 = param_1->field_05D7;
        iVar5 = 0xe3;
LAB_0067ad5c:
        thunk_FUN_004eb300(uVar7,iVar5,0xdd,uVar9);
      }
    }
    else if (0x9c4 < (int)local_c) {
      sVar1 = *(short *)&param_1->field_0x5ec;
      if (sVar1 < 1) {
LAB_0067ad17:
        GVar6 = 0;
      }
      else if (sVar1 < 3) {
        GVar6 = 0x52;
      }
      else {
        if (sVar1 != 3) goto LAB_0067ad17;
        GVar6 = 0x5f;
      }
      local_AX_2459 = thunk_FUN_0043e640((char)param_1->field_05D7,GVar6,0,-1);
      uVar11 = (uint)(ushort)local_AX_2459;
      if (uVar11 != 0) {
        uVar9 = local_c;
        if (1000 < (int)local_c) {
          uVar9 = 1000;
        }
        uVar7 = param_1->field_05D7;
        iVar5 = 0xe2;
        goto LAB_0067ad5c;
      }
    }
  }
  iVar5 = local_8;
  if (0x31 < (int)local_c) {
    return;
  }
  if ((int)local_10 <= iVar4) {
    if (local_8 < 0x5dd) {
      return;
    }
    if (-1 < (int)uVar11) goto LAB_0067ae56;
    sVar1 = *(short *)&param_1->field_0x5ec;
    if (sVar1 < 1) {
LAB_0067ae32:
      GVar6 = 0;
    }
    else if (sVar1 < 3) {
      GVar6 = 0x52;
    }
    else {
      if (sVar1 != 3) goto LAB_0067ae32;
      GVar6 = 0x5f;
    }
    local_AX_2742 = thunk_FUN_0043e640((char)param_1->field_05D7,GVar6,0,-1);
    uVar11 = (uint)(ushort)local_AX_2742;
LAB_0067ae56:
    if (uVar11 == 0) {
      return;
    }
    iVar4 = 700;
    if (iVar5 < 0x2bd) {
      iVar4 = iVar5;
    }
    thunk_FUN_004eb300(param_1->field_05D7,0xdd,0xe2,iVar4);
    return;
  }
  if (-1 < (int)uVar11) goto LAB_0067adca;
  sVar1 = *(short *)&param_1->field_0x5ec;
  if (sVar1 < 1) {
LAB_0067ada3:
    GVar6 = 0;
  }
  else if (sVar1 < 3) {
    GVar6 = 0x52;
  }
  else {
    if (sVar1 != 3) goto LAB_0067ada3;
    GVar6 = 0x5f;
  }
  local_AX_2599 = thunk_FUN_0043e640((char)param_1->field_05D7,GVar6,0,-1);
  uVar11 = (uint)(ushort)local_AX_2599;
LAB_0067adca:
  if (uVar11 == 0) {
    return;
  }
  uVar11 = local_10;
  if (1000 < (int)local_10) {
    uVar11 = 1000;
  }
  thunk_FUN_004eb300(param_1->field_05D7,0xe3,0xe2,uVar11);
  return;
}

