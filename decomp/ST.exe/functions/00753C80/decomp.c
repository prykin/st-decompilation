
int FUN_00753c80(AnonShape_00753C80_4C8E695D *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar5 = -1;
  iVar2 = param_1->field_0010;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar3 = *(int *)(param_1->field_0008 + 0x34);
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar5 = iVar4;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      sVar1 = *(short *)(param_1->field_000C + 0x34);
      if (sVar1 == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar4 = (**(code **)(param_1->field_000C + 8))(iVar5 + 0x18 + iVar3 + iVar2);
      }
      else {
        iVar4 = (int)sVar1;
      }
      iVar4 = iVar5 + 8 + iVar4;
    } while (iVar4 < param_2);
  }
  *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) = iVar5;
  return iVar5;
}

