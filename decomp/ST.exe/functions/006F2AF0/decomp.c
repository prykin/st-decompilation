
/* Recovered from embedded debug metadata:
   E:\Ourlib\Mf32int.cpp
   cMf32::KeyRecGet */

longlong __thiscall cMf32::KeyRecGet(cMf32 *this,cMf32 param_1,char *param_2,ushort *param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  DWORD DVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  uint extraout_EDX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar8;
  cMf32 *pcVar9;
  longlong lVar10;
  uint local_4c;
  undefined4 local_48 [16];
  cMf32 *local_8;
  
  local_4c = (uint)DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (uint *)local_4c;
    iVar5 = FUN_006ad4d0(s_E__Ourlib_Mf32int_cpp_007efaa4,0x37e,0,iVar3,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      lVar10 = (*pcVar2)();
      return lVar10;
    }
    FUN_006a5e40(iVar3,0,0x7efaa4,0x380);
    return (ulonglong)extraout_EDX << 0x20;
  }
  if (param_3 == (ushort *)0x0) {
    param_3 = (ushort *)(local_8 + 0x18);
  }
  pcVar9 = (cMf32 *)param_3;
  for (iVar3 = 0x86; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pcVar9 = 0;
    pcVar9 = pcVar9 + 4;
  }
  *pcVar9 = (cMf32)0x0;
  *(cMf32 *)param_3 = param_1;
  iVar3 = -1;
  pcVar8 = param_2;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  sVar6 = ~(ushort)iVar3 - 1;
  *(short *)((int)param_3 + 0x16) = sVar6;
  pcVar9 = (cMf32 *)((int)param_3 + 0x18);
  for (uVar7 = (uint)(int)sVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)param_2;
    param_2 = (char *)(param_2 + 4);
    pcVar9 = pcVar9 + 4;
  }
  for (uVar7 = (int)sVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar9 = (cMf32)*param_2;
    param_2 = (char *)(param_2 + 1);
    pcVar9 = pcVar9 + 1;
  }
  DVar4 = FUN_00751980(*(int **)local_8,param_3,(undefined4 *)0x0,0);
  if (DVar4 == 0xfffffffc) {
    DAT_00858df8 = (uint *)local_4c;
    return (ulonglong)local_4c << 0x20;
  }
  DAT_00858df8 = (uint *)local_4c;
  sVar6 = *(short *)((int)param_3 + 0x16);
  *(cMf32 *)((int)param_3 + sVar6 + 0x18) = (cMf32)0x0;
  return CONCAT44((cMf32 *)((int)param_3 + sVar6 + 0x18),param_3);
}

