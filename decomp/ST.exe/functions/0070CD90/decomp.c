
int __cdecl FUN_0070cd90(char *param_1,uint *param_2)

{
  uint *puVar1;

  puVar1 = Library::MSVCRT::FUN_00730590(param_2,param_1);
  if (puVar1 == (uint *)0x0) {
    return -1;
  }
  return -(uint)(puVar1 != param_2);
}

