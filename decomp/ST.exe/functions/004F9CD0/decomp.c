
void FUN_004f9cd0(char *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  short *psVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  byte bVar7;
  byte bVar8;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (DAT_00806758 != 0) {
      iVar3 = FUN_00715050(DAT_00806758,param_1,0);
      if (iVar3 != 0) {
        _strncpy(&DAT_0080c4d7,param_1,0x1f);
        DAT_0080c4f6 = 0;
        if (*(byte **)(local_8 + 0x24b) != (byte *)0x0) {
          FUN_006ae110(*(byte **)(local_8 + 0x24b));
        }
        *(int *)(local_8 + 0x24b) = iVar3;
        piVar1 = (int *)(local_8 + 0x25b);
        *(undefined4 *)(local_8 + 599) = *(undefined4 *)(local_8 + 0x253);
        *(undefined4 *)(local_8 + 0x24f) = 0;
        if (*piVar1 != 0) {
          FUN_0070b600(piVar1);
        }
        iVar3 = 1;
        bVar8 = 0;
        bVar7 = 6;
        pcVar4 = (char *)thunk_FUN_005260b0(0,0,0);
        psVar5 = FUN_0070b430(DAT_00806790,pcVar4,bVar7,bVar8,iVar3);
        *piVar1 = (int)psVar5;
        *(undefined1 *)(local_8 + 0x260) = 1;
        *(undefined1 *)(local_8 + 0x25f) = 0;
        FUN_006b4170(*(int *)(local_8 + 0x1b4),0,100,5,0x226,0x55,0);
        if ((DAT_0080c4f7 != 3) && (DAT_0080c4f7 != 1)) {
          *(undefined1 *)(local_8 + 0x260) = 3;
          DAT_0080c4f7 = 3;
          FUN_006b3430(DAT_008075a8,*(uint *)(local_8 + 0x17c));
        }
      }
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar6 = FUN_006ad4d0(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x3c8,0,iVar3,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c1bd8,0x3c8);
  return;
}

