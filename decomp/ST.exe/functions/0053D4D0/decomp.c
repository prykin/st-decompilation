
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\setamine.cpp
   SAMPanelTy::GetMessage */

undefined4 __thiscall SAMPanelTy::GetMessage(SAMPanelTy *this,int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  SpecPanelTy *this_00;
  byte bVar4;
  int iVar5;
  LPSTR pCVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  InternalExceptionFrame local_54;
  byte local_10;
  undefined3 uStack_f;
  SpecPanelTy *local_c;
  undefined1 local_6;
  char local_5;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_c = (SpecPanelTy *)this;
  iVar5 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Andrey_setamine_cpp_007c7798,0x94,0,iVar5,&DAT_007a4ccc
                               ,s_SAMPanelTy__GetMessage_007c7854);
    if (iVar9 != 0) {
      pcVar3 = (code *)swi(3);
      uVar10 = (*pcVar3)();
      return uVar10;
    }
    RaiseInternalException(iVar5,0,s_E____titans_Andrey_setamine_cpp_007c7798,0x94);
    return 0xffff;
  }
  SpecPanelTy::GetMessage(local_c,param_1);
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 0xb509) {
    if (uVar1 == 0xb508) {
      local_6 = 0xff;
      thunk_FUN_0054edf0((undefined4 *)0x2a,(undefined4 *)&local_6,0,0xffffffff);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (uVar1 < 4) {
      if (uVar1 == 3) {
        DoneSAMPanel((SAMPanelTy *)this_00);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (uVar1 == 2) {
        InitSAMPanel((SAMPanelTy *)this_00);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
    }
    else if ((0xb4fe < uVar1) && (uVar1 < 0xb508)) {
      local_5 = *(char *)(param_1 + 0x10) + '\x01';
      thunk_FUN_0054edf0((undefined4 *)0x2a,(undefined4 *)&local_5,0,0xffffffff);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
  }
  else if (0xb50e < uVar1) {
    if (uVar1 < 0xb518) {
      iVar5 = *(int *)(this_00 + 0x3c);
      bVar4 = *(char *)(param_1 + 0x10) - 0xf;
      iVar9 = **(int **)(param_1 + 0x18);
      iVar2 = (*(int **)(param_1 + 0x18))[1];
      _local_10 = CONCAT31(uStack_f,bVar4);
      iVar7 = DAT_00806734;
      if (*(int *)(this_00 + 0x5c) != 0) {
        iVar7 = *(int *)(this_00 + 0x44);
      }
      pbVar8 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x1b1),
                                    (uint)(this_00[bVar4 + 0x1ab] == (SpecPanelTy)0x0));
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x68),iVar9 - iVar5,iVar2 - iVar7,'\x01',pbVar8)
      ;
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,*(uint *)(this_00 + 0x60),0xffffffff,*(uint *)(this_00 + 0x3c),
                 *(uint *)(this_00 + 0x44));
    }
    else if (uVar1 == 0xb518) {
      iVar5 = *(int *)this_00;
      uVar12 = 1;
      uVar11 = 0;
      uVar10 = 0x2755;
      pCVar6 = thunk_FUN_00571240(s_BUT_BIG_007c77e0,0);
      (**(code **)(iVar5 + 0x10))(param_1,pCVar6,uVar10,uVar11,uVar12);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

