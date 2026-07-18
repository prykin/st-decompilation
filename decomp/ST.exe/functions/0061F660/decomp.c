
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0061f660(int param_1)

{
  code *pcVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  int *piVar6;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  float local_c;
  int local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar3 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    iVar4 = FUN_006ad4d0(s_E____titans_nick_to_manag_Cpp_007d020c,0x6e,0,iVar3,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    FUN_006a5e40(iVar3,0,0x7d020c,0x70);
    return 0xffff;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == 0) {
    iVar3 = 0xafffff5;
    piVar6 = (int *)(local_8 + 0x31);
    do {
      if (*(char *)((int)piVar6 + -0x11) != '\0') {
        FUN_006e6780(DAT_00807598,iVar3);
        iVar4 = *(int *)(DAT_00802a38 + 0xe4) - piVar6[2];
        fVar2 = (float)iVar4;
        local_c = fVar2 * (float)piVar6[1] * fVar2 * _DAT_00790784 +
                  ((float)(piVar6[-1] - iVar4 * *piVar6) * _DAT_007904f8 + _DAT_007904f4) *
                  _DAT_0079070c;
        if (local_c <= _DAT_007904f8) {
          FUN_006e6780(DAT_00807598,iVar3);
          *(undefined1 *)((int)piVar6 + -0x11) = 0;
        }
        else {
          FUN_006e6710(DAT_00807598,(float)piVar6[-4] * _DAT_007904f8 + _DAT_007904f4,
                       (float)piVar6[-3] * _DAT_007904f8 + _DAT_007904f4,local_c,piVar6[-2],iVar3);
        }
      }
      iVar3 = iVar3 + 0xffffff;
      piVar6 = (int *)((int)piVar6 + 0x1d);
    } while (iVar3 < 0xffffff0);
  }
  else if (iVar3 == 2) {
    if (DAT_007fb284 != 0) {
      *(int *)(local_8 + 0x1c) = (int)DAT_007fb240 / 2;
      DAT_00858df8 = (undefined4 *)local_50;
      return 0;
    }
  }
  else if (iVar3 == 3) {
    thunk_FUN_0061fcc0(local_8);
    DAT_00858df8 = (undefined4 *)local_50;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  return 0;
}

