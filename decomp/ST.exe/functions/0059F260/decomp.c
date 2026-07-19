
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::LadderCtrls */

void __thiscall FSGSTy::LadderCtrls(FSGSTy *this)

{
  code *pcVar1;
  FSGSTy *this_00;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  LPBITMAPINFO ptVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar7;
  undefined4 *puVar8;
  undefined4 local_8e0 [19];
  undefined4 local_894;
  undefined4 local_890;
  undefined4 local_88c;
  undefined4 local_854;
  undefined4 local_850;
  undefined4 local_84c;
  InternalExceptionFrame local_54;
  FSGSTy *local_10;
  int local_c;
  MMObjTy *local_8;
  
  puVar8 = local_8e0;
  local_10 = this;
  for (iVar6 = 0x223; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar6 = __setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar6 == 0) {
    if (*(byte **)(local_10 + 0x1ae8) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(local_10 + 0x1ae8));
    }
    puVar2 = FUN_006b54f0((uint *)0x0,1,1);
    *(uint **)(this_00 + 0x1ae8) = puVar2;
    FUN_006b5aa0((int)puVar2,&DAT_008016a0);
    if (*(int *)(this_00 + 0x1e8e) != 0) {
      FUN_006ab060((undefined4 *)(this_00 + 0x1e8e));
    }
    if (*(int *)(this_00 + 0x1e92) != 0) {
      FUN_006ab060((undefined4 *)(this_00 + 0x1e92));
    }
    iVar6 = 1;
    puVar8 = (undefined4 *)(*(int *)(this_00 + 0x5d) + 0x28);
    uVar3 = FUN_006b4fe0(*(int *)(this_00 + 0x5d));
    uVar4 = FUN_006b50c0(0x2e1,0x175,(uint)*(ushort *)(*(int *)(this_00 + 0x5d) + 0xe),uVar3,puVar8,
                         iVar6);
    *(undefined4 *)(this_00 + 0x1e8e) = uVar4;
    ptVar5 = FUN_006c4880(DAT_0080759c,0x22,0x5e,0x2e1,0x175,8);
    *(LPBITMAPINFO *)(this_00 + 0x1e92) = ptVar5;
    uVar4 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x2c,0x90,0x96,0x19,0x6906,0x698e);
    *(undefined4 *)(this_00 + 0x1eb6) = uVar4;
    uVar4 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,199,0x90,0x96,0x19,0x6907,0x698f);
    *(undefined4 *)(this_00 + 0x1eba) = uVar4;
    uVar4 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,0,0x16c,0x90,0x19,0x19,0x6908,0x6990);
    *(undefined4 *)(this_00 + 0x1ed3) = uVar4;
    uVar4 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,499,0x90,0x19,0x19,0x6909,0x6991);
    *(undefined4 *)(this_00 + 0x1ed7) = uVar4;
    uVar4 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x2b6,0x90,0x41,0x19,0x690a,0x6992);
    *(undefined4 *)(this_00 + 0x1b24) = uVar4;
    iVar7 = 0x6913;
    iVar6 = 0xdb;
    local_8 = (MMObjTy *)(this_00 + 0x1ee7);
    local_c = 0xf;
    do {
      uVar4 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x50,iVar6,0xe9,0x10,iVar7,0);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x10;
      *(undefined4 *)local_8 = uVar4;
      local_8 = local_8 + 4;
      local_c = local_c + -1;
    } while (local_c != 0);
    local_c = 0;
    puVar8 = local_8e0;
    for (iVar6 = 0x223; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    local_8e0[2] = *(undefined4 *)(this_00 + 0x1a73);
    local_8e0[8] = *(undefined4 *)(this_00 + 0x1ae8);
    local_894 = *(undefined4 *)(this_00 + 8);
    local_850 = 2;
    local_890 = 2;
    local_8e0[0] = 1;
    local_8e0[1] = 0x89;
    local_8e0[3] = 0x21c;
    local_8e0[4] = 0x90;
    local_8e0[5] = 0x94;
    local_8e0[6] = 0x17;
    local_8e0[7] = 0x10;
    local_84c = 0x690a;
    local_88c = 0x6988;
    local_854 = local_894;
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(6,(MMObjTy *)(this_00 + 0x1ac4),0,local_8e0,0);
    *(undefined4 *)(this_00 + 0x2d) = 0x61;
    *(undefined4 *)(this_00 + 0x35) = 0;
    FUN_006e6080(this_00,0xf,0,(undefined4 *)(this_00 + 0x1d));
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar7 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x81d,0,iVar6,&DAT_007a4ccc,
                             s_FSGSTy__LadderCtrls_007cc3a4);
  if (iVar7 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar6,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x81d);
  return;
}

