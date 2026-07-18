
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\mpopup.cpp
   PopUpTy::GetMessage */

undefined4 __thiscall PopUpTy::GetMessage(PopUpTy *this,int param_1)

{
  code *pcVar1;
  PopUpTy *this_00;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 extraout_ECX;
  int iVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  PopUpTy *pPVar10;
  undefined4 local_5c;
  undefined4 local_58 [16];
  PopUpTy *local_18;
  int local_14;
  uint local_10;
  int local_c;
  PopUpTy local_5;
  
  local_5c = DAT_00858df8;
  DAT_00858df8 = &local_5c;
  local_18 = this;
  iVar2 = __setjmp3(local_58,0,unaff_EDI,unaff_ESI);
  this_00 = local_18;
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_5c;
    iVar6 = FUN_006ad4d0(s_E____titans_Andrey_mpopup_cpp_007c6f84,0x100,0,iVar2,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    FUN_006a5e40(iVar2,0,0x7c6f84,0x100);
    return 0xffff;
  }
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
    uVar9 = (uint)DAT_00807347;
    iVar2 = FUN_006e51b0(0x807620);
    if (((uVar9 * -1000 + 3000) * (3 - uVar9) < (uint)(iVar2 - *(int *)(this_00 + 0x9d))) ||
       ((int)(uint)DAT_00807346 < *(int *)(*(int *)(this_00 + 0x98) + 8))) {
      uVar5 = FUN_006e51b0(0x807620);
      *(undefined4 *)(this_00 + 0x9d) = uVar5;
      if (this_00[0x9c] != (PopUpTy)0x0) {
        FUN_006b7830(*(int *)(this_00 + 0x98),0);
        puVar3 = *(undefined4 **)(this_00 + 0x90);
        FUN_006b55f0(puVar3,0,0,0,(int)puVar3,0,0,0x13,puVar3[1],
                     (uint)(byte)this_00[0x9c] * 0x13 + -0x13);
        FUN_006b4170(*(int *)(this_00 + 0x90),0,0,(uint)(byte)this_00[0x9c] * 0x13 + -0x13,
                     *(int *)(*(int *)(this_00 + 0x90) + 4),0x13,0x89);
        iVar2 = *(int *)(this_00 + 0x98);
        if (*(int *)(iVar2 + 8) <= (int)(uint)DAT_00807346) {
          this_00[0x9c] = *(PopUpTy *)(iVar2 + 8);
        }
        if ((int)(uint)DAT_00807346 <= *(int *)(iVar2 + 8)) {
          OutStr(this_00,CONCAT31((int3)((uint)extraout_ECX >> 8),DAT_00807346 - 1));
        }
        local_5 = (PopUpTy)0x0;
        local_c = -0x18 - (int)this_00;
        local_14 = 0;
        local_10 = 0x1e;
        pPVar10 = this_00 + 0x18;
        do {
          iVar2 = local_14;
          if ((DAT_00807342 == 0) || ((byte)this_00[0x9c] <= (byte)local_5)) {
LAB_0052e184:
            *(uint *)(pPVar10 + 0x3c) = 0;
            FUN_006b2800((int)DAT_008075a8,*(uint *)pPVar10,0,0x13);
            FUN_006b3af0(DAT_008075a8,*(uint *)pPVar10);
          }
          else {
            iVar6 = *(int *)(this_00 + 0x98);
            if (local_14 < *(int *)(iVar6 + 8)) {
              iVar8 = *(int *)(pPVar10 + *(int *)(iVar6 + 0x14) + local_c);
            }
            else {
              iVar8 = 0;
            }
            if (iVar8 == 0) goto LAB_0052e184;
            if (local_14 < *(int *)(iVar6 + 8)) {
              puVar4 = *(uint **)(pPVar10 + *(int *)(iVar6 + 0x14) + local_c);
            }
            else {
              puVar4 = (uint *)0x0;
            }
            uVar9 = FUN_00711110(*(void **)(this_00 + 0x94),puVar4);
            if ((int)*(uint *)(*(int *)(this_00 + 0x90) + 4) <= (int)uVar9) {
              uVar9 = *(uint *)(*(int *)(this_00 + 0x90) + 4);
            }
            *(uint *)(pPVar10 + 0x3c) = uVar9;
            FUN_006b2800((int)DAT_008075a8,*(uint *)pPVar10,uVar9,0x13);
            FUN_006b3640(DAT_008075a8,*(uint *)pPVar10,0xffffffff,0xd,local_10);
            FUN_006b3430(DAT_008075a8,*(uint *)pPVar10);
          }
          local_5 = (PopUpTy)((char)local_5 + 1);
          local_14 = iVar2 + 1;
          pPVar10 = pPVar10 + 4;
          local_10 = local_10 + 0x13;
        } while ((byte)local_5 < 0xf);
      }
    }
    break;
  case 2:
    iVar2 = thunk_FUN_0052cce0(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    *(int *)(this_00 + 0x94) = iVar2;
    *(undefined4 *)(iVar2 + 0x7e) = 1;
    *(undefined2 *)(iVar2 + 0x9e) = 0;
    *(undefined1 *)(iVar2 + 0x9e) = DAT_007c6ff0;
    iVar2 = 1;
    puVar3 = (undefined4 *)(DAT_0080679c + 0x28);
    uVar9 = FUN_006b4fe0(DAT_0080679c);
    iVar2 = FUN_006b50c0((&DAT_00807570)[(_DAT_00807348 & 0xff) * 4],0x11d,
                         (uint)*(ushort *)(DAT_0080679c + 0xe),uVar9,puVar3,iVar2);
    *(int *)(this_00 + 0x90) = iVar2;
    uVar9 = *(uint *)(iVar2 + 0x14);
    if (uVar9 == 0) {
      uVar9 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar2 + 8);
    }
    puVar3 = (undefined4 *)FUN_006b4fa0(iVar2);
    for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = 0x89898989;
      puVar3 = puVar3 + 1;
    }
    uVar7 = 0x1e;
    local_10 = 0xf;
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar3 = 0x89;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    pPVar10 = this_00 + 0x18;
    do {
      FUN_006b2330((uint)DAT_008075a8,(uint *)pPVar10,8,0x405c22,*(uint *)(pPVar10 + 0x3c),0x13,
                   (uint)this_00);
      FUN_006b1bd0((int)DAT_008075a8,*(uint *)pPVar10);
      FUN_006b3640(DAT_008075a8,*(uint *)pPVar10,0xffffffff,0xd,uVar7);
      FUN_006b3af0(DAT_008075a8,*(uint *)pPVar10);
      pPVar10 = pPVar10 + 4;
      uVar7 = uVar7 + 0x13;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
    puVar4 = FUN_006b54f0((uint *)0x0,10,10);
    *(uint **)(this_00 + 0x98) = puVar4;
    uVar5 = FUN_006e51b0(0x807620);
    *(undefined4 *)(this_00 + 0x9d) = uVar5;
    DAT_008016d8 = this_00;
    break;
  case 3:
    DAT_008016d8 = (PopUpTy *)0x0;
    pPVar10 = local_18 + 0x18;
    iVar2 = 0xf;
    do {
      if (*(uint *)pPVar10 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,*(uint *)pPVar10);
        *(uint *)pPVar10 = 0xffffffff;
      }
      pPVar10 = pPVar10 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (*(int *)(this_00 + 0x90) != 0) {
      FUN_006ab060((undefined4 *)(this_00 + 0x90));
    }
    if (*(uint **)(this_00 + 0x94) != (uint *)0x0) {
      FUN_00710560(*(uint **)(this_00 + 0x94));
      *(undefined4 *)(this_00 + 0x94) = 0;
    }
    if (*(byte **)(this_00 + 0x98) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(this_00 + 0x98));
      *(undefined4 *)(this_00 + 0x98) = 0;
    }
    break;
  case 5:
    local_10 = 0;
    iVar2 = -0x18 - (int)local_18;
    uVar9 = 0x1e;
    pPVar10 = local_18 + 0x18;
    local_14 = 0xf;
    local_c = iVar2;
    do {
      if (*(uint *)pPVar10 != 0xffffffff) {
        if ((int)local_10 < *(int *)(*(int *)(this_00 + 0x98) + 8)) {
          iVar6 = *(int *)(pPVar10 + *(int *)(*(int *)(this_00 + 0x98) + 0x14) + iVar2);
        }
        else {
          iVar6 = 0;
        }
        if (iVar6 != 0) {
          FUN_006b3640(DAT_008075a8,*(uint *)pPVar10,0xffffffff,0xd,uVar9);
          iVar2 = local_c;
        }
      }
      local_10 = local_10 + 1;
      pPVar10 = pPVar10 + 4;
      uVar9 = uVar9 + 0x13;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    local_14 = 0;
  }
  DAT_00858df8 = (undefined4 *)local_5c;
  uVar5 = FUN_006e5fd0();
  return uVar5;
}

