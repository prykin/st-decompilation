#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\combo.cpp
   ComboTy::InitCombo */

void __thiscall ComboTy::InitCombo(ComboTy *this,undefined4 *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  ComboTy *this_00;
  int iVar3;
  int local_EAX_159;
  AnonPointee_ComboTy_00FC *pAVar4;
  undefined4 *puVar5;
  int uVar4;
  int *piVar6;
  int local_EAX_427;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
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
  ComboTy *local_10;
  uint *local_c;
  undefined1 local_5;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\Start\\combo.cpp",99,0,iVar3,"%s",
                               "ComboTy::InitCombo");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\combo.cpp",99);
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
  if ((iVar3 != 0) && (iVar9 = local_10->field_00D0, iVar9 != 0)) {
    if (iVar9 + -1 < local_10->field_00C8) {
      local_10->field_00C8 = 0;
    }
    iVar12 = 1;
    local_10->field_00F8 = iVar9 * local_10->field_00CC + 10;
    puVar5 = (undefined4 *)(iVar3 + 0x28);
    local_EAX_159 = FUN_006b4fe0(iVar3);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pAVar4 = (AnonPointee_ComboTy_00FC *)
             FUN_006b50c0(this_00->field_00F4,this_00->field_00F8,
                          (uint)*(ushort *)(this_00->field_00D4 + 0xe),local_EAX_159,puVar5,iVar12);
    this_00->field_00FC = pAVar4;
    uVar10 = pAVar4[1].field_0008;
    if (uVar10 == 0) {
      uVar10 = ((uint)*(ushort *)&pAVar4[1].field_0x2 * pAVar4->field_0004 + 0x1f >> 3 & 0x1ffffffc)
               * pAVar4->field_0008;
    }
    local_5 = this_00->field_00D8;
    puVar5 = (undefined4 *)FUN_006b4fa0((int *)pAVar4);
    iVar3 = 1;
    for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar5 = CONCAT22(CONCAT11(local_5,local_5),CONCAT11(local_5,local_5));
      puVar5 = puVar5 + 1;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar5 = local_5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    puVar5 = (undefined4 *)(this_00->field_00D4 + 0x28);
    uVar4 = FUN_006b4fe0(this_00->field_00D4);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    piVar6 = (int *)FUN_006b50c0(this_00->field_00F4,this_00->field_00F8,
                                 (uint)*(ushort *)(this_00->field_00D4 + 0xe),uVar4,puVar5,iVar3);
    this_00->field_0100 = piVar6;
    uVar10 = piVar6[5];
    if (uVar10 == 0) {
      uVar10 = ((uint)*(ushort *)((int)piVar6 + 0xe) * piVar6[1] + 0x1f >> 3 & 0x1ffffffc) *
               piVar6[2];
    }
    local_5 = this_00->field_00E0;
    puVar5 = (undefined4 *)FUN_006b4fa0(piVar6);
    iVar3 = 1;
    for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar5 = CONCAT22(CONCAT11(local_5,local_5),CONCAT11(local_5,local_5));
      puVar5 = puVar5 + 1;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar5 = local_5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    puVar5 = (undefined4 *)(this_00->field_00D4 + 0x28);
    local_EAX_427 = FUN_006b4fe0(this_00->field_00D4);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    puVar7 = (ushort *)
             FUN_006b50c0(this_00->field_00F4 + -10,this_00->field_00CC,
                          (uint)*(ushort *)(this_00->field_00D4 + 0xe),local_EAX_427,puVar5,iVar3);
    this_00->field_0104 = puVar7;
    uVar10 = *(uint *)(puVar7 + 10);
    if (uVar10 == 0) {
      uVar10 = ((uint)puVar7[7] * *(int *)(puVar7 + 2) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(puVar7 + 4);
    }
    local_5 = this_00->field_00D8;
    puVar5 = (undefined4 *)FUN_006b4fa0((int *)puVar7);
    for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar5 = CONCAT22(CONCAT11(local_5,local_5),CONCAT11(local_5,local_5));
      puVar5 = puVar5 + 1;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar5 = local_5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    this_00->field_00C0 = this_00->field_0104;
    FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)this_00->field_00FC,0,2,2,this_00->field_00F4 + -4,
                 this_00->field_00F8 + -4,(byte)this_00->field_00DC,0xd);
    puVar5 = &this_00->field_0108;
    local_c = puVar5;
    FUN_006b2330(g_ddxContext_008075A8,puVar5,2,0x401712,this_00->field_00FC->field_0004 + 3,
                 this_00->field_00FC->field_0008 + 3,(ushort *)&this_00->field_0x88);
    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,*puVar5,0xffffffff,this_00->field_00EC - 3,
               this_00->field_00F0);
    puVar1 = &this_00->field_0x18;
    memset((void *)puVar1, 0, 0x20); /* compiler bulk-zero initialization */
    iVar3 = 0;
    this_00->field_0028 = 0x1a;
    FUN_006e6000(this_00,3,1,(undefined4 *)puVar1);
    memset((void *)puVar1, 0, 0x20); /* compiler bulk-zero initialization */
    iVar3 = 0;
    this_00->field_0028 = 0x18;
    FUN_006e6000(this_00,3,1,(undefined4 *)puVar1);
    memset((void *)puVar1, 0, 0x20); /* compiler bulk-zero initialization */
    iVar3 = 0;
    this_00->field_0028 = 0x13;
    this_00->field_002C = (ComboTy *)this_00->field_0008;
    FUN_006e6000(this_00,3,1,(undefined4 *)puVar1);
    memset((void *)puVar1, 0, 0x20); /* compiler bulk-zero initialization */
    iVar3 = 0;
    this_00->field_0028 = 0x65;
    FUN_006e6000(this_00,3,1,(undefined4 *)puVar1);
    puVar5 = &this_00->field_0038;
    this_00->field_0084 = &this_00->field_002C->field_0x1;
    memset(puVar5, 0, 0x4c); /* compiler bulk-zero initialization */
    iVar3 = 0;
    this_00->field_004C = this_00->field_0008;
    this_00->field_0040 = (ComboTy *)this_00->field_0084;
    this_00->field_0050 = 2;
    this_00->field_0054 = 0x10003;
    *puVar5 = 10;
    this_00->field_003C = 1;
    memset((void *)puVar1, 0, 0x20); /* compiler bulk-zero initialization */
    this_00->field_0028 = 0x10;
    this_00->field_002C = (ComboTy *)puVar5;
    FUN_006e6000(this_00,3,1,(undefined4 *)puVar1);
    iVar3 = this_00->field_00F0;
    memset(local_528, 0, 0x4d4); /* compiler bulk-zero initialization */
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
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,7,&this_00->field_010C,(int *)0x0,local_528,0);
    this_00->field_0028 = 0x22;
    this_00->field_002C = (ComboTy *)this_00->field_00C8;
    FUN_006e6080(this_00,2,this_00->field_010C,(undefined4 *)puVar1);
    this_00->field_0110 = 1;
    FUN_006b35d0((int *)g_ddxContext_008075A8,*local_c);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  sub_005943F0(local_10);
  g_currentExceptionFrame = local_54.previous;
  return;
}

