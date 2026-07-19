
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::SwitchTV */

void __thiscall CPanelTy::SwitchTV(CPanelTy *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  CPanelTy *this_00;
  undefined1 *puVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  ushort *puVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  InternalExceptionFrame local_58;
  byte local_14;
  undefined3 uStack_13;
  CPanelTy *local_10;
  uint local_c;
  undefined1 *local_8;
  
  if (param_1 == 0) {
    local_8 = &this->field_0C51;
  }
  else {
    local_8 = &this->field_0B63;
  }
  local_c = CONCAT31(local_c._1_3_,param_1 == 0);
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  puVar3 = local_8;
  uVar2 = local_c;
  this_00 = local_10;
  if (iVar5 == 0) {
    uVar9 = local_c & 0xff;
    if ((&local_10->field_02EC)[uVar9] == '\x01') {
      puVar12 = (undefined4 *)0x0;
      iVar11 = 0;
      iVar5 = 1;
      bVar4 = 0;
      uVar10 = 6;
      if (DAT_0080731a != 0) {
        pbVar7 = (byte *)thunk_FUN_00526100(local_8,1);
        puVar8 = mfRLoad(DAT_00806794,CASE_1F,pbVar7,uVar10,bVar4,iVar5,iVar11,puVar12);
        (&this_00->field_02E2)[uVar9] = puVar8;
        (&this_00->field_02EC)[uVar9] = 5;
        (&this_00->field_02EA)[uVar9] = 0;
        pcVar6 = thunk_FUN_00526100(puVar3,0);
        *(char **)(&this_00->field_0x2f6 + uVar9 * 4) = pcVar6;
        thunk_FUN_005252c0(0xb3);
        g_currentExceptionFrame = local_58.previous;
        return;
      }
      pbVar7 = (byte *)thunk_FUN_00526100(local_8,0);
      puVar8 = mfRLoad(DAT_00806794,CASE_1F,pbVar7,uVar10,bVar4,iVar5,iVar11,puVar12);
      (&this_00->field_02E2)[uVar9] = puVar8;
      (&this_00->field_02EA)[uVar9] = 0;
      thunk_FUN_004f1890(this_00,(byte)uVar2);
      bVar4 = (-(param_1 != 0) & 0xf8U) + 8;
      _local_14 = CONCAT31(uStack_13,bVar4);
      if (bVar4 < 0xb) {
        uVar2 = (uint)bVar4;
        if (-1 < (int)(&this_00->field_0148)[uVar2]) {
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,(&this_00->field_0148)[uVar2],0xffffffff,
                     (&this_00->field_003C)[uVar2],*(uint *)(&this_00->field_0x94 + uVar2 * 4));
        }
      }
    }
    else if ((&local_10->field_02EC)[uVar9] == '\x05') {
      pcVar6 = thunk_FUN_00526100(local_8,0);
      *(char **)(&this_00->field_0x2f6 + uVar9 * 4) = pcVar6;
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar11 = ReportDebugMessage(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0xd3,0,iVar5,&DAT_007a4ccc,
                              s_CPanelTy__SwitchTV_007c2484);
  if (iVar11 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar5,0,s_E____titans_Andrey_cpanel1_cpp_007c23cc,0xd3);
  return;
}

