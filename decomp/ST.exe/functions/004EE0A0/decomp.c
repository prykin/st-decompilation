
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\behpanel.cpp
   BehPanelTy::Update */

void __thiscall BehPanelTy::Update(BehPanelTy *this)

{
  code *pcVar1;
  BehPanelTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  int *piVar4;
  short *psVar5;
  void *unaff_EDI;
  Global_sub_005272B0_param_1Enum *pGVar6;
  short *psVar7;
  bool bVar8;
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
  iVar2 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Andrey_behpanel_cpp_007c1694,0xb2,0,iVar2,&DAT_007a4ccc
                               ,s_BehPanelTy__Update_007c1758);
    if (iVar3 == 0) {
      RaiseInternalException(iVar2,0,s_E____titans_Andrey_behpanel_cpp_007c1694,0xb2);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_28 = local_10->field_01AB;
  local_24 = *(undefined4 *)&local_10->field_0x1af;
  local_20 = *(undefined4 *)&local_10->field_0x1b3;
  local_1c = local_10->field_01B7;
  local_18 = *(undefined2 *)&local_10->field_0x1bb;
  local_16 = local_10->field_01BD;
  STAllPlayersC::GetPanelInfo(DAT_007fa174,0xb,&local_10->field_01AB);
  local_8 = (Global_sub_005272B0_param_1Enum *)&local_24;
  local_14 = -0x1af - (int)this_00;
  pGVar6 = &this_00->field_0x1af;
  piVar4 = &this_00->field_01CF;
  local_c = 6;
  do {
    this_00->field_0028 = 0x54;
    *(uint *)&this_00->field_0x2c = (uint)pGVar6[6];
    this_00->field_0030 = pGVar6 + local_14;
    FUN_006e6080(this_00,2,this_00->field_01BE,(undefined4 *)&this_00->field_0x18);
    if (*pGVar6 != *local_8) {
      *(undefined1 *)((int)piVar4 + -1) = 1;
      iVar2 = thunk_FUN_00525390(*pGVar6,this_00->field_01AB);
      *piVar4 = iVar2;
      iVar2 = thunk_FUN_005272b0(*pGVar6);
      piVar4[2] = iVar2;
      *(undefined1 *)(piVar4 + 3) = 3;
    }
    piVar4 = (int *)((int)piVar4 + 0x27);
    pGVar6 = pGVar6 + 1;
    local_8 = local_8 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  iVar2 = 3;
  bVar8 = true;
  psVar5 = (short *)&this_00->field_0x1af;
  psVar7 = (short *)&local_24;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar8 = *psVar5 == *psVar7;
    psVar5 = psVar5 + 1;
    psVar7 = psVar7 + 1;
  } while (bVar8);
  if (!bVar8) {
    this_00->field_0028 = 5;
    FUN_006e6080(this_00,2,this_00->field_01BE,(undefined4 *)&this_00->field_0x18);
  }
  if (this_00->field_0x1bb != (byte)local_18) {
    *(uint *)&this_00->field_0x2c = (uint)(byte)this_00->field_0x1bb;
    this_00->field_0028 = 0x20;
    FUN_006e6080(this_00,2,this_00->field_01C2,(undefined4 *)&this_00->field_0x18);
  }
  if (this_00->field_01BC != local_18._1_1_) {
    *(uint *)&this_00->field_0x2c = (uint)(byte)this_00->field_01BC;
    this_00->field_0028 = 0x20;
    FUN_006e6080(this_00,2,this_00->field_01C6,(undefined4 *)&this_00->field_0x18);
  }
  if (this_00->field_01BD != local_16) {
    *(uint *)&this_00->field_0x2c = (uint)(byte)this_00->field_01BD;
    this_00->field_0028 = 0x20;
    FUN_006e6080(this_00,2,this_00->field_01CA,(undefined4 *)&this_00->field_0x18);
  }
  g_currentExceptionFrame = local_6c.previous;
  return;
}

