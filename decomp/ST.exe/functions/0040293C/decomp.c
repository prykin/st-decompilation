
void __fastcall thunk_FUN_0058bb90(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined4 auStack_60 [6];
  short sStack_46;
  short sStack_44;
  short sStack_42;
  short sStack_40;
  short sStack_3e;
  short sStack_3c;
  undefined2 uStack_3a;
  undefined4 uStack_38;
  undefined1 uStack_34;
  undefined4 uStack_33;
  undefined2 uStack_2f;
  int iStack_8;
  
  uVar1 = *(undefined4 *)(param_1 + 0x279);
  puVar4 = auStack_60;
  for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  uStack_2f = *(undefined2 *)(param_1 + 0x299);
  uStack_34 = 0;
  uStack_33 = *(undefined4 *)(param_1 + 0x295);
  sStack_44 = *(short *)(param_1 + 0x43);
  sStack_46 = (short)((uint)(*(int *)(param_1 + 0x259) * 5) >> 8) + *(short *)(param_1 + 0x41);
  sStack_42 = *(short *)(param_1 + 0x45) + -0x96;
  sStack_3c = *(short *)(param_1 + 0x45) + -200;
  uStack_38 = 0xa5;
  auStack_60[0] = 0x28;
  auStack_60[3] = 1;
  uStack_3a = 0;
  if (sStack_46 < 0) {
    iStack_8 = (short)((sStack_46 / 0xc9 + (sStack_46 >> 0xf)) -
                      (short)((longlong)(int)sStack_46 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iStack_8 = (int)(short)((sStack_46 / 0xc9 + (sStack_46 >> 0xf)) -
                           (short)((longlong)(int)sStack_46 * 0x28c1979 >> 0x3f));
  }
  if (sStack_44 < 0) {
    iVar3 = (short)((sStack_44 / 0xc9 + (sStack_44 >> 0xf)) -
                   (short)((longlong)(int)sStack_44 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar3 = (int)(short)((sStack_44 / 0xc9 + (sStack_44 >> 0xf)) -
                        (short)((longlong)(int)sStack_44 * 0x28c1979 >> 0x3f));
  }
  puVar5 = (undefined *)0x4;
  auStack_60[1] = uVar1;
  sStack_40 = sStack_46;
  sStack_3e = sStack_44;
  bVar2 = thunk_FUN_004961b0((short)iStack_8,(short)iVar3,4);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    do {
      if ((int)puVar5 < 1) break;
      puVar5 = puVar5 + -1;
      bVar2 = thunk_FUN_004961b0((short)iStack_8,(short)iVar3,(short)puVar5);
    } while (CONCAT31(extraout_var_00,bVar2) != 0);
    if ((int)puVar5 < 0) {
      sStack_3c = (short)((int)puVar5 / 200) + -1;
      goto LAB_0058bcd7;
    }
  }
  sStack_3c = (short)((int)puVar5 / 200);
LAB_0058bcd7:
  if (DAT_00802a88 != (void *)0x0) {
    thunk_FUN_0055a9d0(DAT_00802a88,iStack_8,iVar3,puVar5,*(uint *)(param_1 + 0x24),(undefined *)0x2
                       ,0x19);
  }
  thunk_FUN_0054cc20(0x28,0,0,auStack_60,0);
  return;
}

