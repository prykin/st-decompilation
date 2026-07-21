
void __thiscall FUN_004f91a0(void *this,byte param_1,undefined1 *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;

  if (param_1 < 8) {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = (&DAT_008087f7)[(uint)param_1 * 0x51];
    }
    if (param_3 != (int *)0x0) {
      uVar1 = (uint)param_1;
      if ((&DAT_008087f7)[uVar1 * 0x51] != '\0') {
        uVar2 = *(int *)((int)this + 0x9a0) - *(int *)(&DAT_008087fc + uVar1 * 0x51);
        if (*(uint *)(&DAT_008087f8 + uVar1 * 0x51) <= uVar2) {
          *param_3 = 0;
          return;
        }
        *param_3 = *(uint *)(&DAT_008087f8 + uVar1 * 0x51) - uVar2;
        return;
      }
      *param_3 = *(int *)(&DAT_008087f8 + uVar1 * 0x51) + *(int *)((int)this + 0x9a0);
    }
  }
  return;
}

