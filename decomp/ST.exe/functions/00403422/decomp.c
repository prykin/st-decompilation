
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  undefined4 uStack_78;
  undefined4 auStack_74 [16];
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 *puStack_1c;
  uint uStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 *puStack_c;
  int iStack_8;
  
  uStack_78 = DAT_00858df8;
  DAT_00858df8 = &uStack_78;
  iVar2 = __setjmp3(auStack_74,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_78;
    iVar2 = FUN_006ad4d0(s_E____titans_Start_hologram_cpp_007cc674,99,0,iVar2,&DAT_007a4ccc);
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
  uStack_34 = uVar6;
  uStack_2c = uVar7;
  puStack_1c = FUN_006aac10(uVar7 * uVar3 * 4);
  puStack_c = puStack_1c;
  if ((puStack_1c != (undefined4 *)0x0) && (iStack_14 = 0, uVar6 != 0)) {
    uStack_30 = param_6 & 0xff;
    iStack_20 = 0;
    iStack_10 = 0;
    uStack_28 = uVar6;
    do {
      uStack_18 = uStack_28 - 1;
      iVar4 = 0;
      iVar2 = -1;
      if (uStack_30 == 0) {
        iStack_8 = 0;
        if (uVar6 != 0 && -1 < (int)(uVar6 * 2)) {
          iStack_24 = 0;
          do {
            iVar4 = (iStack_24 / 2) / (int)uVar6;
            if (iVar4 != iVar2) {
              uStack_28 = uVar6 * 2 - iStack_14;
              if (iStack_8 < (int)uStack_28) {
                fsin(((float10)iStack_8 * (float10)_DAT_0079c040) / (float10)(int)uStack_28);
              }
              lVar10 = __ftol();
              puStack_c[iStack_10 + iVar4] = (int)lVar10;
              iVar2 = iVar4;
            }
            iStack_24 = iStack_24 + uVar7;
            iStack_8 = iStack_8 + 1;
          } while (iStack_8 < (int)(uVar6 * 2));
        }
      }
      else if (uStack_30 == 1) {
        if (0 < (int)(uVar6 * 2)) {
          iStack_24 = 0;
          iStack_8 = iVar2;
          do {
            iVar2 = (iStack_24 / 2) / (int)uVar6;
            if (iVar2 != iStack_8) {
              uStack_28 = iVar4 - uStack_18;
              if ((iVar4 < (int)uStack_18) || ((int)(uVar6 + uStack_18) <= iVar4)) {
                uStack_28 = (iVar4 < (int)uStack_18) - 1 & param_2;
              }
              else {
                fsin(((float10)(int)uStack_28 * (float10)_DAT_0079c040) / (float10)(int)uStack_34);
              }
              iStack_8 = iVar2;
              lVar10 = __ftol();
              puStack_c[iStack_10 + iStack_8] = (int)lVar10;
            }
            iVar4 = iVar4 + 1;
            iStack_24 = iStack_24 + uVar7;
          } while (iVar4 < (int)(uVar6 * 2));
        }
      }
      else if (uStack_30 == 2) {
        iStack_8 = 0;
        uStack_28 = uStack_28 + 10;
        iStack_24 = 0;
        do {
          iVar4 = iStack_24 / (int)uVar6;
          if (iVar4 != iVar2) {
            if (iStack_8 < (int)uStack_28) {
              fsin(((float10)iStack_8 * (float10)_DAT_0079c040) / (float10)(int)uStack_28);
            }
            lVar10 = __ftol();
            puStack_c[iStack_10 + iVar4] = (int)lVar10;
            iVar2 = iVar4;
          }
          iStack_8 = iStack_8 + 1;
          iStack_24 = iStack_24 + uVar7;
        } while (iStack_8 < (int)uVar6);
      }
      uVar3 = *param_1;
      if ((uVar3 & 1) == 0) {
        iVar2 = (uVar3 - iStack_20) + -1;
LAB_005aab34:
        puVar5 = puStack_1c;
        puVar8 = puStack_c + iVar2 * uVar7;
        for (; uVar9 = uStack_2c, uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar8 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      else {
        uVar9 = uVar7;
        if (iStack_14 < (int)(uVar6 - 1)) {
          iVar2 = (uVar3 - iStack_20) + -2;
          goto LAB_005aab34;
        }
      }
      iStack_14 = iStack_14 + 1;
      iStack_10 = iStack_10 + uVar9 * 2;
      puStack_1c = puStack_1c + uVar9 * 2;
      iStack_20 = iStack_20 + 2;
      uVar7 = uVar9;
      uStack_28 = uStack_18;
    } while (iStack_14 < (int)uVar6);
  }
  DAT_00858df8 = (undefined4 *)uStack_78;
  return puStack_c;
}

