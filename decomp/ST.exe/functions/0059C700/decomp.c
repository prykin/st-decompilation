
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::LoginCtrls */

void __thiscall FSGSTy::LoginCtrls(FSGSTy *this)

{
  code *pcVar1;
  FSGSTy *this_00;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar7;
  undefined4 local_8d8 [11];
  undefined4 local_8ac;
  undefined4 local_8a8;
  undefined4 local_8a4;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;
  
  puVar7 = local_8d8;
  local_8 = this;
  for (iVar5 = 0x223; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar5 = __setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar5 == 0) {
    puVar2 = FUN_006b54f0((uint *)0x0,1,1);
    this_00 = local_8;
    *(uint **)(local_8 + 0x1ae8) = puVar2;
    FUN_006b5aa0((int)puVar2,&DAT_00807e1d);
    puVar2 = FUN_006b54f0((uint *)0x0,1,1);
    *(uint **)(this_00 + 0x1aec) = puVar2;
    pcVar6 = (char *)&DAT_00807e5d;
    if (DAT_0080735f == '\0') {
      pcVar6 = &DAT_008016a0;
    }
    FUN_006b5aa0((int)puVar2,pcVar6);
    puVar7 = local_8d8;
    for (iVar5 = 0x223; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    local_8d8[2] = *(undefined4 *)(this_00 + 0x1a73);
    local_8d8[8] = *(undefined4 *)(this_00 + 0x1ae8);
    local_8ac = *(undefined4 *)(this_00 + 8);
    local_64 = 2;
    local_8a8 = 2;
    local_888 = 2;
    local_8d8[0] = 1;
    local_8d8[1] = 0x89;
    local_8d8[3] = 0xd2;
    local_8d8[4] = 0x106;
    local_8d8[5] = 0x17c;
    local_8d8[6] = 0x19;
    local_8d8[7] = 0x10;
    local_8a4 = 0x68ff;
    local_884 = 0x697f;
    local_60 = 0x6955;
    local_88c = local_8ac;
    local_68 = local_8ac;
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(6,(MMObjTy *)(this_00 + 0x1ac4),0,local_8d8,0);
    local_8d8[8] = *(undefined4 *)(this_00 + 0x1aec);
    local_8d8[1] = 0xa9;
    local_8d8[4] = 0x13d;
    local_8d8[5] = 0xaa;
    local_8d8[6] = 0x14;
    local_8d8[7] = 0x10;
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(6,(MMObjTy *)(this_00 + 0x1ac8),0,local_8d8,0);
    uVar3 = MMObjTy::CreateSprBut((MMObjTy *)this_00,3,1,0x19a,0x13d,0x16,0x14,0x6900,0x6980);
    *(undefined4 *)(this_00 + 0x1ad0) = uVar3;
    *(undefined4 *)(this_00 + 0x2d) = 0x61;
    *(undefined4 *)(this_00 + 0x35) = 0;
    FUN_006e6080(this_00,0xf,0,(undefined4 *)(this_00 + 0x1d));
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x5ac,0,iVar5,&DAT_007a4ccc,
                             s_FSGSTy__LoginCtrls_007cc2e4);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar5,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x5ac);
  return;
}

