
void __thiscall thunk_FUN_006616b0(void *this,uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint uStack_10;
  
  iVar1 = *(int *)((int)this + 0x20b);
  uStack_10 = 0;
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (0 < (int)uVar2) {
    do {
      if (uStack_10 < uVar2) {
        puVar5 = (uint *)(*(int *)(iVar1 + 8) * uStack_10 + *(int *)(iVar1 + 0x1c));
      }
      else {
        puVar5 = (uint *)0x0;
      }
      if ((puVar5[10] == 0) && (puVar5[9] == 0)) {
        iVar6 = 0;
        uVar4 = -(uint)(*(short *)((int)this + 0x7b) != 1) & 2;
        puVar7 = puVar5;
        if (uVar4 != 0xffffffff) {
          do {
            uVar3 = *puVar7;
            if ((uVar3 == param_1) &&
               (((uVar3 != 0 && (uVar3 < 0x29)) || (*(short *)((int)this + 0x7b) == 1)))) {
              puVar5[9] = param_2;
              return;
            }
            iVar6 = iVar6 + 1;
            puVar7 = puVar7 + 1;
          } while (iVar6 < (int)(uVar4 + 1));
        }
      }
      uStack_10 = uStack_10 + 1;
    } while ((int)uStack_10 < (int)uVar2);
  }
  return;
}

