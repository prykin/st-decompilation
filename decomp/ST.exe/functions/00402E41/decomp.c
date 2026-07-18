
void __fastcall thunk_FUN_005fb170(int *param_1)

{
  switch(*(undefined4 *)((int)param_1 + 0x2dd)) {
  case 1:
    thunk_FUN_005f66b0(param_1);
    return;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    thunk_FUN_005f6af0(0);
    thunk_FUN_005fa070(param_1);
    *(undefined4 *)((int)param_1 + 0x2dd) = 0xd;
  }
  return;
}

