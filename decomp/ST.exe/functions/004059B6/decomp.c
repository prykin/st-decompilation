
uint * __fastcall thunk_FUN_0065e360(int param_1,undefined4 param_2,int param_3)

{
  STGroupC *this;
  uint *puVar1;
  
  if ((*(short *)(param_1 + 0x7d) != -2) && (DAT_007fa174 != 0)) {
    this = (STGroupC *)
           thunk_FUN_0042b760(CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)(param_1 + 0x24)),
                              CONCAT22((short)((uint)param_2 >> 0x10),*(short *)(param_1 + 0x7d)));
    if (this != (STGroupC *)0x0) {
      puVar1 = STGroupC::GetTOBJList(this,param_3);
      return puVar1;
    }
  }
  return (uint *)0x0;
}

