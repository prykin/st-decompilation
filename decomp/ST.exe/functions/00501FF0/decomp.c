
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::Update2PanelWB */

void __thiscall CPanelTy::Update2PanelWB(CPanelTy *this)

{
  undefined4 *puVar1;
  uint uVar2;
  code *pcVar3;
  CPanelTy *this_00;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  int *piVar6;
  void *unaff_EDI;
  int *piVar7;
  undefined4 *puVar8;
  InternalExceptionFrame local_a8;
  int local_64;
  char local_60;
  char local_5f;
  char local_48;
  char local_47;
  char local_46;
  char local_30;
  CPanelTy *local_8;
  
  local_a8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a8;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_a8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_a8.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Andrey_cpanel2_cpp_007c2524,0x13e,0,iVar4,&DAT_007a4ccc
                               ,s_CPanelTy__Update2PanelWB_007c25c0);
    if (iVar5 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Andrey_cpanel2_cpp_007c2524,0x13e);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar1 = &local_8->field_0B99;
  piVar6 = puVar1;
  piVar7 = &local_64;
  for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  puVar8 = puVar1;
  for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  STAllPlayersC::GetPanelInfo(g_sTAllPlayers_007FA174,2,puVar1);
  if (local_5f != this_00->field_0B9E) {
cf_common_exit_00502155:
    PaintCtrlBoat(this_00);
    SetControlBoat(this_00);
    thunk_FUN_00501a10((int)this_00);
    g_currentExceptionFrame = local_a8.previous;
    return;
  }
  switch(this_00->field_0B9E) {
  case 1:
    if ((local_64 != this_00->field_0B99) || (local_60 != this_00->field_0B9D))
    goto cf_common_exit_00502155;
    thunk_FUN_00501d00(this_00,&this_00->field_0B99,&local_64);
    switch(this_00->field_0B99) {
    case 8:
    case 0x14:
      if (((this_00->field_0BB6 == local_47) && (this_00->field_0BB5 == local_48)) &&
         (this_00->field_0BB7 == local_46)) {
        g_currentExceptionFrame = local_a8.previous;
        return;
      }
      PaintBCapacity(this_00);
      uVar2 = this_00->field_0154;
      break;
    default:
      goto switchD_0050207d_default;
    case 0x16:
    case 0x17:
    case 0x25:
      if (this_00->field_0BCD == local_30) {
        g_currentExceptionFrame = local_a8.previous;
        return;
      }
      PaintBEnergy(this_00);
      uVar2 = this_00->field_0154;
    }
    break;
  case 2:
  case 3:
    if (local_64 == this_00->field_0B99) {
      thunk_FUN_00501d00(this_00,&this_00->field_0B99,&local_64);
      g_currentExceptionFrame = local_a8.previous;
      return;
    }
    goto cf_common_exit_00502155;
  case 4:
    if (local_64 != this_00->field_0B99) goto cf_common_exit_00502155;
    if (this_00->field_0B99 != 0xaf) {
      g_currentExceptionFrame = local_a8.previous;
      return;
    }
    PaintBEnergy(this_00);
    uVar2 = this_00->field_0154;
    break;
  default:
    goto switchD_0050207d_default;
  }
  if (-1 < (int)uVar2) {
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,uVar2,0xffffffff,this_00->field_0048,this_00->field_00A0);
  }
switchD_0050207d_default:
  g_currentExceptionFrame = local_a8.previous;
  return;
}

