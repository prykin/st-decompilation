
void __thiscall
thunk_FUN_005c0b00(void *this,int param_1,UINT param_2,int param_3,char param_4,uint *param_5)

{
  short sVar1;
  code *pcVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_64;
  undefined4 auStack_60 [16];
  int *piStack_20;
  byte *pbStack_1c;
  uint *puStack_18;
  int iStack_14;
  char cStack_10;
  undefined3 uStack_f;
  void *pvStack_c;
  undefined4 *puStack_8;
  
  if (*(short *)(param_1 + 0x14) == 3) {
    cVar8 = (-(param_4 != '\0') & 0xedU) + 0x2a;
  }
  else {
    cVar8 = (-(param_4 != '\0') & 0xecU) + 0x2c;
  }
  piStack_20 = *(int **)(param_1 + 0x18);
  _cStack_10 = CONCAT31(uStack_f,cVar8);
  if (param_4 == '\0') {
    iStack_14 = *(int *)((int)this + 0x77);
  }
  else {
    iStack_14 = *(int *)((int)this + 0x7b);
  }
  pbStack_1c = *(byte **)(iStack_14 + 8);
  puStack_8 = *(undefined4 **)(iStack_14 + 4);
  uStack_64 = DAT_00858df8;
  DAT_00858df8 = &uStack_64;
  pvStack_c = this;
  iVar5 = __setjmp3(auStack_60,0,unaff_EDI,unaff_ESI);
  iVar7 = iStack_14;
  if (iVar5 == 0) {
    uVar10 = *(uint *)(iStack_14 + 0x14);
    if (uVar10 == 0) {
      uVar10 = ((uint)*(ushort *)(iStack_14 + 0xe) * *(int *)(iStack_14 + 4) + 0x1f >> 3 &
               0x1ffffffc) * *(int *)(iStack_14 + 8);
    }
    puVar6 = (undefined4 *)FUN_006b4fa0(iStack_14);
    pbVar4 = pbStack_1c;
    for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar6 = 0xff;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    FUN_006c7610(iVar7,0,0,0,(uint)puStack_8,(uint)pbStack_1c,param_3,0x4c);
    FUN_006c7570(iVar7,0,2,2,puStack_8 + -1,(int)(pbVar4 + -4),param_3,(byte)_cStack_10);
    FUN_006c7570(iVar7,0,0,0,puStack_8,(int)pbVar4,param_3,(byte)_cStack_10);
    if (((param_4 == '\0') && (param_2 != 0)) || ((param_4 != '\0' && (param_5 != (uint *)0x0)))) {
      if (param_4 == '\0') {
        param_5 = (uint *)FUN_006b0140(param_2,DAT_00807618);
      }
      puStack_18 = param_5;
      FUN_00710a90(iVar7,0,0,0,0,0);
      sVar1 = *(short *)(param_1 + 0x14);
      if ((sVar1 == 1) || (sVar1 == 2)) {
        iVar5 = (-(uint)(param_4 != '\0') & 0xfffffffe) + 2;
      }
      else if (sVar1 == 3) {
        iVar5 = (-(uint)(param_4 != '\0') & 0xfffffffe) + 3;
      }
      else {
        iVar5 = 4;
      }
      FUN_007119c0(puStack_18,-1,-1,iVar5);
    }
    piVar3 = piStack_20;
    FUN_006b5f80(DAT_008075a8,*piStack_20,piStack_20[1],(int)puStack_8,(int)pbVar4);
    thunk_FUN_00540620(*piVar3,piVar3[1],*piVar3,piVar3[1],(uint)puStack_8,pbVar4,'\x01',
                       *(BITMAPINFO **)((int)pvStack_c + 0x5d));
    FUN_006b48e0(DAT_0080759c,*piVar3,piVar3[1],iVar7,0,0,0,(uint)puStack_8,(int)pbVar4,
                 (int)pvStack_c + 0xa3,0x4c,0x10000ff);
    DAT_00858df8 = (undefined4 *)uStack_64;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_64;
  iVar7 = FUN_006ad4d0(s_E____titans_Start_rpt_obj_cpp_007ccec8,0x2c1,0,iVar5,&DAT_007a4ccc);
  if (iVar7 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar5,0,0x7ccec8,0x2c1);
  return;
}

