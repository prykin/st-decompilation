
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::DelObjFromSaveTmps */

void __thiscall
STAllPlayersC::DelObjFromSaveTmps(STAllPlayersC *this,int param_1,char param_2,short param_3)

{
  code *pcVar1;
  int iVar2;
  short *psVar3;
  int *piVar4;
  uint uVar5;
  int local_8;
  
  uVar5 = (uint)DAT_0080874d;
  if (0x1a4 < param_1) {
    if (param_1 < 0x1b9) {
      if ((param_1 == 0x1b8) || (param_1 == 0x1ae)) goto LAB_0042d011;
    }
    else if ((999 < param_1) && (param_1 < 0x3ea)) {
      piVar4 = &g_playerRuntime[uVar5].field446_0x211;
      local_8 = 10;
      do {
        if ((*(int *)((int)piVar4 + -10) == 0x19a) && (*(int *)((int)piVar4 + -6) == (int)param_2))
        {
          uVar5 = 0;
          iVar2 = *(int *)(*piVar4 + 0xc);
          if (0 < iVar2) {
            do {
              FUN_006acc70((AnonShape_006ACC70_C8641025 *)*piVar4,uVar5,&param_1);
              if ((short)param_1 == param_3) {
                param_1 = 0xffff;
                Library::DKW::TBL::FUN_006ae140((uint *)*piVar4,uVar5,&param_1);
                *(short *)(piVar4 + 1) = (short)piVar4[1] + -1;
                if ((short)piVar4[1] == 0) {
                  FUN_006ae110((byte *)*piVar4);
                  *piVar4 = 0;
                  *(undefined4 *)((int)piVar4 + -10) = 0;
                }
                break;
              }
              uVar5 = uVar5 + 1;
            } while ((int)uVar5 < iVar2);
          }
        }
        piVar4 = piVar4 + 4;
        local_8 = local_8 + -1;
        if (local_8 == 0) {
          return;
        }
      } while( true );
    }
LAB_0042cf42:
    iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x3bb,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__DelObjFromSaveTmp_007a6328);
    if (iVar2 == 0) {
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 != 0x1a4) {
    if (param_1 == 0x14) {
      piVar4 = &g_playerRuntime[uVar5].field446_0x211;
      local_8 = 10;
      do {
        if ((*(int *)((int)piVar4 + -10) == 0x3c) && (*(int *)((int)piVar4 + -6) == (int)param_2)) {
          uVar5 = 0;
          iVar2 = *(int *)(*piVar4 + 0xc);
          if (0 < iVar2) {
            do {
              FUN_006acc70((AnonShape_006ACC70_C8641025 *)*piVar4,uVar5,&param_1);
              if ((short)param_1 == param_3) {
                param_1 = 0xffff;
                Library::DKW::TBL::FUN_006ae140((uint *)*piVar4,uVar5,&param_1);
                *(short *)(piVar4 + 1) = (short)piVar4[1] + -1;
                if ((short)piVar4[1] == 0) {
                  FUN_006ae110((byte *)*piVar4);
                  *piVar4 = 0;
                  *(undefined4 *)((int)piVar4 + -10) = 0;
                }
                break;
              }
              uVar5 = uVar5 + 1;
            } while ((int)uVar5 < iVar2);
          }
        }
        piVar4 = piVar4 + 4;
        local_8 = local_8 + -1;
        if (local_8 == 0) {
          return;
        }
      } while( true );
    }
    if ((param_1 != 0x5a) && (param_1 != 0x172)) goto LAB_0042cf42;
  }
LAB_0042d011:
  iVar2 = 0;
  psVar3 = &g_playerRuntime[uVar5].field445_0x20f;
  while (((*(int *)(psVar3 + -4) != param_1 || (*(int *)(psVar3 + -2) != (int)param_2)) ||
         (*psVar3 != param_3))) {
    iVar2 = iVar2 + 1;
    psVar3 = psVar3 + 8;
    if (9 < iVar2) {
      return;
    }
  }
  *(undefined4 *)(iVar2 * 0x10 + uVar5 * 0xa62 + 0x7f5027) = 0;
  return;
}

