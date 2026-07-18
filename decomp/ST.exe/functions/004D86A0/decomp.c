
undefined4 FUN_004d86a0(uint param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1 * 0xa62;
  *(undefined4 *)((int)&DAT_007f4e3f + iVar2) = *(undefined4 *)(&DAT_007bf558 + param_2 * 4);
  *(undefined4 *)((int)&DAT_007f4e43 + iVar2) = *(undefined4 *)(&DAT_007bf570 + param_2 * 4);
  if ((&DAT_007f4e20)[iVar2] == '\x03') {
    uVar1 = *(undefined4 *)(&DAT_007bf564 + param_2 * 4);
    *(undefined4 *)((int)&DAT_007f57be + iVar2) = *(undefined4 *)(&DAT_007bf588 + param_2 * 4);
    *(undefined4 *)((int)&DAT_007f57b6 + iVar2) = uVar1;
  }
  else {
    *(undefined4 *)((int)&DAT_007f4e47 + iVar2) = *(undefined4 *)(&DAT_007bf57c + param_2 * 4);
  }
  if (param_1 == DAT_0080874d) {
    thunk_FUN_004d8b70((char)param_1);
  }
  return 0;
}

