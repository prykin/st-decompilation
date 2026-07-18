
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::StopShow */

undefined4 __thiscall STT3DSprC::StopShow(STT3DSprC *this,byte param_1)

{
  code *pcVar1;
  STT3DSprC *pSVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar5;
  undefined4 local_4c;
  undefined4 local_48 [16];
  STT3DSprC *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_8;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar3 = FUN_006ad4d0(s_E____titans_wlad_Tspr3d_cpp_007ac638,0x10e,0,iVar3,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    return 0xffffffff;
  }
  if (*(int *)(local_8 + 0x18) == -1) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7ac638,0xff);
  }
  if (((char)param_1 < '\0') || (*(int *)(pSVar2 + 0x14) + -1 < (int)(char)param_1)) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7ac638,0x100);
  }
  uVar5 = 1 << (param_1 & 0x1f);
  if ((uVar5 & *(uint *)(pSVar2 + 0x1c)) == 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    return 0;
  }
  FUN_006e9d40(*(void **)(pSVar2 + 0x3c),*(uint **)(pSVar2 + 0x18),(int)(char)param_1);
  *(uint *)(pSVar2 + 0x1c) = *(uint *)(pSVar2 + 0x1c) & ~uVar5;
  if (param_1 == 0xe) {
    if (pSVar2[0x11] == (STT3DSprC)0x1) {
      thunk_FUN_004ad5e0((int)pSVar2);
      DAT_00858df8 = (undefined4 *)local_4c;
      return 0;
    }
    thunk_FUN_004ad5e0((int)pSVar2);
    pSVar2[0x11] = (STT3DSprC)0x0;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  return 0;
}

