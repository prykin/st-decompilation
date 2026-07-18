
/* Recovered from embedded debug metadata:
   E:\Ourlib\mfcfnt.cpp
   ccFntTy::WrCh */

int __thiscall ccFntTy::WrCh(ccFntTy *this,byte *param_1,uint param_2)

{
  code *pcVar1;
  ccFntTy *this_00;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar9;
  byte bVar10;
  undefined4 local_4c;
  undefined4 local_48 [16];
  ccFntTy *local_8;
  
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar2 == 0) {
    if (((*(int *)(local_8 + 0xa0) != 0) && (*(int *)(local_8 + 0xa8) != 0)) &&
       (*(int *)(local_8 + 0xac) != *(int *)(*(int *)(local_8 + 0xa8) + 0xac))) {
      FUN_00710790((int)local_8);
    }
    uVar8 = ((int)**(short **)(this_00 + 0x9a) <= (int)param_2) - 1 & param_2;
    if ((*(int *)(this_00 + 0x72) == 0) || (*(int *)(this_00 + 0x76) == 0)) {
      FUN_006a5e40(-0x34,DAT_007ed77c,0x7f0190,0x65b);
    }
    uVar3 = FUN_00710fb0(this_00,param_1);
    iVar2 = *(int *)(this_00 + 0x9a);
    bVar10 = *(byte *)(iVar2 + 0x42);
    iVar9 = (uVar3 & 0xffff) * 10;
    iVar4 = (int)*(short *)(iVar9 + 0x6c + iVar2);
    iVar7 = (int)*(short *)(iVar9 + 0x6a + iVar2);
    iVar5 = (int)*(short *)(iVar9 + 0x68 + iVar2);
    iVar6 = (int)*(short *)(iVar9 + 0x66 + iVar2);
    iVar2 = FUN_006b4fa0(*(int *)(this_00 + uVar8 * 4 + 4));
    FUN_006b5110(*(int *)(this_00 + 0x72),*(int *)(this_00 + 0x76),
                 *(int *)(this_00 + 0x60) + *(int *)(this_00 + 0x50),
                 *(int *)(this_00 + 100) + *(int *)(this_00 + 0x54),
                 *(int *)(this_00 + uVar8 * 4 + 4),iVar2,iVar6,iVar5,iVar7,iVar4,bVar10);
    *(int *)(this_00 + 0x50) =
         *(int *)(this_00 + 0x50) +
         (int)*(short *)(*(int *)(this_00 + 0x9a) + 0x6a + iVar9) + *(int *)(this_00 + 0x58);
    DAT_00858df8 = (undefined4 *)local_4c;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar4 = FUN_006ad4d0(s_E__Ourlib_mfcfnt_cpp_007f0190,0x666,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_006a5e40(iVar2,0,0x7f0190,0x668);
  return iVar2;
}

