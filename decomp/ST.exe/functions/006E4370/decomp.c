
int FUN_006e4370(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_6c;
  undefined4 local_68 [16];
  undefined4 local_28;
  undefined4 local_24;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_8;
  
  local_6c = DAT_00858df8;
  DAT_00858df8 = &local_6c;
  iVar3 = __setjmp3(local_68,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (*(int *)(local_8 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(local_8 + 0x14) + 4) = 0;
      while( true ) {
        iVar3 = *(int *)(local_8 + 0x14);
        uVar1 = *(uint *)(iVar3 + 4);
        if (uVar1 < *(uint *)(iVar3 + 0xc)) {
          piVar4 = (int *)(*(int *)(iVar3 + 8) * uVar1 + *(int *)(iVar3 + 0x1c));
          *(uint *)(iVar3 + 4) = uVar1 + 1;
        }
        else {
          piVar4 = (int *)0x0;
        }
        if (piVar4 == (int *)0x0) break;
        if (*piVar4 == param_1) {
          local_24 = 1;
          local_28 = DAT_00856d6c;
          local_18 = piVar4[1];
          local_14 = param_2;
          local_10 = param_3;
          FUN_006e3dd0(piVar4[2],piVar4[3],(int)&local_28);
        }
      }
    }
    DAT_00858df8 = (undefined4 *)local_6c;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_6c;
  iVar5 = FUN_006ad4d0(s_E__Ourlib_Sapp_cpp_007ee78c,0x178,0,iVar3,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  FUN_006a5e40(iVar3,0,0x7ee78c,0x179);
  return iVar3;
}

