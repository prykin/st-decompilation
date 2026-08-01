
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: raw retained-width parameter lifetime: width=2, reads=2, sites=004A8272 MOV AX,word ptr
   [EBP + 0x10] | 004A82DE MOV AX,word ptr [EBP + 0x10] */

void __thiscall FUN_004a8220(void *this,char param_1,short param_2,ushort param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 local_8;

  local_8 = this;
  if (((*(int *)((int)this + 0xef) != 0) &&
      (iVar1 = *(int *)(*(int *)((int)this + 0xef) + 0xc), iVar1 != 0)) && (uVar2 = 0, 0 < iVar1)) {
    do {
      DArrayGetElement(*(DArrayTy **)((int)this + 0xef),uVar2,&local_8);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if ((local_8._2_2_ == param_2) && ((char)local_8 == param_1)) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_8 = (void *)CONCAT22(param_3,(undefined2)local_8);
        Library::DKW::TBL::DArrayPut(*(DArrayTy **)((int)this + 0xef),uVar2,&local_8);
        break;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < iVar1);
  }
  if (((*(int *)((int)this + 0x1e6) == 2) && (*(int *)((int)this + 0x20e) != 0)) &&
     ((iVar1 = *(int *)(*(int *)((int)this + 0x20e) + 0xc), iVar1 != 0 && (uVar2 = 0, 0 < iVar1))))
  {
    while( true ) {
      DArrayGetElement(*(DArrayTy **)((int)this + 0x20e),uVar2,&local_8);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if ((local_8._2_2_ == param_2) && ((char)local_8 == param_1)) break;
      uVar2 = uVar2 + 1;
      if (iVar1 <= (int)uVar2) {
        return;
      }
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_8 = (void *)CONCAT22(param_3,(undefined2)local_8);
    Library::DKW::TBL::DArrayPut(*(DArrayTy **)((int)this + 0x20e),uVar2,&local_8);
  }
  return;
}

