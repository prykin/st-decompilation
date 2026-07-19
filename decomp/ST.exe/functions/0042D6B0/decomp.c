
void FUN_0042d6b0(char param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)((int)&DAT_007f5023 + param_1 * 0xa62);
  if (iVar2 == 0) {
    puVar3 = &DAT_007f4f83;
  }
  else {
    if (iVar2 != 1) {
      iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x470,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__RemoveActiveTV_wr_007a645c);
      if (iVar2 == 0) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puVar3 = &DAT_007f4fd3;
  }
  puVar3 = (undefined4 *)((int)puVar3 + param_1 * 0xa62);
  thunk_FUN_0042d4f0(param_1,iVar2,0,1);
  if (*(byte **)((int)puVar3 + 10) != (byte *)0x0) {
    FUN_006ae110(*(byte **)((int)puVar3 + 10));
    *(undefined4 *)((int)puVar3 + 10) = 0;
  }
  *puVar3 = 0;
  return;
}

