
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpGuard */

undefined4 __thiscall STGroupBoatC::GrpGuard(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  uint *puVar4;
  void *pvVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 extraout_EDX;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  STGroupBoatC *pSVar10;
  InternalExceptionFrame local_78;
  undefined4 local_34;
  STGroupBoatC *local_30;
  uint local_2c;
  uint *local_28;
  undefined4 local_24;
  uint local_20;
  uint *local_1c;
  int local_18;
  int local_14;
  uint *local_10;
  uint local_c;
  uint *local_8;
  
  local_8 = (uint *)0x0;
  local_1c = (uint *)0x0;
  local_10 = (uint *)0x0;
  local_20 = *(uint *)(*(int *)(this + 0x29) + 0xc);
  local_28 = (uint *)0x0;
  local_34 = 2;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_30 = this;
  iVar3 = __setjmp3(local_78.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_30;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_78.previous;
    iVar8 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xa3e,0,iVar3,&DAT_007a4ccc,
                               s_STGroupBoatC__GrpGuard_007ac034);
    if (iVar8 != 0) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    RaiseInternalException(iVar3,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xa3f);
    return 0xffffffff;
  }
  if ((param_1 == 1) || (param_1 == 0)) {
    pSVar10 = local_30 + 0x89;
    for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pSVar10 = 0;
      pSVar10 = pSVar10 + 4;
    }
    *(undefined4 *)(local_30 + 0x65) = 0;
    local_8 = FUN_006ae290((uint *)0x0,0,2,1);
    if (*(int *)(pSVar2 + 0x164) == 0) {
      FUN_006afe40((int *)&local_8,*(uint **)(pSVar2 + 0x168));
    }
    if (*(int *)(pSVar2 + 0x164) == 1) {
      STAllPlayersC::GetGObjFromBox
                (DAT_007fa174,(char)pSVar2[0x24],*(short *)(pSVar2 + 0x16c),
                 *(short *)(pSVar2 + 0x16e),*(short *)(pSVar2 + 0x170),*(short *)(pSVar2 + 0x172),
                 *(short *)(pSVar2 + 0x174),*(short *)(pSVar2 + 0x176),(int *)&local_1c,
                 (int *)&local_10,&local_14,&local_18);
      if (0 < local_14) {
        FUN_006afe40((int *)&local_8,local_1c);
      }
      if (0 < local_18) {
        if (local_14 == 0) {
          FUN_006afe40((int *)&local_8,local_10);
        }
        else {
          uVar9 = 0;
          if (0 < local_18) {
            do {
              FUN_006acc70((int)local_10,uVar9,&local_c);
              FUN_006ae1c0(local_8,&local_c);
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < local_18);
          }
        }
      }
    }
    local_2c = 0;
    puVar4 = local_28;
    if (0 < (int)local_20) {
      do {
        FUN_006acc70(*(int *)(pSVar2 + 0x29),local_2c,&local_c);
        if ((short)local_c != -1) {
          pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar2[0x24])
                                              ,local_c,1);
          if (pvVar5 == (void *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xa1a);
          }
          iVar3 = thunk_FUN_00490d90((int)pvVar5);
          if (iVar3 == 0) {
            local_24 = *(undefined4 *)(DAT_00802a38 + 0xe4);
            thunk_FUN_0045ef00(pvVar5,3,&local_24);
          }
          else {
            if (puVar4 == (uint *)0x0) {
              puVar4 = FUN_006ae290((uint *)0x0,1,2,1);
              local_28 = puVar4;
            }
            FUN_006ae1c0(puVar4,&local_c);
          }
        }
        local_2c = local_2c + 1;
      } while ((int)local_2c < (int)local_20);
    }
    STAllPlayersC::RegisterPGPair
              (DAT_007fa174,CONCAT31((int3)(local_20 >> 8),pSVar2[0x24]),local_8,puVar4);
    FUN_006ae110((byte *)local_8);
    if (puVar4 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar4);
    }
    if (*(byte **)(pSVar2 + 0x168) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(pSVar2 + 0x168));
      *(undefined4 *)(pSVar2 + 0x168) = 0;
    }
  }
  else if (*(uint *)(DAT_00802a38 + 0xe4) % 5 != 0) {
    g_currentExceptionFrame = local_78.previous;
    return local_34;
  }
  uVar9 = 0;
  if (0 < (int)local_20) {
    do {
      FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar9,&local_c);
      if ((short)local_c != -1) {
        pvVar5 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(local_c >> 8),pSVar2[0x24]),local_c,1);
        if (pvVar5 == (void *)0x0) {
          iVar3 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xa34,0,0,&DAT_007a4ccc
                                     ,s_STGroupBoatC__GrpGuard_NULL_007ac050);
          if (iVar3 != 0) {
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return uVar6;
          }
          RaiseInternalException
                    (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xa35);
        }
        iVar3 = thunk_FUN_0045ff10((int)pvVar5);
        if ((iVar3 == 5) || (uVar7 = thunk_FUN_0045f400(pvVar5,5), uVar7 == 1)) break;
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)local_20);
  }
  if ((local_20 != 0) && (uVar9 != local_20)) {
    g_currentExceptionFrame = local_78.previous;
    return local_34;
  }
  g_currentExceptionFrame = local_78.previous;
  return 0;
}

