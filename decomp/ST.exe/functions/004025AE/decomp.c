
undefined1 thunk_FUN_00430750(int param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  
  switch(param_1) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
    return (&DAT_007dfc6c)[param_1 * 4];
  case 0x96:
  case 0x97:
  case 0x98:
  case 0x99:
  case 0x9a:
  case 0xa1:
  case 0xac:
  case 0xb4:
  case 0xb7:
  case 0xb8:
    return 0x30;
  case 0x9b:
  case 0x9c:
  case 0x9d:
  case 0x9e:
  case 0xa5:
    return 0xc9;
  case 0x9f:
  case 0xa0:
  case 0xa3:
  case 0xae:
  case 0xbf:
    return 0x60;
  case 0xa4:
  case 0xad:
  case 0xb6:
  case 0xba:
    return 0x48;
  case 0xab:
    return 6;
  case 0xb9:
    return 0x3c;
  }
  iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x867,0,0,&DAT_007a4ccc,
                             s_GetSpeed__Warning___unknown_obje_007a6760);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  return 1;
}

