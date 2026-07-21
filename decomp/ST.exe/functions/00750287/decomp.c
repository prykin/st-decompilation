
void __fastcall FUN_00750287(AnonShape_00750287_BC8A1854 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int local_8;

  if (param_1->field_0060 != 0) {
    ResetEvent((HANDLE)param_1->field_0050);
    uVar3 = 0;
    local_8 = 0;
    if (0 < param_1->field_0028) {
      iVar1 = FUN_0074ded7(param_1->field_0020);
      local_8 = *(int *)(iVar1 + 0x1c);
      uVar3 = *(uint *)(iVar1 + 0x18);
    }
    if ((param_1->field_0064 != 0) && (0 < param_1->field_0040)) {
      iVar1 = FUN_0074ded7(param_1->field_0038);
      uVar2 = *(uint *)(iVar1 + 0x18) + param_1->field_0068;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar1 = *(int *)(iVar1 + 0x1c) + param_1->field_006C +
              (uint)CARRY4(*(uint *)(iVar1 + 0x18),param_1->field_0068);
      if ((uVar3 == 0 && local_8 == 0) ||
         ((iVar1 <= local_8 && ((iVar1 < local_8 || (uVar2 < uVar3)))))) {
        local_8 = iVar1;
        uVar3 = uVar2;
      }
    }
    if (((-1 < local_8) && ((0 < local_8 || (uVar3 != 0)))) &&
       ((uVar3 != param_1->field_0058 || (local_8 != param_1->field_005C)))) {
      if (param_1->field_0054 != 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)param_1->field_0060 + 0x18))
                  ((int *)param_1->field_0060,param_1->field_0054);
        ResetEvent((HANDLE)param_1->field_0050);
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)param_1->field_0060 + 0x10))
                ((int *)param_1->field_0060,uVar3,local_8,0,0,param_1->field_0050,
                 &param_1->field_0054);
      param_1->field_0058 = uVar3;
      param_1->field_005C = local_8;
    }
  }
  return;
}

