
void __fastcall thunk_FUN_00584d10(void *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 auStack_64 [6];
  short sStack_4a;
  short sStack_48;
  short sStack_46;
  short sStack_44;
  short sStack_42;
  short sStack_40;
  undefined2 uStack_3e;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  undefined4 uStack_37;
  undefined2 uStack_33;
  int iStack_c;
  int iStack_8;
  
  iVar5 = *(int *)((int)param_1 + 0x251);
  uVar2 = *(undefined4 *)((int)param_1 + 0x25c);
  puVar6 = auStack_64;
  iStack_8 = iVar5;
  for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  uStack_33 = *(undefined2 *)((int)param_1 + 0x284);
  uStack_38 = 0;
  uStack_37 = *(undefined4 *)((int)param_1 + 0x280);
  uStack_3c = 0xa3;
  auStack_64[0] = 0x28;
  auStack_64[3] = 1;
  iStack_c = 0;
  auStack_64[1] = uVar2;
  do {
    uStack_3e = (undefined2)iVar5;
    thunk_FUN_00416270(param_1,&sStack_4a,&sStack_48,&sStack_46);
    if (iStack_c < 4) {
      iVar4 = FUN_006aff50(iVar5);
      iVar3 = FUN_006aff5b(iStack_8);
      iVar4 = iVar4 * 0xc9;
      iVar5 = iVar4 / 3;
      sStack_4a = sStack_4a +
                  (((short)(iVar5 / 10000) + (short)(iVar5 >> 0x1f)) -
                  (short)((longlong)iVar5 * 0x68db8bad >> 0x3f));
      iVar5 = iVar3 * 0xc9;
      iVar3 = (int)((ulonglong)((longlong)iVar5 * 0x55555555) >> 0x20) + iVar3 * -0xc9;
      iVar3 = (iVar3 >> 1) - (iVar3 >> 0x1f);
      sStack_48 = sStack_48 +
                  (((short)(iVar3 / 10000) + (short)(iVar3 >> 0x1f)) -
                  (short)((longlong)iVar3 * 0x68db8bad >> 0x3f));
      sStack_44 = (((short)(iVar4 / 10000) + (short)(iVar4 >> 0x1f)) -
                  (short)((longlong)iVar4 * 0x68db8bad >> 0x3f)) + sStack_4a;
      sStack_42 = sStack_48 -
                  (((short)(iVar5 / 10000) + (short)(iVar5 >> 0x1f)) -
                  (short)((longlong)iVar5 * 0x68db8bad >> 0x3f));
      sStack_40 = sStack_46 + 0x32;
      iVar5 = iStack_8;
    }
    else {
      sStack_46 = sStack_46 + -0x1e;
      sStack_40 = 0;
      uVar1 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)param_1 + 0x1c) = uVar1;
      sStack_44 = (short)((ulonglong)(uVar1 >> 0x10) % 0x193) + -0xc9 + sStack_4a;
      uVar1 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)param_1 + 0x1c) = uVar1;
      sStack_42 = (short)((ulonglong)(uVar1 >> 0x10) % 0x193) + -0xc9 + sStack_48;
    }
    if ((((-1 < sStack_4a) && (-1 < sStack_48)) && (-1 < sStack_46)) &&
       (((short)((sStack_4a / 0xc9 + (sStack_4a >> 0xf)) -
                (short)((longlong)(int)sStack_4a * 0x28c1979 >> 0x3f)) < DAT_007fb240 &&
        ((short)((sStack_48 / 0xc9 + (sStack_48 >> 0xf)) -
                (short)((longlong)(int)sStack_48 * 0x28c1979 >> 0x3f)) < DAT_007fb242)))) {
      STPlaySystemC::CreateGameObject(DAT_00802a38,0x28,0,0,auStack_64,0);
      if (0xc9 < sStack_46) {
        sStack_40 = sStack_46 + -0xc9;
        STPlaySystemC::CreateGameObject(DAT_00802a38,0x28,0,0,auStack_64,0);
      }
      iVar5 = (iVar5 + 0x5a) % 0x168;
      iStack_8 = iVar5;
    }
    iStack_c = iStack_c + 1;
  } while (iStack_c < 5);
  iVar5 = *(int *)((int)param_1 + 0x251) + -0xf;
  *(int *)((int)param_1 + 0x251) = iVar5;
  if (iVar5 < 0) {
    *(undefined4 *)((int)param_1 + 0x251) = 0x168;
  }
  return;
}

