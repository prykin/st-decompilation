
uint __thiscall FUN_0055b9f0(void *this,AnonShape_0055B9F0_A6E61FFF *param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  
  iVar1 = *(int *)((int)this + 0x110);
  uVar4 = 0;
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (0 < (int)uVar2) {
    bVar5 = uVar2 != 0;
    do {
      if (bVar5) {
        pcVar3 = (char *)(*(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 0x1c));
      }
      else {
        pcVar3 = (char *)0x0;
      }
      if ((((*(int *)(pcVar3 + 8) == param_1->field_0008) && (*pcVar3 == *(char *)param_1)) &&
          (pcVar3[1] == param_1->field_0x1)) &&
         (((*(short *)(pcVar3 + 2) == param_1->field_0002 &&
           (*(short *)(pcVar3 + 4) == param_1->field_0004)) &&
          ((pcVar3[6] == param_1->field_0x6 && (pcVar3[7] == param_1->field_0x7)))))) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < uVar2;
    } while ((int)uVar4 < (int)uVar2);
  }
  return 0xffffffff;
}

