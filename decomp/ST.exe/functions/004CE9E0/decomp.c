
void __thiscall FUN_004ce9e0(void *this,int *param_1,int *param_2,int *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;

  if (&stack0x00000000 == (undefined1 *)0xfffffffc) {
    sVar3 = (short)param_1;
    sVar1 = sVar3;
    sVar2 = sVar3;
  }
  else {
    sVar3 = *(short *)((int)this + 0x45);
    sVar1 = *(short *)((int)this + 0x43);
    sVar2 = *(short *)((int)this + 0x41);
  }
  switch(*(undefined4 *)((int)this + 0x5ac)) {
  case 0x32:
  case 0x5c:
    *param_1 = sVar2 + 100;
    *param_2 = sVar1 + 100;
    *param_3 = sVar3 + 10;
    break;
  case 0x40:
  case 0x49:
    *param_1 = (int)sVar2;
    *param_2 = (int)sVar1;
    *param_3 = sVar3 + 10;
    return;
  }
  return;
}

