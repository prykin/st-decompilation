#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\combo.cpp
   ComboTy::InitCombo */

void __thiscall ComboTy::InitCombo(ComboTy *this,undefined4 *param_1)

{
  byte *puVar1;
  uint *puVar2;
  ComboTy *this_00;
  int iVar4;
  int local_EAX_159;
  RecoveredSourceFamily_dibcopy *pRVar4;
  byte *puVar5;
  int uVar4;
  RecoveredRecord_006B4FA0_DAC3A217 *pRVar6;
  int local_EAX_427;
  int iVar10;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar12;
  ushort *puVar13;
  int iVar14;
  int local_528 [4];
  int local_518;
  int local_514;
  uint local_510;
  uint local_50c;
  uint local_500;
  uint local_4fc;
  uint local_4f8;
  uint local_4e0;
  uint local_4dc;
  uint local_4d8;
  uint local_4c0;
  uint local_4bc;
  uint local_4b8;
  uint local_4a0;
  uint local_49c;
  uint local_498;
  InternalExceptionFrame local_54;
  ComboTy *local_10;
  uint *local_c;
  byte local_5;
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
  puVar5 = (byte *)&local_10->field_0088;
  memmove(puVar5, param_1, 0x80); /* compiler REP MOVS byte copy */
  iVar7 = 0;
  puVar13 = (ushort *)local_10->field_00D4;
  local_10->field_009C = 0xffffffff;
  if ((puVar13 != nullptr) && (iVar7 = local_10->field_00D0, iVar7 != 0)) {
    if (iVar7 + -1 < local_10->field_00C8) {
      local_10->field_00C8 = 0;
    }
    iVar14 = 1;
    local_10->field_00F8 = iVar7 * local_10->field_00CC + 10;
    puVar12 = puVar13 + 0x14;

    local_EAX_159 = FUN_006b4fe0(puVar13);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pRVar4 = (RecoveredSourceFamily_dibcopy *)

             FUN_006b50c0(this_00->field_00F4,this_00->field_00F8,
                          (uint)*(ushort *)(this_00->field_00D4 + 0xe),local_EAX_159,
                          (undefined4 *)puVar12,iVar14);
    this_00->field_00FC = pRVar4;
    uVar9 = pRVar4[1].field_0004;
    if (uVar9 == 0) {
      uVar9 = ((uint)pRVar4->field_000E * pRVar4->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
              pRVar4->field_0008;
    }
    local_5 = this_00->field_00D8;

    puVar5 = STPointerBoundaryCast<byte *>(FUN_006b4fa0((RecoveredRecord_006B4FA0_DAC3A217 *)pRVar4));
    iVar7 = 1;
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar5 = CONCAT22(CONCAT11(local_5,local_5),CONCAT11(local_5,local_5));
      puVar5 = (byte *)(puVar5 + 1);
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar5 = local_5;
      puVar5 = (byte *)((int)puVar5 + 1);
    }
    puVar13 = (ushort *)this_00->field_00D4 + 0x14;

    uVar4 = FUN_006b4fe0((ushort *)this_00->field_00D4);
    /* ST_CALLSITE[00593C96]: CALL 0x006b50c0; direct=006B50C0 FUN_006b50c0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_006B4FA0_DAC3A217; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_006B4FA0_DAC3A217;/int;/int;/int;/uint;pointer:/undefined4;/int */
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pRVar6 = FUN_006b50c0(this_00->field_00F4,this_00->field_00F8,
                          (uint)*(ushort *)(this_00->field_00D4 + 0xe),uVar4,(undefined4 *)puVar13,
                          iVar7);
    this_00->field_0100 = pRVar6;
    uVar9 = *(uint *)&pRVar6[1].field_0x4;
    if (uVar9 == 0) {
      uVar9 = ((uint)pRVar6->field_000E * *(int *)&pRVar6->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)&pRVar6->field_0x8;
    }
    local_5 = this_00->field_00E0;

    puVar5 = STPointerBoundaryCast<byte *>(FUN_006b4fa0(pRVar6));
    iVar7 = 1;
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar5 = CONCAT22(CONCAT11(local_5,local_5),CONCAT11(local_5,local_5));
      puVar5 = (byte *)(puVar5 + 1);
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar5 = local_5;
      puVar5 = (byte *)((int)puVar5 + 1);
    }
    puVar13 = (ushort *)this_00->field_00D4 + 0x14;

    local_EAX_427 = FUN_006b4fe0((ushort *)this_00->field_00D4);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pRVar6 = STPointerBoundaryCast<RecoveredRecord_006B4FA0_DAC3A217 *>(FUN_006b50c0(this_00->field_00F4 + -10,this_00->field_00CC,
                          (uint)*(ushort *)(this_00->field_00D4 + 0xe),local_EAX_427,
                          (undefined4 *)puVar13,iVar7));
    this_00->field_0104 = (ushort *)pRVar6;
    uVar9 = *(uint *)&pRVar6[1].field_0x4;
    if (uVar9 == 0) {
      uVar9 = ((uint)pRVar6->field_000E * *(int *)&pRVar6->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)&pRVar6->field_0x8;
    }
    local_5 = this_00->field_00D8;

    puVar5 = STPointerBoundaryCast<byte *>(FUN_006b4fa0(pRVar6));
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar5 = CONCAT22(CONCAT11(local_5,local_5),CONCAT11(local_5,local_5));
      puVar5 = (byte *)(puVar5 + 1);
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar5 = local_5;
      puVar5 = (byte *)((int)puVar5 + 1);
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
    iVar7 = 0;
    this_00->field_0028 = 0x1a;

    FUN_006e6000(this_00,3,1,(undefined4 *)puVar1);
    memset((void *)puVar1, 0, 0x20); /* compiler bulk-zero initialization */
    iVar7 = 0;
    this_00->field_0028 = 0x18;

    FUN_006e6000(this_00,3,1,(undefined4 *)puVar1);
    memset((void *)puVar1, 0, 0x20); /* compiler bulk-zero initialization */
    iVar7 = 0;
    this_00->field_0028 = 0x13;
    this_00->field_002C = (ComboTy *)this_00->field_0008;

    FUN_006e6000(this_00,3,1,(undefined4 *)puVar1);
    memset((void *)puVar1, 0, 0x20); /* compiler bulk-zero initialization */
    iVar7 = 0;
    this_00->field_0028 = 0x65;

    FUN_006e6000(this_00,3,1,(undefined4 *)puVar1);
    puVar5 = (byte *)(&this_00->field_0038);
    this_00->field_0084 = &this_00->field_002C->field_0x1;
    memset(puVar5, 0, 0x4c); /* compiler bulk-zero initialization */
    iVar7 = 0;
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
    iVar7 = this_00->field_00F0;
    memset(local_528, 0, 0x4d4); /* compiler bulk-zero initialization */
    local_528[2] = this_00->field_00EC + 5;
    local_528[3] = iVar7 + 5;
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
    /* ST_CALLSITE[00593FD3]: CALL dword ptr [EAX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,7,&this_00->field_010C,nullptr,local_528,0);
    this_00->field_0028 = 0x22;
    this_00->field_002C = (ComboTy *)this_00->field_00C8;
    FUN_006e6080(this_00,2,this_00->field_010C,(undefined4 *)puVar1);
    this_00->field_0110 = 1;

    FUN_006b35d0((int *)g_ddxContext_008075A8,*local_c);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  /* ST_CALLSITE[00594023]: CALL 0x00403968; direct=00403968 ComboTy::sub_005943F0 */
  sub_005943F0(local_10);
  g_currentExceptionFrame = local_54.previous;
  return;
}

