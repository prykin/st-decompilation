
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpGoToDeep */

undefined4 __thiscall STGroupBoatC::GrpGoToDeep(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  void *this_00;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  uint uVar6;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  STGroupBoatC *pSVar7;
  uint uVar8;
  InternalExceptionFrame local_6c;
  undefined4 local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  STGroupBoatC *local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  undefined2 local_a;
  short local_8;
  short local_6;
  
  local_18 = *(uint *)(*(int *)(this + 0x29) + 0xc);
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_1c = this;
  iVar3 = __setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_1c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar4 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x73c,0,iVar3,&DAT_007a4ccc,
                               s_STGroupBoatC__GrpGoToDeep_007abf74);
    if (iVar4 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x73d);
      return 0xffffffff;
    }
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    pSVar7 = local_1c + 0x89;
    for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pSVar7 = 0;
      pSVar7 = pSVar7 + 4;
    }
    uVar8 = 0;
    *(undefined4 *)(local_1c + 0x222) = *(undefined4 *)(local_1c + 0xff);
    *(undefined4 *)(local_1c + 0x65) = 0;
    if (local_18 != 0) {
      uVar6 = 0;
      do {
        FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar6,&local_14);
        if ((short)local_14 != -1) {
          this_00 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar2[0x24]
                                                       ),local_14,1);
          if (this_00 == (void *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x720);
          }
          thunk_FUN_004162b0(this_00,&local_8,&local_6,&local_a);
          thunk_FUN_00481520(this_00,(int)local_8,(int)local_6,*(undefined4 *)(pSVar2 + 0x222));
          local_28 = *(undefined4 *)(DAT_00802a38 + 0xe4);
          local_24 = 0xffff;
          local_22 = 0xffff;
          local_20 = 0xffff;
          thunk_FUN_0045ef00(this_00,1,&local_28);
        }
        uVar8 = uVar8 + 1;
        uVar6 = uVar8 & 0xffff;
      } while (uVar6 < local_18);
    }
    local_10 = 2;
  }
  uVar5 = local_10;
  if (param_1 == 2) {
    if (*(uint *)(DAT_00802a38 + 0xe4) % 3 == 0) {
      uVar6 = 0;
      uVar8 = 0;
      local_10 = 0;
      uVar5 = 0;
      if (local_18 != 0) {
        do {
          FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar8,&local_14);
          if ((short)local_14 != -1) {
            uVar8 = thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),pSVar2[0x24]),
                                       local_14,1);
            if (uVar8 == 0) {
              RaiseInternalException
                        (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x732);
            }
            iVar3 = thunk_FUN_0045ff30(uVar8);
            if (((iVar3 != 0) || (iVar3 = thunk_FUN_0045ff10(uVar8), iVar3 == 1)) ||
               (iVar3 = thunk_FUN_0045ff10(uVar8), iVar3 == 0)) goto LAB_0049b6c1;
          }
          uVar6 = uVar6 + 1;
          uVar8 = uVar6 & 0xffff;
          if (local_18 <= uVar8) {
            g_currentExceptionFrame = local_6c.previous;
            return local_10;
          }
        } while( true );
      }
    }
    else {
LAB_0049b6c1:
      local_10 = 2;
      uVar5 = local_10;
    }
  }
  local_10 = uVar5;
  g_currentExceptionFrame = local_6c.previous;
  return local_10;
}

