#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\combo.cpp
   ComboTy::InitCombo */

void __thiscall ComboTy::InitCombo(ComboTy *this,undefined4 *param_1)

{
  undefined1 *puVar1;
  uint *puVar2;
  code *pcVar3;
  ComboTy *this_00;
  int iVar4;
  int local_EAX_159;
  AnonShape_006B5B10_E0D06CF1 *pAVar5;
  byte *puVar6;
  int uVar4;
  int *piVar7;
  int local_EAX_427;
  ushort *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar13;
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
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar10 = ReportDebugMessage("E:\\__titans\\Start\\combo.cpp",99,0,iVar4,"%s",
                                "ComboTy::InitCombo");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\combo.cpp",99);
    return;
  }
  puVar6 = (byte *)&local_10->field_0088;
  memmove(puVar6, param_1, 0x80); /* compiler REP MOVS byte copy */
  iVar4 = local_10->field_00D4;
  local_10->field_009C = 0xffffffff;
  if ((iVar4 != 0) && (iVar10 = local_10->field_00D0, iVar10 != 0)) {
    if (iVar10 + -1 < local_10->field_00C8) {
      local_10->field_00C8 = 0;
    }
    iVar13 = 1;
    local_10->field_00F8 = iVar10 * local_10->field_00CC + 10;
    puVar6 = (byte *)(iVar4 + 0x28);
    local_EAX_159 = FUN_006b4fe0(iVar4);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pAVar5 = (AnonShape_006B5B10_E0D06CF1 *)
             FUN_006b50c0(this_00->field_00F4,this_00->field_00F8,
                          (uint)*(ushort *)(this_00->field_00D4 + 0xe),local_EAX_159,puVar6,iVar13);
    this_00->field_00FC = pAVar5;
    uVar11 = pAVar5[1].field_0004;
    if (uVar11 == 0) {
      uVar11 = ((uint)pAVar5->field_000E * pAVar5->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
               pAVar5->field_0008;
    }
    local_5 = this_00->field_00D8;
    puVar6 = (byte *)FUN_006b4fa0((int *)pAVar5);
    iVar4 = 1;
    for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar6 = CONCAT22(CONCAT11(local_5,local_5),CONCAT11(local_5,local_5));
      puVar6 = (byte *)(puVar6 + 1);
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar6 = local_5;
      puVar6 = (byte *)((int)puVar6 + 1);
    }
    puVar6 = (byte *)(this_00->field_00D4 + 0x28);
    uVar4 = FUN_006b4fe0(this_00->field_00D4);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    piVar7 = (int *)FUN_006b50c0(this_00->field_00F4,this_00->field_00F8,
                                 (uint)*(ushort *)(this_00->field_00D4 + 0xe),uVar4,puVar6,iVar4);
    this_00->field_0100 = piVar7;
    uVar11 = piVar7[5];
    if (uVar11 == 0) {
      uVar11 = ((uint)*(ushort *)((int)piVar7 + 0xe) * piVar7[1] + 0x1f >> 3 & 0x1ffffffc) *
               piVar7[2];
    }
    local_5 = this_00->field_00E0;
    puVar6 = (byte *)FUN_006b4fa0(piVar7);
    iVar4 = 1;
    for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar6 = CONCAT22(CONCAT11(local_5,local_5),CONCAT11(local_5,local_5));
      puVar6 = (byte *)(puVar6 + 1);
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar6 = local_5;
      puVar6 = (byte *)((int)puVar6 + 1);
    }
    puVar6 = (byte *)(this_00->field_00D4 + 0x28);
    local_EAX_427 = FUN_006b4fe0(this_00->field_00D4);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    puVar8 = (ushort *)
             FUN_006b50c0(this_00->field_00F4 + -10,this_00->field_00CC,
                          (uint)*(ushort *)(this_00->field_00D4 + 0xe),local_EAX_427,puVar6,iVar4);
    this_00->field_0104 = puVar8;
    uVar11 = *(uint *)(puVar8 + 10);
    if (uVar11 == 0) {
      uVar11 = ((uint)puVar8[7] * *(int *)(puVar8 + 2) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(puVar8 + 4);
    }
    local_5 = this_00->field_00D8;
    puVar6 = (byte *)FUN_006b4fa0((int *)puVar8);
    for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar6 = CONCAT22(CONCAT11(local_5,local_5),CONCAT11(local_5,local_5));
      puVar6 = (byte *)(puVar6 + 1);
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar6 = local_5;
      puVar6 = (byte *)((int)puVar6 + 1);
    }
    this_00->field_00C0 = this_00->field_0104;
    FUN_006b5ee0(this_00->field_00FC,0,2,2,this_00->field_00F4 + -4,this_00->field_00F8 + -4,
                 (byte)this_00->field_00DC,0xd);
    puVar2 = &this_00->field_0108;
    local_c = puVar2;
    FUN_006b2330(g_ddxContext_008075A8,puVar2,2,0x401712,this_00->field_00FC->field_0004 + 3,
                 this_00->field_00FC->field_0008 + 3,(ushort *)&this_00->field_0088);
    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,*puVar2,0xffffffff,this_00->field_00EC - 3,
               this_00->field_00F0);
    puVar1 = &this_00->field_0x18;
    memset((void *)puVar1, 0, 0x20); /* compiler bulk-zero initialization */
    iVar4 = 0;
    this_00->field_0028 = 0x1a;
    FUN_006e6000(this_00,3,1,(undefined4 *)puVar1);
    memset((void *)puVar1, 0, 0x20); /* compiler bulk-zero initialization */
    iVar4 = 0;
    this_00->field_0028 = 0x18;
    FUN_006e6000(this_00,3,1,(undefined4 *)puVar1);
    memset((void *)puVar1, 0, 0x20); /* compiler bulk-zero initialization */
    iVar4 = 0;
    this_00->field_0028 = 0x13;
    this_00->field_002C = (ComboTy *)this_00->field_0008;
    FUN_006e6000(this_00,3,1,(undefined4 *)puVar1);
    memset((void *)puVar1, 0, 0x20); /* compiler bulk-zero initialization */
    iVar4 = 0;
    this_00->field_0028 = 0x65;
    FUN_006e6000(this_00,3,1,(undefined4 *)puVar1);
    puVar6 = (byte *)(&this_00->field_0038);
    this_00->field_0084 = &this_00->field_002C->field_0x1;
    memset(puVar6, 0, 0x4c); /* compiler bulk-zero initialization */
    iVar4 = 0;
    this_00->field_004C = this_00->field_0008;
    this_00->field_0040 = (ComboTy *)this_00->field_0084;
    this_00->field_0050 = 2;
    this_00->field_0054 = 0x10003;
    *puVar6 = 10;
    this_00->field_003C = 1;
    memset((void *)puVar1, 0, 0x20); /* compiler bulk-zero initialization */
    this_00->field_0028 = 0x10;
    this_00->field_002C = (ComboTy *)puVar6;
    FUN_006e6000(this_00,3,1,(undefined4 *)puVar1);
    iVar4 = this_00->field_00F0;
    memset(local_528, 0, 0x4d4); /* compiler bulk-zero initialization */
    local_528[2] = this_00->field_00EC + 5;
    local_528[3] = iVar4 + 5;
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

