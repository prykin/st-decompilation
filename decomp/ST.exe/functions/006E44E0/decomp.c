
int __thiscall FUN_006e44e0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  AnonShape_006E4480_50BB219F local_10;

  iVar2 = 0;
  *(undefined4 *)(*(int *)((int)this + 0x10) + 4) = 0;
  iVar1 = FUN_006b1190(*(AnonShape_006B1190_EDB2B5FD **)((int)this + 0x10),(undefined4 *)&local_10);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  while (((-1 < iVar1 && (iVar2 = local_10._4_4_, *(int *)(local_10._4_4_ + 0x14) != param_1)) &&
         (iVar2 = FUN_006e4480(&local_10,param_1), iVar2 == 0))) {
    iVar1 = FUN_006b1190(*(AnonShape_006B1190_EDB2B5FD **)((int)this + 0x10),(undefined4 *)&local_10
                        );
  }
  return iVar2;
}

