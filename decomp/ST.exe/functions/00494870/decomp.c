
bool __thiscall FUN_00494870(void *this,uint param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;

  uVar3 = 1;
  if (((*(int *)((int)this + 0x732) != 1) || (7 < param_1)) ||
     ((g_playSystem_00802A38 != (STPlaySystemC *)0x0 && (7 < (byte)(&DAT_008087e9)[param_1 * 0x51]))
     )) goto cf_common_exit_00494A35;
  bVar1 = *(byte *)((int)this + 0x24);
  if (DAT_00808a8f == '\0') {
    if ((byte)param_1 == bVar1) {
LAB_0049495d:
      iVar4 = 0;
    }
    else {
      uVar5 = param_1 & 0xff;
      bVar2 = g_playerRelationMatrix[uVar5][bVar1];
      if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar5] == 0)) {
        iVar4 = -2;
      }
      else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][uVar5] == 0)) {
        iVar4 = -1;
      }
      else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar5] == 1)) {
        iVar4 = 1;
      }
      else {
        if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][uVar5] != 1)) goto LAB_0049495d;
        iVar4 = 2;
      }
    }
    bVar6 = iVar4 < 0;
  }
  else {
    bVar6 = (&DAT_008087ea)[(uint)bVar1 * 0x51] != (&DAT_008087ea)[(param_1 & 0xff) * 0x51];
  }
  if (!bVar6) {
    if (DAT_00808a8f == '\0') {
      if (bVar1 == (byte)param_1) {
LAB_00494a19:
        iVar4 = 0;
      }
      else {
        uVar5 = param_1 & 0xff;
        bVar2 = g_playerRelationMatrix[bVar1][uVar5];
        if ((bVar2 == 0) && (g_playerRelationMatrix[uVar5][bVar1] == 0)) {
          iVar4 = -2;
        }
        else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar5][bVar1] == 0)) {
          iVar4 = -1;
        }
        else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar5][bVar1] == 1)) {
          iVar4 = 1;
        }
        else {
          if ((bVar2 != 1) || (g_playerRelationMatrix[uVar5][bVar1] != 1)) goto LAB_00494a19;
          iVar4 = 2;
        }
      }
      bVar6 = iVar4 < 0;
    }
    else {
      bVar6 = (&DAT_008087ea)[(param_1 & 0xff) * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
    }
    if (!bVar6) {
      uVar3 = 0;
      goto cf_common_exit_00494A35;
    }
  }
  iVar4 = thunk_FUN_0041d350(this,param_1);
  uVar3 = (undefined1)iVar4;
cf_common_exit_00494A35:
  if ((*(int *)((int)this + 0x45d) == 0x14) && (*(int *)((int)this + 0x5c0) == 3)) {
    uVar3 = 0;
  }
  return (bool)uVar3;
}

