
undefined4 __cdecl
FUN_007098a0(int param_1,char param_2,byte *param_3,int param_4,int *param_5,uint *param_6)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  bool bVar8;
  uint local_8;
  
  *param_5 = 0;
  *param_6 = 0xffffffff;
  local_8 = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 4) = 0;
  do {
    iVar5 = *(int *)(param_1 + 4);
    uVar3 = *(uint *)(iVar5 + 4);
    if (*(uint *)(iVar5 + 0xc) <= uVar3) {
      return 0;
    }
    pcVar7 = (char *)(*(int *)(iVar5 + 8) * uVar3 + *(int *)(iVar5 + 0x1c));
    *(uint *)(iVar5 + 4) = uVar3 + 1;
    if (pcVar7 == (char *)0x0) {
      return 0;
    }
    cVar1 = *pcVar7;
    if (cVar1 == param_2) {
      pbVar4 = (byte *)(pcVar7 + 1);
      pbVar6 = param_3;
      do {
        bVar2 = *pbVar4;
        bVar8 = bVar2 < *pbVar6;
        if (bVar2 != *pbVar6) {
LAB_00709921:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00709926;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar4[1];
        bVar8 = bVar2 < pbVar6[1];
        if (bVar2 != pbVar6[1]) goto LAB_00709921;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar2 != 0);
      iVar5 = 0;
LAB_00709926:
      if ((iVar5 == 0) &&
         ((param_4 == *(int *)(pcVar7 + 0x21) || ((cVar1 != '\b' && (cVar1 != '\x1f')))))) {
        *param_6 = local_8;
        iVar5 = *(int *)(param_1 + 4);
        if (*(uint *)(iVar5 + 0xc) <= local_8) {
          *param_5 = 0;
          return *(undefined4 *)(pcVar7 + 0x29);
        }
        *param_5 = *(int *)(iVar5 + 8) * local_8 + *(int *)(iVar5 + 0x1c);
        return *(undefined4 *)(pcVar7 + 0x29);
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

