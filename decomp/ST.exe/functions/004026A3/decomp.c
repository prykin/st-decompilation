
int __thiscall thunk_FUN_006961b0(void *this,uint param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined4 uStack_8;
  
  iVar5 = *(int *)((int)this + 0x5853);
  uStack_8 = 0;
  if (iVar5 != 0) {
    if (param_1 < *(uint *)(iVar5 + 0xc)) {
      iVar2 = *(int *)(iVar5 + 8) * param_1 + *(int *)(iVar5 + 0x1c);
    }
    else {
      iVar2 = 0;
    }
    if (param_2 < *(uint *)(iVar5 + 0xc)) {
      iVar5 = *(int *)(iVar5 + 8) * param_2 + *(int *)(iVar5 + 0x1c);
    }
    else {
      iVar5 = 0;
    }
    if (((iVar2 != 0) && (iVar5 != 0)) && (*(int *)(iVar2 + 0x15) != 0)) {
      iVar2 = *(int *)(iVar5 + 0x15);
      uVar4 = 0;
      if (0 < *(int *)(iVar2 + 0xc)) {
        bVar6 = *(int *)(iVar2 + 0xc) != 0;
        do {
          if ((bVar6) && (iVar2 = *(int *)(iVar2 + 8) * uVar4 + *(int *)(iVar2 + 0x1c), iVar2 != 0))
          {
            uVar1 = thunk_FUN_00695f70(this,param_1,*(int *)(iVar2 + 2),param_3);
            if (-1 < (int)uVar1) {
              uStack_8 = uStack_8 + 1;
            }
          }
          iVar2 = *(int *)(iVar5 + 0x15);
          uVar4 = uVar4 + 1;
          bVar6 = uVar4 < *(uint *)(iVar2 + 0xc);
        } while ((int)uVar4 < (int)*(uint *)(iVar2 + 0xc));
      }
      iVar2 = *(int *)(iVar5 + 0x19);
      if (iVar2 != 0) {
        uVar4 = 0;
        if (0 < *(int *)(iVar2 + 0xc)) {
          bVar6 = *(int *)(iVar2 + 0xc) != 0;
          do {
            if (bVar6) {
              piVar3 = (int *)(*(int *)(iVar2 + 8) * uVar4 + *(int *)(iVar2 + 0x1c));
            }
            else {
              piVar3 = (int *)0x0;
            }
            thunk_FUN_006960d0(this,param_1,*piVar3);
            iVar2 = *(int *)(iVar5 + 0x19);
            uVar4 = uVar4 + 1;
            bVar6 = uVar4 < *(uint *)(iVar2 + 0xc);
          } while ((int)uVar4 < (int)*(uint *)(iVar2 + 0xc));
        }
      }
      thunk_FUN_00695cd0(this,param_2,param_4,param_1);
    }
    return uStack_8;
  }
  return 0;
}

