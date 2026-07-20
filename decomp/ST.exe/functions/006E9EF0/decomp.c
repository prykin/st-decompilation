
void __thiscall
FUN_006e9ef0(void *this,uint param_1,uint param_2,int param_3,int param_4,uint param_5,
            undefined2 param_6)

{
  uint *puVar1;
  ushort *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  
  if (param_1 < *(uint *)((int)this + 0x310)) {
    puVar1 = (uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114);
    uVar3 = *(uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114);
    if ((uVar3 & 0x8000) != 0) {
      if (puVar1[0x25] <= param_2) {
        FUN_006e91a0();
        return;
      }
      if (param_3 != 0) {
        if ((uVar3 & 0x200) != 0) {
          return;
        }
        if (puVar1[0x2a] == 0) {
          puVar4 = Library::DKW::LIB::FUN_006aac10(puVar1[0x25] * 8);
          puVar1[0x2a] = (uint)puVar4;
          if (puVar4 == (undefined4 *)0x0) {
            return;
          }
        }
        *(short *)(puVar1[0x2a] + param_2 * 8) = (short)param_5;
        *(undefined2 *)(puVar1[0x2a] + 2 + param_2 * 8) = param_6;
        if (param_4 == 0) {
          param_4 = 1;
        }
        *(short *)(puVar1[0x2a] + 4 + param_2 * 8) = (short)param_4;
        pbVar5 = (byte *)(puVar1[0x29] + 2 + param_2 * 4);
        *pbVar5 = *pbVar5 | 0x20;
        *puVar1 = *puVar1 | 0x100;
        FUN_006e9a10(puVar1,param_2,param_5);
        return;
      }
      puVar2 = (ushort *)(puVar1[0x29] + 2 + param_2 * 4);
      *puVar2 = *puVar2 & 0xffdf;
      iVar6 = 0;
      if (0 < (int)puVar1[0x25]) {
        pbVar5 = (byte *)(puVar1[0x29] + 2);
        do {
          if ((*pbVar5 & 0x20) != 0) break;
          iVar6 = iVar6 + 1;
          pbVar5 = pbVar5 + 4;
        } while (iVar6 < (int)puVar1[0x25]);
      }
      if ((*puVar1 & 0x100) != 0) {
        FUN_006ab060((LPVOID *)(puVar1 + 0x2a));
      }
      if (iVar6 < (int)puVar1[0x25]) {
        return;
      }
      *puVar1 = *puVar1 & 0xfffffeff;
      return;
    }
  }
  if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return;
}

