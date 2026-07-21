
/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=0042D776 MOVSX EAX,byte ptr [EBP + 0x8] */

uint FUN_0042d770(char param_1,int *param_2)

{
  DArrayTy *array;
  dword dVar1;
  uint uVar2;
  ushort uVar3;
  uint *puVar4;
  DArrayTy *array_00;
  AnonShape_00493CD0_11D91B87 *pAVar5;
  int iVar6;
  STGroupBoatC *pSVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  uint index;
  undefined4 local_28;
  STAllPlayersC *local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  DArrayTy *local_10;
  uint local_c;
  short local_8;
  short local_6;

  local_18 = 0xffff;
  array = g_playerRuntime[param_1].tempSlots[0][0].objectIds;
  local_1c = 1;
  local_20 = 1;
  puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
  *param_2 = (int)puVar4;
  dVar1 = array->count;
  if (dVar1 == 0) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    return CONCAT22((short)((uint)puVar4 >> 0x10),0xffff);
  }
  array_00 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
  local_14 = 0;
  local_10 = array_00;
  if (0 < (int)dVar1) {
    do {
      DArrayGetElement(array,local_14,&local_c);
      if ((short)local_c != -1) {
        pAVar5 = (AnonShape_00493CD0_11D91B87 *)
                 STAllPlayersC::GetObjPtr(local_24,param_1,local_c,CASE_1);
        iVar6 = thunk_FUN_00493cd0(pAVar5);
        array_00 = local_10;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        if ((iVar6 == 0) &&
           (local_28 = CONCAT22((short)((uint)pAVar5 >> 0x10),*(short *)&pAVar5->field_0x30),
           *(short *)&pAVar5->field_0x30 != -1)) {
          local_1c = iVar6;
          Library::DKW::TBL::FUN_006ae1c0(&local_10->flags,&local_28);
          Library::DKW::TBL::FUN_006ae1c0((uint *)*param_2,&local_c);
          array_00 = local_10;
        }
      }
      local_14 = local_14 + 1;
    } while ((int)local_14 < (int)dVar1);
    if (local_1c == 0) {
      uVar2 = array_00->count;
      if (1 < uVar2) {
        DArrayGetElement(array_00,0,&local_8);
        index = 1;
        if (1 < (int)uVar2) {
          do {
            DArrayGetElement(array_00,index,&local_6);
            if (local_6 != local_8) {
              local_20 = 0;
              break;
            }
            index = index + 1;
          } while ((int)index < (int)uVar2);
        }
      }
      local_18 = 0x7fff;
      if (local_20 == 1) {
        DArrayGetElement(array_00,0,&local_c);
        pSVar7 = thunk_FUN_0042b760(param_1,local_c);
        uVar3 = thunk_FUN_004233c0((int)pSVar7);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((uint)uVar3 == *(uint *)(*param_2 + 0xc)) {
          local_18 = local_c;
        }
      }
    }
  }
  DArrayDestroy(array_00);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  return CONCAT22(extraout_var,(undefined2)local_18);
}

