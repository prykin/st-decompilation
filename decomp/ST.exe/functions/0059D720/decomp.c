
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::InfoCtrls */

void __thiscall FSGSTy::InfoCtrls(FSGSTy *this,void *param_1)

{
  byte bVar1;
  code *pcVar2;
  FSGSTy *this_00;
  AnonPointee_FSGSTy_1B0C *pAVar3;
  AnonPointee_FSGSTy_1AF8 *pAVar4;
  AnonPointee_FSGSTy_1AFC *pAVar5;
  AnonPointee_FSGSTy_1B00 *pAVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  undefined4 unaff_ESI;
  byte *pbVar10;
  void *unaff_EDI;
  ccFntTy **ppcVar11;
  bool bVar12;
  ccFntTy *local_8dc [8];
  AnonPointee_FSGSTy_1AF8 *local_8bc;
  undefined4 local_8b0;
  undefined4 local_8ac;
  undefined4 local_8a8;
  undefined4 local_890;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  InternalExceptionFrame local_50;
  FSGSTy *local_c;
  int local_8;
  
  pAVar3 = this->field_1B0C;
  if (pAVar3 != (AnonPointee_FSGSTy_1B0C *)0x0) {
    pbVar10 = &DAT_00807e1d;
    ppcVar11 = local_8dc;
    local_c = this;
    for (iVar9 = 0x223; iVar9 != 0; iVar9 = iVar9 + -1) {
      *ppcVar11 = (ccFntTy *)0x0;
      ppcVar11 = ppcVar11 + 1;
    }
    do {
      bVar1 = pAVar3->field_0000;
      bVar12 = bVar1 < *pbVar10;
      if (bVar1 != *pbVar10) {
LAB_0059d77b:
        local_8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_0059d780;
      }
      if (bVar1 == 0) break;
      bVar1 = pAVar3->field_0001;
      bVar12 = bVar1 < pbVar10[1];
      if (bVar1 != pbVar10[1]) goto LAB_0059d77b;
      pAVar3 = (AnonPointee_FSGSTy_1B0C *)&pAVar3->field_0x2;
      pbVar10 = pbVar10 + 2;
    } while (bVar1 != 0);
    local_8 = 0;
LAB_0059d780:
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    iVar9 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar9 == 0) {
      pAVar4 = (AnonPointee_FSGSTy_1AF8 *)Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
      this_00 = local_c;
      local_c->field_1AF8 = pAVar4;
      Library::DKW::TBL::FUN_006b5aa0((uint *)pAVar4,&DAT_008016a0);
      pAVar5 = (AnonPointee_FSGSTy_1AFC *)Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
      this_00->field_1AFC = pAVar5;
      Library::DKW::TBL::FUN_006b5aa0((uint *)pAVar5,&DAT_008016a0);
      pAVar6 = (AnonPointee_FSGSTy_1B00 *)Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
      this_00->field_1B00 = pAVar6;
      Library::DKW::TBL::FUN_006b5aa0((uint *)pAVar6,&DAT_008016a0);
      puVar7 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
      this_00->field_1B04 = puVar7;
      Library::DKW::TBL::FUN_006b5aa0(puVar7,&DAT_008016a0);
      ppcVar11 = local_8dc;
      for (iVar9 = 0x223; iVar8 = local_8, iVar9 != 0; iVar9 = iVar9 + -1) {
        *ppcVar11 = (ccFntTy *)0x0;
        ppcVar11 = ppcVar11 + 1;
      }
      local_8dc[0] = (ccFntTy *)0x1;
      local_8dc[1] = (ccFntTy *)0x89;
      if (local_8 != 0) {
        local_8dc[1] = (ccFntTy *)0x99;
      }
      local_8dc[2] = this_00->field_1A73;
      local_8bc = this_00->field_1AF8;
      local_8b0 = this_00->field_0008;
      local_68 = 2;
      local_8ac = 2;
      local_88c = 2;
      local_8dc[3] = (ccFntTy *)0xd2;
      local_8dc[4] = (ccFntTy *)0xb5;
      local_8dc[5] = (ccFntTy *)0x64;
      local_8dc[6] = (ccFntTy *)0x14;
      local_8dc[7] = (ccFntTy *)0x1ff;
      local_8a8 = 0x68ff;
      local_888 = 0x697f;
      local_64 = 0x6955;
      local_890 = local_8b0;
      local_6c = local_8b0;
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AD8,(int *)0x0,local_8dc,0)
      ;
      local_8bc = (AnonPointee_FSGSTy_1AF8 *)this_00->field_1AFC;
      local_8dc[3] = (ccFntTy *)0x15e;
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1ADC,(int *)0x0,local_8dc,0)
      ;
      local_8bc = (AnonPointee_FSGSTy_1AF8 *)this_00->field_1B00;
      local_8dc[3] = (ccFntTy *)0x1ea;
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AE0,(int *)0x0,local_8dc,0)
      ;
      local_8dc[1] = (ccFntTy *)0xc8;
      if (iVar8 != 0) {
        local_8dc[1] = (ccFntTy *)0xcc;
      }
      local_8bc = (AnonPointee_FSGSTy_1AF8 *)this_00->field_1B04;
      local_8dc[3] = (ccFntTy *)0xd2;
      local_8dc[4] = (ccFntTy *)0xdd;
      local_8dc[5] = (ccFntTy *)0x17c;
      local_8dc[6] = (ccFntTy *)0x4b;
      local_888 = 0x6981;
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AE4,(int *)0x0,local_8dc,0)
      ;
      this_00->field_002D = 0x61;
      *(undefined4 *)&this_00->field_0x35 = 0;
      FUN_006e6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar8 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x69c,0,iVar9,&DAT_007a4ccc
                               ,s_FSGSTy__InfoCtrls_007cc33c);
    if (iVar8 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar9,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x69c);
  }
  return;
}

