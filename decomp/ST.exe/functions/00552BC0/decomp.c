
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\upginfo.cpp
   UpgPanelTy::Update */

void __thiscall UpgPanelTy::Update(UpgPanelTy *this)

{
  code *pcVar1;
  UpgPanelTy *pUVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 unaff_ESI;
  UpgPanelTy *pUVar7;
  UpgPanelTy *pUVar8;
  void *unaff_EDI;
  int *piVar9;
  int local_298 [144];
  InternalExceptionFrame local_58;
  UpgPanelTy *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pUVar2 = local_14;
  if (iVar3 == 0) {
    pUVar8 = local_14 + 0x1ab;
    pUVar7 = pUVar8;
    piVar9 = local_298;
    for (iVar3 = 0x90; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar9 = *(int *)pUVar7;
      pUVar7 = pUVar7 + 4;
      piVar9 = piVar9 + 1;
    }
    STAllPlayersC::GetPanelInfo(DAT_007fa174,0x10,(int *)pUVar8);
    iVar3 = 0x19;
    pUVar8 = pUVar2 + 0x1ab;
    local_8 = 3;
    do {
      uVar4 = thunk_FUN_005276e0(*pUVar8,(byte)((uint)*(undefined4 *)pUVar8 >> 0x10));
      if (pUVar8[8] == (UpgPanelTy)0x0) {
        iVar6 = *(int *)(pUVar2 + 0x3ef);
      }
      else {
        iVar6 = *(int *)(pUVar2 + 0x3eb);
      }
      pbVar5 = (byte *)FUN_0070b3a0(iVar6,uVar4);
      thunk_FUN_00540760(*(undefined4 **)(pUVar2 + 0x68),0x24,iVar3,'\x01',pbVar5);
      pUVar8 = pUVar8 + 0x30;
      iVar3 = iVar3 + 0x1b;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    local_8 = 0x5e;
    pUVar8 = pUVar2 + 0x23b;
    local_c = 2;
    do {
      iVar3 = 0x19;
      local_10 = 3;
      do {
        uVar4 = thunk_FUN_005276e0(*pUVar8,(byte)((uint)*(undefined4 *)pUVar8 >> 0x10));
        if (pUVar8[8] == (UpgPanelTy)0x0) {
          iVar6 = *(int *)(pUVar2 + 0x3ef);
        }
        else {
          iVar6 = *(int *)(pUVar2 + 0x3eb);
        }
        pbVar5 = (byte *)FUN_0070b3a0(iVar6,uVar4);
        thunk_FUN_00540760(*(undefined4 **)(pUVar2 + 0x68),local_8,iVar3,'\x01',pbVar5);
        pUVar8 = pUVar8 + 0x30;
        iVar3 = iVar3 + 0x1b;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      local_8 = local_8 + 0x33;
      local_c = local_c + -1;
    } while (local_c != 0);
    iVar3 = 0x19;
    pUVar8 = pUVar2 + 0x35b;
    local_c = 3;
    local_10 = 0;
    do {
      uVar4 = thunk_FUN_005276e0(*pUVar8,(byte)((uint)*(undefined4 *)pUVar8 >> 0x10));
      if (pUVar8[8] == (UpgPanelTy)0x0) {
        iVar6 = *(int *)(pUVar2 + 0x3ef);
      }
      else {
        iVar6 = *(int *)(pUVar2 + 0x3eb);
      }
      pbVar5 = (byte *)FUN_0070b3a0(iVar6,uVar4);
      thunk_FUN_00540760(*(undefined4 **)(pUVar2 + 0x68),0xd3,iVar3,'\x01',pbVar5);
      pUVar8 = pUVar8 + 0x30;
      iVar3 = iVar3 + 0x1b;
      local_c = local_c + -1;
    } while (local_c != 0);
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar6 = ReportDebugMessage(s_E____titans_Andrey_upginfo_cpp_007c87b8,0x54,0,iVar3,&DAT_007a4ccc,
                             s_UpgPanelTy__Update_007c8850);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_upginfo_cpp_007c87b8,0x54);
  return;
}

