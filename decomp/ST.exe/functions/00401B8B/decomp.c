
void __cdecl thunk_FUN_00676930(uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 auStack_298 [78];
  uint auStack_160 [8];
  undefined4 auStack_140 [43];
  int iStack_94;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  uint *puStack_8;
  
  if (DAT_007fa174 != (void *)0x0) {
    puVar5 = &DAT_0080c947;
    puVar6 = auStack_160;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    thunk_FUN_004da390(DAT_007fa174,param_1,&DAT_0080c83e,0);
    param_1 = 0;
    puStack_8 = &DAT_0080c947;
    puVar4 = &DAT_0080c8cd;
    do {
      if ((byte)(&DAT_0080c83f)[param_1] < 8) {
        puVar1 = (undefined4 *)thunk_FUN_0043e420(auStack_298,(&DAT_0080c83f)[param_1]);
        puVar7 = auStack_140;
        for (iVar3 = 0x4e; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar4[-2] = (short)auStack_140[0x25] + (short)auStack_140[0x21] + (short)auStack_140[0x1d]
                     + (short)auStack_140[0x19] + (short)auStack_140[0x15] +
                     (short)auStack_140[0x11] + (short)auStack_140[0xd] + (short)auStack_140[9];
        puVar4[-1] = (short)auStack_140[0x26] + (short)auStack_140[0x22] + (short)auStack_140[0x1e]
                     + (short)auStack_140[0x1a] + (short)auStack_140[0x16] +
                     (short)auStack_140[0x12] + (short)auStack_140[0xe] + (short)auStack_140[10];
        *puVar4 = (short)auStack_140[0x27] + (short)auStack_140[0x23] + (short)auStack_140[0x1f] +
                  (short)auStack_140[0x1b] + (short)auStack_140[0x17] + (short)auStack_140[0x13] +
                  (short)auStack_140[0xf] + (short)auStack_140[0xb];
        puVar4[2] = (short)uStack_1c + (short)uStack_2c + (short)uStack_3c + (short)uStack_4c +
                    (short)uStack_5c + (short)uStack_6c + (short)uStack_7c + (short)uStack_8c +
                    (short)auStack_140[0x29];
        puVar4[3] = (short)uStack_18 + (short)uStack_28 + (short)uStack_38 + (short)uStack_48 +
                    (short)uStack_58 + (short)uStack_68 + (short)uStack_78 + (short)uStack_88 +
                    (short)auStack_140[0x2a];
        uVar2 = iStack_14 + iStack_24 + iStack_34 + iStack_44 + iStack_54 + iStack_64 + iStack_74 +
                iStack_84 + iStack_94;
        puVar4[4] = (ushort)uVar2;
        uVar2 = (((uVar2 & 0xffff) + (uint)*puVar4) * 3 + ((uint)puVar4[-1] + (uint)puVar4[3]) * -2
                 + (uint)puVar4[-2] + (uint)puVar4[2]) * 5;
        if ((int)auStack_160[(byte)(&DAT_0080c83f)[param_1]] < 0) {
          *puStack_8 = ((int)uVar2 < 0) - 1 & uVar2;
        }
        else {
          *puStack_8 = auStack_160[(byte)(&DAT_0080c83f)[param_1]];
        }
      }
      puVar4 = puVar4 + 8;
      param_1 = param_1 + 1;
      puStack_8 = puStack_8 + 1;
    } while ((int)puVar4 < 0x80c94d);
  }
  return;
}

