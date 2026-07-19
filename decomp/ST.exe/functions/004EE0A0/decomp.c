
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\behpanel.cpp
   BehPanelTy::Update */

void __thiscall BehPanelTy::Update(BehPanelTy *this)

{
  undefined4 uVar1;
  code *pcVar2;
  BehPanelTy *this_00;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  int *piVar5;
  short *psVar6;
  void *unaff_EDI;
  Global_sub_005272B0_param_1Enum *pGVar7;
  short *psVar8;
  bool bVar9;
  InternalExceptionFrame local_6c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  byte local_16;
  int local_14;
  BehPanelTy *local_10;
  int local_c;
  Global_sub_005272B0_param_1Enum *local_8;
  
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Andrey_behpanel_cpp_007c1694,0xb2,0,iVar3,&DAT_007a4ccc
                               ,s_BehPanelTy__Update_007c1758);
    if (iVar4 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Andrey_behpanel_cpp_007c1694,0xb2);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_28 = *(undefined4 *)&local_10[1].field_0x33;
  local_24 = *(undefined4 *)&local_10[1].field_0x37;
  local_20 = *(undefined4 *)&local_10[1].field_0x3b;
  local_1c = *(undefined4 *)((int)&local_10[1].field_003C + 3);
  local_18 = *(undefined2 *)&local_10[1].field_0x43;
  local_16 = local_10[1].field_0x45;
  STAllPlayersC::GetPanelInfo(DAT_007fa174,0xb,(int *)&local_10[1].field_0x33);
  local_8 = (Global_sub_005272B0_param_1Enum *)&local_24;
  local_14 = -0x1af - (int)this_00;
  pGVar7 = &this_00[1].field_0x37;
  piVar5 = (int *)&this_00[1].field_0x57;
  local_c = 6;
  do {
    uVar1 = *(undefined4 *)&this_00[1].field_0x46;
    this_00->field_0028 = 0x54;
    *(uint *)&this_00->field_0x2c = (uint)pGVar7[6];
    *(Global_sub_005272B0_param_1Enum **)&this_00->field_0x30 = pGVar7 + local_14;
    FUN_006e6080(this_00,2,uVar1,(undefined4 *)&this_00->field_0x18);
    if (*pGVar7 != *local_8) {
      *(undefined1 *)((int)piVar5 + -1) = 1;
      iVar3 = thunk_FUN_00525390(*pGVar7,*(int *)&this_00[1].field_0x33);
      *piVar5 = iVar3;
      iVar3 = thunk_FUN_005272b0(*pGVar7);
      piVar5[2] = iVar3;
      *(undefined1 *)(piVar5 + 3) = 3;
    }
    piVar5 = (int *)((int)piVar5 + 0x27);
    pGVar7 = pGVar7 + 1;
    local_8 = local_8 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  iVar3 = 3;
  bVar9 = true;
  psVar6 = (short *)&this_00[1].field_0x37;
  psVar8 = (short *)&local_24;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar9 = *psVar6 == *psVar8;
    psVar6 = psVar6 + 1;
    psVar8 = psVar8 + 1;
  } while (bVar9);
  if (!bVar9) {
    uVar1 = *(undefined4 *)&this_00[1].field_0x46;
    this_00->field_0028 = 5;
    FUN_006e6080(this_00,2,uVar1,(undefined4 *)&this_00->field_0x18);
  }
  if (this_00[1].field_0x43 != (byte)local_18) {
    uVar1 = *(undefined4 *)&this_00[1].field_0x4a;
    *(uint *)&this_00->field_0x2c = (uint)(byte)this_00[1].field_0x43;
    this_00->field_0028 = 0x20;
    FUN_006e6080(this_00,2,uVar1,(undefined4 *)&this_00->field_0x18);
  }
  if (this_00[1].field_0x44 != local_18._1_1_) {
    uVar1 = *(undefined4 *)&this_00[1].field_0x4e;
    *(uint *)&this_00->field_0x2c = (uint)(byte)this_00[1].field_0x44;
    this_00->field_0028 = 0x20;
    FUN_006e6080(this_00,2,uVar1,(undefined4 *)&this_00->field_0x18);
  }
  if (this_00[1].field_0x45 != local_16) {
    *(uint *)&this_00->field_0x2c = (uint)(byte)this_00[1].field_0x45;
    uVar1 = *(undefined4 *)&this_00[1].field_0x52;
    this_00->field_0028 = 0x20;
    FUN_006e6080(this_00,2,uVar1,(undefined4 *)&this_00->field_0x18);
  }
  g_currentExceptionFrame = local_6c.previous;
  return;
}

