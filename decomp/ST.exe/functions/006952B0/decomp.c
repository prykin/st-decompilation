
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_006952b0(void *this,AnonShape_006952B0_7A982E30 *param_1,byte *param_2)

{
  int iVar1;
  void *pvVar2;
  bool bVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined4 unaff_ESI;
  AnonShape_006952B0_7A982E30 *pAVar5;
  void *unaff_EDI;
  undefined4 *puVar6;
  InternalExceptionFrame local_d4;
  DArrayTy *local_78;
  DArrayTy *local_74;
  DWORD local_70;
  undefined1 local_6c [24];
  DArrayTy *local_54;
  DArrayTy *local_50;
  void *local_4c;
  DWORD local_48;
  int local_44;
  int local_40;
  uint local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  LPVOID local_8;
  
  local_c = 0;
  local_4c = this;
  Library::MSVCRT::FUN_0072e6b0(*(DWORD *)param_1);
  pAVar5 = param_1;
  puVar6 = (undefined4 *)((int)this + 0x1c);
  for (iVar4 = 0x8c; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *(undefined4 *)pAVar5;
    pAVar5 = (AnonShape_006952B0_7A982E30 *)&pAVar5->field_0x4;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)pAVar5;
  iVar4 = CGenerate::CreateMap(this);
  thunk_FUN_0069ff90((int)this);
  if (iVar4 != 0) {
    local_10 = 1;
    local_48 = timeGetTime();
    local_3c = 0;
    local_70 = timeGetTime();
    local_28 = param_1->field_0214;
    iVar4 = thunk_FUN_00698f90(param_1->field_020C,param_1->field_0210,local_28,
                               (uint)(byte)param_1->field_0x22d,(int *)&local_1c,&local_18);
    if (iVar4 == 0) {
      local_1c = local_28 * 3;
      local_18 = 1;
    }
    local_30 = param_1->field_0225;
    local_34 = param_1->field_0221;
    local_44 = param_1->field_0210 * param_1->field_020C;
    local_38 = param_1->field_0229;
    local_24 = local_44 / 500;
    local_2c = 5;
    local_20 = local_44 / 0x640;
    local_44 = local_44 / 3;
    local_8 = (LPVOID)Library::DKW::LIB::FUN_006aac70(local_28 * 4);
    puVar6 = (undefined4 *)&stack0xffffff70;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    local_54 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x40,10);
    local_78 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x40,10);
    local_50 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,local_1c,0xf,10);
    local_74 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,local_1c,0xf,10);
    local_14 = 0x32;
    while ((0 < local_10 || (local_3c < local_14 + local_48))) {
      local_54->count = 0;
      local_50->count = 0;
      puVar6 = (undefined4 *)local_6c;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      if ((*(int *)((int)this + 8) == 0) && (*(int *)((int)this + 0xc) == 0)) {
        thunk_FUN_006a0150(this);
      }
      CGenerate::CteateField
                (this,**(int **)((int)this + 8) + -2,(*(int **)((int)this + 8))[1] + -2,local_34,
                 local_30,local_38,0);
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
      thunk_FUN_00696dc0(this,*(int *)((int)this + 0x583f),local_2c);
      thunk_FUN_0069ff90((int)this);
      thunk_FUN_00696940(this,*(int *)((int)this + 0x583f));
      thunk_FUN_0069ff90((int)this);
      thunk_FUN_00695eb0(this);
      thunk_FUN_0069ff90((int)this);
      CGenerate::CteateField
                (this,**(int **)((int)this + 8),(*(int **)((int)this + 8))[1],local_34,local_30,
                 local_38,1);
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
      thunk_FUN_00697cf0(this,local_24,local_20);
      thunk_FUN_0069ff90((int)this);
      Library::Ourlib::MFSTMAP::AuxTMapRefreshAll
                (*(short **)((int)this + 0xc),*(int **)((int)this + 8));
      thunk_FUN_0069ff90((int)this);
      thunk_FUN_0069b190(this,**(int **)((int)this + 8) << 1,(*(int **)((int)this + 8))[1] << 1,
                         local_34 + -1);
      thunk_FUN_0069ff90((int)this);
      _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
      local_6c._12_4_ =
           thunk_FUN_0069bdc0(this,local_28,10,10,4,0x23,(int)local_8,
                              (AnonShape_0069BDC0_B656F442 *)local_6c);
      thunk_FUN_0069ff90((int)this);
      _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
      local_6c._8_4_ =
           thunk_FUN_006991c0(this,**(int **)((int)this + 8) << 1,(*(int **)((int)this + 8))[1] << 1
                              ,local_1c,local_18,local_28,(int)local_8,local_34 + -1,
                              (AnonShape_006991C0_D95B9E4A *)local_6c);
      thunk_FUN_0069ff90((int)this);
      _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
      thunk_FUN_00695eb0(this);
      thunk_FUN_0069ff90((int)this);
      bVar3 = thunk_FUN_00695180((AnonShape_00695180_D714D58B *)local_6c,
                                 (AnonShape_00695180_3C0E4B54 *)&stack0xffffff70,(int)&local_38,
                                 local_c);
      if (CONCAT31(extraout_var,bVar3) == 0) {
        thunk_FUN_00694b90(this);
      }
      else {
        local_c = 1;
        thunk_FUN_00695140((undefined4 *)local_6c,(undefined4 *)&stack0xffffff70);
        thunk_FUN_00694c30(this);
      }
      local_3c = timeGetTime();
      local_10 = local_10 + -1;
    }
    if (local_c == 1) {
      thunk_FUN_00694c80(this);
      DAT_00853dd4 = (undefined4 *)
                     Library::DKW::LIB::FUN_006aac70
                               ((*(int **)((int)this + 8))[1] * **(int **)((int)this + 8) * 0x28);
      thunk_FUN_00575640(*(short **)((int)this + 0xc),DAT_00853dd4,(short *)0x1);
      _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
      thunk_FUN_00694cd0(this,(AnonShape_00694CD0_AC50FDB9 *)&stack0xffffff70);
      _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
      thunk_FUN_006a0470(this);
      thunk_FUN_0069ff90((int)this);
      _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
      thunk_FUN_0069cb50(this);
      _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
      iVar4 = **(int **)((int)this + 8);
      iVar1 = (*(int **)((int)this + 8))[1];
      thunk_FUN_0069f160(this,iVar4 * 2,iVar1 * 2,local_34,(iVar4 * iVar1 * 4) / 100);
      local_40 = CGenerate::SaveMap(this);
      thunk_FUN_0069ff90((int)this);
      if (DAT_00853dd4 != (undefined4 *)0x0) {
        FUN_006ab060(&DAT_00853dd4);
      }
      local_d4.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_d4;
      iVar4 = Library::MSVCRT::__setjmp3(local_d4.jumpBuffer,0,unaff_EDI,unaff_ESI);
      pvVar2 = local_4c;
      if (iVar4 == 0) {
        if (param_2 != (byte *)0x0) {
          cMf32::RecPut(*(cMf32 **)((int)local_4c + 0x18),0xc,PTR_s_GENERATE_RND_0079d774,
                        (byte *)param_1,0x232,(undefined4 *)0x0,'\0',(uint *)0x0);
          cMf32::RecPut(*(cMf32 **)((int)pvVar2 + 0x18),0xc,PTR_s_INTERFACE_RND_0079d778,param_2,0xd
                        ,(undefined4 *)0x0,'\0',(uint *)0x0);
          thunk_FUN_0069ff90((int)pvVar2);
        }
        g_currentExceptionFrame = local_d4.previous;
      }
      else {
        g_currentExceptionFrame = local_d4.previous;
      }
    }
    else {
      local_40 = 0;
    }
    if (local_8 != (LPVOID)0x0) {
      FUN_006ab060(&local_8);
    }
    FUN_006ae110((byte *)local_54);
    FUN_006ae110((byte *)local_78);
    FUN_006ae110((byte *)local_50);
    FUN_006ae110((byte *)local_74);
    timeGetTime();
    return local_40;
  }
  return 0;
}

