
undefined4
thunk_FUN_004458d0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  switch(param_1) {
  case 1:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xc:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1d:
  case 0x1e:
  case 0x20:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x28:
    uVar3 = 0;
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 0xb:
  case 0xd:
  case 0xe:
  case 0x10:
  case 0x11:
  case 0x1c:
  case 0x1f:
  case 0x21:
  case 0x26:
    uVar3 = 1;
    break;
  case 0xf:
  case 0x12:
  case 0x16:
  case 0x17:
  case 0x27:
    uVar3 = 2;
    break;
  default:
    iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x281a,0,0,&DAT_007a4ccc);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  *param_2 = *(undefined4 *)(&DAT_007a8b18 + param_1 * 4);
  *param_3 = *(undefined4 *)(&DAT_007a8c58 + param_1 * 4);
  *param_4 = *(undefined4 *)(&DAT_007a8bb8 + param_1 * 4);
  return uVar3;
}

