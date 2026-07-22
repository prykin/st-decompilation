
void __thiscall FUN_00626d70(void *this,AnonShape_00626D70_1F4C15C4 *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar2 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)param_1 = uVar2;
  iVar3 = GetPlayerRaceId(*(char *)((int)this + 0x24));
  param_1->field_0x4 = (char)iVar3;
  if (*(char *)((int)this + 0x2ad) == '\x02') {
    if (*(uint *)((int)this + 0x262) == (uint)DAT_0080874d) {
      param_1->field_0005 = 1;
    }
    else {
      param_1->field_0005 = 3;
    }
    param_1->field_0009 = 0x4c;
    param_1->field_000F = *(int *)((int)this + 0x2ae) != 4;
  }
  else {
    param_1->field_0005 = 4;
  }
  if (*(char *)((int)this + 0x2ad) == '\x03') {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar3 = ((*(int *)((int)this + 0x35f) - g_playSystem_00802A38->field_00E4) + 0x1194) * 0x28;
    param_1[3].field_0x4 =
         ((char)(iVar3 / 0x1194) + (char)(iVar3 >> 0x1f)) -
         (char)((longlong)iVar3 * 0x7482296b >> 0x3f);
  }
  uVar1 = *(undefined1 *)((int)this + 0x21d);
  param_1->field_0006 = 1;
  param_1->field_0x8 = uVar1;
  if (*(int *)((int)this + 0x2ae) != 4) {
    param_1->field_0007 = 1;
  }
  return;
}

