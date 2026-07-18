
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0052dd20(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 extraout_ECX;
  int iVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_5c;
  undefined4 local_58 [16];
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  byte local_5;
  
  local_5c = DAT_00858df8;
  DAT_00858df8 = &local_5c;
  iVar2 = __setjmp3(local_58,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_5c;
    iVar7 = FUN_006ad4d0(s_E____titans_Andrey_mpopup_cpp_007c6f84,0x100,0,iVar2,&DAT_007a4ccc);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    FUN_006a5e40(iVar2,0,0x7c6f84,0x100);
    return 0xffff;
  }
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
    uVar10 = (uint)DAT_00807347;
    iVar2 = FUN_006e51b0(0x807620);
    if (((uVar10 * -1000 + 3000) * (3 - uVar10) < (uint)(iVar2 - *(int *)(local_18 + 0x9d))) ||
       ((int)(uint)DAT_00807346 < *(int *)(*(int *)(local_18 + 0x98) + 8))) {
      uVar6 = FUN_006e51b0(0x807620);
      *(undefined4 *)(local_18 + 0x9d) = uVar6;
      if (*(char *)(local_18 + 0x9c) != '\0') {
        FUN_006b7830(*(int *)(local_18 + 0x98),0);
        puVar3 = *(undefined4 **)(local_18 + 0x90);
        FUN_006b55f0(puVar3,0,0,0,(int)puVar3,0,0,0x13,puVar3[1],
                     (uint)*(byte *)(local_18 + 0x9c) * 0x13 + -0x13);
        FUN_006b4170(*(int *)(local_18 + 0x90),0,0,(uint)*(byte *)(local_18 + 0x9c) * 0x13 + -0x13,
                     *(int *)(*(int *)(local_18 + 0x90) + 4),0x13,0x89);
        iVar2 = *(int *)(local_18 + 0x98);
        if (*(int *)(iVar2 + 8) <= (int)(uint)DAT_00807346) {
          *(undefined1 *)(local_18 + 0x9c) = *(undefined1 *)(iVar2 + 8);
        }
        if ((int)(uint)DAT_00807346 <= *(int *)(iVar2 + 8)) {
          thunk_FUN_0052d200(CONCAT31((int3)((uint)extraout_ECX >> 8),DAT_00807346 - 1));
        }
        local_5 = 0;
        local_c = -0x18 - local_18;
        local_14 = 0;
        local_10 = 0x1e;
        puVar4 = (uint *)(local_18 + 0x18);
        do {
          iVar2 = local_14;
          if ((DAT_00807342 == 0) || (*(byte *)(local_18 + 0x9c) <= local_5)) {
LAB_0052e184:
            puVar4[0xf] = 0;
            FUN_006b2800((int)DAT_008075a8,*puVar4,0,0x13);
            FUN_006b3af0(DAT_008075a8,*puVar4);
          }
          else {
            iVar7 = *(int *)(local_18 + 0x98);
            if (local_14 < *(int *)(iVar7 + 8)) {
              iVar9 = *(int *)(*(int *)(iVar7 + 0x14) + local_c + (int)puVar4);
            }
            else {
              iVar9 = 0;
            }
            if (iVar9 == 0) goto LAB_0052e184;
            if (local_14 < *(int *)(iVar7 + 8)) {
              puVar5 = *(uint **)(*(int *)(iVar7 + 0x14) + local_c + (int)puVar4);
            }
            else {
              puVar5 = (uint *)0x0;
            }
            uVar8 = FUN_00711110(*(void **)(local_18 + 0x94),puVar5);
            uVar10 = *(uint *)(*(int *)(local_18 + 0x90) + 4);
            if ((int)uVar10 <= (int)uVar8) {
              uVar8 = uVar10;
            }
            puVar4[0xf] = uVar8;
            FUN_006b2800((int)DAT_008075a8,*puVar4,uVar8,0x13);
            FUN_006b3640(DAT_008075a8,*puVar4,0xffffffff,0xd,local_10);
            FUN_006b3430(DAT_008075a8,*puVar4);
          }
          local_5 = local_5 + 1;
          local_14 = iVar2 + 1;
          puVar4 = puVar4 + 1;
          local_10 = local_10 + 0x13;
        } while (local_5 < 0xf);
      }
    }
    break;
  case 2:
    iVar2 = thunk_FUN_0052cce0(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    *(int *)(local_18 + 0x94) = iVar2;
    *(undefined4 *)(iVar2 + 0x7e) = 1;
    *(undefined2 *)(iVar2 + 0x9e) = 0;
    *(undefined1 *)(iVar2 + 0x9e) = DAT_007c6ff0;
    iVar2 = 1;
    puVar3 = (undefined4 *)(DAT_0080679c + 0x28);
    uVar10 = FUN_006b4fe0(DAT_0080679c);
    iVar2 = FUN_006b50c0((&DAT_00807570)[(_DAT_00807348 & 0xff) * 4],0x11d,
                         (uint)*(ushort *)(DAT_0080679c + 0xe),uVar10,puVar3,iVar2);
    *(int *)(local_18 + 0x90) = iVar2;
    uVar10 = *(uint *)(iVar2 + 0x14);
    if (uVar10 == 0) {
      uVar10 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(iVar2 + 8);
    }
    puVar3 = (undefined4 *)FUN_006b4fa0(iVar2);
    for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar3 = 0x89898989;
      puVar3 = puVar3 + 1;
    }
    uVar8 = 0x1e;
    local_10 = 0xf;
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar3 = 0x89;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    puVar4 = (uint *)(local_18 + 0x18);
    do {
      FUN_006b2330((uint)DAT_008075a8,puVar4,8,0x405c22,puVar4[0xf],0x13,local_18);
      FUN_006b1bd0((int)DAT_008075a8,*puVar4);
      FUN_006b3640(DAT_008075a8,*puVar4,0xffffffff,0xd,uVar8);
      FUN_006b3af0(DAT_008075a8,*puVar4);
      puVar4 = puVar4 + 1;
      uVar8 = uVar8 + 0x13;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
    puVar4 = FUN_006b54f0((uint *)0x0,10,10);
    *(uint **)(local_18 + 0x98) = puVar4;
    uVar6 = FUN_006e51b0(0x807620);
    *(undefined4 *)(local_18 + 0x9d) = uVar6;
    DAT_008016d8 = local_18;
    break;
  case 3:
    DAT_008016d8 = 0;
    puVar4 = (uint *)(local_18 + 0x18);
    iVar2 = 0xf;
    do {
      if (*puVar4 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,*puVar4);
        *puVar4 = 0xffffffff;
      }
      puVar4 = puVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (*(int *)(local_18 + 0x90) != 0) {
      FUN_006ab060((undefined4 *)(local_18 + 0x90));
    }
    if (*(uint **)(local_18 + 0x94) != (uint *)0x0) {
      FUN_00710560(*(uint **)(local_18 + 0x94));
      *(undefined4 *)(local_18 + 0x94) = 0;
    }
    if (*(byte **)(local_18 + 0x98) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(local_18 + 0x98));
      *(undefined4 *)(local_18 + 0x98) = 0;
    }
    break;
  case 5:
    local_10 = 0;
    iVar2 = -0x18 - local_18;
    uVar10 = 0x1e;
    puVar4 = (uint *)(local_18 + 0x18);
    local_14 = 0xf;
    local_c = iVar2;
    do {
      if (*puVar4 != 0xffffffff) {
        if ((int)local_10 < *(int *)(*(int *)(local_18 + 0x98) + 8)) {
          iVar7 = *(int *)(*(int *)(*(int *)(local_18 + 0x98) + 0x14) + iVar2 + (int)puVar4);
        }
        else {
          iVar7 = 0;
        }
        if (iVar7 != 0) {
          FUN_006b3640(DAT_008075a8,*puVar4,0xffffffff,0xd,uVar10);
          iVar2 = local_c;
        }
      }
      local_10 = local_10 + 1;
      puVar4 = puVar4 + 1;
      uVar10 = uVar10 + 0x13;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    local_14 = 0;
  }
  DAT_00858df8 = (undefined4 *)local_5c;
  uVar6 = FUN_006e5fd0();
  return uVar6;
}

