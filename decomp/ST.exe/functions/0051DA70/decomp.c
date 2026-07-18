
void __fastcall FUN_0051da70(int *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  int local_c;
  uint local_8;
  
  if ((((DAT_0080734d != '\0') &&
       (*(char *)((int)&DAT_008087c4 + (uint)DAT_0080874d * 0x51 + 3) == '\0')) &&
      (DAT_0080874f == '\0')) && (DAT_00808783 != '\x03')) {
    bVar3 = *(byte *)(param_1 + 0x94);
    bVar8 = 0;
    bVar2 = 0;
    bVar1 = 0;
    local_8 = 0;
    bVar4 = 0;
    if (bVar3 != 0) {
      bVar9 = 0;
      uVar10 = (uint)bVar3;
      do {
        if ((DAT_0080734e & 1 << (bVar9 & 0x1f)) != 0) {
          bVar8 = bVar8 + 1;
        }
        bVar9 = bVar9 + 1;
        uVar10 = uVar10 - 1;
        bVar4 = bVar8;
      } while (uVar10 != 0);
    }
    bVar9 = 0;
    bVar8 = *(byte *)((int)param_1 + 0x251);
    if (bVar8 != 0) {
      bVar6 = 0;
      uVar10 = (uint)bVar8;
      do {
        if ((DAT_00807352 & 1 << (bVar6 & 0x1f)) != 0) {
          bVar9 = bVar9 + 1;
        }
        bVar6 = bVar6 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      local_8 = (uint)bVar9;
    }
    bVar9 = *(byte *)((int)param_1 + 0x252);
    if (bVar9 != 0) {
      bVar6 = 0;
      uVar10 = (uint)bVar9;
      do {
        if ((DAT_00807356 & 1 << (bVar6 & 0x1f)) != 0) {
          bVar1 = bVar1 + 1;
        }
        bVar6 = bVar6 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    bVar6 = *(byte *)((int)param_1 + 0x253);
    if (bVar6 != 0) {
      bVar7 = 0;
      uVar10 = (uint)bVar6;
      do {
        if ((DAT_0080735a & 1 << (bVar7 & 0x1f)) != 0) {
          bVar2 = bVar2 + 1;
        }
        bVar7 = bVar7 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (DAT_0080874e == '\x02') {
      iVar12 = (((uint)bVar9 - (uint)bVar1) - (uint)bVar4) + -1 + (uint)bVar3;
    }
    else if (DAT_0080874e == '\x03') {
      iVar12 = (((uint)bVar6 - (uint)bVar2) - (uint)bVar4) + -1 + (uint)bVar3;
    }
    else {
      iVar12 = ((bVar8 - local_8) - (uint)bVar4) + -1 + (uint)bVar3;
    }
    if (-1 < iVar12) {
      uVar10 = FUN_0072e6c0();
      uVar10 = uVar10 % (iVar12 + 1U);
      uVar5 = (uint)*(byte *)(param_1 + 0x94);
      local_8 = uVar10 & 0xff;
      if ((int)(uVar10 & 0xff) < (int)(uVar5 - bVar4)) {
        puVar11 = &DAT_0080734e;
        local_c = 0;
      }
      else {
        local_8 = (uint)(byte)((char)uVar10 + (bVar4 - *(byte *)(param_1 + 0x94)));
        if (DAT_0080874e == '\x01') {
          puVar11 = &DAT_00807352;
          uVar5 = (uint)*(byte *)((int)param_1 + 0x251);
          local_c = 1;
        }
        else if (DAT_0080874e == '\x02') {
          puVar11 = &DAT_00807356;
          uVar5 = (uint)*(byte *)((int)param_1 + 0x252);
          local_c = 2;
        }
        else {
          puVar11 = &DAT_0080735a;
          uVar5 = (uint)*(byte *)((int)param_1 + 0x253);
          local_c = 3;
        }
      }
      bVar1 = 0;
      if (uVar5 != 0) {
        uVar10 = 0;
        do {
          if ((*puVar11 & 1 << ((byte)uVar10 & 0x1f)) == 0) {
            if ((char)local_8 == '\0') {
              HelpPanelTy::TipProc((HelpPanelTy *)param_1,(void *)(uint)bVar1,local_c,'\0');
              (**(code **)(*param_1 + 0x18))(1);
              return;
            }
            local_8 = (uint)(byte)((char)local_8 - 1);
          }
          bVar1 = bVar1 + 1;
          uVar10 = (uint)bVar1;
        } while (uVar10 < uVar5);
        return;
      }
    }
  }
  return;
}

