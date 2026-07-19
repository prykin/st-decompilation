
void FUN_006e8c50(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = Library::MSVCRT::FUN_00730fa0(0,0,0,0,(byte *)s__s__error_parameter__spr_num__007eec58);
  if (iVar2 == 1) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

