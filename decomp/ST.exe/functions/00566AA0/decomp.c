
void __fastcall FUN_00566aa0(void *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*(int *)((int)param_1 + 0x18) != 0) && (*(int *)((int)param_1 + 0x28) != 0)) {
    switch(*(undefined1 *)((int)param_1 + 0x38)) {
    case 0:
    case 1:
      uVar3 = *(uint *)((int)param_1 + 0x2c);
      break;
    case 2:
      uVar3 = *(uint *)((int)param_1 + 0x30);
      break;
    case 3:
      uVar3 = *(uint *)((int)param_1 + 0x34);
      break;
    default:
      goto switchD_00566ac8_default;
    }
    if (0 < (int)uVar3) {
      if (*(int *)((int)param_1 + 0x39) < 0) {
        thunk_FUN_00566970(param_1,0,2000);
      }
      else {
        iVar1 = thunk_FUN_0056a4d0(0x807658);
        if (iVar1 == 0) {
          if (((int)uVar3 < 2) ||
             ((*(char *)((int)param_1 + 0x38) != '\x01' &&
              (*(char *)((int)param_1 + 0x38) != '\x03')))) {
            uVar2 = FUN_0072e6c0();
            uVar2 = uVar2 % uVar3;
            if ((uVar2 == *(uint *)((int)param_1 + 0x39)) && (1 < *(int *)((int)param_1 + 0x3d))) {
              uVar2 = *(uint *)((int)param_1 + 0x39) + 1;
            }
            if ((int)uVar3 <= (int)uVar2) {
              uVar2 = 0;
            }
          }
          else {
            uVar2 = FUN_0072e6c0();
            uVar2 = uVar2 % (uVar3 - 1) + 1;
            if ((uVar2 == *(uint *)((int)param_1 + 0x39)) && (1 < *(int *)((int)param_1 + 0x3d))) {
              uVar2 = *(uint *)((int)param_1 + 0x39) + 1;
            }
            if ((int)uVar3 <= (int)uVar2) {
              thunk_FUN_00566970(param_1,1,0);
              return;
            }
          }
          thunk_FUN_00566970(param_1,uVar2,0);
          return;
        }
      }
    }
  }
switchD_00566ac8_default:
  return;
}

