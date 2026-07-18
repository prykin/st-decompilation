
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::Bring */

uint * __thiscall STGroupBoatC::Bring(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  int *this_00;
  uint *puVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  undefined4 unaff_ESI;
  uint *puVar9;
  void *unaff_EDI;
  STGroupBoatC *pSVar10;
  uint uVar11;
  undefined4 local_70;
  undefined4 local_6c [16];
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  STGroupBoatC *local_20;
  uint *local_1c;
  undefined4 local_18;
  uint *local_14;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  local_10 = *(uint *)(*(int *)(this + 0x29) + 0xc);
  local_14 = (uint *)0x0;
  local_c = (uint *)0x0;
  local_1c = (uint *)0x2;
  local_70 = DAT_00858df8;
  DAT_00858df8 = &local_70;
  local_20 = this;
  iVar3 = __setjmp3(local_6c,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_20;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_70;
    if (iVar3 == -0x5001fff7) {
      return local_1c;
    }
    iVar8 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xcb0,0,iVar3,&DAT_007a4ccc);
    if (iVar8 != 0) {
      pcVar1 = (code *)swi(3);
      puVar4 = (uint *)(*pcVar1)();
      return puVar4;
    }
    FUN_006a5e40(iVar3,0,0x7abe3c,0xcb1);
    return (uint *)0xffffffff;
  }
  if ((param_1 != 0) && (param_1 != 1)) goto LAB_0049fe51;
  pSVar10 = local_20 + 0x89;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pSVar10 = 0;
    pSVar10 = pSVar10 + 4;
  }
  uVar11 = 0;
  *(undefined4 *)(local_20 + 0x65) = 0;
  *(undefined4 *)(local_20 + 0x2e8) = *(undefined4 *)(local_20 + 0x1b3);
  *(undefined2 *)(local_20 + 0x2ec) = *(undefined2 *)(local_20 + 0x1b7);
  local_28 = *(undefined2 *)(local_20 + 0x2e8);
  local_26 = *(undefined2 *)(local_20 + 0x2ea);
  local_2c = *(undefined4 *)(DAT_00802a38 + 0xe4);
  local_24 = *(undefined2 *)(local_20 + 0x2ec);
  local_18 = local_2c;
  if (0 < (int)local_10) {
    do {
      FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar11,&local_8);
      if ((short)local_8 != -1) {
        this_00 = (int *)thunk_FUN_0042b620(CONCAT31((int3)(local_8 >> 8),pSVar2[0x24]),local_8,1);
        if (this_00 == (int *)0x0) {
          FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xc79);
        }
        iVar3 = (**(code **)(*this_00 + 0x2c))();
        if (((iVar3 == 7) || (iVar3 = (**(code **)(*this_00 + 0x2c))(), iVar3 == 0x13)) ||
           (iVar3 = (**(code **)(*this_00 + 0x2c))(), iVar3 == 0x1b)) {
          thunk_FUN_0045ef00(this_00,0x17,&local_2c);
          puVar4 = local_14;
          if (local_14 == (uint *)0x0) {
            puVar4 = FUN_006ae290((uint *)0x0,1,2,1);
            local_14 = puVar4;
          }
        }
        else {
          iVar3 = thunk_FUN_00490d90((int)this_00);
          if (iVar3 == 0) {
            thunk_FUN_0045ef00(this_00,3,&local_18);
            goto LAB_0049fd94;
          }
          puVar4 = local_c;
          if (local_c == (uint *)0x0) {
            puVar4 = FUN_006ae290((uint *)0x0,1,2,1);
            local_c = puVar4;
          }
        }
        FUN_006ae1c0(puVar4,&local_8);
      }
LAB_0049fd94:
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)local_10);
  }
  puVar9 = local_c;
  puVar4 = local_14;
  if ((local_14 == (uint *)0x0) || (local_c == (uint *)0x0)) {
    if (local_14 == (uint *)0x0) {
      if (local_c != (uint *)0x0) {
        uVar11 = local_c[3];
        uVar7 = 0;
        local_10 = uVar11;
        if (0 < (int)uVar11) {
          do {
            uVar5 = FUN_006acc70((int)local_c,uVar7,&local_8);
            pvVar6 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(uVar5 >> 8),pSVar2[0x24]),local_8,1)
            ;
            thunk_FUN_0045ef00(pvVar6,3,&local_18);
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar11);
        }
        local_1c = (uint *)0x0;
      }
      puVar9 = local_c;
      puVar4 = local_14;
      if (local_14 == (uint *)0x0) {
        if (local_c == (uint *)0x0) {
          local_1c = local_c;
        }
        goto LAB_0049fe22;
      }
    }
LAB_0049fe26:
    FUN_006ae110((byte *)puVar4);
  }
  else {
    STAllPlayersC::RegisterPGPair
              (DAT_007fa174,CONCAT31((int3)(local_10 >> 8),pSVar2[0x24]),local_14,local_c);
LAB_0049fe22:
    if (puVar4 != (uint *)0x0) goto LAB_0049fe26;
  }
  if (puVar9 != (uint *)0x0) {
    FUN_006ae110((byte *)puVar9);
  }
  FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0xca0);
LAB_0049fe51:
  if (*(uint *)(DAT_00802a38 + 0xe4) % 0x19 == 7) {
    uVar11 = 0;
    if (0 < (int)local_10) {
      do {
        FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar11,&local_8);
        if ((short)local_8 != -1) {
          pvVar6 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(local_8 >> 8),pSVar2[0x24]),local_8,1)
          ;
          if (pvVar6 == (void *)0x0) {
            FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xca7);
          }
          iVar3 = thunk_FUN_0045ff10((int)pvVar6);
          if ((iVar3 == 0x17) || (uVar7 = thunk_FUN_0045f400(pvVar6,0x17), uVar7 == 1)) break;
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)local_10);
    }
    if (uVar11 == local_10) {
      local_1c = (uint *)0x0;
    }
  }
  DAT_00858df8 = (undefined4 *)local_70;
  return local_1c;
}

