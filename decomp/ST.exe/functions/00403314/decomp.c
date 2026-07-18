
void __fastcall thunk_FUN_004945c0(void *param_1)

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
  byte *pbStack_18;
  uint uStack_c;
  
  uStack_c = 0;
  pbStack_18 = &DAT_008087e9;
  piVar6 = (int *)((int)param_1 + 0x74e);
  do {
    if ((DAT_00802a38 == 0) || (*pbStack_18 < 8)) {
      bVar1 = *(byte *)((int)param_1 + 0x24);
      if (DAT_00808a8f == '\0') {
        if ((byte)uStack_c == bVar1) {
LAB_004946a9:
          iVar4 = 0;
        }
        else {
          uVar5 = uStack_c & 0xff;
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
        bVar7 = (&DAT_008087ea)[(uint)bVar1 * 0x51] != (&DAT_008087ea)[(uStack_c & 0xff) * 0x51];
      }
      if (!bVar7) {
        if (DAT_00808a8f == '\0') {
          if (bVar1 == (byte)uStack_c) {
LAB_00494766:
            iVar4 = 0;
          }
          else {
            uVar3 = (uint)bVar1;
            uVar5 = uStack_c & 0xff;
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
          bVar7 = (&DAT_008087ea)[(uStack_c & 0xff) * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
        }
        if (!bVar7) {
          *piVar6 = 0;
          goto LAB_004947b1;
        }
      }
      bVar7 = thunk_FUN_0041d350(param_1,uStack_c);
      if (CONCAT31(extraout_var,bVar7) == 1) {
        *piVar6 = 0;
      }
      else if (*piVar6 == 0) {
        thunk_FUN_004407a0(uStack_c,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                             *(undefined1 *)((int)param_1 + 0x24)),
                           CONCAT22(extraout_var_00,*(undefined2 *)((int)param_1 + 0x32)));
        *piVar6 = 1;
      }
    }
LAB_004947b1:
    pbStack_18 = pbStack_18 + 0x51;
    uStack_c = uStack_c + 1;
    piVar6 = piVar6 + 1;
    if (0x808a70 < (int)pbStack_18) {
      return;
    }
  } while( true );
}

