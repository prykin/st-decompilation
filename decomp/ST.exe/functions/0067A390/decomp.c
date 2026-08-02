#include "../../pseudocode_runtime.h"


void __fastcall FUN_0067a390(AnonShape_00679600_B8E418A8 *param_1)

{
  short sVar1;
  undefined4 uVar2;
  short local_AX_518;
  short uVar3;
  short local_AX_1386;
  short local_AX_1503;
  short local_AX_1643;
  short local_AX_1855;
  short local_AX_1953;
  short local_AX_2077;
  short local_AX_2340;
  short local_AX_2459;
  short local_AX_2599;
  short local_AX_2742;
  int iVar3;
  int iVar4;
  Global_sub_0043E640_param_2Enum GVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  AnonShape_0068FD00_A5257008 **ppAVar9;
  uint uVar10;
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
    iVar3 = thunk_FUN_004b71c0((char)param_1->field_05D7);
    iVar4 = thunk_FUN_004b72b0((char)param_1->field_05D7);
    if ((iVar3 <= iVar4) && (0 < iVar4)) {
      uVar2 = param_1->field_06FE;
      ppAVar9 = &local_74;
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *ppAVar9 = nullptr;
        ppAVar9 = ppAVar9 + 1;
      }
      local_74 = (AnonShape_0068FD00_A5257008 *)0x6f;
      local_68 = (undefined4 *)0x50;
      local_70 = uVar2;
      AiPlrClassTy::sub_0067A020
                ((AiPlrClassTy *)param_1,(AnonShape_0068FD00_A5257008 *)&local_74,-1);
      iVar3 = _GetEmbrTobjGrpExch(param_1->field_05D7,0x50);
      if (iVar3 + local_6c < iVar4 / 0x28 + 1) {
        memset(local_40, 0, 0x2c); /* compiler bulk-zero initialization */
        iVar3 = 0;
        local_40[1] = 0;
        local_2e = 0xffff;
        local_30 = 0xffff;
        local_32 = 0xffff;
        ppAVar9 = &local_74;
        for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppAVar9 = nullptr;
          ppAVar9 = ppAVar9 + 1;
        }
        local_70 = param_1->field_06FE;
        local_68 = local_40;
        iVar3 = *(int *)&param_1->field_0x695;
        local_40[0] = 0x50;
        local_34 = 0x31;
        local_2c = 0xff;
        local_74 = (AnonShape_0068FD00_A5257008 *)0x70;
        uVar10 = *(uint *)(iVar3 + 0xc);
        uVar8 = 0;
        if (0 < (int)uVar10) {
          do {
            if (((iVar3 != 0) && (-1 < (int)uVar8)) && ((int)uVar8 < (int)uVar10)) {
              if (uVar8 < uVar10) {
                puVar7 = (undefined4 *)(*(int *)(iVar3 + 8) * uVar8 + *(int *)(iVar3 + 0x1c));
              }
              else {
                puVar7 = nullptr;
              }
              if (((puVar7[1] != 0) && ((AiTactClassTy *)*puVar7 != nullptr)) &&
                 (&stack0x00000000 != (undefined1 *)0x74)) {
                AiTactClassTy::GetAiMess
                          ((AiTactClassTy *)*puVar7,(AnonShape_0068FD00_A5257008 *)&local_74);
              }
            }
            if (0 < local_6c) break;
            iVar3 = *(int *)&param_1->field_0x695;
            uVar8 = uVar8 + 1;
            uVar10 = *(uint *)(iVar3 + 0xc);
          } while ((int)uVar8 < (int)uVar10);
        }
      }
    }
    uVar10 = *(int *)&param_1->field_0xa4 * 0x41c64e6d + 0x3039;
    *(uint *)&param_1->field_0xa4 = uVar10;
    if (((uVar10 >> 0x10) % 0x5dd + 0x1d4c < (uint)param_1->field_06FE) &&
       (local_10 = thunk_FUN_004de4f0(g_allPlayers_007FA174,param_1->field_05D7), 0 < (int)local_10)
       ) {
      local_AX_518 = thunk_FUN_0043e640((char)param_1->field_05D7,0x34,0,-1);
      ppAVar9 = &local_74;
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *ppAVar9 = nullptr;
        ppAVar9 = ppAVar9 + 1;
      }
      local_70 = param_1->field_06FE;
      local_74 = (AnonShape_0068FD00_A5257008 *)0x6f;
      local_68 = (undefined4 *)0x34;
      AiPlrClassTy::sub_0067A020
                ((AiPlrClassTy *)param_1,(AnonShape_0068FD00_A5257008 *)&local_74,-1);
      iVar3 = _GetEmbrTobjGrpExch(param_1->field_05D7,0x34);
      if (iVar3 + local_6c < (int)((ushort)local_AX_518 + local_10)) {
        local_70 = param_1->field_06FE;
        memset(local_40, 0, 0x2c); /* compiler bulk-zero initialization */
        iVar3 = 0;
        local_40[1] = 0;
        local_2e = 0xffff;
        local_30 = 0xffff;
        local_32 = 0xffff;
        ppAVar9 = &local_74;
        for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppAVar9 = nullptr;
          ppAVar9 = ppAVar9 + 1;
        }
        local_68 = local_40;
        local_40[0] = 0x34;
        iVar3 = *(int *)&param_1->field_0x695;
        local_34 = 0x19;
        local_2c = 0xff;
        local_74 = (AnonShape_0068FD00_A5257008 *)0x70;
        uVar10 = *(uint *)(iVar3 + 0xc);
        uVar8 = 0;
        if (0 < (int)uVar10) {
          do {
            if (((iVar3 != 0) && (-1 < (int)uVar8)) && ((int)uVar8 < (int)uVar10)) {
              if (uVar8 < uVar10) {
                puVar7 = (undefined4 *)(*(int *)(iVar3 + 8) * uVar8 + *(int *)(iVar3 + 0x1c));
              }
              else {
                puVar7 = nullptr;
              }
              if (((puVar7[1] != 0) && ((AiTactClassTy *)*puVar7 != nullptr)) &&
                 (&stack0x00000000 != (undefined1 *)0x74)) {
                AiTactClassTy::GetAiMess
                          ((AiTactClassTy *)*puVar7,(AnonShape_0068FD00_A5257008 *)&local_74);
              }
            }
            if (0 < local_6c) break;
            iVar3 = *(int *)&param_1->field_0x695;
            uVar8 = uVar8 + 1;
            uVar10 = *(uint *)(iVar3 + 0xc);
          } while ((int)uVar8 < (int)uVar10);
        }
      }
    }
    uVar10 = *(int *)&param_1->field_0xa4 * 0x41c64e6d + 0x3039;
    *(uint *)&param_1->field_0xa4 = uVar10;
    if (((uVar10 >> 0x10) % 0x5dd + 0x1d4c < (uint)param_1->field_06FE) &&
       (local_10 = thunk_FUN_004dfc70(g_allPlayers_007FA174,(int *)param_1->field_05D7),
       0 < (int)local_10)) {
      uVar3 = thunk_FUN_0043e640((char)param_1->field_05D7,0x48,0,-1);
      ppAVar9 = &local_74;
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *ppAVar9 = nullptr;
        ppAVar9 = ppAVar9 + 1;
      }
      local_70 = param_1->field_06FE;
      local_74 = (AnonShape_0068FD00_A5257008 *)0x6f;
      local_68 = (undefined4 *)0x48;
      AiPlrClassTy::sub_0067A020
                ((AiPlrClassTy *)param_1,(AnonShape_0068FD00_A5257008 *)&local_74,-1);
      iVar3 = _GetEmbrTobjGrpExch(param_1->field_05D7,0x48);
      if (iVar3 + local_6c < (int)((ushort)uVar3 + local_10)) {
        local_70 = param_1->field_06FE;
        memset(local_40, 0, 0x2c); /* compiler bulk-zero initialization */
        iVar3 = 0;
        local_40[1] = 0;
        local_2e = 0xffff;
        local_30 = 0xffff;
        local_32 = 0xffff;
        ppAVar9 = &local_74;
        for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppAVar9 = nullptr;
          ppAVar9 = ppAVar9 + 1;
        }
        local_68 = local_40;
        local_40[0] = 0x48;
        iVar3 = *(int *)&param_1->field_0x695;
        local_34 = 0x19;
        local_2c = 0xff;
        local_74 = (AnonShape_0068FD00_A5257008 *)0x70;
        uVar10 = *(uint *)(iVar3 + 0xc);
        uVar8 = 0;
        if (0 < (int)uVar10) {
          do {
            if (((iVar3 != 0) && (-1 < (int)uVar8)) && ((int)uVar8 < (int)uVar10)) {
              if (uVar8 < uVar10) {
                puVar7 = (undefined4 *)(*(int *)(iVar3 + 8) * uVar8 + *(int *)(iVar3 + 0x1c));
              }
              else {
                puVar7 = nullptr;
              }
              if (((puVar7[1] != 0) && ((AiTactClassTy *)*puVar7 != nullptr)) &&
                 (&stack0x00000000 != (undefined1 *)0x74)) {
                AiTactClassTy::GetAiMess
                          ((AiTactClassTy *)*puVar7,(AnonShape_0068FD00_A5257008 *)&local_74);
              }
            }
            if (0 < local_6c) break;
            iVar3 = *(int *)&param_1->field_0x695;
            uVar8 = uVar8 + 1;
            uVar10 = *(uint *)(iVar3 + 0xc);
          } while ((int)uVar8 < (int)uVar10);
        }
      }
    }
  }
  if (g_allPlayers_007FA174 == nullptr) {
    return;
  }
  if (*(short *)&param_1->field_0x5ec != 3) {
    uVar10 = 0xffffffff;
    iVar3 = thunk_FUN_004e6fe0(param_1->field_05D7);
    local_8 = thunk_FUN_004d8870((char)param_1->field_05D7);
    local_10 = thunk_FUN_004d89b0((char)param_1->field_05D7);
    local_c = thunk_FUN_004d8af0((char)param_1->field_05D7);
    local_14 = ((iVar3 < 100) - 1 & 0xffffffce) + 0x32;
    iVar3 = ((iVar3 < 100) - 1 & 0xfffffe0c) + 500;
    if ((int)local_10 < 0x32) {
      if (iVar3 < local_8) {
        sVar1 = *(short *)&param_1->field_0x5ec;
        if (sVar1 < 1) {
LAB_0067a8e6:
          GVar5 = 0;
        }
        else if (sVar1 < 3) {
          GVar5 = 0x52;
        }
        else {
          if (sVar1 != 3) goto LAB_0067a8e6;
          GVar5 = 0x5f;
        }
        local_AX_1386 = thunk_FUN_0043e640((char)param_1->field_05D7,GVar5,0,-1);
        uVar10 = (uint)(ushort)local_AX_1386;
        if (uVar10 != 0) {
          uVar8 = local_8;
          if (100 < local_8) {
            uVar8 = 100;
          }
          uVar6 = param_1->field_05D7;
          iVar4 = 0xdc;
LAB_0067a9a0:
          thunk_FUN_004eb300(uVar6,iVar4,0xdd,uVar8);
        }
      }
      else if (2000 < (int)local_c) {
        sVar1 = *(short *)&param_1->field_0x5ec;
        if (sVar1 < 1) {
LAB_0067a95b:
          GVar5 = 0;
        }
        else if (sVar1 < 3) {
          GVar5 = 0x52;
        }
        else {
          if (sVar1 != 3) goto LAB_0067a95b;
          GVar5 = 0x5f;
        }
        local_AX_1503 = thunk_FUN_0043e640((char)param_1->field_05D7,GVar5,0,-1);
        uVar10 = (uint)(ushort)local_AX_1503;
        if (uVar10 != 0) {
          uVar8 = local_c;
          if (500 < (int)local_c) {
            uVar8 = 500;
          }
          uVar6 = param_1->field_05D7;
          iVar4 = 0xde;
          goto LAB_0067a9a0;
        }
      }
    }
    uVar8 = local_10;
    if ((int)local_c < 0x32) {
      if (iVar3 < local_8) {
        if ((int)uVar10 < 0) {
          sVar1 = *(short *)&param_1->field_0x5ec;
          if (sVar1 < 1) {
LAB_0067a9e7:
            GVar5 = 0;
          }
          else if (sVar1 < 3) {
            GVar5 = 0x52;
          }
          else {
            if (sVar1 != 3) goto LAB_0067a9e7;
            GVar5 = 0x5f;
          }
          local_AX_1643 = thunk_FUN_0043e640((char)param_1->field_05D7,GVar5,0,-1);
          uVar10 = (uint)(ushort)local_AX_1643;
        }
        uVar8 = local_10;
        if (uVar10 != 0) {
          iVar3 = local_8;
          if (100 < local_8) {
            iVar3 = 100;
          }
          thunk_FUN_004eb300(param_1->field_05D7,0xdc,0xde,iVar3);
          uVar8 = local_10;
        }
      }
      else if (0x5dc < (int)local_10) {
        if ((int)uVar10 < 0) {
          sVar1 = *(short *)&param_1->field_0x5ec;
          if (sVar1 < 1) {
LAB_0067aabb:
            GVar5 = 0;
          }
          else if (sVar1 < 3) {
            GVar5 = 0x52;
          }
          else {
            if (sVar1 != 3) goto LAB_0067aabb;
            GVar5 = 0x5f;
          }
          local_AX_1855 = thunk_FUN_0043e640((char)param_1->field_05D7,GVar5,0,-1);
          uVar10 = (uint)(ushort)local_AX_1855;
        }
        if (uVar10 != 0) {
          uVar6 = 500;
          if ((int)uVar8 < 0x1f5) {
            uVar6 = uVar8;
          }
          thunk_FUN_004eb300(param_1->field_05D7,0xdd,0xde,uVar6);
        }
      }
    }
    if (local_8 < local_14) {
      if ((int)local_c < 0x7d1) {
        if (0x5dc < (int)uVar8) {
          if ((int)uVar10 < 0) {
            sVar1 = *(short *)&param_1->field_0x5ec;
            if (sVar1 < 1) {
LAB_0067ab99:
              GVar5 = 0;
            }
            else if (sVar1 < 3) {
              GVar5 = 0x52;
            }
            else {
              if (sVar1 != 3) goto LAB_0067ab99;
              GVar5 = 0x5f;
            }
            local_AX_2077 = thunk_FUN_0043e640((char)param_1->field_05D7,GVar5,0,-1);
            uVar10 = (uint)(ushort)local_AX_2077;
          }
          if (uVar10 != 0) {
            uVar10 = 100;
            if (local_8 < 0x65) {
              uVar10 = local_8;
            }
            uVar8 = param_1->field_05D7;
            iVar3 = 0xdd;
            goto LAB_0067abe0;
          }
        }
      }
      else {
        if ((int)uVar10 < 0) {
          sVar1 = *(short *)&param_1->field_0x5ec;
          if (sVar1 < 1) {
LAB_0067ab1d:
            GVar5 = 0;
          }
          else if (sVar1 < 3) {
            GVar5 = 0x52;
          }
          else {
            if (sVar1 != 3) goto LAB_0067ab1d;
            GVar5 = 0x5f;
          }
          local_AX_1953 = thunk_FUN_0043e640((char)param_1->field_05D7,GVar5,0,-1);
          uVar10 = (uint)(ushort)local_AX_1953;
        }
        if (uVar10 != 0) {
          uVar10 = local_c;
          if (500 < (int)local_c) {
            uVar10 = 500;
          }
          uVar8 = param_1->field_05D7;
          iVar3 = 0xde;
LAB_0067abe0:
          thunk_FUN_004eb300(uVar8,iVar3,0xdc,uVar10);
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
  uVar10 = 0xffffffff;
  iVar3 = thunk_FUN_004e6fe0(param_1->field_05D7);
  local_10 = thunk_FUN_004e41c0(param_1->field_05D7);
  local_8 = thunk_FUN_004d89b0((char)param_1->field_05D7);
  local_c = thunk_FUN_004e4410((byte *)param_1->field_05D7);
  iVar3 = ((iVar3 < 100) - 1 & 0xfffffc18) + 3000;
  if (local_8 < 0x32) {
    if (iVar3 < (int)local_10) {
      sVar1 = *(short *)&param_1->field_0x5ec;
      if (sVar1 < 1) {
LAB_0067aca0:
        GVar5 = 0;
      }
      else if (sVar1 < 3) {
        GVar5 = 0x52;
      }
      else {
        if (sVar1 != 3) goto LAB_0067aca0;
        GVar5 = 0x5f;
      }
      local_AX_2340 = thunk_FUN_0043e640((char)param_1->field_05D7,GVar5,0,-1);
      uVar10 = (uint)(ushort)local_AX_2340;
      if (uVar10 != 0) {
        uVar8 = local_10;
        if (1000 < (int)local_10) {
          uVar8 = 1000;
        }
        uVar6 = param_1->field_05D7;
        iVar4 = 0xe3;
LAB_0067ad5c:
        thunk_FUN_004eb300(uVar6,iVar4,0xdd,uVar8);
      }
    }
    else if (0x9c4 < (int)local_c) {
      sVar1 = *(short *)&param_1->field_0x5ec;
      if (sVar1 < 1) {
LAB_0067ad17:
        GVar5 = 0;
      }
      else if (sVar1 < 3) {
        GVar5 = 0x52;
      }
      else {
        if (sVar1 != 3) goto LAB_0067ad17;
        GVar5 = 0x5f;
      }
      local_AX_2459 = thunk_FUN_0043e640((char)param_1->field_05D7,GVar5,0,-1);
      uVar10 = (uint)(ushort)local_AX_2459;
      if (uVar10 != 0) {
        uVar8 = local_c;
        if (1000 < (int)local_c) {
          uVar8 = 1000;
        }
        uVar6 = param_1->field_05D7;
        iVar4 = 0xe2;
        goto LAB_0067ad5c;
      }
    }
  }
  iVar4 = local_8;
  if (0x31 < (int)local_c) {
    return;
  }
  if ((int)local_10 <= iVar3) {
    if (local_8 < 0x5dd) {
      return;
    }
    if (-1 < (int)uVar10) goto LAB_0067ae56;
    sVar1 = *(short *)&param_1->field_0x5ec;
    if (sVar1 < 1) {
LAB_0067ae32:
      GVar5 = 0;
    }
    else if (sVar1 < 3) {
      GVar5 = 0x52;
    }
    else {
      if (sVar1 != 3) goto LAB_0067ae32;
      GVar5 = 0x5f;
    }
    local_AX_2742 = thunk_FUN_0043e640((char)param_1->field_05D7,GVar5,0,-1);
    uVar10 = (uint)(ushort)local_AX_2742;
LAB_0067ae56:
    if (uVar10 == 0) {
      return;
    }
    iVar3 = 700;
    if (iVar4 < 0x2bd) {
      iVar3 = iVar4;
    }
    thunk_FUN_004eb300(param_1->field_05D7,0xdd,0xe2,iVar3);
    return;
  }
  if (-1 < (int)uVar10) goto LAB_0067adca;
  sVar1 = *(short *)&param_1->field_0x5ec;
  if (sVar1 < 1) {
LAB_0067ada3:
    GVar5 = 0;
  }
  else if (sVar1 < 3) {
    GVar5 = 0x52;
  }
  else {
    if (sVar1 != 3) goto LAB_0067ada3;
    GVar5 = 0x5f;
  }
  local_AX_2599 = thunk_FUN_0043e640((char)param_1->field_05D7,GVar5,0,-1);
  uVar10 = (uint)(ushort)local_AX_2599;
LAB_0067adca:
  if (uVar10 == 0) {
    return;
  }
  uVar10 = local_10;
  if (1000 < (int)local_10) {
    uVar10 = 1000;
  }
  thunk_FUN_004eb300(param_1->field_05D7,0xe3,0xe2,uVar10);
  return;
}

