
undefined4 __thiscall
FUN_0055afb0(void *this,int param_1,int param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  char *local_c;
  int *local_8;

  if (((*(int *)((int)this + 0x114) != 0) && (param_4 < 8)) &&
     ((PTR_00802a38 == (STPlaySystemC *)0x0 || ((byte)(&DAT_008087e9)[param_4 * 0x51] < 8)))) {
    uVar2 = 0;
    local_8 = (int *)((int)this + 0x74);
    local_c = &DAT_008087e9;
    do {
      if ((uVar2 != param_4) && (*local_c != -1)) {
        if (DAT_00808a8f == '\0') {
          if ((char)param_4 == (char)uVar2) {
LAB_0055b0bb:
            iVar4 = 0;
          }
          else {
            uVar3 = param_4 & 0xff;
            uVar5 = uVar2 & 0xff;
            bVar1 = g_playerRelationMatrix[uVar3][uVar5];
            if ((bVar1 == 0) && (g_playerRelationMatrix[uVar5][uVar3] == 0)) {
              iVar4 = -2;
            }
            else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar5][uVar3] == 0)) {
              iVar4 = -1;
            }
            else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar5][uVar3] == 1)) {
              iVar4 = 1;
            }
            else {
              if ((bVar1 != 1) || (g_playerRelationMatrix[uVar5][uVar3] != 1)) goto LAB_0055b0bb;
              iVar4 = 2;
            }
          }
          bVar6 = iVar4 < 0;
        }
        else {
          bVar6 = (&DAT_008087ea)[(uVar2 & 0xff) * 0x51] != (&DAT_008087ea)[(param_4 & 0xff) * 0x51]
          ;
        }
        if (bVar6) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if ((((*local_8 != 0) && (-1 < param_1)) && (param_1 < *(int *)((int)this + 0x20))) &&
             (((-1 < param_2 && (param_2 < *(int *)((int)this + 0x24))) &&
              (((int)local_c < 0x808a71 &&
               (*(char *)(*(int *)((int)this + 0x20) * param_2 + *local_8 + param_1) != '\0')))))) {
            return 1;
          }
        }
      }
      local_c = local_c + 0x51;
      uVar2 = uVar2 + 1;
      local_8 = local_8 + 1;
    } while ((int)local_c < 0x808a71);
  }
  return 0;
}

