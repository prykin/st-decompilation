
int FUN_007116f0(byte *param_1,uint param_2)

{
  code *pcVar1;
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
  void *local_8;
  
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (((*(int *)((int)local_8 + 0xa0) != 0) && (*(int *)((int)local_8 + 0xa8) != 0)) &&
       (*(int *)((int)local_8 + 0xac) != *(int *)(*(int *)((int)local_8 + 0xa8) + 0xac))) {
      FUN_00710790((int)local_8);
    }
    uVar8 = ((int)**(short **)((int)local_8 + 0x9a) <= (int)param_2) - 1 & param_2;
    if ((*(int *)((int)local_8 + 0x72) == 0) || (*(int *)((int)local_8 + 0x76) == 0)) {
      FUN_006a5e40(-0x34,DAT_007ed77c,0x7f0190,0x65b);
    }
    uVar3 = FUN_00710fb0(local_8,param_1);
    iVar2 = *(int *)((int)local_8 + 0x9a);
    bVar10 = *(byte *)(iVar2 + 0x42);
    iVar9 = (uVar3 & 0xffff) * 10;
    iVar4 = (int)*(short *)(iVar9 + 0x6c + iVar2);
    iVar7 = (int)*(short *)(iVar9 + 0x6a + iVar2);
    iVar5 = (int)*(short *)(iVar9 + 0x68 + iVar2);
    iVar6 = (int)*(short *)(iVar9 + 0x66 + iVar2);
    iVar2 = FUN_006b4fa0(*(int *)((int)local_8 + uVar8 * 4 + 4));
    FUN_006b5110(*(int *)((int)local_8 + 0x72),*(int *)((int)local_8 + 0x76),
                 *(int *)((int)local_8 + 0x60) + *(int *)((int)local_8 + 0x50),
                 *(int *)((int)local_8 + 100) + *(int *)((int)local_8 + 0x54),
                 *(int *)((int)local_8 + uVar8 * 4 + 4),iVar2,iVar6,iVar5,iVar7,iVar4,bVar10);
    *(int *)((int)local_8 + 0x50) =
         *(int *)((int)local_8 + 0x50) +
         (int)*(short *)(*(int *)((int)local_8 + 0x9a) + 0x6a + iVar9) +
         *(int *)((int)local_8 + 0x58);
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

