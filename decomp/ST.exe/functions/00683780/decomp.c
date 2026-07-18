
int __cdecl FUN_00683780(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char local_c;
  short sStack_b;
  undefined1 uStack_9;
  undefined1 uStack_8;
  
  if (((param_3 == 0) || (param_1 == (int *)0x0)) || (param_2 == 0)) {
    FUN_006a5e40(-0x34,DAT_007ed77c,0x7d5604,0x39e);
  }
  iVar7 = 0;
  iVar1 = param_1[1];
  if (0 < *(int *)(param_2 + 4)) {
    iVar6 = 0;
    do {
      puVar3 = (undefined4 *)(*(int *)(param_2 + 8) + iVar6);
      uVar2 = *puVar3;
      local_c = (char)uVar2;
      sStack_b = (short)((uint)uVar2 >> 8);
      uStack_9 = (undefined1)((uint)uVar2 >> 0x18);
      uStack_8 = *(undefined1 *)(puVar3 + 1);
      if ((local_c == '\x06') || (local_c == '\x03')) {
        pbVar4 = (byte *)thunk_FUN_0067ee40((int)sStack_b);
        if (pbVar4 == (byte *)0x0) {
          FUN_006a5e40(-0x6b,DAT_007ed77c,0x7d5604,0x3a5);
        }
        else {
          iVar5 = thunk_FUN_006836c0(param_3,pbVar4);
          sStack_b = (short)iVar5;
        }
      }
      thunk_FUN_0064a830(param_1,(undefined4 *)&local_c);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 5;
    } while (iVar7 < *(int *)(param_2 + 4));
  }
  local_c = '\a';
  sStack_b = 0x1d;
  uStack_9 = 0;
  uStack_8 = 0;
  thunk_FUN_0064a830(param_1,(undefined4 *)&local_c);
  return iVar1;
}

