
uint * __thiscall FUN_0068e4f0(void *this,int param_1)

{
  dword dVar1;
  DArrayTy *array;
  int iVar2;
  DArrayTy *array_00;
  undefined2 *puVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_02;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined4 local_c;
  uint local_8;

  array = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0x14,2,0x14);
  iVar2 = *(int *)((int)this + 0xa5);
  local_8 = 0;
  if (0 < *(int *)(iVar2 + 0xc)) {
    bVar7 = *(int *)(iVar2 + 0xc) != 0;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    iVar4 = extraout_EDX;
    do {
      uVar6 = local_8;
      if (bVar7) {
        iVar4 = *(int *)(iVar2 + 0x1c);
        iVar2 = *(int *)(iVar2 + 8) * local_8 + iVar4;
      }
      else {
        iVar2 = 0;
      }
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if ((*(AnonShape_0065E360_B94C37CB **)(iVar2 + 4) != (AnonShape_0065E360_B94C37CB *)0x0) &&
         (array_00 = (DArrayTy *)
                     thunk_FUN_0065e360(*(AnonShape_0065E360_B94C37CB **)(iVar2 + 4),iVar4,param_1),
         iVar4 = extraout_EDX_00, array_00 != (DArrayTy *)0x0)) {
        dVar1 = array_00->count;
        if ((dVar1 != 0) && (uVar5 = 0, uVar6 = local_8, 0 < (int)dVar1)) {
          bVar7 = dVar1 != 0;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          iVar2 = extraout_EDX_00;
          do {
            if (bVar7) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array_00, uVar5) (runtime stride) */
              puVar3 = (undefined2 *)(array_00->elementSize * uVar5 + (int)array_00->data);
            }
            else {
              puVar3 = (undefined2 *)0x0;
            }
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_c = CONCAT22((short)((uint)iVar2 >> 0x10),*puVar3);
            Library::DKW::TBL::FUN_006ae1c0(&array->flags,&local_c);
            uVar5 = uVar5 + 1;
            bVar7 = uVar5 < array_00->count;
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            iVar2 = extraout_EDX_01;
            uVar6 = local_8;
          } while ((int)uVar5 < (int)array_00->count);
        }
        DArrayDestroy(array_00);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        iVar4 = extraout_EDX_02;
      }
      local_8 = uVar6 + 1;
      iVar2 = *(int *)((int)this + 0xa5);
      bVar7 = local_8 < *(uint *)(iVar2 + 0xc);
    } while ((int)local_8 < (int)*(uint *)(iVar2 + 0xc));
  }
  if (array->count != 0) {
    return &array->flags;
  }
  DArrayDestroy(array);
  return (uint *)0x0;
}

