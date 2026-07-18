
undefined4 __fastcall FUN_0054cfc0(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_54;
  undefined4 local_50 [16];
  undefined4 local_10;
  undefined4 *local_c;
  int local_8;
  
  *(undefined4 *)(param_1 + 0x30) = 0;
  local_10 = 1;
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  local_8 = param_1;
  iVar3 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  iVar4 = local_8;
  if (iVar3 == 0) {
    FUN_006e51f0();
    *(undefined4 *)(iVar4 + 0x39) = 0;
    *(undefined4 *)(iVar4 + 0x45) = 7;
    iVar3 = FUN_006aac70(7);
    *(int *)(iVar4 + 0x3d) = iVar3;
    *(undefined4 *)(iVar4 + 0x53) = 0x1400;
    iVar3 = FUN_006aac70(0x1400);
    *(int *)(iVar4 + 0x4f) = iVar3;
    *(undefined4 *)(iVar4 + 0x41) = 0;
    *(undefined4 *)(iVar4 + 0x49) = 0;
    puVar1 = (undefined4 *)(iVar4 + 0xe4);
    *(undefined1 *)(iVar4 + 0x4d) = 0;
    *(undefined1 *)(iVar4 + 0x4e) = 0;
    *(undefined4 *)(iVar4 + 0x59) = 0;
    *(undefined4 *)(iVar4 + 0xe8) = 0;
    *(undefined4 *)(iVar4 + 0xec) = 0;
    *(undefined2 *)(iVar4 + 0x57) = 0;
    *(undefined4 *)(iVar4 + 0x28) = 0;
    *(undefined4 *)(iVar4 + 0x2c) = 0;
    *puVar1 = 0;
    if (DAT_00806754 != 0) {
      local_c = puVar1;
      FUN_006f1ce0(0xc,PTR_DAT_0079ae30,(int *)&local_c,0);
    }
    *(undefined4 *)(iVar4 + 0x34) = *puVar1;
    *(undefined4 *)(iVar4 + 0x20) = local_10;
    *(undefined1 *)(iVar4 + 0x38) = 0;
    *(undefined4 *)(iVar4 + 0x65) = 0;
    *(undefined4 *)(iVar4 + 0x69) = 0;
    *(undefined4 *)(iVar4 + 0x6d) = 0;
    *(undefined4 *)(iVar4 + 0x71) = 0;
    *(undefined4 *)(iVar4 + 0x75) = 0;
    *(undefined4 *)(iVar4 + 0x79) = 0;
    *(undefined1 *)(iVar4 + 0xbb) = 0;
    *(undefined4 *)(iVar4 + 0xa7) = 0;
    *(undefined4 *)(iVar4 + 0xab) = 0;
    *(undefined4 *)(iVar4 + 0xaf) = 0;
    *(undefined4 *)(iVar4 + 0xb3) = 0;
    *(undefined4 *)(iVar4 + 0xb7) = 0;
    DAT_00858df8 = (undefined4 *)local_54;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_54;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_tplaysys_cpp_007c8430,0x18c,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  FUN_006a5e40(iVar3,0,0x7c8430,0x18e);
  return 0xfffffffc;
}

