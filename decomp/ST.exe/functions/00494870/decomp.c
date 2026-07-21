
bool __thiscall FUN_00494870(void *this,uint param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  bVar5 = true;
  if (((*(int *)((int)this + 0x732) != 1) || (7 < param_1)) ||
     ((PTR_00802a38 != (STPlaySystemC *)0x0 && (7 < (byte)(&DAT_008087e9)[param_1 * 0x51]))))
  goto cf_common_exit_00494A35;
  bVar1 = *(byte *)((int)this + 0x24);
  if (DAT_00808a8f == '\0') {
    if ((byte)param_1 == bVar1) {
LAB_0049495d:
      iVar3 = 0;
    }
    else {
      uVar4 = param_1 & 0xff;
      bVar2 = g_playerRelationMatrix[uVar4][bVar1];
      if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar4] == 0)) {
        iVar3 = -2;
      }
      else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][uVar4] == 0)) {
        iVar3 = -1;
      }
      else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar4] == 1)) {
        iVar3 = 1;
      }
      else {
        if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][uVar4] != 1)) goto LAB_0049495d;
        iVar3 = 2;
      }
    }
    bVar5 = iVar3 < 0;
  }
  else {
    bVar5 = (&DAT_008087ea)[(uint)bVar1 * 0x51] != (&DAT_008087ea)[(param_1 & 0xff) * 0x51];
  }
  if (!bVar5) {
    if (DAT_00808a8f == '\0') {
      if (bVar1 == (byte)param_1) {
LAB_00494a19:
        iVar3 = 0;
      }
      else {
        uVar4 = param_1 & 0xff;
        bVar2 = g_playerRelationMatrix[bVar1][uVar4];
        if ((bVar2 == 0) && (g_playerRelationMatrix[uVar4][bVar1] == 0)) {
          iVar3 = -2;
        }
        else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar4][bVar1] == 0)) {
          iVar3 = -1;
        }
        else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar4][bVar1] == 1)) {
          iVar3 = 1;
        }
        else {
          if ((bVar2 != 1) || (g_playerRelationMatrix[uVar4][bVar1] != 1)) goto LAB_00494a19;
          iVar3 = 2;
        }
      }
      bVar5 = iVar3 < 0;
    }
    else {
      bVar5 = (&DAT_008087ea)[(param_1 & 0xff) * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
    }
    if (!bVar5) {
      bVar5 = false;
      goto cf_common_exit_00494A35;
    }
  }
  bVar5 = thunk_FUN_0041d350(this,param_1);
cf_common_exit_00494A35:
  if ((*(int *)((int)this + 0x45d) == 0x14) && (*(int *)((int)this + 0x5c0) == 3)) {
    bVar5 = false;
  }
  return bVar5;
}

