
char * __cdecl FUN_00725c60(cMf32 *param_1,char *param_2,byte param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  LPSTR pCVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 unaff_ESI;
  int iVar6;
  ushort *puVar7;
  void *unaff_EDI;
  byte bVar8;
  undefined4 local_50;
  undefined4 local_4c [16];
  ushort *local_c;
  char *local_8;
  
  iVar6 = 0;
  local_c = (ushort *)0x0;
  local_8 = (char *)0x0;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    local_c = FUN_006f1ce0(7,param_2,(int *)0x0,param_4);
    if (local_c == (ushort *)0x0) {
      FUN_006a5e40(-4,DAT_007ed77c,0x7f0c8c,0x1c);
    }
    local_8 = (char *)FUN_006aac10(*(short *)((int)local_c + 0x23) * 4 + 0x31);
    puVar7 = local_c;
    pcVar5 = local_8;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)puVar7;
      puVar7 = puVar7 + 2;
      pcVar5 = pcVar5 + 4;
    }
    *pcVar5 = (char)*puVar7;
    iVar2 = 0;
    *(cMf32 **)(local_8 + 0x25) = param_1;
    local_8[0x2b] = '\0';
    local_8[0x2c] = '\0';
    local_8[0x29] = '\0';
    local_8[0x2a] = '\0';
    if (0 < *(short *)(local_8 + 0x23)) {
      do {
        iVar6 = param_4;
        bVar8 = param_3;
        pCVar3 = FUN_006f2c00(local_8,(uint)(byte)local_8[0x20],*(short *)(local_8 + 0x21) + iVar2);
        uVar4 = FUN_0070aa50(param_1,pCVar3,bVar8,iVar6);
        *(undefined4 *)(local_8 + iVar2 * 4 + 0x2d) = uVar4;
        if (*(int *)(local_8 + iVar2 * 4 + 0x2d) == 0) {
          FUN_006a5e40(-4,DAT_007ed77c,0x7f0c8c,0x27);
        }
        if (iVar2 == 0) {
          *(undefined2 *)(local_8 + 0x29) = *(undefined2 *)(*(int *)(local_8 + 0x2d) + 4);
          *(undefined2 *)(local_8 + 0x2b) = *(undefined2 *)(*(int *)(local_8 + 0x2d) + 8);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(short *)(local_8 + 0x23));
    }
    DAT_00858df8 = (undefined4 *)local_50;
    cMf32::RecMemFree(param_1,(uint *)&local_c);
    return local_8;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  cMf32::RecMemFree(param_1,(uint *)&local_c);
  if (local_8 != (char *)0x0) {
    if (0 < *(short *)(local_8 + 0x23)) {
      do {
        cMf32::RecMemFree(param_1,(uint *)(local_8 + iVar6 * 4 + 0x2d));
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(short *)(local_8 + 0x23));
    }
    FUN_006ab060(&local_8);
  }
  if ((param_4 != 0) || (iVar2 != -4)) {
    iVar6 = FUN_006ad4d0(s_E__Ourlib_mfspr_cpp_007f0c8c,0x3e,0,iVar2,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      pcVar5 = (char *)(*pcVar1)();
      return pcVar5;
    }
    FUN_006a5e40(iVar2,0,0x7f0c8c,0x40);
  }
  return (char *)0x0;
}

