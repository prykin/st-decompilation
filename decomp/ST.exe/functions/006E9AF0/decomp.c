
undefined4 __thiscall
FUN_006e9af0(void *this,uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
            uint param_6,uint param_7,int param_8)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if ((param_1 < *(uint *)((int)this + 0x310)) &&
     (puVar1 = (uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114),
     (*(uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114) & 0x8000) != 0)) {
    if ((puVar1[1] & 1) != 0) {
      FUN_006ab060((LPVOID *)(puVar1 + 0x28));
    }
    puVar1[0xd] = param_4;
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[0x21] = param_6;
    puVar1[0xe] = param_5;
    puVar1[0x22] = param_7;
    puVar1[0x28] = param_3;
    if (((int)param_2 < 1) || (puVar1[0x25] == param_2)) {
      if ((int)param_2 < 0) {
        FUN_006ab060((LPVOID *)(puVar1 + 0x29));
      }
    }
    else {
      uVar4 = Library::DKW::LIB::FUN_006acf50(puVar1[0x29],param_2 * 4);
      puVar1[0x29] = uVar4;
      if (uVar4 == 0) {
        return 0xfffffffe;
      }
      uVar3 = puVar1[0x25];
      if ((int)uVar3 < (int)param_2) {
        puVar7 = (undefined4 *)(uVar4 + uVar3 * 4);
        for (uVar5 = param_2 - uVar3 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined1 *)puVar7 = 0;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
      }
      if (((*puVar1 & 0x100) != 0) && (puVar1[0x2a] != 0)) {
        uVar4 = Library::DKW::LIB::FUN_006acf50(puVar1[0x2a],param_2 * 8);
        puVar1[0x2a] = uVar4;
        if (uVar4 == 0) {
          return 0xfffffffe;
        }
      }
    }
    puVar1[0x25] = param_2;
    if ((0 < (int)param_4) && (0 < (int)param_5)) {
      *puVar1 = *puVar1 | 0x1000;
    }
    if (param_3 != 0) {
      if ((*puVar1 & 0x1000) == 0) {
        FUN_006e8840((int)puVar1);
      }
      iVar6 = 0;
      if (0 < (int)param_2) {
        do {
          if (*(int *)(puVar1[0x28] + 4 + iVar6 * 8) != 0) {
            *(undefined2 *)(puVar1[0x29] + 2 + iVar6 * 4) = 0x8000;
            if (param_8 != 0) {
              pbVar2 = (byte *)(puVar1[0x29] + 3 + iVar6 * 4);
              *pbVar2 = *pbVar2 | 0x40;
            }
            FUN_006e9a10(puVar1,iVar6,0xfffffffe);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)param_2);
        return 0;
      }
    }
  }
  else if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return 0;
}

