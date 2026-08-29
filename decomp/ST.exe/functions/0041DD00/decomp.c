#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0041dd00(void *this,int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_1 == STField<int>(this,0x21d)) {
    return;
  }
  STField<int>(this,0x21d) = param_1;
  if (param_1 != 1) {
    /* ST_CALLSITE[0041E115]: CALL 0x0040498a; direct=0040498A STT3DSprC::UnLoadSequence */
    STT3DSprC::UnLoadSequence((STT3DSprC *)((int)this + 0x1d5),0);
    /* ST_CALLSITE[0041E11E]: CALL 0x0040498a; direct=0040498A STT3DSprC::UnLoadSequence */
    STT3DSprC::UnLoadSequence((STT3DSprC *)((int)this + 0x1d5),0xf);
    if (((0 < STField<int>(this,0x105)) && (STField<uint>(this,0x24) == (uint)DAT_0080874d))
       /* ST_CALLSITE[0041E141]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
       && ((iVar3 = STStructuralVirtualCall<undefined4>(this, 0x2C), iVar3 == 0xb ||
           /* ST_CALLSITE[0041E14D]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
           ((iVar3 = STStructuralVirtualCall<undefined4>(this, 0x2C), iVar3 == 0x23 ||
            (STField<int>(this,0x20) != 0x14)))))) {
      ST3DSMAPContext::sub_006E6780
                (STField<ST3DSMAPContext *>(this,0x211),
                 (STField<uint>(this,0x18) >> 0x10 & 0xff) << 0x10 |
                 (uint)STField<ushort>(this,0x18));
    }
    if ((0 < STField<int>(this,0x109)) && (STField<uint>(this,0x24) == (uint)DAT_0080874d)) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      ST3DSMAPContext::sub_006E6780
                (STField<ST3DSMAPContext *>(this,0x211),
                 CONCAT22(CONCAT11(1,(char)((uint)STField<undefined4>(this,0x18) >> 0x10)),
                          STField<undefined2>(this,0x18)));
    }
    if ((0 < STField<int>(this,0x10d)) && (STField<uint>(this,0x24) == (uint)DAT_0080874d)) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      ST3DSMAPContext::sub_006E6780
                (STField<ST3DSMAPContext *>(this,0x211),
                 CONCAT22(CONCAT11(2,(char)((uint)STField<undefined4>(this,0x18) >> 0x10)),
                          STField<undefined2>(this,0x18)));
    }
    if ((0 < STField<int>(this,0x111)) && (STField<uint>(this,0x24) == (uint)DAT_0080874d)) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      ST3DSMAPContext::sub_006E6780
                (STField<ST3DSMAPContext *>(this,0x211),
                 CONCAT22(CONCAT11(3,(char)((uint)STField<undefined4>(this,0x18) >> 0x10)),
                          STField<undefined2>(this,0x18)));
    }
    /* ST_CALLSITE[0041E23C]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
    uVar2 = STStructuralVirtualCall<undefined4>(this, 0x2C);
    switch(uVar2) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 0x3c:
    case 0x53:
      ST3DSMAPContext::sub_006E6780
                (STField<ST3DSMAPContext *>(this,0x211),
                 CONCAT22(CONCAT11(5,(char)((uint)STField<undefined4>(this,0x18) >> 0x10)),
                          STField<undefined2>(this,0x18)));
      return;
    default:
      return;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 0x43:
      ST3DSMAPContext::sub_006E6780
                (STField<ST3DSMAPContext *>(this,0x211),
                 CONCAT22(CONCAT11(4,(char)((uint)STField<undefined4>(this,0x18) >> 0x10)),
                          STField<undefined2>(this,0x18)));
      return;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 0x73:
      ST3DSMAPContext::sub_006E6780
                (STField<ST3DSMAPContext *>(this,0x211),
                 CONCAT22(CONCAT11(6,(char)((uint)STField<undefined4>(this,0x18) >> 0x10)),
                          STField<undefined2>(this,0x18)));
      return;
    }
  }
  /* ST_CALLSITE[0041DD26]: CALL 0x0040381e; direct=0040381E STSprGameObjC::LoadActFrame */
  STSprGameObjC::LoadActFrame(this);
  if (((0 < STField<int>(this,0x105)) && (STField<uint>(this,0x24) == (uint)DAT_0080874d)) &&
     (STField<int>(this,0x20) != 0x14)) {
    ST3DSMAPContext::sub_006E6710
              (STField<ST3DSMAPContext *>(this,0x211),
               (float)(int)STField<short>(this,0x41) * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)STField<short>(this,0x43) * _DAT_007904f8 * _DAT_007904f0,
               (uint)((float)STField<int>(this,0x105) * _DAT_007904f8 + _DAT_007904f4),0x16,
               (STField<uint>(this,0x18) >> 0x10 & 0xff) << 0x10 |
               (uint)STField<ushort>(this,0x18));
  }
  if ((0 < STField<int>(this,0x109)) && (STField<uint>(this,0x24) == (uint)DAT_0080874d)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    ST3DSMAPContext::sub_006E6710
              (STField<ST3DSMAPContext *>(this,0x211),
               (float)(int)STField<short>(this,0x41) * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)STField<short>(this,0x43) * _DAT_007904f8 * _DAT_007904f0,
               (uint)((float)STField<int>(this,0x109) * _DAT_007904f8 + _DAT_007904f4),0x10,
               CONCAT22(CONCAT11(1,(char)((uint)STField<undefined4>(this,0x18) >> 0x10)),
                        STField<undefined2>(this,0x18)));
  }
  if ((0 < STField<int>(this,0x10d)) && (STField<uint>(this,0x24) == (uint)DAT_0080874d)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    ST3DSMAPContext::sub_006E6710
              (STField<ST3DSMAPContext *>(this,0x211),
               (float)(int)STField<short>(this,0x41) * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)STField<short>(this,0x43) * _DAT_007904f8 * _DAT_007904f0,
               (uint)((float)STField<int>(this,0x10d) * _DAT_007904f8 + _DAT_007904f4),0x28,
               CONCAT22(CONCAT11(2,(char)((uint)STField<undefined4>(this,0x18) >> 0x10)),
                        STField<undefined2>(this,0x18)));
  }
  if ((0 < STField<int>(this,0x111)) && (STField<uint>(this,0x24) == (uint)DAT_0080874d)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    ST3DSMAPContext::sub_006E6710
              (STField<ST3DSMAPContext *>(this,0x211),
               (float)(int)STField<short>(this,0x41) * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)STField<short>(this,0x43) * _DAT_007904f8 * _DAT_007904f0,
               (uint)((float)STField<int>(this,0x111) * _DAT_007904f8 + _DAT_007904f4),0x22,
               CONCAT22(CONCAT11(3,(char)((uint)STField<undefined4>(this,0x18) >> 0x10)),
                        STField<undefined2>(this,0x18)));
  }
  /* ST_CALLSITE[0041DF5F]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  uVar2 = STStructuralVirtualCall<undefined4>(this, 0x2C);
  switch(uVar2) {
  case 0x3c:
  case 0x53:
    iVar3 = thunk_FUN_004e60d0(STField<int>(this,0x24),0x42);
    if (((0 < iVar3) || (iVar3 = thunk_FUN_004e60d0(STField<int>(this,0x24),0x43), 0 < iVar3)) ||
       (iVar3 = thunk_FUN_004e60d0(STField<int>(this,0x24),99), 0 < iVar3)) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar3 = CONCAT22(CONCAT11(5,(char)((uint)STField<undefined4>(this,0x18) >> 0x10)),
                       STField<undefined2>(this,0x18));
      fVar5 = 75.0;
      fVar4 = (float)(int)STField<short>(this,0x43) * _DAT_007904f8 * _DAT_007904f0;
      fVar1 = (float)(int)STField<short>(this,0x41);
      break;
    }
  default:
    return;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case 0x43:
    iVar3 = CONCAT22(CONCAT11(4,(char)((uint)STField<undefined4>(this,0x18) >> 0x10)),
                     STField<undefined2>(this,0x18));
    fVar5 = (float)(DAT_007950f0 / 0xc9) * _DAT_007904f8 + _DAT_007904f4;
    fVar4 = (float)(int)STField<short>(this,0x43) * _DAT_007904f8 * _DAT_007904f0;
    fVar1 = (float)(int)STField<short>(this,0x41);
    break;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case 0x73:
    iVar3 = CONCAT22(CONCAT11(6,(char)((uint)STField<undefined4>(this,0x18) >> 0x10)),
                     STField<undefined2>(this,0x18));
    fVar5 = (float)(DAT_007951b0 / 0xc9) * _DAT_007904f8 + _DAT_007904f4;
    fVar4 = (float)(int)STField<short>(this,0x43) * _DAT_007904f8 * _DAT_007904f0;
    fVar1 = (float)(int)STField<short>(this,0x41);
  }
  ST3DSMAPContext::sub_006E6710
            (STField<ST3DSMAPContext *>(this,0x211),fVar1 * _DAT_007904f8 * _DAT_007904f0,fVar4,
             (uint)fVar5,0x2e,iVar3);
  return;
}

