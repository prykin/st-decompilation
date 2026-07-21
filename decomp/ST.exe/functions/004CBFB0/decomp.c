
undefined4 __fastcall FUN_004cbfb0(int param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)(param_1 + 0x5ac)) {
  case 0x32:
  case 0x40:
  case 0x49:
  case 0x5c:
    uVar1 = thunk_FUN_004d0670(param_1);
    return uVar1;
  case 0x52:
  case 0x5f:
    uVar1 = thunk_FUN_004ec2a0(param_1);
  }
  return uVar1;
}

