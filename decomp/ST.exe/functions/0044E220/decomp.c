
void FUN_0044e220(void)

{
  int iVar1;
  int iVar2;
  undefined4 *in_stack_00000014;
  
  iVar1 = Library::DKW::LIB::FUN_006aac70(10);
  iVar2 = 0;
  do {
    *(char *)(iVar2 + iVar1) = (char)iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10);
  *in_stack_00000014 = 10;
  return;
}

