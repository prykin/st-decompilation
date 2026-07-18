
void thunk_FUN_00682ec0(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = DAT_007d2d18;
  bVar1 = false;
  switch(DAT_007d2d18) {
  case 1:
    bVar1 = false;
    break;
  default:
    goto switchD_00682eda_caseD_2;
  case 9:
  case 0x32:
  case 0x3d:
    bVar1 = true;
  }
  thunk_FUN_006827a0();
switchD_00682eda_caseD_2:
  thunk_FUN_00682df0();
  if (bVar1) {
    if (iVar2 == 9) {
      thunk_FUN_006823e0(9,(float *)0x1);
    }
    else {
      if (iVar2 == 0x32) {
        thunk_FUN_006823e0(0x32,(float *)0x1);
        return;
      }
      if (iVar2 == 0x3d) {
        thunk_FUN_006823e0(0x41,(float *)0x1);
        return;
      }
    }
  }
  return;
}

