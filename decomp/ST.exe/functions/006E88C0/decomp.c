
int __thiscall
FUN_006e88c0(void *this,int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined1 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_006e8660(this,param_1,0,0,0,0,0,0,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)((int)this + 0x31c) + *param_1 * 0x114;
    puVar2 = (undefined4 *)FUN_006aac70(0x49);
    *(undefined4 **)(iVar1 + 0xa0) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return -2;
    }
    *puVar2 = param_2;
    *(undefined4 *)(*(int *)(iVar1 + 0xa0) + 4) = param_3;
    *(undefined4 *)(*(int *)(iVar1 + 0xa0) + 8) = param_4;
    *(undefined4 *)(*(int *)(iVar1 + 0xa0) + 0xc) = param_5;
    *(undefined4 *)(*(int *)(iVar1 + 0xa0) + 0x10) = param_6;
    *(undefined4 *)(*(int *)(iVar1 + 0xa0) + 0x14) = param_7;
    *(undefined4 *)(*(int *)(iVar1 + 0xa0) + 0x18) = param_8;
    *(undefined1 *)(*(int *)(iVar1 + 0xa0) + 0x1c) = param_9;
    *(undefined4 *)(*(int *)(iVar1 + 0xa0) + 0x1d) = param_10;
    *(undefined4 *)(*(int *)(iVar1 + 0xa0) + 0x21) = param_11;
    *(undefined4 *)(*(int *)(iVar1 + 0xa0) + 0x25) = param_12;
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x4005;
    iVar1 = 0;
  }
  return iVar1;
}

