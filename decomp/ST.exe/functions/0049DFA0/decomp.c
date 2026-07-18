
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpLoadObj */

undefined4 __thiscall STGroupBoatC::GrpLoadObj(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  STGroupBoatC *pSVar10;
  uint uVar11;
  undefined4 local_84;
  undefined4 local_80 [16];
  undefined4 local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined4 local_36;
  STGroupBoatC *local_30;
  int local_2c;
  int local_28;
  uint *local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint *local_14;
  int *local_10;
  uint local_c;
  int *local_8;
  
  local_10 = *(int **)(*(int *)(this + 0x29) + 0xc);
  local_14 = (uint *)0x0;
  local_24 = (uint *)0x0;
  local_28 = 0;
  local_2c = 0;
  local_18 = 2;
  local_84 = DAT_00858df8;
  DAT_00858df8 = &local_84;
  local_30 = this;
  iVar3 = __setjmp3(local_80,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_30;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_84;
    if (iVar3 == -0x5001fff7) {
      return local_18;
    }
    iVar7 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xaa0,0,iVar3,&DAT_007a4ccc);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      uVar8 = (*pcVar1)();
      return uVar8;
    }
    FUN_006a5e40(iVar3,0,0x7abe3c,0xaa1);
    return 0xffffffff;
  }
  if ((param_1 != 1) && (param_1 != 0)) goto LAB_0049e26d;
  pSVar10 = local_30 + 0x89;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pSVar10 = 0;
    pSVar10 = pSVar10 + 4;
  }
  *(undefined4 *)(local_30 + 0x65) = 0;
  iVar3 = FUN_006e62d0(DAT_00802a38,*(int *)(local_30 + 0x178),(int *)&local_8);
  if (iVar3 == -4) {
    return 0;
  }
  thunk_FUN_004162f0(local_8,(undefined2 *)(pSVar2 + 0x2a3),(undefined2 *)(pSVar2 + 0x2a5),
                     (undefined2 *)(pSVar2 + 0x2a7));
  local_20 = 0;
  *(int *)(pSVar2 + 0x2a9) = local_8[6];
  local_40 = *(undefined4 *)((int)DAT_00802a38 + 0xe4);
  piVar9 = local_8;
  puVar5 = local_24;
  local_1c = local_40;
  if (0 < (int)local_10) {
    do {
      FUN_006acc70(*(int *)(pSVar2 + 0x29),local_20,&local_c);
      if ((short)local_c != -1) {
        local_8 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar2[0x24]),
                                            local_c,1);
        if (local_8 == (int *)0x0) {
          FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xa5b);
        }
        iVar3 = (**(code **)(*local_8 + 0xf8))();
        if (iVar3 != 0) {
          iVar3 = thunk_FUN_00490d90((int)local_8);
          if (iVar3 == 0) {
            iVar3 = (**(code **)(*local_8 + 0x2c))();
            if ((((iVar3 != 7) && (iVar3 != 0x13)) && (iVar3 != 0x1b)) ||
               (iVar3 = thunk_FUN_00492370((int)local_8), iVar3 != 0)) {
              thunk_FUN_0045ef00(local_8,3,&local_1c);
              goto LAB_0049e1aa;
            }
            local_3c = *(undefined2 *)(pSVar2 + 0x2a3);
            local_3a = *(undefined2 *)(pSVar2 + 0x2a5);
            local_38 = *(undefined2 *)(pSVar2 + 0x2a7);
            local_36 = *(undefined4 *)(pSVar2 + 0x2a9);
            thunk_FUN_0045ef00(local_8,0xf,&local_40);
            puVar4 = local_14;
            if (local_14 == (uint *)0x0) {
              puVar4 = FUN_006ae290((uint *)0x0,1,2,1);
              local_14 = puVar4;
            }
          }
          else {
            puVar4 = puVar5;
            if (puVar5 == (uint *)0x0) {
              puVar5 = FUN_006ae290((uint *)0x0,1,2,1);
              puVar4 = puVar5;
              local_24 = puVar5;
            }
          }
          FUN_006ae1c0(puVar4,&local_c);
        }
      }
LAB_0049e1aa:
      local_20 = local_20 + 1;
      piVar9 = local_10;
    } while ((int)local_20 < (int)local_10);
  }
  puVar4 = local_14;
  if (local_14 == (uint *)0x0) {
LAB_0049e1de:
    if (puVar5 != (uint *)0x0) {
      local_10 = (int *)puVar5[3];
      uVar11 = 0;
      if (0 < (int)local_10) {
        do {
          FUN_006acc70((int)puVar5,uVar11,&local_c);
          local_8 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),pSVar2[0x24])
                                              ,local_c,1);
          thunk_FUN_0045ef00(local_8,3,&local_1c);
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)local_10);
      }
      local_18 = 0;
    }
    puVar4 = local_14;
    if (local_14 != (uint *)0x0) goto LAB_0049e241;
    if (puVar5 == (uint *)0x0) {
      local_18 = 0;
    }
LAB_0049e23d:
    if (puVar4 != (uint *)0x0) goto LAB_0049e241;
  }
  else {
    if (puVar5 != (uint *)0x0) {
      STAllPlayersC::RegisterPGPair
                (DAT_007fa174,CONCAT31((int3)((uint)piVar9 >> 8),pSVar2[0x24]),local_14,puVar5);
      goto LAB_0049e23d;
    }
    if (local_14 == (uint *)0x0) goto LAB_0049e1de;
LAB_0049e241:
    FUN_006ae110((byte *)puVar4);
  }
  if (puVar5 != (uint *)0x0) {
    FUN_006ae110((byte *)puVar5);
  }
  FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0xa86);
LAB_0049e26d:
  if (*(uint *)((int)DAT_00802a38 + 0xe4) % 0x14 == 0) {
    uVar11 = 0;
    if (0 < (int)local_10) {
      do {
        FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar11,&local_c);
        if ((short)local_c != -1) {
          local_8 = (int *)thunk_FUN_0042b620(CONCAT31((int3)(local_c >> 8),pSVar2[0x24]),local_c,1)
          ;
          if (local_8 == (int *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xa8e);
          }
          iVar3 = (**(code **)(*local_8 + 0xf8))();
          if ((iVar3 != 0) &&
             (((iVar3 = (**(code **)(*local_8 + 0x2c))(), iVar3 == 7 || (iVar3 == 0x13)) ||
              (iVar3 == 0x1b)))) {
            local_28 = 1;
            iVar3 = thunk_FUN_00492370((int)local_8);
            if (iVar3 == *(int *)(pSVar2 + 0x2a9)) {
              local_18 = 0;
              FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0xa95);
            }
            iVar3 = thunk_FUN_0045ff10((int)local_8);
            if ((iVar3 == 0xf) || (uVar6 = thunk_FUN_0045f400(local_8,0xf), uVar6 == 1)) {
              local_2c = 1;
            }
          }
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)local_10);
    }
    if ((local_28 == 0) || (local_2c == 0)) {
      local_18 = 0;
    }
  }
  DAT_00858df8 = (undefined4 *)local_84;
  return local_18;
}

