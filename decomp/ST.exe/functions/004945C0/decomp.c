
void __fastcall FUN_004945c0(AnonShape_004945C0_2B3B394D *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined3 extraout_var;
  uint uVar4;
  undefined2 extraout_var_00;
  undefined4 extraout_EDX;
  int *piVar5;
  bool bVar6;
  byte *local_18;
  uint local_c;
  
  local_c = 0;
  local_18 = &DAT_008087e9;
  piVar5 = (int *)&param_1[0x23].field_0032;
  do {
    if ((PTR_00802a38 == (STPlaySystemC *)0x0) || (*local_18 < 8)) {
      bVar1 = param_1->field_0024;
      if (DAT_00808a8f == '\0') {
        if ((byte)local_c == bVar1) {
LAB_004946a9:
          iVar3 = 0;
        }
        else {
          uVar4 = local_c & 0xff;
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
            if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][uVar4] != 1)) goto LAB_004946a9;
            iVar3 = 2;
          }
        }
        bVar6 = iVar3 < 0;
      }
      else {
        bVar6 = (&DAT_008087ea)[(uint)bVar1 * 0x51] != (&DAT_008087ea)[(local_c & 0xff) * 0x51];
      }
      if (!bVar6) {
        if (DAT_00808a8f == '\0') {
          if (bVar1 == (byte)local_c) {
LAB_00494766:
            iVar3 = 0;
          }
          else {
            uVar4 = local_c & 0xff;
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
              if ((bVar2 != 1) || (g_playerRelationMatrix[uVar4][bVar1] != 1)) goto LAB_00494766;
              iVar3 = 2;
            }
          }
          bVar6 = iVar3 < 0;
        }
        else {
          bVar6 = (&DAT_008087ea)[(local_c & 0xff) * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
        }
        if (!bVar6) {
          *piVar5 = 0;
          goto LAB_004947b1;
        }
      }
      bVar6 = thunk_FUN_0041d350(param_1,local_c);
      if (CONCAT31(extraout_var,bVar6) == 1) {
        *piVar5 = 0;
      }
      else if (*piVar5 == 0) {
        thunk_FUN_004407a0(local_c,CONCAT31((int3)((uint)extraout_EDX >> 8),param_1->field_0024),
                           CONCAT22(extraout_var_00,param_1->field_0032));
        *piVar5 = 1;
      }
    }
LAB_004947b1:
    local_18 = local_18 + 0x51;
    local_c = local_c + 1;
    piVar5 = piVar5 + 1;
    if (0x808a70 < (int)local_18) {
      return;
    }
  } while( true );
}

