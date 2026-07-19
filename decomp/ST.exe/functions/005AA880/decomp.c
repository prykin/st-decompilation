
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\hologram.cpp
   HoloTy::CalcHologram */

undefined4 * __thiscall
HoloTy::CalcHologram
          (HoloTy *this,uint *param_1,uint param_2,int param_3,int param_4,uint param_5,uint param_6
          )

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  longlong lVar10;
  InternalExceptionFrame local_78;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  undefined4 *local_1c;
  uint local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  iVar2 = __setjmp3(local_78.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_78.previous;
    iVar2 = ReportDebugMessage(s_E____titans_Start_hologram_cpp_007cc674,99,0,iVar2,&DAT_007a4ccc,
                               s_HoloTy__CalcHologram_007cc6b4);
    if (iVar2 == 0) {
      return (undefined4 *)0x0;
    }
    pcVar1 = (code *)swi(3);
    puVar5 = (undefined4 *)(*pcVar1)();
    return puVar5;
  }
  uVar3 = param_3 / param_4 + (uint)(param_3 % param_4 != 0);
  uVar7 = param_5 & 0xff;
  *param_1 = uVar3;
  uVar6 = uVar3 + 1 >> 1;
  if (uVar6 < uVar7) {
    return (undefined4 *)0x0;
  }
  local_34 = uVar6;
  local_2c = uVar7;
  local_1c = FUN_006aac10(uVar7 * uVar3 * 4);
  local_c = local_1c;
  if ((local_1c != (undefined4 *)0x0) && (local_14 = 0, uVar6 != 0)) {
    local_30 = param_6 & 0xff;
    local_20 = 0;
    local_10 = 0;
    local_28 = uVar6;
    do {
      local_18 = local_28 - 1;
      iVar4 = 0;
      iVar2 = -1;
      if (local_30 == 0) {
        local_8 = 0;
        if (uVar6 != 0 && -1 < (int)(uVar6 * 2)) {
          local_24 = 0;
          do {
            iVar4 = (local_24 / 2) / (int)uVar6;
            if (iVar4 != iVar2) {
              local_28 = uVar6 * 2 - local_14;
              if (local_8 < (int)local_28) {
                fsin(((float10)local_8 * (float10)_DAT_0079c040) / (float10)(int)local_28);
              }
              lVar10 = __ftol();
              local_c[local_10 + iVar4] = (int)lVar10;
              iVar2 = iVar4;
            }
            local_24 = local_24 + uVar7;
            local_8 = local_8 + 1;
          } while (local_8 < (int)(uVar6 * 2));
        }
      }
      else if (local_30 == 1) {
        if (0 < (int)(uVar6 * 2)) {
          local_24 = 0;
          local_8 = iVar2;
          do {
            iVar2 = (local_24 / 2) / (int)uVar6;
            if (iVar2 != local_8) {
              local_28 = iVar4 - local_18;
              if ((iVar4 < (int)local_18) || ((int)(uVar6 + local_18) <= iVar4)) {
                local_28 = (iVar4 < (int)local_18) - 1 & param_2;
              }
              else {
                fsin(((float10)(int)local_28 * (float10)_DAT_0079c040) / (float10)(int)local_34);
              }
              local_8 = iVar2;
              lVar10 = __ftol();
              local_c[local_10 + local_8] = (int)lVar10;
            }
            iVar4 = iVar4 + 1;
            local_24 = local_24 + uVar7;
          } while (iVar4 < (int)(uVar6 * 2));
        }
      }
      else if (local_30 == 2) {
        local_8 = 0;
        local_28 = local_28 + 10;
        local_24 = 0;
        do {
          iVar4 = local_24 / (int)uVar6;
          if (iVar4 != iVar2) {
            if (local_8 < (int)local_28) {
              fsin(((float10)local_8 * (float10)_DAT_0079c040) / (float10)(int)local_28);
            }
            lVar10 = __ftol();
            local_c[local_10 + iVar4] = (int)lVar10;
            iVar2 = iVar4;
          }
          local_8 = local_8 + 1;
          local_24 = local_24 + uVar7;
        } while (local_8 < (int)uVar6);
      }
      uVar3 = *param_1;
      if ((uVar3 & 1) == 0) {
        iVar2 = (uVar3 - local_20) + -1;
LAB_005aab34:
        puVar5 = local_1c;
        puVar8 = local_c + iVar2 * uVar7;
        for (; uVar9 = local_2c, uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar8 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      else {
        uVar9 = uVar7;
        if (local_14 < (int)(uVar6 - 1)) {
          iVar2 = (uVar3 - local_20) + -2;
          goto LAB_005aab34;
        }
      }
      local_14 = local_14 + 1;
      local_10 = local_10 + uVar9 * 2;
      local_1c = local_1c + uVar9 * 2;
      local_20 = local_20 + 2;
      uVar7 = uVar9;
      local_28 = local_18;
    } while (local_14 < (int)uVar6);
  }
  g_currentExceptionFrame = local_78.previous;
  return local_c;
}

