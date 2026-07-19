
bool __cdecl FUN_0070a460(uint *param_1,char *param_2)

{
  uint *puVar1;
  
  if ((param_1 != (uint *)0x0) && (param_2 != (char *)0x0)) {
    puVar1 = Library::MSVCRT::FUN_00730590(param_1,param_2);
    if (puVar1 == (uint *)0x0) {
      return false;
    }
    return puVar1 == param_1;
  }
  return true;
}

