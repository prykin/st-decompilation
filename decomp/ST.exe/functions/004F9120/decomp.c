
void __thiscall FUN_004f9120(void *this,byte param_1,char param_2,undefined4 param_3)

{
  uint uVar1;

  if (param_1 < 8) {
    uVar1 = (uint)param_1;
    (&DAT_008087f7)[uVar1 * 0x51] = param_2;
    *(undefined4 *)(&DAT_008087f8 + uVar1 * 0x51) = param_3;
    *(undefined4 *)(&DAT_008087fc + uVar1 * 0x51) = *(undefined4 *)((int)this + 0x9a0);
    if ((param_1 == DAT_0080874d) && (param_2 == '\0')) {
      DAT_0080c4d3 = 4;
    }
  }
  return;
}

