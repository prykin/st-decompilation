
int __thiscall FUN_00714ce0(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar6;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int *local_8;
  
  if ((int)param_1 <= *(int *)((int)this + 4)) {
    return 0;
  }
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  piVar1 = local_8;
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    if (-1 < iVar2) {
      iVar2 = -1;
    }
    return iVar2;
  }
  if ((undefined4 *)*local_8 == (undefined4 *)0x0) {
    puVar3 = FUN_006aac10(param_1);
    local_8 = piVar1;
  }
  else {
    puVar3 = (undefined4 *)FUN_006acf50((undefined4 *)*local_8,param_1);
    iVar2 = piVar1[1];
    uVar4 = param_1 - iVar2;
    puVar6 = (undefined4 *)(iVar2 + (int)puVar3);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  *local_8 = (int)puVar3;
  local_8[1] = param_1;
  return 0;
}

