
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::CreateCtrls */

void __thiscall SettMapMTy::CreateCtrls(SettMapMTy *this,char param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  int iVar6;
  SettMapMTy *this_00;
  void *unaff_EDI;
  undefined4 local_a80 [6];
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
  
  puVar3 = local_a80;
  local_8 = this;
  for (iVar4 = 0x223; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = local_60;
  for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = local_1f4;
  for (iVar4 = 0x54; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_a4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a4;
  iVar4 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar4 == 0) {
    if (param_1 == '\0') {
      iVar4 = 1;
      iVar5 = 200;
      puVar3 = local_1f4 + 1;
      iVar6 = 2;
      do {
        puVar3[-1] = iVar4;
        *puVar3 = 0;
        puVar3[4] = 0x7d;
        puVar3[5] = 0x16;
        puVar3[2] = iVar5;
        puVar3[3] = 0x1db;
        this_00 = local_8;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x7d;
        puVar3 = puVar3 + 0x1c;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      local_60[0] = 1;
      local_18 = local_1f4;
      local_14 = 1;
      local_50 = *(undefined4 *)&local_8->field_0x8;
      local_4c = 2;
      local_2c = 2;
      local_48 = 0x6326;
      local_28 = 0x6327;
      local_30 = local_50;
      (**(code **)(**(int **)&local_8->field_0xc + 8))(5,&local_8[1].field_0xdf,0,local_60,0);
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)&this_00[1].field_0xe3);
    }
    else {
      if (local_8[1].field_0xc9 != '\0') {
        StartSystemTy::CreateChatView(DAT_0081176c);
        puVar3 = local_a80;
        for (iVar4 = 0x223; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        local_a80[0] = 1;
        local_a80[1] = 9;
        local_a80[2] = DAT_0081176c->field_0034;
        local_a80[3] = 0xcb;
        local_a80[4] = 0x23f;
        local_a80[5] = *(undefined4 *)(DAT_0081176c->field_0682 + 4);
        local_a68 = *(undefined4 *)(DAT_0081176c->field_0682 + 8);
        local_a64 = 0x104;
        local_a60 = DAT_0081176c->field_0686;
        piVar1 = *(int **)&this_00->field_0xc;
        local_21c = 0x100;
        local_a34 = piVar1[5];
        local_a2c = 0xc0a0;
        local_a30 = 0;
        local_9f4 = piVar1[5];
        local_9f0 = 0;
        local_9ec = 0xc0a2;
        (**(code **)(*piVar1 + 8))(6,&DAT_0081176c->field_054C,0,local_a80,0);
      }
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,DAT_0081176c->field_0558);
      if (*(uint *)&DAT_0081176c->field_0x560 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)&DAT_0081176c->field_0x5a4,*(uint *)&DAT_0081176c->field_0x560,
                   0xfffffffe,*(uint *)&DAT_0081176c->field_0x578,
                   *(uint *)&DAT_0081176c->field_0x57c);
      }
      if (*(uint *)&DAT_0081176c->field_0x5f1 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)&DAT_0081176c->field_0x635,*(uint *)&DAT_0081176c->field_0x5f1,
                   0xfffffffe,*(uint *)&DAT_0081176c->field_0x609,
                   *(uint *)&DAT_0081176c->field_0x60d);
      }
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,DAT_0081176c->field_0554);
    }
    SettMapTy::CreateCtrls((SettMapTy *)this_00,param_1);
    if (param_1 == '\0') {
      thunk_FUN_00540dc0(1,*(undefined4 *)&this_00->field_0x8,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
    }
    g_currentExceptionFrame = local_a4.previous;
    return;
  }
  g_currentExceptionFrame = local_a4.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x9d,0,iVar4,&DAT_007a4ccc,
                             s_SettMapMTy__CreateCtrls_007cd2b8);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar4,0,s_E____titans_Start_settmobj_cpp_007cd258,0x9d);
  return;
}

