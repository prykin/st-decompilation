
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\tc_grp.cpp
   STGroupC::AddObj */

uint __thiscall STGroupC::AddObj(STGroupC *this,uint param_1,int param_2)

{
  code *pcVar1;
  STGroupC *pSVar2;
  int errorCode;
  int *this_00;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_80;
  undefined1 local_3c [16];
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  int local_24;
  STGroupC *local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  short local_8;
  undefined1 local_5;
  
  local_18 = *(uint *)(*(int *)(this + 0x29) + 0xc);
  local_c = 0;
  local_10 = 0;
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_1c = this;
  local_14 = local_18;
  errorCode = __setjmp3(local_80.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_1c;
  uVar7 = local_14;
  uVar6 = local_18;
  if (errorCode == 0) {
    while (uVar6 = uVar6 - 1, -1 < (int)uVar6) {
      FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar6,(undefined4 *)&local_8);
      if (local_8 == -1) {
        uVar7 = uVar6;
        local_14 = uVar6;
      }
      if (local_8 == (short)param_1) {
        RaiseInternalException(-0x5001ffff,DAT_007ed77c,s_E____titans_wlad_tc_grp_cpp_007a50a4,0xb1)
        ;
      }
    }
    FUN_006ae140(*(uint **)(pSVar2 + 0x29),uVar7,&param_1);
    this_00 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),pSVar2[0x24]),
                                        param_1,1);
    thunk_FUN_00419c30(this_00,*(undefined2 *)(pSVar2 + 0x25));
    *(short *)(pSVar2 + 0x27) = *(short *)(pSVar2 + 0x27) + 1;
    if (param_2 == 1) {
      if (*(int *)(pSVar2 + 0x2d) == 0) {
        puVar3 = FUN_006ae290((uint *)0x0,5,2,5);
        *(uint **)(pSVar2 + 0x2d) = puVar3;
      }
      FUN_006ae1c0(*(uint **)(pSVar2 + 0x2d),&param_1);
      local_5 = 0xff;
      (**(code **)(*(int *)pSVar2 + 8))(0x65,&local_5);
    }
    uVar4 = thunk_FUN_00423120((int)this_00);
    uVar6 = *(uint *)(pSVar2 + 0x35);
    if ((uVar6 & 1) == 0) {
      if ((uVar4 & 1) != 0) {
        local_10 = local_10 | 1;
      }
    }
    else if ((uVar4 & 1) == 0) {
      local_c = local_c | 1;
    }
    if ((uVar6 & 2) == 0) {
      if ((uVar4 & 2) != 0) {
        local_10 = local_10 | 2;
      }
    }
    else if ((uVar4 & 2) == 0) {
      local_c = local_c | 2;
    }
    if ((uVar6 & 4) == 0) {
      if ((uVar4 & 4) != 0) {
        local_10 = local_10 | 4;
      }
    }
    else if ((uVar4 & 4) == 0) {
      local_c = local_c | 4;
    }
    if ((uVar6 & 8) == 0) {
      if ((uVar4 & 8) != 0) {
        local_10 = local_10 | 8;
      }
    }
    else if ((uVar4 & 8) == 0) {
      local_c = local_c | 8;
    }
    if ((uVar6 & 0x10) == 0) {
      if ((uVar4 & 0x10) != 0) {
        local_10 = local_10 | 0x10;
      }
    }
    else if ((uVar4 & 0x10) == 0) {
      local_c = local_c | 0x10;
    }
    if (local_c != 0) {
      (**(code **)(*this_00 + 0x100))(local_c);
    }
    if (local_10 != 0) {
      (**(code **)(*this_00 + 0x104))(local_10);
    }
    if (this_00[8] == 0x14) {
      thunk_FUN_004956c0(this_00,*(undefined4 *)(pSVar2 + 0x39));
    }
    if (*(undefined4 **)(pSVar2 + 0x1c) != (undefined4 *)0x0) {
      local_2c = 0x5d96;
      local_28 = 0;
      local_26 = (short)param_1;
      local_24 = this_00[6];
      (**(code **)**(undefined4 **)(pSVar2 + 0x1c))(local_3c);
    }
    g_currentExceptionFrame = local_80.previous;
    return uVar7;
  }
  g_currentExceptionFrame = local_80.previous;
  if (errorCode != -0x5001ffff) {
    iVar5 = ReportDebugMessage(s_E____titans_wlad_tc_grp_cpp_007a50a4,0xdf,0,errorCode,&DAT_007a4ccc
                               ,s_STGroupC__AddObj_007a5120);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    RaiseInternalException(errorCode,0,s_E____titans_wlad_tc_grp_cpp_007a50a4,0xe0);
    return 0xffffffff;
  }
  return 0xaffe0001;
}

