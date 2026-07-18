
void FUN_00501590(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar4;
  byte *pbVar5;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar3 = FUN_006ad4d0(s_E____titans_Andrey_cpanel2_cpp_007c2524,0x95,0,iVar2,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7c2524,0x95);
    return;
  }
  switch(*(undefined1 *)(local_8 + 0xb9e)) {
  case 0:
  case 4:
    pbVar5 = *(byte **)(local_8 + 0x974);
    puVar4 = *(undefined4 **)(local_8 + 0x18c);
    iVar3 = 0;
    iVar2 = 0;
    goto LAB_00501758;
  case 1:
    if ((*(int *)(local_8 + 0xb99) == 9) || (*(int *)(local_8 + 0xb99) == 0x15)) {
      pbVar5 = *(byte **)(local_8 + 0x978);
      puVar4 = *(undefined4 **)(local_8 + 0x18c);
      iVar3 = 0;
      iVar2 = 0;
      goto LAB_00501758;
    }
    thunk_FUN_00540760(*(undefined4 **)(local_8 + 0x18c),0,0,'\x01',*(byte **)(local_8 + 0x97c));
    thunk_FUN_00540760(*(undefined4 **)(local_8 + 0x18c),
                       ((*(undefined4 **)(local_8 + 0x18c))[1] -
                       *(int *)(*(byte **)(local_8 + 0x984) + 4)) / 2,0x61,'\x01',
                       *(byte **)(local_8 + 0x984));
    thunk_FUN_00540760(*(undefined4 **)(local_8 + 0x18c),
                       ((*(undefined4 **)(local_8 + 0x18c))[1] -
                       *(int *)(*(byte **)(local_8 + 0x988) + 4)) / 2,0x7c,'\x01',
                       *(byte **)(local_8 + 0x988));
    break;
  case 2:
    if ((*(int *)(local_8 + 0xb99) == 9) || (*(int *)(local_8 + 0xb99) == 0x15)) {
      thunk_FUN_00540760(*(undefined4 **)(local_8 + 0x18c),0,0,'\x01',*(byte **)(local_8 + 0x978));
    }
    else {
      thunk_FUN_00540760(*(undefined4 **)(local_8 + 0x18c),0,0,'\x01',*(byte **)(local_8 + 0x97c));
      thunk_FUN_00540760(*(undefined4 **)(local_8 + 0x18c),
                         ((*(undefined4 **)(local_8 + 0x18c))[1] -
                         *(int *)(*(byte **)(local_8 + 0x988) + 4)) / 2,0x7c,'\x01',
                         *(byte **)(local_8 + 0x988));
    }
switchD_0050162e_caseD_a:
    pbVar5 = *(byte **)(local_8 + 0x984);
    puVar4 = *(undefined4 **)(local_8 + 0x18c);
    iVar3 = 0x61;
    iVar2 = (puVar4[1] - *(int *)(pbVar5 + 4)) / 2;
LAB_00501758:
    thunk_FUN_00540760(puVar4,iVar2,iVar3,'\x01',pbVar5);
    break;
  case 3:
    thunk_FUN_00540760(*(undefined4 **)(local_8 + 0x18c),0,0,'\x01',*(byte **)(local_8 + 0x974));
    switch(*(undefined4 *)(local_8 + 0xb99)) {
    case 9:
    case 0x15:
    case 0xa6:
    case 0xa7:
    case 0xaf:
    case 0xbd:
      break;
    default:
      goto switchD_0050162e_caseD_a;
    }
  }
  if (*(char *)(local_8 + 0xb9e) == '\x01') {
    switch(*(undefined4 *)(local_8 + 0xb99)) {
    case 8:
    case 0x14:
      thunk_FUN_00501190();
      break;
    case 0x16:
    case 0x17:
    case 0x25:
      goto switchD_0050179b_caseD_16;
    }
  }
  else {
    if ((*(char *)(local_8 + 0xb9e) != '\x04') || (*(int *)(local_8 + 0xb99) != 0xaf))
    goto switchD_0050179b_caseD_9;
switchD_0050179b_caseD_16:
    thunk_FUN_00501000();
  }
switchD_0050179b_caseD_9:
  if (-1 < (int)*(uint *)(local_8 + 0x154)) {
    FUN_006b3640(DAT_008075a8,*(uint *)(local_8 + 0x154),0xffffffff,*(uint *)(local_8 + 0x48),
                 *(uint *)(local_8 + 0xa0));
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  return;
}

