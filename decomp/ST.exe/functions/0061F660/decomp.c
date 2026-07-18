
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_manag.Cpp
   SndUnderAttMenegC::GetMessage */

undefined4 __thiscall SndUnderAttMenegC::GetMessage(SndUnderAttMenegC *this,int param_1)

{
  code *pcVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  SndUnderAttMenegC *pSVar6;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  float local_c;
  SndUnderAttMenegC *local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  local_8 = this;
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
    pSVar6 = local_8 + 0x31;
    do {
      if (pSVar6[-0x11] != (SndUnderAttMenegC)0x0) {
        FUN_006e6780(DAT_00807598,iVar3);
        iVar4 = *(int *)(DAT_00802a38 + 0xe4) - *(int *)(pSVar6 + 8);
        fVar2 = (float)iVar4;
        local_c = fVar2 * *(float *)(pSVar6 + 4) * fVar2 * _DAT_00790784 +
                  ((float)(*(int *)(pSVar6 + -4) - iVar4 * *(int *)pSVar6) * _DAT_007904f8 +
                  _DAT_007904f4) * _DAT_0079070c;
        if (local_c <= _DAT_007904f8) {
          FUN_006e6780(DAT_00807598,iVar3);
          pSVar6[-0x11] = (SndUnderAttMenegC)0x0;
        }
        else {
          FUN_006e6710(DAT_00807598,(float)*(int *)(pSVar6 + -0x10) * _DAT_007904f8 + _DAT_007904f4,
                       (float)*(int *)(pSVar6 + -0xc) * _DAT_007904f8 + _DAT_007904f4,local_c,
                       *(int *)(pSVar6 + -8),iVar3);
        }
      }
      iVar3 = iVar3 + 0xffffff;
      pSVar6 = pSVar6 + 0x1d;
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
    thunk_FUN_0061fcc0((int)local_8);
    DAT_00858df8 = (undefined4 *)local_50;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  return 0;
}

