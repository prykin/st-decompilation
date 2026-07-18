
int FUN_004cabb0(int param_1)

{
  void *pvVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  int local_c;
  void *local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar3 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    iVar4 = FUN_006ad4d0(s_E____titans_Artem_TLO_bspr_cpp_007ad4d0,0x1a7,0,iVar3,&DAT_007a4ccc);
    if (iVar4 == 0) {
      FUN_006a5e40(iVar3,0,0x7ad4d0,0x1a8);
      return iVar3;
    }
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  if (((*(int *)((int)local_8 + 0x245) == 1) && (*(int *)((int)local_8 + 0x5df) != 5)) &&
     (iVar3 = thunk_FUN_004ac910((void *)((int)local_8 + 0x1d5),'\x04'),
     *(int *)(&DAT_007cdf52 + *(int *)(&DAT_0079125c + *(int *)((int)local_8 + 0x235) * 4) * 0x32) <
     iVar3)) {
    DAT_00858df8 = (undefined4 *)local_50;
    return 0;
  }
  if (*(int *)((int)local_8 + 0x5ef) != 0) {
    thunk_FUN_004ca7b0(local_8,0xe,param_1);
  }
  if (*(int *)(&DAT_00791a10 + *(int *)((int)local_8 + 0x235) * 4) != 0) {
    thunk_FUN_004ca7b0(local_8,9,param_1);
    thunk_FUN_004ca7b0(local_8,8,param_1);
    if (*(int *)((int)local_8 + 0x5ac) == 0x4e) {
      thunk_FUN_004ca7b0(local_8,7,param_1);
      if (*(int *)((int)local_8 + 0x4d0) == 1) {
        thunk_FUN_004ac660((STT3DSprC *)((int)local_8 + 0x1d5),'\a');
      }
      else {
        STT3DSprC::StopShow((STT3DSprC *)((int)local_8 + 0x1d5),7);
      }
    }
    if (*(int *)((int)local_8 + 0x5ac) == 0x72) {
      thunk_FUN_004ca7b0(local_8,7,param_1);
      if (*(int *)((int)local_8 + 0x4d0) == 1) {
        thunk_FUN_004ac660((STT3DSprC *)((int)local_8 + 0x1d5),'\a');
      }
      else {
        STT3DSprC::StopShow((STT3DSprC *)((int)local_8 + 0x1d5),7);
      }
    }
    if (*(int *)((int)local_8 + 0x5ac) == 0x70) {
      thunk_FUN_004ca7b0(local_8,7,param_1);
      if (*(int *)((int)local_8 + 0x4d0) == 1) {
        thunk_FUN_004ac660((STT3DSprC *)((int)local_8 + 0x1d5),'\a');
      }
      else {
        STT3DSprC::StopShow((STT3DSprC *)((int)local_8 + 0x1d5),7);
      }
    }
  }
  if (*(int *)((int)local_8 + 0x5f3) != 0) {
    pvVar1 = (void *)((int)local_8 + 0x1d5);
    iVar3 = thunk_FUN_004acd30(pvVar1,'\x0e');
    iVar4 = thunk_FUN_004acd30(pvVar1,'\r');
    if (((iVar4 < iVar3) && (iVar3 = thunk_FUN_004acd30(pvVar1,'\r'), 1 < iVar3)) &&
       (iVar3 = thunk_FUN_004cba10(), iVar3 == 2)) {
      iVar3 = *(int *)((int)local_8 + 0x1f5);
      iVar4 = *(int *)(iVar3 + 0x208);
      if (iVar4 < *(int *)(iVar3 + 0x20c)) {
        iVar4 = *(int *)(iVar3 + 0x210) - iVar4;
      }
      else {
        iVar4 = iVar4 - *(int *)(iVar3 + 0x210);
      }
      local_c = thunk_FUN_004acd30(pvVar1,'\x0e');
      iVar3 = thunk_FUN_004acd30(pvVar1,'\r');
      if ((iVar4 < (local_c - iVar3) + -1) || ((*(uint *)((int)local_8 + 0x1f1) & 0x2000) != 0))
      goto LAB_004cadb1;
    }
    thunk_FUN_004ca7b0(local_8,0xd,param_1);
  }
LAB_004cadb1:
  if (*(int *)((int)local_8 + 0x5f7) != 0) {
    thunk_FUN_004ca7b0(local_8,0xc,param_1);
  }
  if (*(int *)((int)local_8 + 0x5ff) != 0) {
    thunk_FUN_004cbfb0((int)local_8);
  }
  switch(*(undefined4 *)((int)local_8 + 0x5ac)) {
  case 0x40:
  case 0x49:
    if (*(int *)((int)local_8 + 0x4d0) == 1) {
      thunk_FUN_004ac6b0((void *)((int)local_8 + 0x1d5),'\x0e');
      thunk_FUN_004ac6b0((void *)((int)local_8 + 0x1d5),'\t');
      break;
    }
  default:
    thunk_FUN_004ac660((void *)((int)local_8 + 0x1d5),'\x0e');
    thunk_FUN_004ac660((void *)((int)local_8 + 0x1d5),'\t');
    break;
  case 0x52:
  case 0x5f:
    pvVar1 = (void *)((int)local_8 + 0x1d5);
    thunk_FUN_004ac6b0(pvVar1,'\x0e');
    thunk_FUN_004ac6b0(pvVar1,'\r');
    thunk_FUN_004ac6b0(pvVar1,'\t');
    thunk_FUN_004ac6b0(pvVar1,'\b');
  }
  thunk_FUN_004cba30((int)local_8);
  DAT_00858df8 = (undefined4 *)local_50;
  return 0;
}

