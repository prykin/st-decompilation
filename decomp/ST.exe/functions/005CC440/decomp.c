
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::CreateCtrls */

void __thiscall SettMapMTy::CreateCtrls(SettMapMTy *this,char param_1)

{
  StartSystemTy *this_00;
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  int iVar5;
  SettMapMTy *this_01;
  void *unaff_EDI;
  ccFntTy **ppcVar6;
  ccFntTy *local_a80 [6];
  undefined4 local_a68;
  undefined4 local_a64;
  undefined4 local_a60;
  int local_a34;
  undefined4 local_a30;
  undefined4 local_a2c;
  int local_9f4;
  undefined4 local_9f0;
  undefined4 local_9ec;
  undefined4 local_21c;
  undefined4 local_1f4 [84];
  InternalExceptionFrame local_a4;
  undefined4 local_60 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_18;
  undefined4 local_14;
  SettMapMTy *local_8;
  
  ppcVar6 = local_a80;
  local_8 = this;
  for (iVar3 = 0x223; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppcVar6 = (ccFntTy *)0x0;
    ppcVar6 = ppcVar6 + 1;
  }
  puVar2 = local_60;
  for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = local_1f4;
  for (iVar3 = 0x54; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_a4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a4;
  iVar3 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = local_8;
  if (iVar3 == 0) {
    if (param_1 == '\0') {
      iVar3 = 1;
      iVar4 = 200;
      puVar2 = local_1f4 + 1;
      iVar5 = 2;
      do {
        puVar2[-1] = iVar3;
        *puVar2 = 0;
        puVar2[4] = 0x7d;
        puVar2[5] = 0x16;
        puVar2[2] = iVar4;
        puVar2[3] = 0x1db;
        this_01 = local_8;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x7d;
        puVar2 = puVar2 + 0x1c;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      local_60[0] = 1;
      local_18 = local_1f4;
      local_14 = 1;
      local_50 = local_8->field_0008;
      local_4c = 2;
      local_2c = 2;
      local_48 = 0x6326;
      local_28 = 0x6327;
      local_30 = local_50;
      (*local_8->field_000C->vtable->CreateObject)
                ((SystemClassTy *)local_8->field_000C,5,&local_8->field_21FC,(int *)0x0,local_60,0);
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,this_01->field_2200);
    }
    else {
      if (local_8->field_21E6 != '\0') {
        StartSystemTy::CreateChatView(PTR_0081176c);
        ppcVar6 = local_a80;
        for (iVar3 = 0x223; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppcVar6 = (ccFntTy *)0x0;
          ppcVar6 = ppcVar6 + 1;
        }
        local_a80[0] = (ccFntTy *)0x1;
        local_a80[1] = (ccFntTy *)0x9;
        local_a80[2] = PTR_0081176c->field_0034;
        local_a80[3] = (ccFntTy *)0xcb;
        local_a80[4] = (ccFntTy *)0x23f;
        local_a80[5] = *(ccFntTy **)(PTR_0081176c->field_0682 + 4);
        local_a68 = *(undefined4 *)(PTR_0081176c->field_0682 + 8);
        local_a64 = 0x104;
        local_a60 = PTR_0081176c->field_0686;
        this_00 = this_01->field_000C;
        local_21c = 0x100;
        local_a34 = this_00->field_0014;
        local_a2c = 0xc0a0;
        local_a30 = 0;
        local_9f4 = this_00->field_0014;
        local_9f0 = 0;
        local_9ec = 0xc0a2;
        (*this_00->vtable->CreateObject)
                  ((SystemClassTy *)this_00,6,&PTR_0081176c->field_054C,(int *)0x0,local_a80,0);
      }
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,PTR_0081176c->field_0558);
      if (PTR_0081176c->field_0560 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)PTR_0081176c->field_05A4,PTR_0081176c->field_0560,0xfffffffe,
                   PTR_0081176c->field_0578,PTR_0081176c->field_057C);
      }
      if (PTR_0081176c->field_05F1 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)PTR_0081176c->field_0635,PTR_0081176c->field_05F1,0xfffffffe,
                   PTR_0081176c->field_0609,PTR_0081176c->field_060D);
      }
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,PTR_0081176c->field_0554);
    }
    SettMapTy::CreateCtrls((SettMapTy *)this_01,param_1);
    if (param_1 == '\0') {
      SetAccelerator(1,this_01->field_0008,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
    }
    g_currentExceptionFrame = local_a4.previous;
    return;
  }
  g_currentExceptionFrame = local_a4.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x9d,0,iVar3,&DAT_007a4ccc,
                             s_SettMapMTy__CreateCtrls_007cd2b8);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_settmobj_cpp_007cd258,0x9d);
  return;
}

