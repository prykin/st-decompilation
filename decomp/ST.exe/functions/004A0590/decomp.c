
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::Scout */

undefined4 __thiscall STGroupBoatC::Scout(STGroupBoatC *this,int param_1)

{
  STGroupBoatC *pSVar1;
  code *pcVar2;
  STGroupBoatC *pSVar3;
  int iVar4;
  uint *puVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 extraout_ECX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  STGroupBoatC *pSVar10;
  uint uVar11;
  undefined4 local_80;
  undefined4 local_7c [16];
  undefined4 local_3c;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  uint *local_1c;
  STGroupBoatC *local_18;
  undefined4 local_14;
  uint *local_10;
  uint local_c;
  uint local_8;
  
  local_8 = *(uint *)(*(int *)(this + 0x29) + 0xc);
  local_14 = 2;
  local_80 = DAT_00858df8;
  DAT_00858df8 = &local_80;
  local_18 = this;
  iVar4 = __setjmp3(local_7c,0,unaff_EDI,unaff_ESI);
  pSVar3 = local_18;
  if (iVar4 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      pSVar1 = local_18 + 0x300;
      pSVar10 = local_18 + 0x89;
      for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pSVar10 = 0;
        pSVar10 = pSVar10 + 4;
      }
      *(undefined4 *)(local_18 + 0x65) = 0;
      pSVar10 = local_18 + 0x302;
      *(undefined2 *)(local_18 + 0x2fa) = *(undefined2 *)(local_18 + 0x1c1);
      *(undefined2 *)(local_18 + 0x2fc) = *(undefined2 *)(local_18 + 0x1c3);
      *(undefined2 *)(local_18 + 0x2f8) = *(undefined2 *)(local_18 + 0x1bf);
      thunk_FUN_0049a500(local_18,(undefined2 *)(local_18 + 0x2fe),(undefined2 *)pSVar1,
                         (undefined2 *)pSVar10);
      local_10 = Way3DGrpGetDistrPoint
                           (pSVar3,*(int *)(pSVar3 + 0x29),(int)*(short *)(pSVar3 + 0x2fe),
                            (int)*(short *)pSVar1,(int)*(short *)pSVar10,
                            (int)*(short *)(pSVar3 + 0x2f8),(int)*(short *)(pSVar3 + 0x2fa),
                            (int)*(short *)(pSVar3 + 0x2fc));
      if (local_10 == (uint *)0x0) {
        return 0;
      }
      puVar5 = Way3DGrpGetDistrPoint
                         (pSVar3,*(int *)(pSVar3 + 0x29),(int)*(short *)(pSVar3 + 0x2f8),
                          (int)*(short *)(pSVar3 + 0x2fa),(int)*(short *)(pSVar3 + 0x2fc),
                          (int)*(short *)(pSVar3 + 0x2fe),(int)*(short *)pSVar1,
                          (int)*(short *)pSVar10);
      local_1c = puVar5;
      if (puVar5 == (uint *)0x0) {
        FUN_006ae110((byte *)local_10);
        return 0;
      }
      uVar11 = 0;
      local_3c = *(undefined4 *)(DAT_00802a38 + 0xe4);
      if (0 < (int)local_8) {
        do {
          FUN_006acc70((int)local_10,uVar11,(undefined4 *)&local_24);
          FUN_006acc70((int)puVar5,uVar11,(undefined4 *)&local_2c);
          FUN_006acc70(*(int *)(pSVar3 + 0x29),uVar11,&local_c);
          if ((short)local_c != -1) {
            pvVar6 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),
                                                         pSVar3[0x24]),local_c,1);
            if (pvVar6 == (void *)0x0) {
              FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xd2a);
            }
            local_38 = local_24;
            local_36 = local_22;
            local_32 = local_2c;
            local_34 = local_20;
            local_30 = local_2a;
            local_2e = local_28;
            thunk_FUN_0045ef00(pvVar6,8,&local_3c);
            puVar5 = local_1c;
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)local_8);
      }
      FUN_006ae110((byte *)local_10);
      FUN_006ae110((byte *)puVar5);
    }
    if (*(uint *)(DAT_00802a38 + 0xe4) % 0x19 == 3) {
      uVar11 = 0;
      if (0 < (int)local_8) {
        do {
          FUN_006acc70(*(int *)(pSVar3 + 0x29),uVar11,&local_c);
          if ((short)local_c != -1) {
            pvVar6 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(local_c >> 8),pSVar3[0x24]),local_c,
                                                1);
            if (pvVar6 == (void *)0x0) {
              FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7abe3c,0xd3d);
            }
            iVar4 = thunk_FUN_0045ff10((int)pvVar6);
            if (iVar4 == 8) break;
            uVar7 = thunk_FUN_0045f400(pvVar6,8);
            if (uVar7 == 1) break;
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)local_8);
      }
      if (uVar11 == local_8) {
        local_14 = 0;
      }
    }
    DAT_00858df8 = (undefined4 *)local_80;
  }
  else {
    DAT_00858df8 = (undefined4 *)local_80;
    if (iVar4 != -0x5001fff7) {
      iVar8 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd46,0,iVar4,&DAT_007a4ccc);
      if (iVar8 != 0) {
        pcVar2 = (code *)swi(3);
        uVar9 = (*pcVar2)();
        return uVar9;
      }
      FUN_006a5e40(iVar4,0,0x7abe3c,0xd47);
      return 0xffffffff;
    }
  }
  return local_14;
}

