
int __thiscall thunk_FUN_0062d840(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  
  puVar1 = param_1;
  if (this == (void *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)((int)this + 0x1c);
  }
  param_1 = (undefined4 *)0x98;
  puVar4 = puVar1;
  for (iVar3 = 0x26; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  piVar5 = puVar1 + 0x26;
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)((int)this + 0xb0);
  iVar3 = 0;
  do {
    iVar2 = 0;
    switch(iVar3) {
    case 0:
      piVar7 = (int *)((int)this + 0x30);
      break;
    case 1:
      piVar7 = (int *)((int)this + 0x50);
      break;
    case 2:
      piVar7 = (int *)((int)this + 0x70);
      break;
    case 3:
      piVar7 = (int *)((int)this + 0x90);
      break;
    default:
      goto switchD_0062d881_default;
    }
    iVar2 = thunk_FUN_0062d7d0(piVar7,piVar5);
switchD_0062d881_default:
    piVar5 = (int *)((int)piVar5 + iVar2);
    param_1 = (undefined4 *)((int)param_1 + iVar2);
    iVar3 = iVar3 + 1;
    if (3 < iVar3) {
      return (int)param_1;
    }
  } while( true );
}

