
/* Recovered from embedded debug metadata:
   E:\__titans\Start\combo.cpp
   ComboTy::InitCombo */

void __thiscall ComboTy::InitCombo(ComboTy *this,undefined4 *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  ComboTy *this_00;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
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
  uint *local_c;
  undefined1 local_5;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Start_combo_cpp_007cbeec,99,0,iVar3,&DAT_007a4ccc,
                               s_ComboTy__InitCombo_007cbf28);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Start_combo_cpp_007cbeec,99);
    return;
  }
  puVar5 = (undefined4 *)&local_10->field_0x88;
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *param_1;
    param_1 = param_1 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar3 = local_10->field_00D4;
  local_10->field_009C = 0xffffffff;
  if ((iVar3 != 0) && (iVar7 = local_10->field_00D0, iVar7 != 0)) {
    if (iVar7 + -1 < (int)local_10->field_00C8) {
      local_10->field_00C8 = 0;
    }
    iVar10 = 1;
    local_10->field_00F8 = iVar7 * local_10->field_00CC + 10;
    puVar5 = (undefined4 *)(iVar3 + 0x28);
    uVar4 = FUN_006b4fe0(iVar3);
    iVar3 = FUN_006b50c0(this_00->field_00F4,this_00->field_00F8,
                         (uint)*(ushort *)(this_00->field_00D4 + 0xe),uVar4,puVar5,iVar10);
    this_00->field_00FC = iVar3;
    uVar4 = *(uint *)(iVar3 + 0x14);
    if (uVar4 == 0) {
      uVar4 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar3 + 8);
    }
    local_5 = this_00->field_00D8;
    puVar5 = (undefined4 *)FUN_006b4fa0(iVar3);
    iVar3 = 1;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar5 = CONCAT22(CONCAT11(local_5,local_5),CONCAT11(local_5,local_5));
      puVar5 = puVar5 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar5 = local_5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    puVar5 = (undefined4 *)(this_00->field_00D4 + 0x28);
    uVar4 = FUN_006b4fe0(this_00->field_00D4);
    iVar3 = FUN_006b50c0(this_00->field_00F4,this_00->field_00F8,
                         (uint)*(ushort *)(this_00->field_00D4 + 0xe),uVar4,puVar5,iVar3);
    this_00->field_0100 = iVar3;
    uVar4 = *(uint *)(iVar3 + 0x14);
    if (uVar4 == 0) {
      uVar4 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar3 + 8);
    }
    local_5 = this_00->field_00E0;
    puVar5 = (undefined4 *)FUN_006b4fa0(iVar3);
    iVar3 = 1;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar5 = CONCAT22(CONCAT11(local_5,local_5),CONCAT11(local_5,local_5));
      puVar5 = puVar5 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar5 = local_5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    puVar5 = (undefined4 *)(this_00->field_00D4 + 0x28);
    uVar4 = FUN_006b4fe0(this_00->field_00D4);
    iVar3 = FUN_006b50c0(this_00->field_00F4 + -10,this_00->field_00CC,
                         (uint)*(ushort *)(this_00->field_00D4 + 0xe),uVar4,puVar5,iVar3);
    this_00->field_0104 = iVar3;
    uVar4 = *(uint *)(iVar3 + 0x14);
    if (uVar4 == 0) {
      uVar4 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar3 + 8);
    }
    local_5 = this_00->field_00D8;
    puVar5 = (undefined4 *)FUN_006b4fa0(iVar3);
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar5 = CONCAT22(CONCAT11(local_5,local_5),CONCAT11(local_5,local_5));
      puVar5 = puVar5 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar5 = local_5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    this_00->field_00C0 = this_00->field_0104;
    FUN_006b5ee0(this_00->field_00FC,0,2,2,this_00->field_00F4 + -4,this_00->field_00F8 + -4,
                 (byte)this_00->field_00DC,0xd);
    puVar5 = &this_00->field_0108;
    local_c = puVar5;
    FUN_006b2330((uint)DAT_008075a8,puVar5,2,0x401712,*(int *)(this_00->field_00FC + 4) + 3,
                 *(int *)(this_00->field_00FC + 8) + 3,(uint)&this_00->field_0x88);
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,*puVar5,0xffffffff,this_00->field_00EC - 3,this_00->field_00F0);
    puVar1 = &this_00->field_0x18;
    puVar5 = (undefined4 *)puVar1;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    this_00->field_0028 = 0x1a;
    FUN_006e6000(this_00,3,1,(undefined4 *)puVar1);
    puVar5 = (undefined4 *)puVar1;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    this_00->field_0028 = 0x18;
    FUN_006e6000(this_00,3,1,(undefined4 *)puVar1);
    puVar5 = (undefined4 *)puVar1;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    this_00->field_0028 = 0x13;
    this_00->field_002C = this_00->field_0008;
    FUN_006e6000(this_00,3,1,(undefined4 *)puVar1);
    puVar5 = (undefined4 *)puVar1;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    this_00->field_0028 = 0x65;
    FUN_006e6000(this_00,3,1,(undefined4 *)puVar1);
    puVar5 = &this_00->field_0038;
    this_00->field_0084 = this_00->field_002C + 1;
    puVar8 = puVar5;
    for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    this_00->field_004C = this_00->field_0008;
    this_00->field_0040 = this_00->field_0084;
    this_00->field_0050 = 2;
    this_00->field_0054 = 0x10003;
    *puVar5 = 10;
    this_00->field_003C = 1;
    puVar8 = (undefined4 *)puVar1;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    this_00->field_0028 = 0x10;
    this_00->field_002C = puVar5;
    FUN_006e6000(this_00,3,1,(undefined4 *)puVar1);
    iVar3 = this_00->field_00F0;
    piVar9 = local_528;
    for (iVar7 = 0x135; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar9 = 0;
      piVar9 = piVar9 + 1;
    }
    local_528[2] = this_00->field_00EC + 5;
    local_528[3] = iVar3 + 5;
    local_518 = this_00->field_00F4 + -10;
    local_514 = this_00->field_00F8 + -10;
    local_510 = this_00->field_00D0;
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
    (**(code **)(*(int *)this_00->field_000C + 8))(7,&this_00->field_010C,0,local_528,0);
    this_00->field_0028 = 0x22;
    this_00->field_002C = this_00->field_00C8;
    FUN_006e6080(this_00,2,this_00->field_010C,(undefined4 *)puVar1);
    this_00->field_0110 = 1;
    FUN_006b35d0(DAT_008075a8,*local_c);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  thunk_FUN_005943f0(local_10);
  g_currentExceptionFrame = local_54.previous;
  return;
}

