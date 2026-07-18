
undefined4 __thiscall FUN_00714fb0(void *this,int param_1,uint *param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  
  bVar2 = false;
  if (param_1 != 0) {
    *(int *)((int)this + 8) = param_1;
  }
  puVar6 = *(uint **)((int)this + 8);
  cVar1 = (char)*puVar6;
  do {
    if (cVar1 == '\0') {
LAB_00715017:
      if (puVar6 != *(uint **)((int)this + 8)) {
        uVar3 = *puVar6;
        *(undefined1 *)puVar6 = 0;
        FUN_00714dc0(this,*(char **)((int)this + 8));
        *(char *)puVar6 = (char)uVar3;
        *(uint **)((int)this + 8) = puVar6;
        return *(undefined4 *)this;
      }
      return 0;
    }
    if (bVar2) {
      bVar2 = false;
      iVar4 = FUN_0070cdc0((byte *)puVar6);
      if (iVar4 < 0) {
LAB_00714fdf:
        puVar5 = FUN_0070ce00(param_2,(char *)puVar6);
        if (puVar5 != (uint *)0x0) {
          puVar6 = (uint *)((int)puVar6 + 1);
          goto LAB_00715017;
        }
      }
    }
    else {
      if ((param_3 == (char *)0x0) || (iVar4 = FUN_0070cd90(param_3,puVar6), iVar4 != 0))
      goto LAB_00714fdf;
      bVar2 = true;
    }
    cVar1 = *(char *)((int)puVar6 + 1);
    puVar6 = (uint *)((int)puVar6 + 1);
  } while( true );
}

