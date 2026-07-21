
undefined4 __fastcall FUN_006d54c0(AnonShape_006D54C0_FBA73A61 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint local_1c;
  _RTL_CRITICAL_SECTION *local_18;
  uint local_14;
  int local_10;
  int local_c;
  int *local_8;

  local_14 = 0;
  local_18 = (_RTL_CRITICAL_SECTION *)&param_1->field_0x7c;
  EnterCriticalSection(local_18);
  FUN_0074a193(param_1);
  piVar1 = param_1->field_0284;
  iVar5 = piVar1[3] - piVar1[1];
  iVar3 = piVar1[2] - *piVar1;
  if ((iVar3 == 0) || (iVar5 == 0)) {
    iVar3 = piVar1[0xd];
    uVar4 = piVar1[0xe] >> 0x1f;
    iVar5 = (piVar1[0xe] ^ uVar4) - uVar4;
  }
  *(undefined4 *)(param_1->field_0288 + 0x18) = 0;
  *(undefined4 *)(param_1->field_0288 + 0x1c) = 0;
  *(int *)(param_1->field_0288 + 0x20) = iVar3;
  *(int *)(param_1->field_0288 + 0x24) = iVar5;
  *(undefined4 *)(param_1->field_0288 + 8) = 0;
  *(undefined4 *)(param_1->field_0288 + 0xc) = 0;
  *(int *)(param_1->field_0288 + 0x10) = iVar3;
  *(int *)(param_1->field_0288 + 0x14) = iVar5;
  *(uint *)(param_1->field_0288 + 0x98) =
       (uint)*(ushort *)(piVar1 + 0xf) * (uint)*(ushort *)((int)piVar1 + 0x3e);
  iVar2 = param_1->field_0288;
  *(int *)(iVar2 + 0xb0) = piVar1[10];
  *(int *)(iVar2 + 0xb4) = piVar1[0xb];
  *(int *)(param_1->field_0288 + 0xb8) = piVar1[8];
  *(int *)(param_1->field_0288 + 0xbc) = piVar1[9];
  uVar4 = piVar1[0xe] >> 0x1f;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_10 = Library::DKW::DDX::FUN_006c4350
                       (*(int *)(param_1->field_0288 + 0x28),&local_8,piVar1[0xd],
                        (piVar1[0xe] ^ uVar4) - uVar4,0,0);
  if (local_10 == 0) {
    local_10 = 0;
    local_c = 0;
    do {
      local_10 = FUN_006bbe40(local_8,&local_1c,(int *)&local_14,0);
      if (local_10 == 0) {
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_006d5620:
        (**(code **)(*local_8 + 0x80))(local_8,0);
        break;
      }
      if (local_10 != -0x7789fe3e) {
        if (local_10 == 0) goto LAB_006d5620;
        break;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*local_8 + 0x6c))(local_8);
      local_c = local_c + 1;
    } while (local_c < 2);
  }
  if (local_8 != (int *)0x0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((((((local_10 != 0) || (iVar2 = param_1->field_0288, *(int *)(iVar2 + 0x90) != iVar3)) ||
        (*(int *)(iVar2 + 0x94) != iVar5)) ||
       (((piVar1[0xd] * (uint)*(ushort *)((int)piVar1 + 0x3e) + 0x1f >> 3 & 0x1ffffffc) != local_14
        || (-1 < piVar1[0xe])))) ||
      (iVar2 = *(int *)(iVar2 + 0x28),
      (uint)*(ushort *)((int)piVar1 + 0x3e) != *(uint *)(iVar2 + 0x20))) ||
     ((piVar1[0x10] == 3 &&
      (((piVar1[0x16] != *(int *)(iVar2 + 0x4c4) || (piVar1[0x17] != *(int *)(iVar2 + 0x4c8))) ||
       (piVar1[0x18] != *(int *)(iVar2 + 0x4cc))))))) {
    FUN_006c3500((AnonShape_006C3500_19C01617 *)param_1->field_0288);
    param_1->field_030C = 0;
    *(int *)(param_1->field_0288 + 0x90) = iVar3;
    *(int *)(param_1->field_0288 + 0x94) = iVar5;
  }
  param_1->field_028C = iVar3;
  param_1->field_0290 = iVar5;
  LeaveCriticalSection(local_18);
  return 0;
}

