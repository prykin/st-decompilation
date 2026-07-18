
void FUN_006e91a0(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_00730fa0(0,0,0,0,(byte *)s__s__error_parameter__plane_num__007eecd8);
  if (iVar2 == 1) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

