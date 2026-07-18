
void thunk_FUN_005044b0(int param_1)

{
  code *pcVar1;
  int iVar2;
  byte *pbVar3;
  char *_Source;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  size_t _Count;
  uint *_Dest;
  undefined4 *puStack_54;
  undefined4 auStack_50 [16];
  int iStack_10;
  undefined1 *puStack_c;
  UINT UStack_8;
  
  puStack_54 = DAT_00858df8;
  DAT_00858df8 = &puStack_54;
  iVar2 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    thunk_FUN_00540760(*(undefined4 **)(iStack_10 + 0x194),param_1,0x50,'\x01',
                       *(byte **)(iStack_10 + 0x9ed));
    if (*(int *)(iStack_10 + 0xbf5) == 0x38) {
      puStack_c = (undefined1 *)CONCAT31(puStack_c._1_3_,2);
    }
    else {
      puStack_c = (undefined1 *)CONCAT31(puStack_c._1_3_,*(int *)(iStack_10 + 0xbf5) == 0x4f);
    }
    pbVar3 = (byte *)FUN_0070b3a0(*(int *)(iStack_10 + 0x2d2),(uint)puStack_c & 0xff);
    thunk_FUN_00540760(*(undefined4 **)(iStack_10 + 0x194),param_1 + 3,0x53,'\x01',pbVar3);
    if (*(int *)(iStack_10 + 0xbf5) == 0x38) {
      puStack_c = &DAT_007aa024;
      UStack_8 = 0x271c;
    }
    else if (*(int *)(iStack_10 + 0xbf5) == 0x4f) {
      puStack_c = &DAT_007aa020;
      UStack_8 = 0x271e;
    }
    else {
      puStack_c = &DAT_007aa028;
      UStack_8 = 0x271d;
    }
    _Count = 0x32;
    _Dest = (uint *)(iStack_10 + 0x1e1);
    _Source = (char *)FUN_006b0140(0x2721,DAT_00807618);
    _strncpy((char *)_Dest,_Source,_Count);
    *(undefined1 *)(iStack_10 + 0x212) = 0;
    for (puVar4 = FUN_0072e560(_Dest,'\n'); puVar4 != (uint *)0x0;
        puVar4 = FUN_0072e560(puVar4,'\n')) {
      *(undefined1 *)puVar4 = 0x20;
    }
    uVar5 = FUN_006b0140(UStack_8,DAT_00807618);
    wsprintfA((LPSTR)&DAT_0080f33a,s___s_s__1_s_007c274c,puStack_c,uVar5,_Dest);
    iVar2 = param_1 + 0x40;
    FUN_00710a90(*(int *)(iStack_10 + 0x194),0,iVar2,0x57,0x75,0x16);
    FUN_00711b70(&DAT_0080f33a,-2,-1,0,-1,-1);
    pbVar3 = (byte *)FUN_00710ba0(*(int *)(iStack_10 + 0x194),0,iVar2,0x6d,0x75,0xe,0);
    if (pbVar3 != (byte *)0x0) {
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c2744,(uint)*(ushort *)(iStack_10 + 0xc34));
      if (*(int *)(iStack_10 + 0xbf5) == 0x38) {
        iVar6 = 1;
      }
      else {
        iVar6 = (-(uint)(*(int *)(iStack_10 + 0xbf5) != 0x4f) & 0xfffffffe) + 2;
      }
      FUN_007119c0(&DAT_0080f33a,-1,-1,iVar6);
      thunk_FUN_00540760(*(undefined4 **)(iStack_10 + 0x194),iVar2,0x6f,'\x01',pbVar3);
      FUN_00710f00();
    }
    DAT_00858df8 = puStack_54;
    return;
  }
  DAT_00858df8 = puStack_54;
  iVar6 = FUN_006ad4d0(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x47,0,iVar2,&DAT_007a4ccc);
  if (iVar6 == 0) {
    FUN_006a5e40(iVar2,0,0x7c2700,0x47);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

