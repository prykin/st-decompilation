
undefined4 * __cdecl
FUN_0070bfe0(byte *param_1,undefined2 *param_2,undefined2 *param_3,DWORD *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  HFILE hFile;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  _OFSTRUCT local_e0;
  undefined4 local_58;
  undefined4 local_54 [16];
  int *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int local_8;
  
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_8 = -1;
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  iVar2 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_58;
    iVar4 = FUN_006ad4d0(s_E__Ourlib_Mfimg_cpp_007effe0,0x41e,0,iVar2,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      puVar3 = (undefined4 *)(*pcVar1)();
      return puVar3;
    }
    if (local_8 != -1) {
      _lclose(local_8);
    }
    if (local_10 != (undefined4 *)0x0) {
      FUN_006c6fc0(local_10);
    }
    if (local_14 != (undefined4 *)0x0) {
      FUN_006c7980(local_14);
    }
    if (local_c != (undefined4 *)0x0) {
      FUN_006ab060(&local_c);
    }
    FUN_006a5e40(iVar2,0,0x7effe0,0x425);
    return (undefined4 *)0x0;
  }
  iVar2 = FUN_0070b6d0(param_1);
  if (iVar2 == 1) {
    hFile = OpenFile((LPCSTR)param_1,&local_e0,0);
    local_8 = hFile;
    if (hFile == -1) {
      FUN_006a5e40(-10,DAT_007ed77c,0x7effe0,0x40c);
    }
    local_14 = FUN_00751f30(hFile,0);
    if (param_2 != (undefined2 *)0x0) {
      *param_2 = (short)local_14[2];
    }
    if (param_3 != (undefined2 *)0x0) {
      *param_3 = (short)local_14[3];
    }
    FUN_006c7980(local_14);
    local_14 = (undefined4 *)0x0;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        if (param_2 != (undefined2 *)0x0) {
          *param_2 = 10;
        }
        if (param_3 != (undefined2 *)0x0) {
          *param_3 = 10;
        }
        puVar3 = FUN_0071ae80((LPCSTR)param_1,param_4);
        DAT_00858df8 = (undefined4 *)local_58;
        return puVar3;
      }
      DAT_00858df8 = (undefined4 *)local_58;
      return local_c;
    }
    hFile = OpenFile((LPCSTR)param_1,&local_e0,0);
    local_8 = hFile;
    if (hFile == -1) {
      FUN_006a5e40(-10,DAT_007ed77c,0x7effe0,0x401);
    }
    puVar3 = FUN_00751fc0(hFile);
    local_10 = puVar3;
    FUN_006d80c0((int)puVar3);
    if (param_2 != (undefined2 *)0x0) {
      *param_2 = *(undefined2 *)((int)puVar3 + 0x22);
    }
    if (param_3 != (undefined2 *)0x0) {
      *param_3 = *(undefined2 *)((int)puVar3 + 0x26);
    }
    FUN_006c6fc0(puVar3);
    local_10 = (undefined4 *)0x0;
  }
  _lclose(hFile);
  local_8 = 0xffffffff;
  puVar3 = FUN_0071ae80((LPCSTR)param_1,param_4);
  DAT_00858df8 = (undefined4 *)local_58;
  return puVar3;
}

