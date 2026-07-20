
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::DrawObj */

void __thiscall
HelpPanelTy::DrawObj(HelpPanelTy *this,int *param_1,int param_2,byte param_3,int param_4)

{
  code *pcVar1;
  HelpPanelTy *pHVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_58;
  int local_14;
  HelpPanelTy *local_10;
  int local_c;
  byte *local_8;
  
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pHVar2 = local_10;
  if (iVar3 == 0) {
    if (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) {
      *param_1 = *param_1 + 2;
      local_8 = (byte *)STAllPlayersC::GetTOBJImage(g_sTAllPlayers_007FA174,(uint)param_3,param_2);
      if (local_8 != (byte *)0x0) {
        local_14 = *(int *)(local_8 + 4);
        local_c = *(int *)(local_8 + 8);
        iVar3 = (0x19c - local_14) / 2;
        Library::DKW::WGR::FUN_006b55f0
                  ((undefined4 *)pHVar2->field_0218,0,iVar3,*param_1,(byte *)pHVar2->field_021C,0,
                   (*(int *)(pHVar2->field_021C + 2) - local_14) / 2,
                   (*(int *)(pHVar2->field_021C + 4) - local_c) / 2,local_14,local_c);
        FUN_006b5440(pHVar2->field_0218,0,iVar3,*param_1,(int)local_8,0,0xff);
        FUN_006b5ee0(pHVar2->field_0218,0,iVar3 + -2,*param_1 + -2,local_14 + 4,local_c + 4,0x6f,0xd
                    );
        *param_1 = *param_1 + local_c + 10;
        FUN_006ab060(&local_8);
      }
    }
    if (param_4 != 0) {
      uVar4 = thunk_FUN_00526ba0(param_2,param_3);
      local_8 = (byte *)FUN_0070b3a0(param_4,uVar4);
      if (local_8 != (byte *)0x0) {
        iVar3 = (0x19c - *(int *)(local_8 + 4)) / 2;
        DibPut((undefined4 *)pHVar2->field_0218,iVar3,*param_1,'\x01',local_8);
        pbVar5 = (byte *)FUN_0070b3a0(pHVar2->field_0248,4);
        DibPut((undefined4 *)pHVar2->field_0218,iVar3 + -2,*param_1 + -2,'\x06',pbVar5);
        iVar3 = FUN_0070b3a0(pHVar2->field_0248,4);
        *param_1 = *param_1 + *(int *)(iVar3 + 8);
      }
    }
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar6 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x3f3,0,iVar3,&DAT_007a4ccc,
                             s_HelpPanelTy__DrawObj_007c3b88);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x3f3);
  return;
}

