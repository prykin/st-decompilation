
undefined4 __thiscall
STAllPlayersC::AddObjsToGroup
          (STAllPlayersC *this,int param_1,ushort param_2,int param_3,undefined2 *param_4)

{
  code *pcVar1;
  uint *puVar2;
  bool bVar3;
  undefined3 extraout_var;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  uint uVar7;
  uint uVar8;
  void *unaff_EDI;
  InternalExceptionFrame IStack_90;
  undefined1 auStack_4c [4];
  int iStack_48;
  undefined4 uStack_40;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_24;
  int iStack_20;
  undefined1 auStack_1c [4];
  uint uStack_18;
  uint *puStack_14;
  STGroupC *pSStack_10;
  STGroupC *pSStack_c;
  undefined1 uStack_5;
  
  iVar4 = *(int *)(param_3 + 0xc);
  uVar7 = 0;
  iStack_20 = 0;
  puStack_14 = *(uint **)((int)&DAT_007f4e24 + (char)param_1 * 0xa62 + 1);
  if (0 < iVar4) {
    do {
      FUN_006acc70(param_3,uVar7,&uStack_18);
      bVar3 = thunk_FUN_0042b5b0(param_1,uStack_18);
      if (CONCAT31(extraout_var,bVar3) == 0) {
        return 0xaffe0002;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar4);
  }
  uVar8 = 0;
  uVar7 = puStack_14[3];
  uStack_24 = uVar7;
  if (0 < (int)uVar7) {
    do {
      FUN_006acc70((int)puStack_14,uVar8,&pSStack_c);
      if (pSStack_c != (STGroupC *)0x0) {
        iVar4 = thunk_FUN_00423d80(pSStack_c,param_3);
        if (iVar4 == 1) {
          uStack_5 = 0;
          (**(code **)(*(int *)pSStack_c + 8))(0x65,&uStack_5);
        }
        if (uVar8 == param_2) {
          iStack_20 = 1;
        }
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uVar7);
  }
  IStack_90.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_90;
  iVar4 = Library::MSVCRT::__setjmp3(IStack_90.jumpBuffer,0,unaff_EDI,unaff_ESI);
  puVar2 = puStack_14;
  if (iVar4 == 0) {
    uVar8 = uStack_24;
    uVar7 = uStack_24;
    if ((param_2 == 0xfffe) || (iStack_20 == 0)) {
      while (uVar7 = uVar7 - 1, -1 < (int)uVar7) {
        FUN_006acc70((int)puVar2,uVar7,&pSStack_c);
        if (pSStack_c == (STGroupC *)0x0) {
          uVar8 = uVar7;
        }
      }
      iStack_48 = (int)(char)param_1;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_40 = 1;
      uStack_38 = uVar8 & 0xffff;
      (**(code **)(*DAT_00802a38 + 8))(0x10ff,auStack_1c,&pSStack_10,auStack_4c,0);
      Library::DKW::TBL::FUN_006ae140(puVar2,uVar8 & 0xffff,&pSStack_10);
      STGroupC::AddObjs(pSStack_10,param_3,0);
      uStack_5 = 2;
      (**(code **)(*(int *)pSStack_10 + 8))(0x65,&uStack_5);
      if (param_4 != (undefined2 *)0x0) {
        *param_4 = (short)uVar8;
      }
    }
    else {
      FUN_006acc70((int)puStack_14,(uint)param_2,&pSStack_c);
      STGroupC::AddObjs(pSStack_c,param_3,1);
      uStack_5 = 1;
      (**(code **)(*(int *)pSStack_c + 8))(0x65,&uStack_5);
    }
    uVar7 = puVar2[3];
    uVar8 = 0;
    uStack_24 = uVar7;
    if (0 < (int)uVar7) {
      do {
        FUN_006acc70((int)puVar2,uVar8,&pSStack_c);
        if (((pSStack_c != (STGroupC *)0x0) && (*(short *)(pSStack_c + 0x27) == 0)) &&
           (iVar4 = thunk_FUN_004233a0((int)pSStack_c), iVar4 == 0)) {
          thunk_FUN_0054cf70(DAT_00802a38,*(uint *)(pSStack_c + 8));
          pSStack_c = (STGroupC *)0x0;
          Library::DKW::TBL::FUN_006ae140(puVar2,uVar8,&pSStack_c);
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar7);
    }
    g_currentExceptionFrame = IStack_90.previous;
    return 0;
  }
  g_currentExceptionFrame = IStack_90.previous;
  iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1d8,0,iVar4,&DAT_007a4ccc,
                             s_STAllPlayersC__AddObjsToGroup_007a60d0);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  RaiseInternalException(iVar4,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x1d9);
  return 0xffffffff;
}

