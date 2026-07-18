
uint thunk_FUN_00440600(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return (uint)(ushort)(&DAT_007f4f91)[param_2 * 8 + (uint)DAT_0080874d * 0x531];
  }
  if (param_1 != 1) {
    iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2184,0,0,&DAT_007a4ccc);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    return 0;
  }
  return (uint)(ushort)(&DAT_007f4fe1)[param_2 * 8 + (uint)DAT_0080874d * 0x531];
}

