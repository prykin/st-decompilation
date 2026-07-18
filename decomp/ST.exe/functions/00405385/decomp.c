
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall thunk_FUN_006952b0(void *this,byte *param_1,byte *param_2)

{
  int iVar1;
  void *pvVar2;
  bool bVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined4 unaff_ESI;
  byte *pbVar5;
  void *unaff_EDI;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uStack_d4;
  undefined4 auStack_d0 [16];
  undefined4 auStack_90 [6];
  uint *puStack_78;
  uint *puStack_74;
  DWORD DStack_70;
  int aiStack_6c [6];
  uint *puStack_54;
  uint *puStack_50;
  void *pvStack_4c;
  DWORD DStack_48;
  int iStack_44;
  int iStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  uint uStack_28;
  int iStack_24;
  int iStack_20;
  uint uStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iStack_c = 0;
  pvStack_4c = this;
  FUN_0072e6b0(*(undefined4 *)param_1);
  pbVar5 = param_1;
  puVar6 = (undefined4 *)((int)this + 0x1c);
  for (iVar4 = 0x8c; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *(undefined4 *)pbVar5;
    pbVar5 = pbVar5 + 4;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)pbVar5;
  iVar4 = CGenerate::CreateMap(this);
  thunk_FUN_0069ff90((int)this);
  if (iVar4 != 0) {
    iStack_10 = 1;
    DStack_48 = timeGetTime();
    uStack_3c = 0;
    DStack_70 = timeGetTime();
    uStack_28 = *(uint *)(param_1 + 0x214);
    iVar4 = thunk_FUN_00698f90(*(int *)(param_1 + 0x20c),*(int *)(param_1 + 0x210),uStack_28,
                               (uint)param_1[0x22d],(int *)&uStack_1c,&iStack_18);
    if (iVar4 == 0) {
      uStack_1c = uStack_28 * 3;
      iStack_18 = 1;
    }
    uStack_30 = *(undefined4 *)(param_1 + 0x225);
    iStack_34 = *(int *)(param_1 + 0x221);
    iStack_44 = *(int *)(param_1 + 0x210) * *(int *)(param_1 + 0x20c);
    uStack_38 = *(undefined4 *)(param_1 + 0x229);
    iStack_24 = iStack_44 / 500;
    iStack_2c = 5;
    iStack_20 = iStack_44 / 0x640;
    iStack_44 = iStack_44 / 3;
    iStack_8 = FUN_006aac70(uStack_28 * 4);
    puVar6 = auStack_90;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    puStack_54 = FUN_006ae290((uint *)0x0,10,0x40,10);
    puStack_78 = FUN_006ae290((uint *)0x0,10,0x40,10);
    puStack_50 = FUN_006ae290((uint *)0x0,uStack_1c,0xf,10);
    puStack_74 = FUN_006ae290((uint *)0x0,uStack_1c,0xf,10);
    iStack_14 = 0x32;
    while ((0 < iStack_10 || (uStack_3c < iStack_14 + DStack_48))) {
      puStack_54[3] = 0;
      puStack_50[3] = 0;
      piVar7 = aiStack_6c;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar7 = 0;
        piVar7 = piVar7 + 1;
      }
      if ((*(int *)((int)this + 8) == 0) && (*(int *)((int)this + 0xc) == 0)) {
        thunk_FUN_006a0150((int)this);
      }
      CGenerate::CteateField
                (this,**(int **)((int)this + 8) + -2,(*(int **)((int)this + 8))[1] + -2,iStack_34,
                 uStack_30,uStack_38,0);
      thunk_FUN_0069ff90((int)this);
      thunk_FUN_00696790((int)this);
      thunk_FUN_0069ff90((int)this);
      thunk_FUN_00696810(this);
      thunk_FUN_0069ff90((int)this);
      thunk_FUN_00696740(this,0);
      thunk_FUN_0069ff90((int)this);
      iVar4 = thunk_FUN_006971b0((int)this);
      *(int *)((int)this + 0x583f) = iVar4;
      thunk_FUN_0069ff90((int)this);
      thunk_FUN_00696dc0(this,*(int *)((int)this + 0x583f),iStack_2c);
      thunk_FUN_0069ff90((int)this);
      thunk_FUN_00696940(this,*(int *)((int)this + 0x583f));
      thunk_FUN_0069ff90((int)this);
      thunk_FUN_00695eb0(this);
      thunk_FUN_0069ff90((int)this);
      CGenerate::CteateField
                (this,**(int **)((int)this + 8),(*(int **)((int)this + 8))[1],iStack_34,uStack_30,
                 uStack_38,1);
      thunk_FUN_0069ff90((int)this);
      thunk_FUN_00697390(this);
      thunk_FUN_0069ff90((int)this);
      thunk_FUN_006975f0(this);
      thunk_FUN_0069ff90((int)this);
      thunk_FUN_00695f20(this);
      thunk_FUN_0069ff90((int)this);
      thunk_FUN_00697390(this);
      thunk_FUN_0069ff90((int)this);
      thunk_FUN_00696740(this,1);
      thunk_FUN_0069ff90((int)this);
      thunk_FUN_006978c0((int)this);
      thunk_FUN_0069ff90((int)this);
      thunk_FUN_00695f20(this);
      thunk_FUN_0069ff90((int)this);
      thunk_FUN_00697390(this);
      thunk_FUN_0069ff90((int)this);
      thunk_FUN_00696740(this,1);
      thunk_FUN_0069ff90((int)this);
      thunk_FUN_006988c0(this);
      thunk_FUN_0069ff90((int)this);
      thunk_FUN_00697cf0(this,iStack_24,iStack_20);
      thunk_FUN_0069ff90((int)this);
      FUN_006f0c00(*(short **)((int)this + 0xc),*(int **)((int)this + 8));
      thunk_FUN_0069ff90((int)this);
      thunk_FUN_0069b190(this,**(int **)((int)this + 8) << 1,(*(int **)((int)this + 8))[1] << 1,
                         iStack_34 + -1);
      thunk_FUN_0069ff90((int)this);
      _DAT_00853dd0 = FUN_0072e6c0();
      aiStack_6c[3] = thunk_FUN_0069bdc0(this,uStack_28,10,10,4,0x23,iStack_8,(int)aiStack_6c);
      thunk_FUN_0069ff90((int)this);
      _DAT_00853dd0 = FUN_0072e6c0();
      aiStack_6c[2] =
           thunk_FUN_006991c0(this,**(int **)((int)this + 8) << 1,(*(int **)((int)this + 8))[1] << 1
                              ,uStack_1c,iStack_18,uStack_28,iStack_8,iStack_34 + -1,(int)aiStack_6c
                             );
      thunk_FUN_0069ff90((int)this);
      _DAT_00853dd0 = FUN_0072e6c0();
      thunk_FUN_00695eb0(this);
      thunk_FUN_0069ff90((int)this);
      bVar3 = thunk_FUN_00695180((int)aiStack_6c,(int)auStack_90,(int)&uStack_38,iStack_c);
      if (CONCAT31(extraout_var,bVar3) == 0) {
        thunk_FUN_00694b90((int)this);
      }
      else {
        iStack_c = 1;
        thunk_FUN_00695140(aiStack_6c,auStack_90);
        thunk_FUN_00694c30((int)this);
      }
      uStack_3c = timeGetTime();
      iStack_10 = iStack_10 + -1;
    }
    if (iStack_c == 1) {
      thunk_FUN_00694c80((int)this);
      DAT_00853dd4 = (undefined4 *)
                     FUN_006aac70((*(int **)((int)this + 8))[1] * **(int **)((int)this + 8) * 0x28);
      thunk_FUN_00575640(*(short **)((int)this + 0xc),DAT_00853dd4,(short *)0x1);
      _DAT_00853dd0 = FUN_0072e6c0();
      thunk_FUN_00694cd0(this,(int)auStack_90);
      _DAT_00853dd0 = FUN_0072e6c0();
      thunk_FUN_006a0470((int)this);
      thunk_FUN_0069ff90((int)this);
      _DAT_00853dd0 = FUN_0072e6c0();
      thunk_FUN_0069cb50(this);
      _DAT_00853dd0 = FUN_0072e6c0();
      iVar4 = **(int **)((int)this + 8);
      iVar1 = (*(int **)((int)this + 8))[1];
      thunk_FUN_0069f160(this,iVar4 * 2,iVar1 * 2,iStack_34,(iVar4 * iVar1 * 4) / 100);
      iStack_40 = CGenerate::SaveMap(this);
      thunk_FUN_0069ff90((int)this);
      if (DAT_00853dd4 != (undefined4 *)0x0) {
        FUN_006ab060(&DAT_00853dd4);
      }
      uStack_d4 = DAT_00858df8;
      DAT_00858df8 = &uStack_d4;
      iVar4 = __setjmp3(auStack_d0,0,unaff_EDI,unaff_ESI);
      pvVar2 = pvStack_4c;
      if (iVar4 == 0) {
        if (param_2 != (byte *)0x0) {
          FUN_006f13f0(0xc,PTR_s_GENERATE_RND_0079d774,param_1,0x232,(undefined4 *)0x0,'\0',
                       (uint *)0x0);
          FUN_006f13f0(0xc,PTR_s_INTERFACE_RND_0079d778,param_2,0xd,(undefined4 *)0x0,'\0',
                       (uint *)0x0);
          thunk_FUN_0069ff90((int)pvVar2);
        }
        DAT_00858df8 = (undefined4 *)uStack_d4;
      }
      else {
        DAT_00858df8 = (undefined4 *)uStack_d4;
      }
    }
    else {
      iStack_40 = 0;
    }
    if (iStack_8 != 0) {
      FUN_006ab060(&iStack_8);
    }
    FUN_006ae110((byte *)puStack_54);
    FUN_006ae110((byte *)puStack_78);
    FUN_006ae110((byte *)puStack_50);
    FUN_006ae110((byte *)puStack_74);
    timeGetTime();
    return iStack_40;
  }
  return 0;
}

