
void __cdecl FUN_00676930(uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 local_298 [78];
  uint local_160 [8];
  undefined4 local_140 [43];
  int local_94;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  uint *local_8;
  
  if (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) {
    puVar5 = &DAT_0080c947;
    puVar6 = local_160;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    thunk_FUN_004da390(g_sTAllPlayers_007FA174,param_1,&DAT_0080c83e,0);
    param_1 = 0;
    local_8 = &DAT_0080c947;
    puVar4 = &DAT_0080c8cd;
    do {
      if ((byte)(&DAT_0080c83f)[param_1] < 8) {
        puVar1 = (undefined4 *)thunk_FUN_0043e420(local_298,(&DAT_0080c83f)[param_1]);
        puVar7 = local_140;
        for (iVar3 = 0x4e; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar4[-2] = (short)local_140[0x25] + (short)local_140[0x21] + (short)local_140[0x1d] +
                     (short)local_140[0x19] + (short)local_140[0x15] + (short)local_140[0x11] +
                     (short)local_140[0xd] + (short)local_140[9];
        puVar4[-1] = (short)local_140[0x26] + (short)local_140[0x22] + (short)local_140[0x1e] +
                     (short)local_140[0x1a] + (short)local_140[0x16] + (short)local_140[0x12] +
                     (short)local_140[0xe] + (short)local_140[10];
        *puVar4 = (short)local_140[0x27] + (short)local_140[0x23] + (short)local_140[0x1f] +
                  (short)local_140[0x1b] + (short)local_140[0x17] + (short)local_140[0x13] +
                  (short)local_140[0xf] + (short)local_140[0xb];
        puVar4[2] = (short)local_1c + (short)local_2c + (short)local_3c + (short)local_4c +
                    (short)local_5c + (short)local_6c + (short)local_7c + (short)local_8c +
                    (short)local_140[0x29];
        puVar4[3] = (short)local_18 + (short)local_28 + (short)local_38 + (short)local_48 +
                    (short)local_58 + (short)local_68 + (short)local_78 + (short)local_88 +
                    (short)local_140[0x2a];
        uVar2 = local_14 + local_24 + local_34 + local_44 + local_54 + local_64 + local_74 +
                local_84 + local_94;
        puVar4[4] = (ushort)uVar2;
        uVar2 = (((uVar2 & 0xffff) + (uint)*puVar4) * 3 + ((uint)puVar4[-1] + (uint)puVar4[3]) * -2
                 + (uint)puVar4[-2] + (uint)puVar4[2]) * 5;
        if ((int)local_160[(byte)(&DAT_0080c83f)[param_1]] < 0) {
          *local_8 = ((int)uVar2 < 0) - 1 & uVar2;
        }
        else {
          *local_8 = local_160[(byte)(&DAT_0080c83f)[param_1]];
        }
      }
      puVar4 = puVar4 + 8;
      param_1 = param_1 + 1;
      local_8 = local_8 + 1;
    } while ((int)puVar4 < 0x80c94d);
  }
  return;
}

