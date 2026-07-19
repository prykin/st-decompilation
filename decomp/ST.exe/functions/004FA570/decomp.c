
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::ShiftControls */

void __thiscall CPanelTy::ShiftControls(CPanelTy *this,int param_1,int param_2)

{
  code *pcVar1;
  CPanelTy *this_00;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  InternalExceptionFrame local_50;
  uint local_c;
  CPanelTy *local_8;
  
  local_c = CONCAT31(local_c._1_3_,param_1 == 0);
  if (param_1 == 0) {
    if (param_2 == this->field_0138) {
      return;
    }
    this->field_0138 = param_2;
  }
  else {
    if (param_2 == this->field_0134) {
      return;
    }
    this->field_0134 = param_2;
  }
  puVar5 = (undefined4 *)&this->field_0x18;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  this->field_0028 = 0x24;
  if (param_2 == 0) {
    sVar2 = this->field_0241;
  }
  else {
    sVar2 = -this->field_0241;
  }
  this->field_002E = sVar2;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x452,0,iVar4,&DAT_007a4ccc,
                               s_CPanelTy__ShiftControls_007c22a0);
    if (iVar3 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x452);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 == 0) {
    if (*(int *)&local_8->field_0x9d0 != 0) {
      FUN_006e6080(local_8,2,*(int *)&local_8->field_0x9d0,(undefined4 *)&local_8->field_0x18);
    }
    piVar6 = (int *)&this_00->field_0xa15;
    iVar4 = 6;
    do {
      if (*piVar6 != 0) {
        FUN_006e6080(this_00,2,*piVar6,(undefined4 *)&this_00->field_0x18);
      }
      piVar6 = piVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    piVar6 = (int *)&this_00->field_0xb1f;
    iVar4 = 6;
    do {
      if (*piVar6 != 0) {
        FUN_006e6080(this_00,2,*piVar6,(undefined4 *)&this_00->field_0x18);
      }
      piVar6 = piVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = *(int *)&this_00->field_0xb37;
  }
  else {
    if (*(int *)&local_8->field_0x95c != 0) {
      FUN_006e6080(local_8,2,*(int *)&local_8->field_0x95c,(undefined4 *)&local_8->field_0x18);
    }
    piVar6 = (int *)&this_00->field_0x960;
    iVar4 = 4;
    do {
      if (*piVar6 != 0) {
        FUN_006e6080(this_00,2,*piVar6,(undefined4 *)&this_00->field_0x18);
      }
      piVar6 = piVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = *(int *)&this_00->field_0x970;
  }
  if (iVar4 != 0) {
    FUN_006e6080(this_00,2,iVar4,(undefined4 *)&this_00->field_0x18);
  }
  uVar7 = local_c & 0xff;
  if (*(int *)(&this_00->field_0x9c0 + uVar7 * 4) != 0) {
    FUN_006e6080(this_00,2,*(int *)(&this_00->field_0x9c0 + uVar7 * 4),
                 (undefined4 *)&this_00->field_0x18);
  }
  if (*(int *)(&this_00->field_0x2fe + uVar7 * 4) != 0) {
    FUN_006e6080(this_00,2,*(int *)(&this_00->field_0x2fe + uVar7 * 4),
                 (undefined4 *)&this_00->field_0x18);
  }
  if (*(int *)(&this_00->field_0x308 + uVar7 * 4) != 0) {
    FUN_006e6080(this_00,2,*(int *)(&this_00->field_0x308 + uVar7 * 4),
                 (undefined4 *)&this_00->field_0x18);
  }
  if (*(int *)(&this_00->field_0x310 + uVar7 * 4) != 0) {
    FUN_006e6080(this_00,2,*(int *)(&this_00->field_0x310 + uVar7 * 4),
                 (undefined4 *)&this_00->field_0x18);
  }
  if (((char)local_c != '\0') && (*(int *)(&this_00->field_0x314 + uVar7 * 4) != 0)) {
    FUN_006e6080(this_00,2,*(int *)(&this_00->field_0x314 + uVar7 * 4),
                 (undefined4 *)&this_00->field_0x18);
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

