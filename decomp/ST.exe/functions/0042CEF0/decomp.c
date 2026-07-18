
void FUN_0042cef0(int param_1,char param_2,short param_3)

{
  code *pcVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int local_8;
  
  iVar2 = (uint)DAT_0080874d * 0xa62;
  if (0x1a4 < param_1) {
    if (param_1 < 0x1b9) {
      if ((param_1 == 0x1b8) || (param_1 == 0x1ae)) goto LAB_0042d011;
    }
    else if ((999 < param_1) && (param_1 < 0x3ea)) {
      piVar5 = (int *)((int)&DAT_007f5031 + iVar2);
      local_8 = 10;
      do {
        if ((*(int *)((int)piVar5 + -10) == 0x19a) && (*(int *)((int)piVar5 + -6) == (int)param_2))
        {
          uVar6 = 0;
          iVar2 = *(int *)(*piVar5 + 0xc);
          if (0 < iVar2) {
            do {
              FUN_006acc70(*piVar5,uVar6,&param_1);
              if ((short)param_1 == param_3) {
                param_1 = 0xffff;
                FUN_006ae140((uint *)*piVar5,uVar6,&param_1);
                *(short *)(piVar5 + 1) = (short)piVar5[1] + -1;
                if ((short)piVar5[1] == 0) {
                  FUN_006ae110((byte *)*piVar5);
                  *piVar5 = 0;
                  *(undefined4 *)((int)piVar5 + -10) = 0;
                }
                break;
              }
              uVar6 = uVar6 + 1;
            } while ((int)uVar6 < iVar2);
          }
        }
        piVar5 = piVar5 + 4;
        local_8 = local_8 + -1;
        if (local_8 == 0) {
          return;
        }
      } while( true );
    }
LAB_0042cf42:
    iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x3bb,0,0,&DAT_007a4ccc);
    if (iVar2 == 0) {
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 != 0x1a4) {
    if (param_1 == 0x14) {
      piVar5 = (int *)((int)&DAT_007f5031 + iVar2);
      local_8 = 10;
      do {
        if ((*(int *)((int)piVar5 + -10) == 0x3c) && (*(int *)((int)piVar5 + -6) == (int)param_2)) {
          uVar6 = 0;
          iVar2 = *(int *)(*piVar5 + 0xc);
          if (0 < iVar2) {
            do {
              FUN_006acc70(*piVar5,uVar6,&param_1);
              if ((short)param_1 == param_3) {
                param_1 = 0xffff;
                FUN_006ae140((uint *)*piVar5,uVar6,&param_1);
                *(short *)(piVar5 + 1) = (short)piVar5[1] + -1;
                if ((short)piVar5[1] == 0) {
                  FUN_006ae110((byte *)*piVar5);
                  *piVar5 = 0;
                  *(undefined4 *)((int)piVar5 + -10) = 0;
                }
                break;
              }
              uVar6 = uVar6 + 1;
            } while ((int)uVar6 < iVar2);
          }
        }
        piVar5 = piVar5 + 4;
        local_8 = local_8 + -1;
        if (local_8 == 0) {
          return;
        }
      } while( true );
    }
    if ((param_1 != 0x5a) && (param_1 != 0x172)) goto LAB_0042cf42;
  }
LAB_0042d011:
  iVar4 = 0;
  psVar3 = &DAT_007f502f + (uint)DAT_0080874d * 0x531;
  while (((*(int *)(psVar3 + -4) != param_1 || (*(int *)(psVar3 + -2) != (int)param_2)) ||
         (*psVar3 != param_3))) {
    iVar4 = iVar4 + 1;
    psVar3 = psVar3 + 8;
    if (9 < iVar4) {
      return;
    }
  }
  *(undefined4 *)((int)&DAT_007f5027 + iVar4 * 0x10 + iVar2) = 0;
  return;
}

