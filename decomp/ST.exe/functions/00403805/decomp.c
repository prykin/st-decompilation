
void __fastcall thunk_FUN_006a0c00(int *param_1)

{
  CHAR aCStack_108 [260];
  
  *(int *)(*param_1 + 0x14) = param_1[1];
  wsprintfA(aCStack_108,s__s_08u_007d86bc,&DAT_007c8400,*(undefined4 *)(*param_1 + 0x14));
  FUN_006f13f0(0xc,aCStack_108,(byte *)*param_1,*(int *)((byte *)*param_1 + 0x14) * 0x92 + 0xaa,
               (undefined4 *)0x0,'\x01',(uint *)0x0);
  FUN_006ab060(param_1);
  return;
}

