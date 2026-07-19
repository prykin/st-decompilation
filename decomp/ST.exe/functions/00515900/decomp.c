
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::DrawWeapon */

undefined4 __thiscall
HelpPanelTy::DrawWeapon
          (HelpPanelTy *this,int param_1,int *param_2,int param_3,int param_4,uint param_5)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  UINT UVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  Global_sub_005259B0_param_1Enum GVar8;
  HINSTANCE pHVar9;
  InternalExceptionFrame local_6c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  int local_17;
  uint local_13;
  undefined4 local_c;
  HelpPanelTy *local_8;
  
  local_c = 0;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x412,0,iVar2,&DAT_007a4ccc
                               ,s_HelpPanelTy__DrawWeapon_007c3ba4);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    RaiseInternalException(iVar2,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x412);
    return 0;
  }
  if (param_3 != 0) {
    GVar8 = (Global_sub_005259B0_param_1Enum)param_3;
    uVar3 = thunk_FUN_005259b0(GVar8,0,'\x01');
    pbVar4 = (byte *)FUN_0070b3a0(*(int *)&local_8->field_0x244,uVar3);
    if (pbVar4 != (byte *)0x0) {
      if (*(int *)(pbVar4 + 8) + -0xf < 1) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(pbVar4 + 8) + -0xf) / 2;
      }
      iVar7 = *param_2;
      *param_2 = iVar7 + iVar2;
      ccFntTy::SetSurf(*(ccFntTy **)&local_8->field_0x1e0,local_8->field_0218,0,param_1,
                       iVar7 + iVar2,0x19c - param_1,0xf);
      if (param_4 == 0) {
        pHVar9 = DAT_00807618;
        UVar5 = thunk_FUN_00524fe0(GVar8);
        uVar6 = FUN_006b0140(UVar5,pHVar9);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007a4ccc,uVar6);
      }
      else {
        pHVar9 = DAT_00807618;
        UVar5 = thunk_FUN_00524fe0(GVar8);
        uVar6 = FUN_006b0140(UVar5,pHVar9);
        wsprintfA((LPSTR)&DAT_0080f33a,s__s___d__007c3bc0,uVar6,param_4);
      }
      ccFntTy::WrStr(*(ccFntTy **)&local_8->field_0x1e0,&DAT_0080f33a,1,-1,
                     (DAT_0080874e != '\x03') - 1 & 5);
      thunk_FUN_00540760((undefined4 *)local_8->field_0218,(param_1 - *(int *)(pbVar4 + 4)) + -5,
                         (0xf - *(int *)(pbVar4 + 8)) / 2 + *param_2,'\x06',pbVar4);
      local_28 = (param_1 - *(int *)(pbVar4 + 4)) + -5;
      local_20 = *(undefined4 *)(pbVar4 + 4);
      local_24 = (0xf - *(int *)(pbVar4 + 8)) / 2 + *param_2;
      local_1c = *(undefined4 *)(pbVar4 + 8);
      local_17 = param_3;
      local_13 = param_5 & 0xff;
      local_18 = 4;
      Library::DKW::TBL::FUN_006ae1c0(*(uint **)&local_8->field_0x1d7,&local_28);
      iVar2 = *(int *)(pbVar4 + 8);
      if (iVar2 < 0x10) {
        iVar2 = 0xf;
      }
      *param_2 = *param_2 + iVar2;
      g_currentExceptionFrame = local_6c.previous;
      return 1;
    }
  }
  g_currentExceptionFrame = local_6c.previous;
  return local_c;
}

