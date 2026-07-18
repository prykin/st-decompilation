
void __thiscall FUN_0052bda0(void *this,char param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  byte bVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint local_c [2];
  
  if (param_1 == DAT_0080874d) {
    if (DAT_00808a97 != -1) {
      param_2 = DAT_00808a97 - param_2;
    }
    *(int *)((int)this + 0x9e) = param_2;
    wsprintfA((LPSTR)local_c,&DAT_007c6f44,param_2);
    if (DAT_00808a97 == -1) {
      bVar3 = 0;
    }
    else {
      bVar3 = (-(0x14 < *(uint *)((int)this + 0x9e)) & 0xfeU) + 2;
    }
    if (DAT_0080874e == '\x03') {
      bVar3 = bVar3 + 1;
    }
    iVar2 = *(int *)((int)this + 0x7e);
    uVar5 = *(uint *)(iVar2 + 0x14);
    if (uVar5 == 0) {
      uVar5 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar2 + 8);
    }
    uVar1 = *(undefined1 *)((int)this + 0x69);
    puVar4 = (undefined4 *)FUN_006b4fa0(iVar2);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar4 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
      puVar4 = puVar4 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar4 = uVar1;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    ccFntTy::SetSurf(*(ccFntTy **)((int)this + 0x6e),*(int *)((int)this + 0x7e),0,0,0,
                     *(int *)((int)this + 0x60),*(int *)((int)this + 100));
    ccFntTy::WrStr(*(ccFntTy **)((int)this + 0x6e),local_c,-1,-1,(uint)bVar3);
    thunk_FUN_0052bbe0((int)this);
  }
  return;
}

