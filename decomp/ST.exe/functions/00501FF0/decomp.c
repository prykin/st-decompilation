
void FUN_00501ff0(void)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  int *piVar6;
  void *unaff_EDI;
  int *piVar7;
  undefined4 local_a8;
  undefined4 local_a4 [16];
  int local_64;
  char local_60;
  char local_5f;
  char local_48;
  char local_47;
  char local_46;
  char local_30;
  void *local_8;
  
  local_a8 = DAT_00858df8;
  DAT_00858df8 = &local_a8;
  iVar4 = __setjmp3(local_a4,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_a8;
    iVar5 = FUN_006ad4d0(s_E____titans_Andrey_cpanel2_cpp_007c2524,0x13e,0,iVar4,&DAT_007a4ccc);
    if (iVar5 == 0) {
      FUN_006a5e40(iVar4,0,0x7c2524,0x13e);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  piVar1 = (int *)((int)local_8 + 0xb99);
  piVar6 = piVar1;
  piVar7 = &local_64;
  for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  piVar6 = piVar1;
  for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  thunk_FUN_0043beb0(DAT_007fa174,2,piVar1);
  if (local_5f != *(char *)((int)local_8 + 0xb9e)) {
LAB_00502155:
    thunk_FUN_00501590();
    thunk_FUN_00502360();
    thunk_FUN_00501a10((int)local_8);
    DAT_00858df8 = (undefined4 *)local_a8;
    return;
  }
  switch(*(char *)((int)local_8 + 0xb9e)) {
  case '\x01':
    if ((local_64 != *(int *)((int)local_8 + 0xb99)) ||
       (local_60 != *(char *)((int)local_8 + 0xb9d))) goto LAB_00502155;
    thunk_FUN_00501d00(local_8,(int *)((int)local_8 + 0xb99),&local_64);
    switch(*(int *)((int)local_8 + 0xb99)) {
    case 8:
    case 0x14:
      if (((*(char *)((int)local_8 + 0xbb6) == local_47) &&
          (*(char *)((int)local_8 + 0xbb5) == local_48)) &&
         (*(char *)((int)local_8 + 2999) == local_46)) {
        DAT_00858df8 = (undefined4 *)local_a8;
        return;
      }
      thunk_FUN_00501190();
      uVar2 = *(uint *)((int)local_8 + 0x154);
      break;
    default:
      goto switchD_0050207d_default;
    case 0x16:
    case 0x17:
    case 0x25:
      if (*(char *)((int)local_8 + 0xbcd) == local_30) {
        DAT_00858df8 = (undefined4 *)local_a8;
        return;
      }
      thunk_FUN_00501000();
      uVar2 = *(uint *)((int)local_8 + 0x154);
    }
    break;
  case '\x02':
  case '\x03':
    if (local_64 == *(int *)((int)local_8 + 0xb99)) {
      thunk_FUN_00501d00(local_8,(int *)((int)local_8 + 0xb99),&local_64);
      DAT_00858df8 = (undefined4 *)local_a8;
      return;
    }
    goto LAB_00502155;
  case '\x04':
    if (local_64 != *(int *)((int)local_8 + 0xb99)) goto LAB_00502155;
    if (*(int *)((int)local_8 + 0xb99) != 0xaf) {
      DAT_00858df8 = (undefined4 *)local_a8;
      return;
    }
    thunk_FUN_00501000();
    uVar2 = *(uint *)((int)local_8 + 0x154);
    break;
  default:
    goto switchD_0050207d_default;
  }
  if (-1 < (int)uVar2) {
    FUN_006b3640(DAT_008075a8,uVar2,0xffffffff,*(uint *)((int)local_8 + 0x48),
                 *(uint *)((int)local_8 + 0xa0));
  }
switchD_0050207d_default:
  DAT_00858df8 = (undefined4 *)local_a8;
  return;
}

