
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0041dd00(void *this,int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *unaff_ESI;
  float fVar4;
  float fVar5;

  if (param_1 == *(int *)((int)this + 0x21d)) {
    return;
  }
  *(int *)((int)this + 0x21d) = param_1;
  if (param_1 != 1) {
    STT3DSprC::UnLoadSequence((STT3DSprC *)((int)this + 0x1d5),0);
    STT3DSprC::UnLoadSequence((STT3DSprC *)((int)this + 0x1d5),0xf);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    if (((0 < *(int *)((int)this + 0x105)) && (*(uint *)((int)this + 0x24) == (uint)DAT_0080874d))
       && ((iVar3 = (**(code **)(*(int *)this + 0x2c))(), iVar3 == 0xb ||
           ((iVar3 = (**(code **)(*(int *)this + 0x2c))(), iVar3 == 0x23 ||
            (*(int *)((int)this + 0x20) != 0x14)))))) {
      FUN_006e6780(*(void **)((int)this + 0x211),
                   (*(uint *)((int)this + 0x18) >> 0x10 & 0xff) << 0x10 |
                   (uint)*(ushort *)((int)this + 0x18));
    }
    if ((0 < *(int *)((int)this + 0x109)) && (*(uint *)((int)this + 0x24) == (uint)DAT_0080874d)) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      FUN_006e6780(*(void **)((int)this + 0x211),
                   CONCAT22(CONCAT11(1,(char)((uint)*(undefined4 *)((int)this + 0x18) >> 0x10)),
                            *(undefined2 *)((int)this + 0x18)));
    }
    if ((0 < *(int *)((int)this + 0x10d)) && (*(uint *)((int)this + 0x24) == (uint)DAT_0080874d)) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      FUN_006e6780(*(void **)((int)this + 0x211),
                   CONCAT22(CONCAT11(2,(char)((uint)*(undefined4 *)((int)this + 0x18) >> 0x10)),
                            *(undefined2 *)((int)this + 0x18)));
    }
    if ((0 < *(int *)((int)this + 0x111)) && (*(uint *)((int)this + 0x24) == (uint)DAT_0080874d)) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      FUN_006e6780(*(void **)((int)this + 0x211),
                   CONCAT22(CONCAT11(3,(char)((uint)*(undefined4 *)((int)this + 0x18) >> 0x10)),
                            *(undefined2 *)((int)this + 0x18)));
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar2 = (**(code **)(*(int *)this + 0x2c))();
    switch(uVar2) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 0x3c:
    case 0x53:
      FUN_006e6780(*(void **)((int)this + 0x211),
                   CONCAT22(CONCAT11(5,(char)((uint)*(undefined4 *)((int)this + 0x18) >> 0x10)),
                            *(undefined2 *)((int)this + 0x18)));
      return;
    default:
      return;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 0x43:
      FUN_006e6780(*(void **)((int)this + 0x211),
                   CONCAT22(CONCAT11(4,(char)((uint)*(undefined4 *)((int)this + 0x18) >> 0x10)),
                            *(undefined2 *)((int)this + 0x18)));
      return;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 0x73:
      FUN_006e6780(*(void **)((int)this + 0x211),
                   CONCAT22(CONCAT11(6,(char)((uint)*(undefined4 *)((int)this + 0x18) >> 0x10)),
                            *(undefined2 *)((int)this + 0x18)));
      return;
    }
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STSprGameObjC::LoadActFrame(this,unaff_ESI);
  if (((0 < *(int *)((int)this + 0x105)) && (*(uint *)((int)this + 0x24) == (uint)DAT_0080874d)) &&
     (*(int *)((int)this + 0x20) != 0x14)) {
    FUN_006e6710(*(void **)((int)this + 0x211),
                 (float)(int)*(short *)((int)this + 0x41) * _DAT_007904f8 * _DAT_007904f0,
                 (float)(int)*(short *)((int)this + 0x43) * _DAT_007904f8 * _DAT_007904f0,
                 (uint)((float)*(int *)((int)this + 0x105) * _DAT_007904f8 + _DAT_007904f4),0x16,
                 (*(uint *)((int)this + 0x18) >> 0x10 & 0xff) << 0x10 |
                 (uint)*(ushort *)((int)this + 0x18));
  }
  if ((0 < *(int *)((int)this + 0x109)) && (*(uint *)((int)this + 0x24) == (uint)DAT_0080874d)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    FUN_006e6710(*(void **)((int)this + 0x211),
                 (float)(int)*(short *)((int)this + 0x41) * _DAT_007904f8 * _DAT_007904f0,
                 (float)(int)*(short *)((int)this + 0x43) * _DAT_007904f8 * _DAT_007904f0,
                 (uint)((float)*(int *)((int)this + 0x109) * _DAT_007904f8 + _DAT_007904f4),0x10,
                 CONCAT22(CONCAT11(1,(char)((uint)*(undefined4 *)((int)this + 0x18) >> 0x10)),
                          *(undefined2 *)((int)this + 0x18)));
  }
  if ((0 < *(int *)((int)this + 0x10d)) && (*(uint *)((int)this + 0x24) == (uint)DAT_0080874d)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    FUN_006e6710(*(void **)((int)this + 0x211),
                 (float)(int)*(short *)((int)this + 0x41) * _DAT_007904f8 * _DAT_007904f0,
                 (float)(int)*(short *)((int)this + 0x43) * _DAT_007904f8 * _DAT_007904f0,
                 (uint)((float)*(int *)((int)this + 0x10d) * _DAT_007904f8 + _DAT_007904f4),0x28,
                 CONCAT22(CONCAT11(2,(char)((uint)*(undefined4 *)((int)this + 0x18) >> 0x10)),
                          *(undefined2 *)((int)this + 0x18)));
  }
  if ((0 < *(int *)((int)this + 0x111)) && (*(uint *)((int)this + 0x24) == (uint)DAT_0080874d)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    FUN_006e6710(*(void **)((int)this + 0x211),
                 (float)(int)*(short *)((int)this + 0x41) * _DAT_007904f8 * _DAT_007904f0,
                 (float)(int)*(short *)((int)this + 0x43) * _DAT_007904f8 * _DAT_007904f0,
                 (uint)((float)*(int *)((int)this + 0x111) * _DAT_007904f8 + _DAT_007904f4),0x22,
                 CONCAT22(CONCAT11(3,(char)((uint)*(undefined4 *)((int)this + 0x18) >> 0x10)),
                          *(undefined2 *)((int)this + 0x18)));
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar2 = (**(code **)(*(int *)this + 0x2c))();
  switch(uVar2) {
  case 0x3c:
  case 0x53:
    iVar3 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),0x42);
    if (((0 < iVar3) || (iVar3 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),0x43), 0 < iVar3)) ||
       (iVar3 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),99), 0 < iVar3)) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar3 = CONCAT22(CONCAT11(5,(char)((uint)*(undefined4 *)((int)this + 0x18) >> 0x10)),
                       *(undefined2 *)((int)this + 0x18));
      fVar5 = 75.0;
      fVar4 = (float)(int)*(short *)((int)this + 0x43) * _DAT_007904f8 * _DAT_007904f0;
      fVar1 = (float)(int)*(short *)((int)this + 0x41);
      break;
    }
  default:
    return;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case 0x43:
    iVar3 = CONCAT22(CONCAT11(4,(char)((uint)*(undefined4 *)((int)this + 0x18) >> 0x10)),
                     *(undefined2 *)((int)this + 0x18));
    fVar5 = (float)(DAT_007950f0 / 0xc9) * _DAT_007904f8 + _DAT_007904f4;
    fVar4 = (float)(int)*(short *)((int)this + 0x43) * _DAT_007904f8 * _DAT_007904f0;
    fVar1 = (float)(int)*(short *)((int)this + 0x41);
    break;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case 0x73:
    iVar3 = CONCAT22(CONCAT11(6,(char)((uint)*(undefined4 *)((int)this + 0x18) >> 0x10)),
                     *(undefined2 *)((int)this + 0x18));
    fVar5 = (float)(DAT_007951b0 / 0xc9) * _DAT_007904f8 + _DAT_007904f4;
    fVar4 = (float)(int)*(short *)((int)this + 0x43) * _DAT_007904f8 * _DAT_007904f0;
    fVar1 = (float)(int)*(short *)((int)this + 0x41);
  }
  FUN_006e6710(*(void **)((int)this + 0x211),fVar1 * _DAT_007904f8 * _DAT_007904f0,fVar4,(uint)fVar5
               ,0x2e,iVar3);
  return;
}

