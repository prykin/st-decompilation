
void __thiscall
FUN_00631c20(void *this,int param_1,int param_2,byte param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  bool bVar8;
  
  if (*(int *)((int)this + 0x6d) != 0) {
    iVar3 = *(int *)(*(int *)((int)this + 0x6d) + 0xc);
    uVar7 = 0;
    if (0 < iVar3) {
      do {
        iVar5 = *(int *)((int)this + 0x6d);
        if (((((uVar7 < *(uint *)(iVar5 + 0xc)) &&
              (puVar6 = (uint *)(*(int *)(iVar5 + 8) * uVar7 + *(int *)(iVar5 + 0x1c)),
              puVar6 != (uint *)0x0)) &&
             (iVar5 = FUN_006aced8(param_1,param_2,puVar6[3],puVar6[4]), iVar5 < (int)puVar6[6])) &&
            (*puVar6 < 8)) &&
           ((PTR_00802a38 == (STPlaySystemC *)0x0 || ((byte)(&DAT_008087e9)[*puVar6 * 0x51] < 8))))
        {
          bVar1 = (byte)*puVar6;
          if (DAT_00808a8f == '\0') {
            if (param_3 == bVar1) {
LAB_00631d60:
              iVar5 = 0;
            }
            else {
              uVar4 = (uint)param_3;
              bVar2 = g_playerRelationMatrix[uVar4][bVar1];
              if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar4] == 0)) {
                iVar5 = -2;
              }
              else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][uVar4] == 0)) {
                iVar5 = -1;
              }
              else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar4] == 1)) {
                iVar5 = 1;
              }
              else {
                if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][uVar4] != 1)) goto LAB_00631d60;
                iVar5 = 2;
              }
            }
            bVar8 = iVar5 < 0;
          }
          else {
            bVar8 = (&DAT_008087ea)[(uint)bVar1 * 0x51] != (&DAT_008087ea)[(uint)param_3 * 0x51];
          }
          if (bVar8) {
            *(undefined4 *)((int)puVar6 + 0x25) = param_5;
            *(byte *)(puVar6 + 8) = 1;
            *(undefined4 *)((int)puVar6 + 0x21) = param_6;
          }
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < iVar3);
    }
  }
  return;
}

