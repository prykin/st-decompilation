
void __fastcall FUN_00566aa0(AnonShape_00566AA0_2703DA85 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;

  if ((param_1->field_0018 != 0) && (param_1->field_0028 != 0)) {
    switch(param_1->field_0038) {
    case 0:
    case 1:
      uVar3 = param_1->field_002C;
      break;
    case 2:
      uVar3 = param_1->field_0030;
      break;
    case 3:
      uVar3 = param_1->field_0034;
      break;
    default:
      goto switchD_00566ac8_default;
    }
    if (0 < (int)uVar3) {
      if ((int)param_1->field_0039 < 0) {
        thunk_FUN_00566970(param_1,0,2000);
      }
      else {
        iVar1 = thunk_FUN_0056a4d0(0x807658);
        if (iVar1 == 0) {
          if (((int)uVar3 < 2) ||
             ((param_1->field_0038 != '\x01' && (param_1->field_0038 != '\x03')))) {
            uVar2 = Library::MSVCRT::FUN_0072e6c0();
            uVar2 = uVar2 % uVar3;
            if ((uVar2 == param_1->field_0039) && (1 < param_1->field_003D)) {
              uVar2 = param_1->field_0039 + 1;
            }
            if ((int)uVar3 <= (int)uVar2) {
              uVar2 = 0;
            }
          }
          else {
            uVar2 = Library::MSVCRT::FUN_0072e6c0();
            uVar2 = uVar2 % (uVar3 - 1) + 1;
            if ((uVar2 == param_1->field_0039) && (1 < param_1->field_003D)) {
              uVar2 = param_1->field_0039 + 1;
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

