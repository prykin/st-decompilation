
void __thiscall FUN_00580780(void *this,AnonShape_00580780_266862D6 *param_1)

{
  undefined4 uVar1;
  int iVar2;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar1 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)param_1 = uVar1;
  iVar2 = GetPlayerRaceId(*(char *)((int)this + 0x24));
  param_1->field_0x4 = (char)iVar2;
  param_1->field_0005 = 4;
  param_1->field_0006 = 0;
  param_1->field_0007 = 1;
  param_1->field_0x8 = *(undefined1 *)((int)this + 0x21d);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar1 = (**(code **)(*(int *)this + 0x2c))();
  switch(uVar1) {
  case 0xdc:
    param_1->field_0x1c = 2;
    param_1->field_001D = *(undefined4 *)((int)this + 0x259);
    return;
  case 0xdd:
    param_1->field_0x1c = 0;
    param_1->field_001D = *(undefined4 *)((int)this + 0x259);
    return;
  case 0xde:
    param_1->field_0x1c = 1;
    param_1->field_001D = *(undefined4 *)((int)this + 0x259);
    return;
  case 0xe0:
    param_1->field_0x1c = 4;
  }
  param_1->field_001D = *(undefined4 *)((int)this + 0x259);
  return;
}

