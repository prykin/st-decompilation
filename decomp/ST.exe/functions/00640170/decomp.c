
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00640170(void *this,int param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  uVar2 = 0;
  if (*(undefined4 **)((int)this + 0x37f) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)((int)this + 0x37f);
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    fVar1 = (float)param_1 * _DAT_007904f8;
    *(undefined2 *)puVar4 = 0;
    fVar1 = fVar1 * _DAT_007904f0;
    *(undefined1 *)((int)puVar4 + 2) = 0;
    *(float *)(*(int *)((int)this + 0x37f) + 4) = fVar1;
    *(float *)(*(int *)((int)this + 0x37f) + 8) = (float)param_2 * _DAT_007904f8 * _DAT_007904f0;
    *(undefined4 *)(*(int *)((int)this + 0x37f) + 0xc) = param_3;
    *(undefined4 *)(*(int *)((int)this + 0x37f) + 0x10) = 3;
    *(undefined1 *)(*(int *)((int)this + 0x37f) + 0x15) = 0;
    *(undefined1 *)(*(int *)((int)this + 0x37f) + 0x14) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x37f) + 0x17) = PTR_00802a38->field_00E4;
    uVar2 = 1;
  }
  return uVar2;
}

