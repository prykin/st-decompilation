
int __thiscall FUN_007111c0(void *this,uint *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  bVar2 = false;
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  cVar1 = (char)*param_1;
  do {
    if (cVar1 == '\0') {
      return iVar5;
    }
    if (bVar2) {
      bVar2 = false;
      iVar3 = FUN_0070cdc0((byte *)param_1);
      if (iVar3 < 0) {
LAB_00711200:
        uVar4 = FUN_00710fb0(this,(byte *)param_1);
        iVar3 = (int)*(short *)(*(int *)((int)this + 0x9a) + 0x6c + (uVar4 & 0xffff) * 10);
        if (iVar5 < iVar3) {
          iVar5 = iVar3;
        }
      }
    }
    else {
      iVar3 = FUN_0070cd90((char *)((int)this + 0x9e),param_1);
      if ((iVar3 != 0) || (*(int *)((int)this + 0x7e) == 0)) goto LAB_00711200;
      bVar2 = true;
    }
    cVar1 = *(char *)((int)param_1 + 1);
    param_1 = (uint *)((int)param_1 + 1);
  } while( true );
}

