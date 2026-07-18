
void __thiscall
FUN_007176f0(void *this,undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,
            undefined4 param_6,undefined4 param_7,int param_8,undefined4 param_9,undefined4 param_10
            ,undefined4 param_11,undefined4 param_12)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if ((((param_1 != (undefined4 *)0x0) && (param_5 != 0)) && (param_4 != 0)) && (param_8 != 0)) {
    *(int *)((int)this + 0x4b2) = param_2;
    uVar4 = param_2 * param_3;
    *(int *)((int)this + 0x4b6) = param_3;
    *(undefined4 *)((int)this + 0x4be) = param_6;
    *(undefined4 *)((int)this + 0x4c2) = param_7;
    puVar1 = (undefined4 *)FUN_006acf50(*(undefined4 **)((int)this + 0x18),uVar4);
    *(undefined4 **)((int)this + 0x18) = puVar1;
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar1 = 0;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    *(undefined4 *)((int)this + 0x4ce) = param_9;
    *(int *)((int)this + 0x4ca) = param_4;
    *(undefined4 *)((int)this + 0x4d2) = param_10;
    iVar2 = *(int *)((int)this + 0x4c2) * *(int *)((int)this + 0x4be) + 7;
    *(undefined4 *)((int)this + 0x4da) = param_12;
    *(int *)((int)this + 0x4c6) = param_8;
    *(undefined4 *)((int)this + 0x4d6) = param_11;
    puVar1 = FUN_006aac10((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3);
    *(undefined4 **)((int)this + 0x46e) = puVar1;
    *(uint *)((int)this + 0x49e) =
         (uint)*(byte *)((*(int *)((int)this + 0x150) + *(int *)((int)this + 0x14c) +
                         *(int *)((int)this + 0x148)) * 0x100 + 0x80 + *(int *)((int)this + 0x154));
    puVar1 = FUN_006aac10(0x140);
    *(undefined4 **)((int)this + 0x472) = puVar1;
    *(undefined4 *)((int)this + 0x4a2) = *param_1;
    *(undefined4 *)((int)this + 0x4a6) = param_1[1];
    *(undefined4 *)((int)this + 0x4aa) = param_1[2];
    *(undefined4 *)((int)this + 0x4ae) = param_1[3];
    *(int *)((int)this + 0x4ba) = param_5;
    *(undefined4 *)((int)this + 0x466) = 1;
    FUN_00717380((int)this);
    return;
  }
  FUN_006a5e40(-0x34,DAT_007ed77c,0x7f06d4,0xe9);
  return;
}

