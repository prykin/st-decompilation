
uint * __cdecl FUN_0070ce00(uint *param_1,char *param_2)

{
  char cVar1;
  uint *puVar2;
  
  if (((char)*param_1 != '\0') && (*param_2 != '\0')) {
    cVar1 = param_2[1];
    param_2[1] = '\0';
    puVar2 = Library::MSVCRT::FUN_00730590(param_1,param_2);
    param_2[1] = cVar1;
    return puVar2;
  }
  return (uint *)0x0;
}

