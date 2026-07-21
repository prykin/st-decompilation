
void __thiscall FUN_00626c90(void *this,char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;

  if (*(char *)((int)this + 0x2ad) == '\x02') {
    *param_1 = ((*(uint *)((int)this + 0x262) != (uint)DAT_0080874d) - 1U & 0xfe) + 3;
  }
  else {
    *param_1 = '\x04';
  }
  cVar1 = *(char *)((int)this + 0x21d);
  param_1[2] = '\x01';
  param_1[1] = cVar1;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar2 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)(param_1 + 3) = uVar2;
  iVar3 = GetPlayerRaceId(*(char *)((int)this + 0x24));
  param_1[7] = (char)iVar3;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 0x18);
  Library::MSVCRT::_strncpy(param_1 + 0xc,(char *)((int)this + 0x28e),0xe);
  param_1[0x1b] = 'd';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  param_1[0x2c] = '\0';
  param_1[0x2d] = '\0';
  param_1[0x2e] = '\0';
  param_1[0x2e - *(short *)((int)this + 0x4b)] = '\x01';
  if (*(int *)((int)this + 0x2ae) != 4) {
    param_1[0x1d] = '\x01';
  }
  return;
}

