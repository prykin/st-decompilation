
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __cdecl
FUN_00428ce0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            byte param_8)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  if ((param_5 < 1) || (param_6 < 1)) {
    return 0;
  }
  do {
    iVar6 = param_5 + -1;
    iVar7 = 0;
    do {
      cVar2 = *(char *)(param_3 + iVar7);
      iVar5 = iVar6;
      iVar8 = iVar7;
      while (cVar2 != -1) {
        bVar3 = *(byte *)(param_1 + iVar8);
        if (bVar3 != 0xff) {
          DAT_007f4e04 = 1;
          *(undefined1 *)(param_1 + iVar8) = 0xff;
          if ((*(char *)(param_3 + 1 + iVar8) != -1) && (*(char *)(param_1 + 1 + iVar8) != -1)) {
            pbVar1 = (byte *)(param_7 + (uint)bVar3);
            *pbVar1 = *pbVar1 | param_8;
          }
        }
        if (iVar5 + -1 == 0 || iVar5 < 1) goto LAB_00428d4e;
        cVar2 = *(char *)(param_3 + iVar8 + 1);
        iVar5 = iVar5 + -1;
        iVar8 = iVar8 + 1;
      }
      iVar7 = iVar8 + 1;
      iVar6 = iVar5 + -1;
    } while (iVar6 != 0 && 0 < iVar5);
LAB_00428d4e:
    iVar8 = iVar8 + 1;
    bVar3 = *(byte *)(param_1 + iVar8);
    if ((*(char *)(param_3 + iVar8) != -1) && (bVar3 != 0xff)) {
      DAT_007f4e04 = 1;
      *(undefined1 *)(param_1 + iVar8) = 0xff;
      pbVar1 = (byte *)(param_7 + (uint)bVar3);
      *pbVar1 = *pbVar1 | param_8;
    }
    param_3 = param_3 + param_4;
    param_1 = param_1 + param_2;
    iVar6 = param_6 + -1;
    bVar4 = param_6 < 1;
    param_6 = iVar6;
    if (iVar6 == 0 || bVar4) {
      return DAT_007f4e04;
    }
  } while( true );
}

