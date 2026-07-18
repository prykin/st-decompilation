
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::SetMine */

undefined4 __thiscall STGroupBoatC::SetMine(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  STGroupBoatC *pSVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 local_6c;
  undefined4 local_68 [16];
  undefined4 local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  STGroupBoatC *local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  local_c = *(int *)(*(int *)(this + 0x29) + 0xc);
  local_18 = 2;
  local_14 = 0;
  local_6c = DAT_00858df8;
  DAT_00858df8 = &local_6c;
  local_1c = this;
  iVar3 = __setjmp3(local_68,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_1c;
  if (iVar3 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      pSVar8 = local_1c + 0x89;
      for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pSVar8 = 0;
        pSVar8 = pSVar8 + 4;
      }
      uVar9 = 0;
      *(undefined4 *)(local_1c + 0x65) = 0;
      *(undefined4 *)(local_1c + 0x2b3) = *(undefined4 *)(local_1c + 0x182);
      *(undefined4 *)(local_1c + 0x2b7) = *(undefined4 *)(local_1c + 0x186);
      *(undefined2 *)(local_1c + 699) = *(undefined2 *)(local_1c + 0x18a);
      local_24 = *(undefined2 *)(local_1c + 0x2b3);
      local_22 = *(undefined2 *)(local_1c + 0x2b5);
      local_28 = *(undefined4 *)(DAT_00802a38 + 0xe4);
      local_10 = local_28;
      if (0 < local_c) {
        do {
          FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar9,&local_8);
          if ((short)local_8 != -1) {
            pvVar4 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                         pSVar2[0x24]),local_8,1);
            if (pvVar4 == (void *)0x0) {
              FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xb1f);
            }
            if (*(int *)(pSVar2 + 0x2b9) == -1) {
              if (*(int *)((int)pvVar4 + 0x7b6) == 0) goto LAB_0049eb44;
LAB_0049eb2a:
              if (*(int *)((int)pvVar4 + 0x7be) < 1) goto LAB_0049eb44;
              local_20 = *(undefined2 *)((int)pvVar4 + 0x4b);
              puVar10 = &local_28;
              iVar3 = 7;
            }
            else {
              if (*(int *)((int)pvVar4 + 0x7b6) == *(int *)(pSVar2 + 0x2b9)) goto LAB_0049eb2a;
LAB_0049eb44:
              puVar10 = &local_10;
              iVar3 = 3;
            }
            thunk_FUN_0045ef00(pvVar4,iVar3,puVar10);
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < local_c);
      }
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0xb3c);
    }
    if (*(uint *)(DAT_00802a38 + 0xe4) % 0x1e == 5) {
      uVar9 = 0;
      if (0 < local_c) {
        do {
          FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar9,&local_8);
          if ((short)local_8 != -1) {
            pvVar4 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(local_8 >> 8),pSVar2[0x24]),local_8,
                                                1);
            if (pvVar4 == (void *)0x0) {
              FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xb43);
            }
            iVar3 = thunk_FUN_0045ff10((int)pvVar4);
            if ((iVar3 == 7) || (uVar5 = thunk_FUN_0045f400(pvVar4,7), uVar5 == 1)) {
              local_14 = local_14 + 1;
              break;
            }
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < local_c);
      }
      if (local_14 == 0) {
        local_18 = 0;
      }
    }
    DAT_00858df8 = (undefined4 *)local_6c;
  }
  else {
    DAT_00858df8 = (undefined4 *)local_6c;
    if (iVar3 != -0x5001fff7) {
      iVar6 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xb4c,0,iVar3,&DAT_007a4ccc);
      if (iVar6 == 0) {
        FUN_006a5e40(iVar3,0,0x7abe3c,0xb4d);
        return 0xffffffff;
      }
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return uVar7;
    }
  }
  return local_18;
}

