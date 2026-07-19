
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\upginfo.cpp
   UpgPanelTy::Update */

void __thiscall UpgPanelTy::Update(UpgPanelTy *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  UpgPanelTy *pUVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 unaff_ESI;
  int *piVar8;
  Global_sub_005276E0_param_1Enum *pGVar9;
  void *unaff_EDI;
  int *piVar10;
  int local_298 [144];
  InternalExceptionFrame local_58;
  UpgPanelTy *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pUVar3 = local_14;
  if (iVar4 == 0) {
    puVar1 = &local_14->field_0x1ab;
    piVar8 = (int *)puVar1;
    piVar10 = local_298;
    for (iVar4 = 0x90; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar10 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar10 = piVar10 + 1;
    }
    STAllPlayersC::GetPanelInfo(DAT_007fa174,0x10,(int *)puVar1);
    iVar4 = 0x19;
    pGVar9 = &pUVar3->field_0x1ab;
    local_8 = 3;
    do {
      uVar5 = thunk_FUN_005276e0(*pGVar9,(byte)((uint)*(undefined4 *)pGVar9 >> 0x10));
      if (pGVar9[8] == ~(CASE_80|CASE_7F)) {
        iVar7 = pUVar3->field_03EF;
      }
      else {
        iVar7 = pUVar3->field_03EB;
      }
      pbVar6 = (byte *)FUN_0070b3a0(iVar7,uVar5);
      DibPut((undefined4 *)pUVar3->field_0068,0x24,iVar4,'\x01',pbVar6);
      pGVar9 = pGVar9 + 0x30;
      iVar4 = iVar4 + 0x1b;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    local_8 = 0x5e;
    pGVar9 = &pUVar3->field_0x23b;
    local_c = 2;
    do {
      iVar4 = 0x19;
      local_10 = 3;
      do {
        uVar5 = thunk_FUN_005276e0(*pGVar9,(byte)((uint)*(undefined4 *)pGVar9 >> 0x10));
        if (pGVar9[8] == ~(CASE_80|CASE_7F)) {
          iVar7 = pUVar3->field_03EF;
        }
        else {
          iVar7 = pUVar3->field_03EB;
        }
        pbVar6 = (byte *)FUN_0070b3a0(iVar7,uVar5);
        DibPut((undefined4 *)pUVar3->field_0068,local_8,iVar4,'\x01',pbVar6);
        pGVar9 = pGVar9 + 0x30;
        iVar4 = iVar4 + 0x1b;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      local_8 = local_8 + 0x33;
      local_c = local_c + -1;
    } while (local_c != 0);
    iVar4 = 0x19;
    pGVar9 = &pUVar3->field_0x35b;
    local_c = 3;
    local_10 = 0;
    do {
      uVar5 = thunk_FUN_005276e0(*pGVar9,(byte)((uint)*(undefined4 *)pGVar9 >> 0x10));
      if (pGVar9[8] == ~(CASE_80|CASE_7F)) {
        iVar7 = pUVar3->field_03EF;
      }
      else {
        iVar7 = pUVar3->field_03EB;
      }
      pbVar6 = (byte *)FUN_0070b3a0(iVar7,uVar5);
      DibPut((undefined4 *)pUVar3->field_0068,0xd3,iVar4,'\x01',pbVar6);
      pGVar9 = pGVar9 + 0x30;
      iVar4 = iVar4 + 0x1b;
      local_c = local_c + -1;
    } while (local_c != 0);
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar7 = ReportDebugMessage(s_E____titans_Andrey_upginfo_cpp_007c87b8,0x54,0,iVar4,&DAT_007a4ccc,
                             s_UpgPanelTy__Update_007c8850);
  if (iVar7 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar4,0,s_E____titans_Andrey_upginfo_cpp_007c87b8,0x54);
  return;
}

