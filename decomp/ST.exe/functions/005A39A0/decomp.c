
/* [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 005A3AB0 -> 005A39A0 @ 005A3D10 | 005A3AB0 -> 005A39A0 @ 005A3D30 | 005A3AB0 ->
   005A39A0 @ 005A3D53 | 005A3AB0 -> 005A39A0 @ 005A3D76 | 005A3AB0 -> 005A39A0 @ 005A3D96 |
   005A3AB0 -> 005A39A0 @ 005A3DB6 | 005A3AB0 -> 005A39A0 @ 005A3ED2 | 005A3AB0 -> 005A39A0 @
   005A3EF2 | 005A3AB0 -> 005A39A0 @ 005A3F15 | 005A3AB0 -> 005A39A0 @ 005A3F38
   
   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005A39A0 parameter used as this of ccFntTy::SetSurf @ 005A3A50 | 005A39A0 parameter
   used as this of ccFntTy::WrStr @ 005A3A61 */

void __thiscall
FUN_005a39a0(void *this,ccFntTy *param_1,char *text,uint param_3,byte *param_4,int param_5,
            int param_6,int param_7,int param_8)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  uint *puVar12;
  uint local_10 [3];
  
  pbVar3 = thunk_FUN_0055d590(text,param_3,param_4);
  if (pbVar3 != (byte *)0x0) {
    iVar5 = -1;
    pbVar9 = pbVar3;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (bVar1 != 0);
    if (iVar5 != -2) {
      uVar4 = Library::MSVCRT::FUN_0072ff00(pbVar3);
      wsprintfA((LPSTR)local_10,&DAT_007c28fc,uVar4);
      goto LAB_005a3a15;
    }
  }
  uVar6 = 0xffffffff;
  pcVar10 = &DAT_007cc58c;
  do {
    pcVar11 = pcVar10;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar11 = pcVar10 + 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6;
  puVar8 = (uint *)(pcVar11 + -uVar6);
  puVar12 = local_10;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar12 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar12 = puVar12 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(char *)puVar12 = (char)*puVar8;
    puVar8 = (uint *)((int)puVar8 + 1);
    puVar12 = (uint *)((int)puVar12 + 1);
  }
LAB_005a3a15:
  FUN_006b4170(*(int *)((int)this + 0x1ac0),0,param_5,param_6,param_7,param_8,0xff);
  ccFntTy::SetSurf(param_1,*(int *)((int)this + 0x1ac0),0,param_5,param_6,param_7,param_8);
  ccFntTy::WrStr(param_1,local_10,-1,-1,0);
  return;
}

