
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::PaintCtrlBoat */

void __thiscall CPanelTy::PaintCtrlBoat(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar4;
  byte *pbVar5;
  undefined4 local_4c;
  undefined4 local_48 [16];
  CPanelTy *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
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
  switch(local_8[0xb9e]) {
  case (CPanelTy)0x0:
  case (CPanelTy)0x4:
    pbVar5 = *(byte **)(local_8 + 0x974);
    puVar4 = *(undefined4 **)(local_8 + 0x18c);
    iVar3 = 0;
    iVar2 = 0;
    goto LAB_00501758;
  case (CPanelTy)0x1:
    if ((*(int *)(local_8 + 0xb99) == 9) || (*(int *)(local_8 + 0xb99) == 0x15)) {
      pbVar5 = *(byte **)(local_8 + 0x978);
      puVar4 = *(undefined4 **)(local_8 + 0x18c);
      iVar3 = 0;
      iVar2 = 0;
      goto LAB_00501758;
    }
    thunk_FUN_00540760(*(undefined4 **)(local_8 + 0x18c),0,0,'\x01',*(byte **)(local_8 + 0x97c));
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x18c),
                       ((*(undefined4 **)(this_00 + 0x18c))[1] -
                       *(int *)(*(byte **)(this_00 + 0x984) + 4)) / 2,0x61,'\x01',
                       *(byte **)(this_00 + 0x984));
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x18c),
                       ((*(undefined4 **)(this_00 + 0x18c))[1] -
                       *(int *)(*(byte **)(this_00 + 0x988) + 4)) / 2,0x7c,'\x01',
                       *(byte **)(this_00 + 0x988));
    break;
  case (CPanelTy)0x2:
    if ((*(int *)(local_8 + 0xb99) == 9) || (*(int *)(local_8 + 0xb99) == 0x15)) {
      thunk_FUN_00540760(*(undefined4 **)(local_8 + 0x18c),0,0,'\x01',*(byte **)(local_8 + 0x978));
    }
    else {
      thunk_FUN_00540760(*(undefined4 **)(local_8 + 0x18c),0,0,'\x01',*(byte **)(local_8 + 0x97c));
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x18c),
                         ((*(undefined4 **)(this_00 + 0x18c))[1] -
                         *(int *)(*(byte **)(this_00 + 0x988) + 4)) / 2,0x7c,'\x01',
                         *(byte **)(this_00 + 0x988));
    }
switchD_0050162e_caseD_a:
    pbVar5 = *(byte **)(this_00 + 0x984);
    puVar4 = *(undefined4 **)(this_00 + 0x18c);
    iVar3 = 0x61;
    iVar2 = (puVar4[1] - *(int *)(pbVar5 + 4)) / 2;
LAB_00501758:
    thunk_FUN_00540760(puVar4,iVar2,iVar3,'\x01',pbVar5);
    break;
  case (CPanelTy)0x3:
    thunk_FUN_00540760(*(undefined4 **)(local_8 + 0x18c),0,0,'\x01',*(byte **)(local_8 + 0x974));
    switch(*(undefined4 *)(this_00 + 0xb99)) {
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
  if (this_00[0xb9e] == (CPanelTy)0x1) {
    switch(*(undefined4 *)(this_00 + 0xb99)) {
    case 8:
    case 0x14:
      PaintBCapacity(this_00);
      break;
    case 0x16:
    case 0x17:
    case 0x25:
      goto switchD_0050179b_caseD_16;
    }
  }
  else {
    if ((this_00[0xb9e] != (CPanelTy)0x4) || (*(int *)(this_00 + 0xb99) != 0xaf))
    goto switchD_0050179b_caseD_9;
switchD_0050179b_caseD_16:
    PaintBEnergy(this_00);
  }
switchD_0050179b_caseD_9:
  if (-1 < (int)*(uint *)(this_00 + 0x154)) {
    FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x154),0xffffffff,*(uint *)(this_00 + 0x48),
                 *(uint *)(this_00 + 0xa0));
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  return;
}

