
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldlab.cpp
   BldLabPanelTy::PaintUpdBut */

void __thiscall BldLabPanelTy::PaintUpdBut(BldLabPanelTy *this,int param_1)

{
  uint uVar1;
  int *piVar2;
  code *pcVar3;
  BldLabPanelTy *pBVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_5c;
  int local_18;
  int local_14;
  BldLabPanelTy *local_10;
  uint local_c;
  Global_sub_00526BA0_param_1Enum *local_8;
  
  piVar2 = *(int **)(param_1 + 0x18);
  local_18 = *piVar2 - this->field_003C;
  if (this->field_005C == 0) {
    local_14 = piVar2[1] - DAT_00806734;
  }
  else {
    local_14 = piVar2[1] - this->field_0044;
  }
  uVar1 = this->field_0199 + -0xc0af + *(int *)(param_1 + 0x10);
  iVar5 = this->field_027A;
  if ((iVar5 == 0) || (*(uint *)(iVar5 + 0xc) <= uVar1)) {
    local_8 = (Global_sub_00526BA0_param_1Enum *)0x0;
  }
  else {
    local_8 = (Global_sub_00526BA0_param_1Enum *)
              (*(int *)(iVar5 + 8) * uVar1 + *(int *)(iVar5 + 0x1c));
  }
  local_10 = this;
  if ((*(short *)(param_1 + 0x14) == 0) || (local_8 == (Global_sub_00526BA0_param_1Enum *)0x0)) {
    local_c = (int)*(short *)(this->field_0188 + 0x23) - 1;
  }
  else {
    local_c = thunk_FUN_00526ba0(*local_8,'\x03');
  }
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  iVar5 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pBVar4 = local_10;
  if (iVar5 == 0) {
    if ((local_8 == (Global_sub_00526BA0_param_1Enum *)0x0) || ((char)local_8[2] == 0)) {
      iVar5 = local_10->field_018C;
    }
    else {
      iVar5 = local_10->field_0188;
    }
    pbVar6 = (byte *)FUN_0070b3a0(iVar5,local_c);
    iVar7 = local_14;
    iVar5 = local_18;
    DibPut((undefined4 *)pBVar4->field_0068,local_18,local_14,'\x01',pbVar6);
    if ((*(short *)(param_1 + 0x14) == 3) && (local_8 != (Global_sub_00526BA0_param_1Enum *)0x0)) {
      pbVar6 = (byte *)FUN_0070b3a0(pBVar4->field_0190,9 - (uint)((char)local_8[2] != 0));
      DibPut((undefined4 *)pBVar4->field_0068,iVar5,iVar7,'\x06',pbVar6);
    }
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,pBVar4->field_0060,0xffffffff,pBVar4->field_003C,pBVar4->field_0044);
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar7 = ReportDebugMessage(s_E____titans_Andrey_bldlab_cpp_007c18b4,0x66,0,iVar5,&DAT_007a4ccc,
                             s_BldLabPanelTy__PaintUpdBut_007c1944);
  if (iVar7 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  RaiseInternalException(iVar5,0,s_E____titans_Andrey_bldlab_cpp_007c18b4,0x66);
  return;
}

