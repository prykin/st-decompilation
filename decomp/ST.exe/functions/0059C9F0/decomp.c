
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::NewIDCtrls */

void __thiscall FSGSTy::NewIDCtrls(FSGSTy *this)

{
  code *pcVar1;
  FSGSTy *this_00;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  ccFntTy **ppcVar5;
  ccFntTy *local_8d8 [8];
  uint *local_8b8;
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
  
  ppcVar5 = local_8d8;
  local_8 = this;
  for (iVar4 = 0x223; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppcVar5 = (ccFntTy *)0x0;
    ppcVar5 = ppcVar5 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    puVar2 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    this_00 = local_8;
    local_8->field_1AE8 = puVar2;
    Library::DKW::TBL::FUN_006b5aa0(puVar2,&DAT_00807e1d);
    puVar2 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    this_00->field_1AEC = puVar2;
    Library::DKW::TBL::FUN_006b5aa0(puVar2,&DAT_008016a0);
    puVar2 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    this_00->field_1AF0 = puVar2;
    Library::DKW::TBL::FUN_006b5aa0(puVar2,&DAT_008016a0);
    puVar2 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    this_00->field_1AF8 = puVar2;
    Library::DKW::TBL::FUN_006b5aa0(puVar2,&DAT_008016a0);
    puVar2 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    this_00->field_1AFC = puVar2;
    Library::DKW::TBL::FUN_006b5aa0(puVar2,&DAT_008016a0);
    puVar2 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    this_00->field_1B00 = puVar2;
    Library::DKW::TBL::FUN_006b5aa0(puVar2,&DAT_008016a0);
    puVar2 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    this_00->field_1B04 = puVar2;
    Library::DKW::TBL::FUN_006b5aa0(puVar2,&DAT_008016a0);
    ppcVar5 = local_8d8;
    for (iVar4 = 0x223; iVar4 != 0; iVar4 = iVar4 + -1) {
      *ppcVar5 = (ccFntTy *)0x0;
      ppcVar5 = ppcVar5 + 1;
    }
    local_8d8[2] = this_00->field_1A73;
    local_8b8 = (uint *)this_00->field_1AE8;
    local_8ac = this_00->field_0008;
    local_8d8[0] = (ccFntTy *)0x1;
    local_8d8[1] = (ccFntTy *)0x89;
    local_8d8[3] = (ccFntTy *)0xd2;
    local_8d8[4] = (ccFntTy *)0xd9;
    local_8d8[5] = (ccFntTy *)0x17c;
    local_8d8[6] = (ccFntTy *)0x19;
    local_8d8[7] = (ccFntTy *)0x10;
    local_64 = 2;
    local_8a8 = 2;
    local_888 = 2;
    local_8a4 = 0x68ff;
    local_884 = 0x697f;
    local_60 = 0x6955;
    local_88c = local_8ac;
    local_68 = local_8ac;
    (**(code **)(*(int *)this_00->field_000C + 8))(6,&this_00->field_1AC4,0,local_8d8,0);
    local_8b8 = (uint *)this_00->field_1AEC;
    local_8d8[1] = (ccFntTy *)0xa9;
    local_8d8[4] = (ccFntTy *)0x106;
    local_8d8[5] = (ccFntTy *)0xaa;
    local_8d8[6] = (ccFntTy *)0x14;
    local_8d8[7] = (ccFntTy *)0x10;
    (**(code **)(*(int *)this_00->field_000C + 8))(6,&this_00->field_1AC8,0,local_8d8,0);
    local_8b8 = (uint *)this_00->field_1AF0;
    local_8d8[3] = (ccFntTy *)0x1a4;
    (**(code **)(*(int *)this_00->field_000C + 8))(6,&this_00->field_1ACC,0,local_8d8,0);
    local_8b8 = (uint *)this_00->field_1AF8;
    local_8d8[1] = (ccFntTy *)0x89;
    local_8d8[3] = (ccFntTy *)0xd2;
    local_8d8[4] = (ccFntTy *)0x12e;
    local_8d8[5] = (ccFntTy *)0x64;
    local_8d8[7] = (ccFntTy *)0x1ff;
    (**(code **)(*(int *)this_00->field_000C + 8))(6,&this_00->field_1AD8,0,local_8d8,0);
    local_8b8 = (uint *)this_00->field_1AFC;
    local_8d8[3] = (ccFntTy *)0x15e;
    (**(code **)(*(int *)this_00->field_000C + 8))(6,&this_00->field_1ADC,0,local_8d8,0);
    local_8b8 = (uint *)this_00->field_1B00;
    local_8d8[3] = (ccFntTy *)0x1ea;
    (**(code **)(*(int *)this_00->field_000C + 8))(6,&this_00->field_1AE0,0,local_8d8,0);
    local_8b8 = this_00->field_1B04;
    local_8d8[1] = (ccFntTy *)0xc8;
    local_8d8[3] = (ccFntTy *)0xd2;
    local_8d8[4] = (ccFntTy *)0x156;
    local_8d8[5] = (ccFntTy *)0x17c;
    local_8d8[6] = (ccFntTy *)0x4b;
    local_884 = 0x6981;
    (**(code **)(*(int *)this_00->field_000C + 8))(6,&this_00->field_1AE4,0,local_8d8,0);
    this_00->field_002D = 0x61;
    *(undefined4 *)&this_00->field_0x35 = 0;
    FUN_006e6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x5f4,0,iVar4,&DAT_007a4ccc,
                             s_FSGSTy__NewIDCtrls_007cc2fc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar4,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x5f4);
  return;
}

