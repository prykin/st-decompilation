
void __fastcall FUN_004945c0(AnonShape_004945C0_2B3B394D *param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined3 extraout_var;
  uint uVar5;
  undefined2 extraout_var_00;
  undefined4 extraout_EDX;
  int *piVar6;
  bool bVar7;
  byte *local_18;
  uint local_c;
  
  local_c = 0;
  local_18 = &DAT_008087e9;
  piVar6 = (int *)&param_1[0x23].field_0032;
  do {
    if ((PTR_00802a38 == (STPlaySystemC *)0x0) || (*local_18 < 8)) {
      bVar1 = param_1->field_0024;
      if (DAT_00808a8f == '\0') {
        if ((byte)local_c == bVar1) {
LAB_004946a9:
          iVar4 = 0;
        }
        else {
          uVar5 = local_c & 0xff;
          uVar3 = (uint)bVar1;
          cVar2 = *(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar3);
          if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar5) == '\0')) {
            iVar4 = -2;
          }
          else if ((cVar2 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar5) == '\0'))
          {
            iVar4 = -1;
          }
          else if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar5) == '\x01'))
          {
            iVar4 = 1;
          }
          else {
            if ((cVar2 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar5) != '\x01'))
            goto LAB_004946a9;
            iVar4 = 2;
          }
        }
        bVar7 = iVar4 < 0;
      }
      else {
        bVar7 = (&DAT_008087ea)[(uint)bVar1 * 0x51] != (&DAT_008087ea)[(local_c & 0xff) * 0x51];
      }
      if (!bVar7) {
        if (DAT_00808a8f == '\0') {
          if (bVar1 == (byte)local_c) {
LAB_00494766:
            iVar4 = 0;
          }
          else {
            uVar3 = (uint)bVar1;
            uVar5 = local_c & 0xff;
            cVar2 = *(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar5);
            if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar3) == '\0')) {
              iVar4 = -2;
            }
            else if ((cVar2 == '\x01') &&
                    (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar3) == '\0')) {
              iVar4 = -1;
            }
            else if ((cVar2 == '\0') &&
                    (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar3) == '\x01')) {
              iVar4 = 1;
            }
            else {
              if ((cVar2 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar3) != '\x01')
                 ) goto LAB_00494766;
              iVar4 = 2;
            }
          }
          bVar7 = iVar4 < 0;
        }
        else {
          bVar7 = (&DAT_008087ea)[(local_c & 0xff) * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
        }
        if (!bVar7) {
          *piVar6 = 0;
          goto LAB_004947b1;
        }
      }
      bVar7 = thunk_FUN_0041d350(param_1,local_c);
      if (CONCAT31(extraout_var,bVar7) == 1) {
        *piVar6 = 0;
      }
      else if (*piVar6 == 0) {
        thunk_FUN_004407a0(local_c,CONCAT31((int3)((uint)extraout_EDX >> 8),param_1->field_0024),
                           CONCAT22(extraout_var_00,param_1->field_0032));
        *piVar6 = 1;
      }
    }
LAB_004947b1:
    local_18 = local_18 + 0x51;
    local_c = local_c + 1;
    piVar6 = piVar6 + 1;
    if (0x808a70 < (int)local_18) {
      return;
    }
  } while( true );
}

