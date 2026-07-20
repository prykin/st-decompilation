
/* Recovered from embedded debug metadata:
   E:\__titans\Start\combo.cpp
   ComboTy::InitCombo */

void __thiscall ComboTy::InitCombo(ComboTy *this,undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  STJellyGunC *this_00;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  short *psVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
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
  STJellyGunC *local_10;
  uint *local_c;
  undefined1 local_5;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = (STJellyGunC *)this;
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar8 = ReportDebugMessage(s_E____titans_Start_combo_cpp_007cbeec,99,0,iVar4,&DAT_007a4ccc,
                               s_ComboTy__InitCombo_007cbf28);
    if (iVar8 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_combo_cpp_007cbeec,99);
    return;
  }
  puVar6 = (undefined4 *)&local_10->field_0x88;
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *param_1;
    param_1 = param_1 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar4 = *(int *)&local_10->field_0xd4;
  *(undefined4 *)&local_10->field_0x9c = 0xffffffff;
  if ((iVar4 != 0) && (iVar8 = *(int *)&local_10->field_0xd0, iVar8 != 0)) {
    if (iVar8 + -1 < *(int *)&local_10->field_0xc8) {
      *(undefined4 *)&local_10->field_0xc8 = 0;
    }
    iVar12 = 1;
    *(int *)&local_10->field_0xf8 = iVar8 * *(int *)&local_10->field_0xcc + 10;
    puVar6 = (undefined4 *)(iVar4 + 0x28);
    uVar5 = FUN_006b4fe0(iVar4);
    iVar4 = FUN_006b50c0(*(int *)&this_00->field_0xf4,*(int *)&this_00->field_0xf8,
                         (uint)*(ushort *)(*(int *)&this_00->field_0xd4 + 0xe),uVar5,puVar6,iVar12);
    *(int *)&this_00->field_0xfc = iVar4;
    uVar5 = *(uint *)(iVar4 + 0x14);
    if (uVar5 == 0) {
      uVar5 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar4 + 8);
    }
    local_5 = this_00->field_0xd8;
    puVar6 = (undefined4 *)FUN_006b4fa0(iVar4);
    iVar4 = 1;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar6 = CONCAT22(CONCAT11(local_5,local_5),CONCAT11(local_5,local_5));
      puVar6 = puVar6 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar6 = local_5;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    puVar6 = (undefined4 *)(*(int *)&this_00->field_0xd4 + 0x28);
    uVar5 = FUN_006b4fe0(*(int *)&this_00->field_0xd4);
    iVar4 = FUN_006b50c0(*(int *)&this_00->field_0xf4,*(int *)&this_00->field_0xf8,
                         (uint)*(ushort *)(*(int *)&this_00->field_0xd4 + 0xe),uVar5,puVar6,iVar4);
    *(int *)&this_00->field_0x100 = iVar4;
    uVar5 = *(uint *)(iVar4 + 0x14);
    if (uVar5 == 0) {
      uVar5 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar4 + 8);
    }
    local_5 = this_00->field_0xe0;
    puVar6 = (undefined4 *)FUN_006b4fa0(iVar4);
    iVar4 = 1;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar6 = CONCAT22(CONCAT11(local_5,local_5),CONCAT11(local_5,local_5));
      puVar6 = puVar6 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar6 = local_5;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    puVar6 = (undefined4 *)(*(int *)&this_00->field_0xd4 + 0x28);
    uVar5 = FUN_006b4fe0(*(int *)&this_00->field_0xd4);
    iVar4 = FUN_006b50c0(*(int *)&this_00->field_0xf4 + -10,*(int *)&this_00->field_0xcc,
                         (uint)*(ushort *)(*(int *)&this_00->field_0xd4 + 0xe),uVar5,puVar6,iVar4);
    *(int *)&this_00->field_0x104 = iVar4;
    uVar5 = *(uint *)(iVar4 + 0x14);
    if (uVar5 == 0) {
      uVar5 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar4 + 8);
    }
    local_5 = this_00->field_0xd8;
    puVar6 = (undefined4 *)FUN_006b4fa0(iVar4);
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar6 = CONCAT22(CONCAT11(local_5,local_5),CONCAT11(local_5,local_5));
      puVar6 = puVar6 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar6 = local_5;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(undefined4 *)&this_00->field_0xc0 = *(undefined4 *)&this_00->field_0x104;
    FUN_006b5ee0(*(int *)&this_00->field_0xfc,0,2,2,*(int *)&this_00->field_0xf4 + -4,
                 *(int *)&this_00->field_0xf8 + -4,(byte)*(undefined4 *)&this_00->field_0xdc,0xd);
    puVar1 = &this_00->field_0x108;
    local_c = (uint *)puVar1;
    FUN_006b2330((uint)DAT_008075a8,(uint *)puVar1,2,0x401712,
                 *(int *)(*(int *)&this_00->field_0xfc + 4) + 3,
                 *(int *)(*(int *)&this_00->field_0xfc + 8) + 3,(uint)&this_00->field_0x88);
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,*(uint *)puVar1,0xffffffff,*(int *)&this_00->field_0xec - 3,
               *(uint *)&this_00->field_0xf0);
    puVar6 = &this_00->field_0018;
    puVar10 = puVar6;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    *(undefined4 *)&this_00->field_0x28 = 0x1a;
    FUN_006e6000(this_00,3,1,puVar6);
    puVar10 = puVar6;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    *(undefined4 *)&this_00->field_0x28 = 0x18;
    FUN_006e6000(this_00,3,1,puVar6);
    puVar10 = puVar6;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    *(undefined4 *)&this_00->field_0x28 = 0x13;
    *(undefined4 *)&this_00->field_0x2c = this_00->field_0008;
    FUN_006e6000(this_00,3,1,puVar6);
    puVar10 = puVar6;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    *(undefined4 *)&this_00->field_0x28 = 0x65;
    FUN_006e6000(this_00,3,1,puVar6);
    *(int *)&this_00->field_0x84 = *(int *)&this_00->field_0x2c + 1;
    psVar9 = &this_00->field_0038;
    for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)psVar9 = 0;
      psVar9 = psVar9 + 2;
    }
    uVar2 = *(undefined4 *)&this_00->field_0x84;
    *(undefined4 *)((int)&this_00->field_004B + 1) = this_00->field_0008;
    *(undefined4 *)&this_00->field_0040 = uVar2;
    this_00->field_0050 = 2;
    this_00->field_0052 = 0;
    this_00->field_0054 = 3;
    this_00->field_0056 = 1;
    this_00->field_0038 = 10;
    this_00->field_003A = 0;
    this_00->field_003C = 1;
    this_00->field_003E = 0;
    puVar10 = puVar6;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    *(undefined4 *)&this_00->field_0x28 = 0x10;
    *(short **)&this_00->field_0x2c = &this_00->field_0038;
    FUN_006e6000(this_00,3,1,puVar6);
    iVar4 = *(int *)&this_00->field_0xf0;
    piVar11 = local_528;
    for (iVar8 = 0x135; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar11 = 0;
      piVar11 = piVar11 + 1;
    }
    local_528[2] = *(int *)&this_00->field_0xec + 5;
    local_528[3] = iVar4 + 5;
    local_518 = *(int *)&this_00->field_0xf4 + -10;
    local_514 = *(int *)&this_00->field_0xf8 + -10;
    local_510 = *(undefined4 *)&this_00->field_0xd0;
    local_500 = this_00->field_0008;
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
    (*this_00->field_000C->vtable[2])(7,&this_00->field_0x10c,0,local_528,0);
    *(undefined4 *)&this_00->field_0x28 = 0x22;
    *(undefined4 *)&this_00->field_0x2c = *(undefined4 *)&this_00->field_0xc8;
    FUN_006e6080(this_00,2,*(undefined4 *)&this_00->field_0x10c,puVar6);
    *(undefined4 *)&this_00->field_0x110 = 1;
    FUN_006b35d0(DAT_008075a8,*local_c);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  thunk_FUN_005943f0(local_10);
  g_currentExceptionFrame = local_54.previous;
  return;
}

