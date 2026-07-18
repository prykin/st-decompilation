
void __cdecl FUN_004e5140(int param_1)

{
  int iVar1;
  
  if ((-1 < param_1) && (param_1 < 8)) {
    iVar1 = param_1 * 0xa62;
    *(undefined4 *)((int)&DAT_007f5133 + iVar1) = 0;
    *(undefined4 *)((int)&DAT_007f5137 + iVar1) = 0;
    *(undefined4 *)(&DAT_007f513b + iVar1) = 0;
    *(undefined4 *)(&DAT_007f513f + iVar1) = 0;
    *(undefined4 *)(&DAT_007f5143 + iVar1) = 0;
    *(undefined4 *)((int)&DAT_007f55f6 + iVar1) = 0;
  }
  return;
}

