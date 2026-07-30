
void FUN_0044e220(void)

{
  void *pvVar1;
  int iVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 *in_stack_00000014;

  pvVar1 = Library::DKW::LIB::MemAlloc(10);
  iVar2 = 0;
  do {
    *(char *)(iVar2 + (int)pvVar1) = (char)iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10);
  *in_stack_00000014 = 10;
  return;
}

