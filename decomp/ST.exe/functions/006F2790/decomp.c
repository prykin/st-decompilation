
/* Recovered from embedded debug metadata:
   E:\Ourlib\Mf32int.cpp
   cMf32::RecNameGetNext */

undefined4 * __thiscall cMf32::RecNameGetNext(cMf32 *this)

{
  code *pcVar1;
  cMf32 *pcVar2;
  int iVar3;
  DWORD DVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  cMf32 *pcVar7;
  undefined4 local_4c;
  undefined4 local_48 [16];
  cMf32 *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  pcVar2 = local_8;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar5 = FUN_006ad4d0(s_E__Ourlib_Mf32int_cpp_007efaa4,0x302,0,iVar3,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      puVar6 = (undefined4 *)(*pcVar1)();
      return puVar6;
    }
    FUN_006a5e40(iVar3,0,0x7efaa4,0x304);
    return (undefined4 *)0x0;
  }
  pcVar7 = local_8 + 0x18;
  for (iVar3 = 0x86; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pcVar7 = 0;
    pcVar7 = pcVar7 + 4;
  }
  *pcVar7 = (cMf32)0x0;
  DVar4 = FUN_00751ba0(*(int **)local_8,(undefined4 *)(local_8 + 0x18),(undefined4 *)0x0,0);
  if (DVar4 == 0xfffffffc) {
    DAT_00858df8 = (undefined4 *)local_4c;
    return (undefined4 *)0x0;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  pcVar2[*(short *)(pcVar2 + 0x2e) + 0x30] = (cMf32)0x0;
  return (undefined4 *)(pcVar2 + 0x30);
}

