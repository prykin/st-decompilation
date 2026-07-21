
int FUN_00755970(AnonShape_00755970_4FB144E0 *param_1,ushort *param_2,int param_3)

{
  short sVar1;
  AnonShape_00755970_4FB144E0 *pAVar2;
  AnonShape_00755970_4FB144E0 *pAVar3;
  uint uVar4;
  int iVar5;
  AnonShape_00755970_4FB144E0 *pAVar6;
  int iVar7;
  AnonShape_00755970_4FB144E0 *pAVar8;
  int local_c;
  int local_8;

  pAVar2 = param_1;
  iVar7 = 0;
  local_8 = 0;
  local_c = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  param_1->field_000C = *(undefined4 *)(param_1->field_0008 + 0x50);
  do {
    *(int *)(pAVar2->field_000C + 0x1c) = local_8;
    iVar7 = FUN_00753b80((AnonShape_00750F20_F8C16F98 *)pAVar2,iVar7,local_8);
    param_1 = (AnonShape_00755970_4FB144E0 *)0xffffffff;
    pAVar6 = (AnonShape_00755970_4FB144E0 *)0xffffffff;
    pAVar3 = (AnonShape_00755970_4FB144E0 *)0x0;
    if (0 < *(short *)(iVar7 + 8)) {
      do {
        pAVar8 = pAVar3;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(int *)(pAVar2->field_000C + 0x30) == 0xff) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          uVar4 = (**(code **)(pAVar2->field_000C + 4))(param_2);
        }
        else {
          uVar4 = FUN_007575b0((AnonShape_007575B0_A94973CA *)pAVar2,param_2,
                               (ushort *)((int)&pAVar8[1].field_0008 + iVar7));
        }
        pAVar6 = param_1;
        if ((int)uVar4 < 0) break;
        pAVar6 = pAVar8;
        if (uVar4 == 0) {
          local_c = 1;
          break;
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        sVar1 = *(short *)(pAVar2->field_000C + 0x34);
        if (sVar1 == 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar5 = (**(code **)(pAVar2->field_000C + 8))((int)&pAVar8[1].field_0008 + iVar7);
        }
        else {
          iVar5 = (int)sVar1;
        }
        pAVar3 = (AnonShape_00755970_4FB144E0 *)((int)&pAVar8->field_0008 + iVar5);
        *(AnonShape_00755970_4FB144E0 **)
         /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
         (pAVar2->field_000C + 0x44 + *(int *)(pAVar2->field_000C + 0x1c) * 8) = pAVar3;
        param_1 = pAVar8;
      } while ((int)pAVar3 < (int)*(short *)(iVar7 + 8));
    }
    *(AnonShape_00755970_4FB144E0 **)
     /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
     (pAVar2->field_000C + 0x44 + *(int *)(pAVar2->field_000C + 0x1c) * 8) = pAVar6;
    if ((local_c != 0) && (param_3 != 0)) {
      return local_c;
    }
    if (pAVar6 == (AnonShape_00755970_4FB144E0 *)0xffffffff) {
      iVar7 = *(int *)(iVar7 + 4);
    }
    else {
      iVar7 = *(int *)(&pAVar6[1].field_0x0 + iVar7);
    }
    *(AnonShape_00755970_4FB144E0 **)(pAVar2->field_000C + 0x44 + local_8 * 8) = pAVar6;
    local_8 = local_8 + 1;
    if (iVar7 == -1) {
      return local_c;
    }
  } while( true );
}

