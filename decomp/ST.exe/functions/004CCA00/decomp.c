
char __thiscall FUN_004cca00(void *this,int param_1)

{
  uint uVar1;
  
  if ((param_1 != *(int *)((int)this + 0x24)) &&
     ((*(int *)((int)this + 0x245) == 0 || (*(int *)((int)this + 0x245) == 5)))) {
    if ((*(int *)((int)this + 0x24) == *(int *)((int)this + 0x23d)) &&
       (*(int *)(&DAT_007e1218 + (*(int *)((int)this + 0x235) * 3 + *(int *)((int)this + 0x239)) * 4
                ) != 0)) {
      return '\x03';
    }
    uVar1 = GetPlayerRaceId((char)param_1);
    return ((&DAT_007e1987)
            [(*(int *)((int)this + 0x235) * 3 + *(int *)((int)this + 0x239)) * 3 + (uVar1 & 0xff)]
           != '\0') + '\x01';
  }
  return '\0';
}

