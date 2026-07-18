
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::Recharge */

undefined4 __thiscall STGroupBoatC::Recharge(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_EDX;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  STGroupBoatC *pSVar9;
  undefined4 local_68;
  undefined4 local_64 [16];
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  STGroupBoatC *local_14;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  local_8 = *(uint *)(*(int *)(this + 0x29) + 0xc);
  uVar8 = 0;
  local_10 = 2;
  local_68 = DAT_00858df8;
  DAT_00858df8 = &local_68;
  local_14 = this;
  iVar3 = __setjmp3(local_64,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_14;
  if (iVar3 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      pSVar9 = local_14 + 0x89;
      for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pSVar9 = 0;
        pSVar9 = pSVar9 + 4;
      }
      *(undefined4 *)(local_14 + 0x65) = 0;
      *(undefined4 *)(local_14 + 0x2ce) = *(undefined4 *)(local_14 + 0x199);
      *(undefined4 *)(local_14 + 0x2d2) = *(undefined4 *)(local_14 + 0x19d);
      *(undefined2 *)(local_14 + 0x2d6) = *(undefined2 *)(local_14 + 0x1a1);
      local_20 = *(undefined4 *)(local_14 + 0x2ce);
      local_24 = *(undefined4 *)(DAT_00802a38 + 0xe4);
      local_1c = *(undefined2 *)(local_14 + 0x2d2);
      local_18 = *(undefined2 *)(local_14 + 0x2d6);
      local_1a = *(undefined2 *)(local_14 + 0x2d4);
      if (0 < (int)local_8) {
        do {
          FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar8,&local_c);
          if ((short)local_c != -1) {
            pvVar4 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                         pSVar2[0x24]),local_c,1);
            if (pvVar4 == (void *)0x0) {
              FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xc11);
            }
            thunk_FUN_0045ef00(pvVar4,0x16,&local_24);
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)local_8);
      }
    }
    if (*(uint *)(DAT_00802a38 + 0xe4) % 0x19 == 7) {
      uVar8 = 0;
      if (0 < (int)local_8) {
        do {
          FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar8,&local_c);
          if ((short)local_c != -1) {
            pvVar4 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(local_c >> 8),pSVar2[0x24]),local_c,
                                                1);
            if (pvVar4 == (void *)0x0) {
              FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xc1c);
            }
            iVar3 = thunk_FUN_0045ff10((int)pvVar4);
            if (iVar3 == 0x16) break;
            uVar5 = thunk_FUN_0045f400(pvVar4,0x16);
            if (uVar5 == 1) break;
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)local_8);
      }
      if (uVar8 == local_8) {
        local_10 = 0;
      }
    }
    DAT_00858df8 = (undefined4 *)local_68;
  }
  else {
    DAT_00858df8 = (undefined4 *)local_68;
    if (iVar3 != -0x5001fff7) {
      iVar6 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xc25,0,iVar3,&DAT_007a4ccc);
      if (iVar6 != 0) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return uVar7;
      }
      FUN_006a5e40(iVar3,0,0x7abe3c,0xc26);
      return 0xffffffff;
    }
  }
  return local_10;
}

