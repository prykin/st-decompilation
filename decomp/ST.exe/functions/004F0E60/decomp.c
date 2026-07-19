
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldobj.cpp
   BldObjPanelTy::PaintBldBut */

void __thiscall BldObjPanelTy::PaintBldBut(BldObjPanelTy *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  BldObjPanelTy *pBVar3;
  int iVar4;
  uint uVar5;
  int errorCode;
  byte *pbVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_5c;
  int local_18;
  BldObjPanelTy *local_14;
  int local_10;
  ushort *local_c;
  Global_sub_00526BA0_param_1Enum *local_8;
  
  piVar1 = *(int **)(param_1 + 0x18);
  local_18 = *piVar1 - this->field_003C;
  if (this->field_005C == 0) {
    local_10 = piVar1[1] - DAT_00806734;
  }
  else {
    local_10 = piVar1[1] - this->field_0044;
  }
  uVar5 = this->field_0199 + -0xc0af + *(int *)(param_1 + 0x10);
  iVar7 = (&this->field_027E)[(byte)this->field_0278];
  if ((iVar7 == 0) || (*(uint *)(iVar7 + 0xc) <= uVar5)) {
    local_8 = (Global_sub_00526BA0_param_1Enum *)0x0;
  }
  else {
    local_8 = (Global_sub_00526BA0_param_1Enum *)
              (*(int *)(iVar7 + 8) * uVar5 + *(int *)(iVar7 + 0x1c));
  }
  local_14 = this;
  if ((*(short *)(param_1 + 0x14) == 0) || (local_8 == (Global_sub_00526BA0_param_1Enum *)0x0)) {
    local_c = this->field_027A;
  }
  else {
    if ((char)local_8[2] == 0) {
      iVar7 = this->field_018C;
    }
    else {
      iVar7 = this->field_0188;
    }
    uVar5 = thunk_FUN_00526ba0(*local_8,*(byte *)((int)local_8 + 9));
    local_c = (ushort *)FUN_0070b3a0(iVar7,uVar5);
  }
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  errorCode = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  iVar4 = local_10;
  pBVar3 = local_14;
  iVar7 = local_18;
  if (errorCode == 0) {
    DibPut((undefined4 *)local_14->field_0068,local_18,local_10,'\x01',(byte *)local_c);
    if ((*(short *)(param_1 + 0x14) == 3) && (local_8 != (Global_sub_00526BA0_param_1Enum *)0x0)) {
      pbVar6 = (byte *)FUN_0070b3a0(pBVar3->field_0190,9 - (uint)((char)local_8[2] != 0));
      DibPut((undefined4 *)pBVar3->field_0068,iVar7,iVar4,'\x06',pbVar6);
    }
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,pBVar3->field_0060,0xffffffff,pBVar3->field_003C,pBVar3->field_0044);
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar7 = ReportDebugMessage(s_E____titans_Andrey_bldobj_cpp_007c1984,0x92,0,errorCode,&DAT_007a4ccc
                             ,s_BldObjPanelTy__PaintBldBut_007c1a0c);
  if (iVar7 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_bldobj_cpp_007c1984,0x92);
  return;
}

