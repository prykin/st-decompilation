
uint __cdecl FUN_006f2cb0(uint *param_1,char *param_2)

{
  uint *puVar1;
  
  puVar1 = FUN_00730590(param_1,param_2);
  if (puVar1 == (uint *)0x0) {
    return 0xffffffff;
  }
  return (uint)(puVar1 != param_1);
}

