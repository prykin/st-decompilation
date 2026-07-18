
undefined4 __thiscall FUN_004abce0(void *this,byte param_1,int param_2,int param_3,char param_4)

{
  ushort *puVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)((int)this + 0x18) != -1) {
    if ((-1 < (char)param_1) && ((int)(char)param_1 <= *(int *)((int)this + 0x14) + -1)) {
      iVar7 = (char)param_1 * 0x24;
      iVar6 = iVar7 + *(int *)((int)this + 0x20);
      piVar4 = *(int **)(iVar7 + *(int *)((int)this + 0x20));
      if (piVar4 != (int *)0x0) {
        if ((((-1 < param_2) && (iVar5 = *piVar4 + -1, param_2 <= iVar5)) && (-1 < param_3)) &&
           (param_3 <= iVar5)) {
          if (param_4 == '\0') {
            puVar1 = (ushort *)(iVar6 + 0xe);
            *puVar1 = *puVar1 & 0xfdff;
          }
          else {
            pbVar2 = (byte *)(iVar6 + 0xf);
            *pbVar2 = *pbVar2 | 2;
          }
          STT3DSprC::StopShow(this,param_1);
          iVar6 = iVar7 + *(int *)((int)this + 0x20);
          if ((*(byte *)(iVar7 + 0xe + *(int *)((int)this + 0x20)) & 2) == 0) {
            *(int *)(iVar6 + 0x10) = param_2;
            *(int *)(iVar7 + 0x14 + *(int *)((int)this + 0x20)) = param_3;
          }
          else {
            *(int *)(iVar6 + 0x10) = param_3;
            *(int *)(iVar7 + 0x14 + *(int *)((int)this + 0x20)) = param_2;
          }
          puVar3 = (undefined4 *)(iVar7 + *(int *)((int)this + 0x20));
          iVar6 = *(int *)(iVar7 + 0x18 + *(int *)((int)this + 0x20));
          if ((-1 < iVar6) && (piVar4 = (int *)*puVar3, iVar6 < *piVar4)) {
            *(undefined4 *)(puVar3[1] + iVar6 * 4) = *(undefined4 *)((int)piVar4 + iVar6 * 4 + 0x31)
            ;
          }
          iVar6 = *(int *)((int)this + 0x20) + iVar7;
          *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar6 + 0x10);
          if (param_1 == *(byte *)((int)this + 0x13)) {
            *(undefined4 *)((int)this + 0x30) =
                 *(undefined4 *)(iVar7 + 0x18 + *(int *)((int)this + 0x20));
          }
          return 0;
        }
      }
    }
  }
  return 0xffffffff;
}

