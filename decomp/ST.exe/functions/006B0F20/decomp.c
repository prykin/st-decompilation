
void __cdecl FUN_006b0f20(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  
  for (; (param_2 < 0x80 && (param_2 <= param_3)); param_2 = param_2 + 1) {
    puVar1 = (uint *)(param_1 + ((int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)param_2 & 0x1f));
  }
  return;
}

