
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::JoinGameCtrls */

void __thiscall FSGSTy::JoinGameCtrls(FSGSTy *this)

{
  code *pcVar1;
  FSGSTy *this_00;
  uint uVar2;
  undefined4 uVar3;
  LPBITMAPINFO ptVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_ESI;
  undefined4 *puVar8;
  void *unaff_EDI;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 local_dac [11];
  undefined4 local_d80;
  undefined4 local_d7c;
  undefined4 local_d78;
  undefined4 local_d60;
  undefined4 local_d5c;
  undefined4 local_d58;
  undefined4 local_d20;
  undefined4 local_d1c;
  undefined4 local_d18;
  undefined4 local_53c;
  undefined4 local_538;
  undefined4 local_534;
  int local_520 [5];
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_504;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 local_490;
  undefined4 local_3f4;
  undefined4 local_3f0 [4];
  int local_3e0;
  undefined4 local_3dc;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_274;
  undefined4 local_270 [4];
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_208;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_50;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;
  
  puVar8 = local_dac;
  local_8 = this;
  for (iVar7 = 0x223; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  piVar9 = local_520;
  for (iVar7 = 0x135; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar7 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar7 == 0) {
    if (*(int *)(local_8 + 0x1e8e) != 0) {
      FUN_006ab060((undefined4 *)(local_8 + 0x1e8e));
    }
    if (*(int *)(this_00 + 0x1e92) != 0) {
      FUN_006ab060((undefined4 *)(this_00 + 0x1e92));
    }
    iVar7 = 1;
    puVar8 = (undefined4 *)(*(int *)(this_00 + 0x5d) + 0x28);
    uVar2 = FUN_006b4fe0(*(int *)(this_00 + 0x5d));
    uVar3 = FUN_006b50c0(0x174,0x175,(uint)*(ushort *)(*(int *)(this_00 + 0x5d) + 0xe),uVar2,puVar8,
                         iVar7);
    *(undefined4 *)(this_00 + 0x1e8e) = uVar3;
    ptVar4 = Library::DKW::DDX::FUN_006c4880(DAT_0080759c,0x199,0x5e,0x174,0x175,8);
    *(LPBITMAPINFO *)(this_00 + 0x1e92) = ptVar4;
    ptVar4 = Library::DKW::DDX::FUN_006c4880(DAT_0080759c,0x13,0x5e,0x174,0x175,8);
    *(LPBITMAPINFO *)(this_00 + 0x1e9a) = ptVar4;
    puVar5 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    *(uint **)(this_00 + 0x1ae8) = puVar5;
    Library::DKW::TBL::FUN_006b5aa0((int)puVar5,&DAT_008016a0);
    puVar5 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    *(uint **)(this_00 + 0x1aec) = puVar5;
    Library::DKW::TBL::FUN_006b5aa0((int)puVar5,&DAT_008016a0);
    puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x14,0x25c,10);
    *(uint **)(this_00 + 0x1ebe) = puVar5;
    local_520[4] = 0x15b - *(int *)(this_00 + 0x1cff);
    local_4f8 = *(undefined4 *)(this_00 + 8);
    local_520[0] = 0;
    local_520[2] = 0x14;
    local_520[3] = 100;
    local_50c = 0x169;
    local_508 = 0;
    local_504 = 0;
    local_4f4 = 2;
    local_4f0 = 0x8160;
    local_4d4 = 2;
    local_4d0 = 0x8161;
    local_4b4 = 2;
    local_4b0 = 0x63ff;
    local_494 = 2;
    local_490 = 0x8163;
    if (DAT_0080734c != '\0') {
      local_50 = 1;
    }
    local_3f0[0] = 0;
    local_3f0[2] = *(undefined4 *)(this_00 + 0x1cf7);
    local_3e0 = *(int *)(this_00 + 0x1cff);
    local_3f0[3] = *(undefined4 *)(this_00 + 0x1cfb);
    local_3dc = *(undefined4 *)(this_00 + 0x1d03);
    local_3f4 = 2;
    local_3f0[1] = 2;
    local_2e0 = 500;
    local_2dc = 0x32;
    local_390 = local_4f8;
    local_38c = 2;
    local_388 = 0x8164;
    local_274 = 2;
    puVar8 = local_3f0;
    puVar10 = local_270;
    for (iVar7 = 0x5f; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    local_270[2] = *(undefined4 *)(this_00 + 0x1d88);
    local_270[3] = *(undefined4 *)(this_00 + 0x1d8c);
    local_260 = *(undefined4 *)(this_00 + 0x1d90);
    local_25c = *(undefined4 *)(this_00 + 0x1d94);
    local_e4 = *(undefined4 *)(this_00 + 0x1e19);
    local_e0 = *(undefined4 *)(this_00 + 0x1e1d);
    local_dc = *(undefined4 *)(this_00 + 0x1e21);
    local_208 = 0x8165;
    local_f4 = 3;
    local_f0 = 1;
    local_e8 = 0;
    local_d8 = 0x126;
    local_d4 = 0xe;
    local_9c = 2;
    local_98 = 0x8166;
    local_4d8 = local_4f8;
    local_4b8 = local_4f8;
    local_498 = local_4f8;
    local_a0 = local_4f8;
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(7,(MMObjTy *)(this_00 + 0x1b20),0,local_520,0);
    if (*(uint *)(this_00 + 0x1cdf) != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                (*(uint **)(this_00 + 0x1d23),*(uint *)(this_00 + 0x1cdf),0xfffffffe,
                 *(uint *)(this_00 + 0x1cf7),*(uint *)(this_00 + 0x1cfb));
    }
    if (*(uint *)(this_00 + 0x1d70) != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                (*(uint **)(this_00 + 0x1db4),*(uint *)(this_00 + 0x1d70),0xfffffffe,
                 *(uint *)(this_00 + 0x1d88),*(uint *)(this_00 + 0x1d8c));
    }
    if (*(uint *)(this_00 + 0x1e01) != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                (*(uint **)(this_00 + 0x1e45),*(uint *)(this_00 + 0x1e01),0xfffffffe,
                 *(uint *)(this_00 + 0x1e19),*(uint *)(this_00 + 0x1e1d));
    }
    local_dac[8] = *(undefined4 *)(this_00 + 0x1ae8);
    puVar8 = local_dac;
    for (iVar7 = 0x223; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    local_dac[2] = *(undefined4 *)(this_00 + 0x1a73);
    local_d80 = *(undefined4 *)(this_00 + 8);
    local_dac[0] = 1;
    local_dac[1] = 0x99;
    local_dac[3] = 0x1a8;
    local_dac[4] = 0x127;
    local_dac[5] = 0x156;
    local_dac[6] = 0x17;
    local_dac[7] = 0x20;
    local_d1c = 2;
    local_538 = 2;
    local_d7c = 2;
    local_d5c = 2;
    local_d78 = 0x68ff;
    local_d58 = 0x6988;
    local_534 = 0x6955;
    local_d18 = 0x63ff;
    local_d60 = local_d80;
    local_d20 = local_d80;
    local_53c = local_d80;
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(6,(MMObjTy *)(this_00 + 0x1ac4),0,local_dac,0);
    local_dac[8] = *(undefined4 *)(this_00 + 0x1aec);
    local_dac[1] = 0x89;
    local_dac[4] = 0x154;
    local_dac[7] = 0x10;
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(6,(MMObjTy *)(this_00 + 0x1ac8),0,local_dac,0);
    *(undefined4 *)(this_00 + 0x1ec2) = 0;
    *(undefined4 *)(this_00 + 0x1ec6) = 0xffffffff;
    *(undefined4 *)(this_00 + 0x1eca) = 0;
    uVar3 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x230,0x17a,0xd3,0x19,0x6904,0x6989);
    *(undefined4 *)(this_00 + 0x1eb6) = uVar3;
    uVar3 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,0,0x1a3,0x196,0x160,0x19,0x6905,0x698a);
    *(undefined4 *)(this_00 + 0x1eba) = uVar3;
    uVar3 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x1fd,0x1b5,0xab,0x19,0x6903,0x698d);
    *(undefined4 *)(this_00 + 0x1b24) = uVar3;
    *(undefined4 *)(this_00 + 0x2d) = 0x61;
    *(undefined4 *)(this_00 + 0x35) = 0;
    FUN_006e6080(this_00,0xf,0,(undefined4 *)(this_00 + 0x1d));
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x7f0,0,iVar7,&DAT_007a4ccc,
                             s_FSGSTy__JoinGameCtrls_007cc388);
  if (iVar6 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar7,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x7f0);
  return;
}

