
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldboat.cpp
   BldBoatPanelTy::PaintBldBut */

void __thiscall BldBoatPanelTy::PaintBldBut(BldBoatPanelTy *this,int param_1)

{
  code *pcVar1;
  BldBoatPanelTy *pBVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_60;
  int local_1c;
  BldBoatPanelTy *local_18;
  int *local_14;
  ushort *local_10;
  int local_c;
  Global_sub_00526BA0_param_1Enum *local_8;
  
  local_14 = *(int **)(param_1 + 0x18);
  local_1c = *local_14 - this->field_003C;
  if (this->field_005C == 0) {
    local_c = local_14[1] - DAT_00806734;
  }
  else {
    local_c = local_14[1] - this->field_0044;
  }
  uVar4 = this->field_0199 + -0xc0af + *(int *)(param_1 + 0x10);
  iVar7 = (&this->field_027A)[(byte)this->field_0278];
  if ((iVar7 == 0) || (*(uint *)(iVar7 + 0xc) <= uVar4)) {
    local_8 = (Global_sub_00526BA0_param_1Enum *)0x0;
  }
  else {
    local_8 = (Global_sub_00526BA0_param_1Enum *)
              (*(int *)(iVar7 + 8) * uVar4 + *(int *)(iVar7 + 0x1c));
  }
  local_18 = this;
  if ((*(short *)(param_1 + 0x14) == 0) || (local_8 == (Global_sub_00526BA0_param_1Enum *)0x0)) {
    local_10 = this->field_028E;
  }
  else {
    if ((char)local_8[2] == 0) {
      iVar7 = this->field_018C;
    }
    else {
      iVar7 = this->field_0188;
    }
    uVar4 = thunk_FUN_00526ba0(*local_8,*(byte *)((int)local_8 + 9));
    local_10 = (ushort *)FUN_0070b3a0(iVar7,uVar4);
  }
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  iVar5 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0,unaff_EDI,unaff_ESI);
  iVar3 = local_c;
  pBVar2 = local_18;
  iVar7 = local_1c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Andrey_bldboat_cpp_007c17b4,0x9e,0,iVar5,&DAT_007a4ccc,
                               s_BldBoatPanelTy__PaintBldBut_007c186c);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar5,0,s_E____titans_Andrey_bldboat_cpp_007c17b4,0x9e);
    return;
  }
  FUN_006b4170(local_18->field_0068,0,local_1c,local_c,local_14[2],local_14[3],0);
  DibPut((undefined4 *)pBVar2->field_0068,iVar7 + 1,iVar3 + 1,'\x01',(byte *)local_10);
  if (*(short *)(param_1 + 0x14) == 3) {
    if (local_8 == (Global_sub_00526BA0_param_1Enum *)0x0) goto LAB_004ef4e9;
    iVar5 = (-(uint)((char)local_8[2] != 0) & 2) + 3;
  }
  else {
    iVar5 = 4;
  }
  pbVar6 = (byte *)FUN_0070b3a0(pBVar2->field_0190,iVar5);
  DibPut((undefined4 *)pBVar2->field_0068,iVar7,iVar3,'\x06',pbVar6);
  if ((((local_8 != (Global_sub_00526BA0_param_1Enum *)0x0) && (local_8[1] != 0)) &&
      ((char)local_8[2] != 0)) && (*(short *)(param_1 + 0x14) != 0)) {
    wsprintfA(&pBVar2->field_0x6c,&DAT_007c1890,local_8[1]);
    ccFntTy::SetSurf(pBVar2->field_028A,pBVar2->field_0068,0,iVar7,iVar3,local_14[2],local_14[3]);
    ccFntTy::WrStr(pBVar2->field_028A,(uint *)&pBVar2->field_0x6c,-2,-1,0);
  }
LAB_004ef4e9:
  Library::DKW::DDX::FUN_006b3640
            (DAT_008075a8,pBVar2->field_0060,0xffffffff,pBVar2->field_003C,pBVar2->field_0044);
  g_currentExceptionFrame = local_60.previous;
  return;
}

