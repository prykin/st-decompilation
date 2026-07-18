
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::DCBomb */

undefined4 __thiscall STGroupBoatC::DCBomb(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  uint *puVar3;
  int iVar4;
  void *pvVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  STGroupBoatC *pSVar10;
  uint uVar11;
  undefined4 local_78;
  undefined4 local_74 [16];
  undefined4 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  STGroupBoatC *local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  int local_18;
  uint *local_14;
  int local_10;
  uint *local_c;
  uint local_8;
  
  local_10 = *(int *)(*(int *)(this + 0x29) + 0xc);
  local_c = (uint *)0x0;
  local_14 = (uint *)0x0;
  local_24 = 2;
  local_18 = 0;
  local_78 = DAT_00858df8;
  DAT_00858df8 = &local_78;
  local_28 = this;
  iVar4 = __setjmp3(local_74,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_28;
  if (iVar4 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      pSVar10 = local_28 + 0x89;
      for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pSVar10 = 0;
        pSVar10 = pSVar10 + 4;
      }
      *(undefined4 *)(local_28 + 0x65) = 0;
      local_20 = 0;
      *(undefined4 *)(local_28 + 0x2bd) = *(undefined4 *)(local_28 + 0x18c);
      *(undefined2 *)(local_28 + 0x2c1) = *(undefined2 *)(local_28 + 400);
      local_30 = *(undefined2 *)(local_28 + 0x2bd);
      local_34 = *(undefined4 *)(DAT_00802a38 + 0xe4);
      local_2c = *(undefined2 *)(local_28 + 0x2c1);
      local_2e = *(undefined2 *)(local_28 + 0x2bf);
      puVar6 = local_14;
      local_1c = local_34;
      if (0 < local_10) {
        do {
          FUN_006acc70(*(int *)(pSVar2 + 0x29),local_20,&local_8);
          if ((short)local_8 != -1) {
            pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                         pSVar2[0x24]),local_8,1);
            if (pvVar5 == (void *)0x0) {
              FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xb6b);
            }
            if ((*(int *)((int)pvVar5 + 0x6f7) == 4) && (0 < *(int *)((int)pvVar5 + 0x7be))) {
              if (puVar6 == (uint *)0x0) {
                puVar6 = FUN_006ae290((uint *)0x0,1,2,1);
                local_14 = puVar6;
              }
              FUN_006ae1c0(puVar6,&local_8);
              thunk_FUN_0045ef00(pvVar5,10,&local_34);
            }
            else {
              iVar4 = thunk_FUN_00490d90((int)pvVar5);
              if (iVar4 == 0) {
                thunk_FUN_0045ef00(pvVar5,3,&local_1c);
              }
              else {
                if (local_c == (uint *)0x0) {
                  local_c = FUN_006ae290((uint *)0x0,1,2,1);
                }
                FUN_006ae1c0(local_c,&local_8);
              }
            }
          }
          local_20 = local_20 + 1;
        } while ((int)local_20 < local_10);
      }
      puVar3 = local_c;
      STAllPlayersC::RegisterPGPair
                (DAT_007fa174,CONCAT31((int3)((uint)local_10 >> 8),pSVar2[0x24]),puVar6,local_c);
      if (puVar6 != (uint *)0x0) {
        FUN_006ae110((byte *)puVar6);
      }
      if (puVar3 != (uint *)0x0) {
        FUN_006ae110((byte *)puVar3);
      }
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0xb84);
    }
    uVar11 = 0;
    if (*(uint *)(DAT_00802a38 + 0xe4) % 0x1e == 10) {
      if (0 < local_10) {
        do {
          FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar11,&local_8);
          if ((short)local_8 != -1) {
            pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(local_8 >> 8),pSVar2[0x24]),local_8,
                                                1);
            if (pvVar5 == (void *)0x0) {
              FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xb8b);
            }
            iVar4 = thunk_FUN_0045ff10((int)pvVar5);
            if ((iVar4 == 10) || (uVar7 = thunk_FUN_0045f400(pvVar5,10), uVar7 == 1)) {
              local_18 = local_18 + 1;
              break;
            }
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < local_10);
      }
      if (local_18 == 0) {
        local_24 = 0;
      }
    }
    DAT_00858df8 = (undefined4 *)local_78;
  }
  else {
    DAT_00858df8 = (undefined4 *)local_78;
    if (iVar4 != -0x5001fff7) {
      iVar8 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xb94,0,iVar4,&DAT_007a4ccc);
      if (iVar8 == 0) {
        FUN_006a5e40(iVar4,0,0x7abe3c,0xb95);
        return 0xffffffff;
      }
      pcVar1 = (code *)swi(3);
      uVar9 = (*pcVar1)();
      return uVar9;
    }
  }
  return local_24;
}

