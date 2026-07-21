
undefined4 __fastcall FUN_0074a646(AnonShape_0074A646_320FC166 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  MMRESULT MVar6;
  undefined4 uVar7;
  AnonShape_0074A646_320FC166 *pAVar8;
  undefined8 uVar9;
  AnonShape_0074A646_320FC166 *local_c;
  AnonShape_0074A646_320FC166 *local_8;

  if (((param_1->field_0070 == 0) || (param_1->field_0074 != 0)) || (param_1->field_00C0 != 0)) {
LAB_0074a6c4:
    uVar7 = 0;
  }
  else {
    piVar1 = param_1->field_0018;
    local_c = param_1;
    local_8 = param_1;
    if (piVar1 != (int *)0x0) {
      uVar2 = param_1->field_0020;
      iVar3 = param_1->field_0024;
      uVar4 = param_1->field_00B8;
      pAVar8 = (AnonShape_0074A646_320FC166 *)(uVar2 + param_1->field_00B8);
      iVar5 = param_1->field_00BC;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 0xc))(piVar1,&local_c);
      uVar9 = Library::MSVCRT::__alldiv
                        ((int)pAVar8 - (int)local_c,
                         ((iVar3 + iVar5 + (uint)CARRY4(uVar2,uVar4)) - (int)local_8) -
                         (uint)(pAVar8 < local_c),10000,0);
      if (0x31 < (int)(UINT)uVar9) {
        MVar6 = timeSetEvent((UINT)uVar9,10,&LAB_0074a606,(DWORD_PTR)param_1,0);
        param_1->field_00C0 = MVar6;
        if (MVar6 != 0) goto LAB_0074a6c4;
      }
    }
    uVar7 = FUN_0074a6cb(param_1);
  }
  return uVar7;
}

