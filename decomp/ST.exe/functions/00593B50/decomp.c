
/* Recovered from embedded debug metadata:
   E:\__titans\Start\combo.cpp
   ComboTy::InitCombo */

void __thiscall ComboTy::InitCombo(ComboTy *this,undefined4 *param_1)

{
  code *pcVar1;
  ComboTy *this_00;
  int iVar2;
  uint uVar3;
  ComboTy *pCVar4;
  uint uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  ComboTy *pCVar7;
  ComboTy *pCVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  int local_528 [4];
  int local_518;
  int local_514;
  undefined4 local_510;
  undefined4 local_50c;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined4 local_498;
  InternalExceptionFrame local_54;
  ComboTy *local_10;
  ComboTy *local_c;
  ComboTy local_5;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar2 = __setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Start_combo_cpp_007cbeec,99,0,iVar2,&DAT_007a4ccc,
                               s_ComboTy__InitCombo_007cbf28);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar2,0,s_E____titans_Start_combo_cpp_007cbeec,99);
    return;
  }
  pCVar4 = local_10 + 0x88;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pCVar4 = *param_1;
    param_1 = param_1 + 1;
    pCVar4 = pCVar4 + 4;
  }
  iVar2 = *(int *)(local_10 + 0xd4);
  *(undefined4 *)(local_10 + 0x9c) = 0xffffffff;
  if ((iVar2 != 0) && (iVar6 = *(int *)(local_10 + 0xd0), iVar6 != 0)) {
    if (iVar6 + -1 < *(int *)(local_10 + 200)) {
      *(undefined4 *)(local_10 + 200) = 0;
    }
    iVar11 = 1;
    *(int *)(local_10 + 0xf8) = iVar6 * *(int *)(local_10 + 0xcc) + 10;
    puVar10 = (undefined4 *)(iVar2 + 0x28);
    uVar3 = FUN_006b4fe0(iVar2);
    iVar2 = FUN_006b50c0(*(int *)(this_00 + 0xf4),*(int *)(this_00 + 0xf8),
                         (uint)*(ushort *)(*(int *)(this_00 + 0xd4) + 0xe),uVar3,puVar10,iVar11);
    *(int *)(this_00 + 0xfc) = iVar2;
    uVar3 = *(uint *)(iVar2 + 0x14);
    if (uVar3 == 0) {
      uVar3 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar2 + 8);
    }
    local_5 = this_00[0xd8];
    pCVar4 = (ComboTy *)FUN_006b4fa0(iVar2);
    iVar2 = 1;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(uint *)pCVar4 = CONCAT22(CONCAT11(local_5,local_5),CONCAT11(local_5,local_5));
      pCVar4 = pCVar4 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pCVar4 = local_5;
      pCVar4 = pCVar4 + 1;
    }
    puVar10 = (undefined4 *)(*(int *)(this_00 + 0xd4) + 0x28);
    uVar3 = FUN_006b4fe0(*(int *)(this_00 + 0xd4));
    iVar2 = FUN_006b50c0(*(int *)(this_00 + 0xf4),*(int *)(this_00 + 0xf8),
                         (uint)*(ushort *)(*(int *)(this_00 + 0xd4) + 0xe),uVar3,puVar10,iVar2);
    *(int *)(this_00 + 0x100) = iVar2;
    uVar3 = *(uint *)(iVar2 + 0x14);
    if (uVar3 == 0) {
      uVar3 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar2 + 8);
    }
    local_5 = this_00[0xe0];
    pCVar4 = (ComboTy *)FUN_006b4fa0(iVar2);
    iVar2 = 1;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(uint *)pCVar4 = CONCAT22(CONCAT11(local_5,local_5),CONCAT11(local_5,local_5));
      pCVar4 = pCVar4 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pCVar4 = local_5;
      pCVar4 = pCVar4 + 1;
    }
    puVar10 = (undefined4 *)(*(int *)(this_00 + 0xd4) + 0x28);
    uVar3 = FUN_006b4fe0(*(int *)(this_00 + 0xd4));
    iVar2 = FUN_006b50c0(*(int *)(this_00 + 0xf4) + -10,*(int *)(this_00 + 0xcc),
                         (uint)*(ushort *)(*(int *)(this_00 + 0xd4) + 0xe),uVar3,puVar10,iVar2);
    *(int *)(this_00 + 0x104) = iVar2;
    uVar3 = *(uint *)(iVar2 + 0x14);
    if (uVar3 == 0) {
      uVar3 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar2 + 8);
    }
    local_5 = this_00[0xd8];
    pCVar4 = (ComboTy *)FUN_006b4fa0(iVar2);
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(uint *)pCVar4 = CONCAT22(CONCAT11(local_5,local_5),CONCAT11(local_5,local_5));
      pCVar4 = pCVar4 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pCVar4 = local_5;
      pCVar4 = pCVar4 + 1;
    }
    *(undefined4 *)(this_00 + 0xc0) = *(undefined4 *)(this_00 + 0x104);
    FUN_006b5ee0(*(int *)(this_00 + 0xfc),0,2,2,*(int *)(this_00 + 0xf4) + -4,
                 *(int *)(this_00 + 0xf8) + -4,(byte)*(undefined4 *)(this_00 + 0xdc),0xd);
    pCVar4 = this_00 + 0x108;
    local_c = pCVar4;
    FUN_006b2330((uint)DAT_008075a8,(uint *)pCVar4,2,0x401712,
                 *(int *)(*(int *)(this_00 + 0xfc) + 4) + 3,
                 *(int *)(*(int *)(this_00 + 0xfc) + 8) + 3,(uint)(this_00 + 0x88));
    FUN_006b3640(DAT_008075a8,*(uint *)pCVar4,0xffffffff,*(int *)(this_00 + 0xec) - 3,
                 *(uint *)(this_00 + 0xf0));
    pCVar4 = this_00 + 0x18;
    pCVar7 = pCVar4;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pCVar7 = 0;
      pCVar7 = pCVar7 + 4;
    }
    *(undefined4 *)(this_00 + 0x28) = 0x1a;
    FUN_006e6000(this_00,3,1,(undefined4 *)pCVar4);
    pCVar7 = pCVar4;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pCVar7 = 0;
      pCVar7 = pCVar7 + 4;
    }
    *(undefined4 *)(this_00 + 0x28) = 0x18;
    FUN_006e6000(this_00,3,1,(undefined4 *)pCVar4);
    pCVar7 = pCVar4;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pCVar7 = 0;
      pCVar7 = pCVar7 + 4;
    }
    *(undefined4 *)(this_00 + 0x28) = 0x13;
    *(undefined4 *)(this_00 + 0x2c) = *(undefined4 *)(this_00 + 8);
    FUN_006e6000(this_00,3,1,(undefined4 *)pCVar4);
    pCVar7 = pCVar4;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pCVar7 = 0;
      pCVar7 = pCVar7 + 4;
    }
    *(undefined4 *)(this_00 + 0x28) = 0x65;
    FUN_006e6000(this_00,3,1,(undefined4 *)pCVar4);
    pCVar7 = this_00 + 0x38;
    *(int *)(this_00 + 0x84) = *(int *)(this_00 + 0x2c) + 1;
    pCVar8 = pCVar7;
    for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pCVar8 = 0;
      pCVar8 = pCVar8 + 4;
    }
    *(undefined4 *)(this_00 + 0x4c) = *(undefined4 *)(this_00 + 8);
    *(undefined4 *)(this_00 + 0x40) = *(undefined4 *)(this_00 + 0x84);
    *(undefined4 *)(this_00 + 0x50) = 2;
    *(undefined4 *)(this_00 + 0x54) = 0x10003;
    *(undefined4 *)pCVar7 = 10;
    *(undefined4 *)(this_00 + 0x3c) = 1;
    pCVar8 = pCVar4;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pCVar8 = 0;
      pCVar8 = pCVar8 + 4;
    }
    *(undefined4 *)(this_00 + 0x28) = 0x10;
    *(ComboTy **)(this_00 + 0x2c) = pCVar7;
    FUN_006e6000(this_00,3,1,(undefined4 *)pCVar4);
    iVar2 = *(int *)(this_00 + 0xf0);
    piVar9 = local_528;
    for (iVar6 = 0x135; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar9 = 0;
      piVar9 = piVar9 + 1;
    }
    local_528[2] = *(int *)(this_00 + 0xec) + 5;
    local_528[3] = iVar2 + 5;
    local_518 = *(int *)(this_00 + 0xf4) + -10;
    local_514 = *(int *)(this_00 + 0xf8) + -10;
    local_510 = *(undefined4 *)(this_00 + 0xd0);
    local_500 = *(undefined4 *)(this_00 + 8);
    local_528[0] = 1;
    local_50c = 0;
    local_4fc = 2;
    local_4f8 = 0xffff;
    local_49c = 2;
    local_498 = 0x10002;
    local_4dc = 2;
    local_4bc = 2;
    local_4d8 = 0x10001;
    local_4b8 = 0x10000;
    local_4e0 = local_500;
    local_4c0 = local_500;
    local_4a0 = local_500;
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(7,this_00 + 0x10c,0,local_528,0);
    *(undefined4 *)(this_00 + 0x28) = 0x22;
    *(undefined4 *)(this_00 + 0x2c) = *(undefined4 *)(this_00 + 200);
    FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x10c),(undefined4 *)pCVar4);
    *(undefined4 *)(this_00 + 0x110) = 1;
    FUN_006b35d0(DAT_008075a8,*(uint *)local_c);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  thunk_FUN_005943f0(local_10);
  g_currentExceptionFrame = local_54.previous;
  return;
}

