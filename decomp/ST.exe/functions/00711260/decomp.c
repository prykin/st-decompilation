
int __thiscall FUN_00711260(void *this,uint *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 local_8;
  
  bVar2 = false;
  local_8 = 0;
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  cVar1 = (char)*param_1;
  do {
    if (cVar1 == '\0') {
      return local_8;
    }
    if (bVar2) {
      bVar2 = false;
      iVar3 = FUN_0070cdc0((byte *)param_1);
      if (iVar3 < 0) {
LAB_00711298:
        local_8 = local_8 + 1;
      }
    }
    else {
      iVar3 = FUN_0070cd90((char *)((int)this + 0x9e),param_1);
      if ((iVar3 != 0) || (*(int *)((int)this + 0x7e) == 0)) goto LAB_00711298;
      bVar2 = true;
    }
    cVar1 = *(char *)((int)param_1 + 1);
    param_1 = (uint *)((int)param_1 + 1);
  } while( true );
}

