
/* [STMethodOwnerApplier] Structural method owner recovered as STColl3C.
   Evidence: this_call_owners=[STColl3C]; agreed_this_calls=1; incoming_this_accesses=15;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STColl3C::sub_005F6F60(STColl3C *this)

{
  STColl3CVTable_at_1D5 **this_00;
  short sVar1;
  undefined1 uVar2;
  bool bVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  STColl3C_field_02DDState SVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_00;
  uint uVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined2 uVar12;
  undefined4 local_2c;
  undefined4 local_28;
  ushort *local_24;
  uint local_20;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  short local_a;
  short local_8;
  short local_6;

  switch(this->field_02DD) {
  case CASE_1:
    if ((this->field_02E1 <= g_playSystem_00802A38->field_00E4) && (this->field_02EA == 0)) {
      if (this->field_02B7 < 0) {
        iVar6 = thunk_FUN_005f8650(this,this->field_0245,this->field_0249,this->field_024D);
        if (iVar6 != 0) {
          uVar11 = thunk_FUN_005f6ad0();
          this->field_02B6 = (char)uVar11;
          if ((char)uVar11 != '\0') {
            LoadImagSpr(this,1);
          }
          this->field_02BB = 1;
          this->field_029D = 1;
          this->field_02DD = CASE_2;
          this->field_02E5 = 0;
          return;
        }
      }
      else {
        iVar6 = sub_005FA8B0(this,&this->field_027D,&this->field_0281,&this->field_0285);
        if (((iVar6 != 0) && (iVar6 = thunk_FUN_005f89f0(this,2), iVar6 != 0)) &&
           (iVar6 = thunk_FUN_00417a20(this,*(short *)&this->field_0291,*(short *)&this->field_0295,
                                       *(short *)&this->field_0299,1), iVar6 == 0)) {
          this->field_02DD = CASE_3;
          thunk_FUN_004ad5e0((int)&this->vtable_at_1d5);
          this->field_02BB = 2;
          iVar6 = *(short *)(DAT_00806724 + 0x23) + -1;
          this->field_02D1 = iVar6;
          STT3DSprC::sub_004ACE30
                    ((STT3DSprC *)&this->vtable_at_1d5,*(uint *)(DAT_00806724 + 0x30 + iVar6 * 4),
                     (int)*(short *)(DAT_00806724 + 0x2c));
          thunk_FUN_005fada0(this,0,0,2);
          if (this->field_02A0 == 0) {
            this->field_029F = 0;
            return;
          }
        }
      }
    }
    break;
  case CASE_2:
    if (this->field_02E5 != '\0') {
      this->field_02DD = CASE_1;
      return;
    }
    if (this->field_02EA != 0) {
      if (this->field_029E != '\0') {
        sub_005F9450(this);
      }
      if (this->field_02A0 < 1) goto cf_common_exit_005F7A68;
      this->field_029F = 1;
    }
    if (this->field_029F == '\0') {
      if (this->field_029E == '\0') {
        if ((g_playSystem_00802A38->field_00E4 + this->field_0018 & 3) != 0) {
          return;
        }
        uVar2 = thunk_FUN_005f9310(this,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (CONCAT31(extraout_var,uVar2) != 0) {
          this->field_028D = 0;
          return;
        }
        iVar6 = this->field_028D + 1;
        this->field_028D = iVar6;
        if (iVar6 < 6) {
          if (iVar6 < 0xb) {
            return;
          }
          goto LAB_005f744e;
        }
        iVar6 = thunk_FUN_005f89f0(this,2);
        if (iVar6 == 0) {
          return;
        }
        iVar6 = thunk_FUN_00417a20(this,*(short *)&this->field_0291,*(short *)&this->field_0295,
                                   *(short *)&this->field_0299,1);
        if (iVar6 != 0) {
          return;
        }
        this->field_02DD = CASE_3;
        thunk_FUN_004ad5e0((int)&this->vtable_at_1d5);
        this->field_02BB = 2;
        sVar1 = *(short *)(DAT_00806724 + 0x23);
        goto LAB_005f7400;
      }
      iVar6 = thunk_FUN_005f88d0(this,this->field_0289,0,(int *)0x0,(undefined4 *)0x0,
                                 (undefined4 *)0x0);
      if (iVar6 == 0) {
        sub_005F9450(this);
        return;
      }
      iVar6 = thunk_FUN_005f89f0(this,2);
      if (iVar6 == 0) {
        return;
      }
      iVar6 = thunk_FUN_00417a20(this,*(short *)&this->field_0291,*(short *)&this->field_0295,
                                 *(short *)&this->field_0299,1);
      if (iVar6 != 0) {
        return;
      }
      this->field_02DD = CASE_3;
      thunk_FUN_004ad5e0((int)&this->vtable_at_1d5);
      this->field_02BB = 2;
      iVar6 = *(short *)(DAT_00806724 + 0x23) + -1;
      this->field_02D1 = iVar6;
      STT3DSprC::sub_004ACE30
                ((STT3DSprC *)&this->vtable_at_1d5,*(uint *)(DAT_00806724 + 0x30 + iVar6 * 4),
                 (int)*(short *)(DAT_00806724 + 0x2c));
      thunk_FUN_005fada0(this,0,0,2);
      this->field_02BB = 1;
      this->field_029D = 0;
    }
    else {
      iVar6 = sub_005FA8B0(this,&this->field_027D,&this->field_0281,&this->field_0285);
      if (iVar6 == 0) {
LAB_005f744e:
        thunk_FUN_005faff0(this,200);
        return;
      }
      iVar6 = thunk_FUN_005f89f0(this,2);
      if (iVar6 == 0) {
        return;
      }
      iVar6 = thunk_FUN_00417a20(this,*(short *)&this->field_0291,*(short *)&this->field_0295,
                                 *(short *)&this->field_0299,1);
      if (iVar6 != 0) {
        return;
      }
      this->field_02DD = CASE_3;
      thunk_FUN_004ad5e0((int)&this->vtable_at_1d5);
      this->field_02BB = 2;
      sVar1 = *(short *)(DAT_00806724 + 0x23);
LAB_005f7400:
      this->field_02D1 = sVar1 + -1;
      STT3DSprC::sub_004ACE30
                ((STT3DSprC *)&this->vtable_at_1d5,*(uint *)(DAT_00806724 + 0x30 + (sVar1 + -1) * 4)
                 ,(int)*(short *)(DAT_00806724 + 0x2c));
      thunk_FUN_005fada0(this,0,0,2);
      if (this->field_02A0 == 0) {
        this->field_029F = 0;
      }
    }
    iVar6 = thunk_FUN_005f8650(this,(int)(short)(*(short *)&this->field_0291 * 0xc9 + 100),
                               (int)(short)(*(short *)&this->field_0295 * 0xc9 + 100),
                               (int)(short)(*(short *)&this->field_0299 * 200 + 100));
    if (iVar6 != 0) {
      thunk_FUN_005f6df0((STAllPlayersC *)this);
      thunk_FUN_004ad460(&this->vtable_at_1d5,0);
      TLOEmbryoTy::sub_0041C3F0((TLOEmbryoTy *)this,(undefined *)0x2);
      this->field_02BB = 2;
      iVar6 = *(short *)(DAT_00806724 + 0x23) + -1;
      this->field_02D1 = iVar6;
      STT3DSprC::sub_004ACE30
                ((STT3DSprC *)&this->vtable_at_1d5,*(uint *)(DAT_00806724 + 0x30 + iVar6 * 4),
                 (int)*(short *)(DAT_00806724 + 0x2c));
      return;
    }
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case CASE_3:
    *(int *)(this->field_02E6 + 0x10) = *(int *)(this->field_02E6 + 0x10) + 1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(this->field_02E6 + 0x10) < 0x23) {
      thunk_FUN_005f9e40((AnonShape_005F9E40_7E333F34 *)this);
    }
    else {
      this->field_02DD = CASE_4;
      uVar5 = *(uint *)(this->field_02E6 + 2);
      if (-1 < (int)uVar5) {
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006EA050::FUN_006ea050
                  (this->field_0211,uVar5,1,0xffffffff,0);
        puVar8 = this->field_02E6;
        puVar8[2] = 0xffff;
        puVar8[3] = 0xffff;
        thunk_FUN_005fa030((AnonShape_005F9F70_43CA4DAC *)this);
      }
    }
  case CASE_4:
    iVar6 = thunk_FUN_005fa180((AnonShape_005FA180_2D8671A3 *)this);
    if (iVar6 < 0) {
      if (this->field_02EA != 0) {
        if (this->field_029E != '\0') {
          sub_005F9450(this);
        }
        if (this->field_02A0 < 1) {
cf_common_exit_005F7A68:
          thunk_FUN_005fb100((AnonShape_005FB100_42251CC8 *)this);
          return;
        }
        this->field_029F = 1;
      }
      if (this->field_029E == '\0') {
        this->field_02DD = CASE_C;
        this->field_02EF = 0;
        this->field_0076 = 1;
        this->field_02D5 = g_playSystem_00802A38->field_00E4;
        this->field_02D9 = g_playSystem_00802A38->field_00E4 + 0x32;
        return;
      }
      iVar6 = thunk_FUN_005f8cc0(this);
      if (-1 < iVar6) {
        if (iVar6 == 2) {
          this->field_02DD = (-(uint)(this->field_029F != '\0') & 2) + CASE_8;
          return;
        }
        this->field_02DD = CASE_5;
        this->field_029D = 0;
        return;
      }
      this->field_02DD = CASE_C;
      this->field_02EF = 0;
      this->field_0076 = 1;
LAB_005f79aa:
      this->field_02D5 = g_playSystem_00802A38->field_00E4;
      this->field_02D9 = g_playSystem_00802A38->field_00E4 + 0x32;
      return;
    }
    break;
  case CASE_5:
    if (this->field_02EA != 0) {
      (*this->vtable[8].vfunc_00)();
    }
    SVar4 = thunk_FUN_005f8d10((int *)this);
    this->field_02DD = SVar4;
    return;
  case CASE_6:
    iVar6 = thunk_FUN_005fa180((AnonShape_005FA180_2D8671A3 *)this);
    if (*(short *)(DAT_00806724 + 0x23) <= iVar6) {
      this->field_02DD = CASE_2;
      return;
    }
    break;
  case CASE_6|CASE_1:
    if (this->field_02E1 <= g_playSystem_00802A38->field_00E4) {
      this->field_02EE = 0;
      this->field_02DD = CASE_1;
      thunk_FUN_00495ff0(this->field_005B,this->field_005D,this->field_005F,0,
                         (AnonShape_00495FF0_59081BDD *)this);
      thunk_FUN_004ad430((int)&this->vtable_at_1d5);
      this->field_02BB = 0;
      sub_0041C5A0(this);
      return;
    }
    break;
  case CASE_8:
    if (this->field_02EA == 0) {
      STFishC::sub_004162B0((STFishC *)this,&local_8,&local_6,&local_a);
      if ((int)local_8 != this->field_0291) {
        return;
      }
      if ((int)local_6 != this->field_0295) {
        return;
      }
      iVar6 = thunk_FUN_005f88d0(this,this->field_0289,1,(int *)&local_24,&local_2c,&local_28);
      if (iVar6 != 0) {
        iVar6 = CreateAddSpr(this);
        if (iVar6 < 1) {
          return;
        }
        puVar8 = this->field_02E6 + 4;
        for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined4 *)puVar8 = *(undefined4 *)local_24;
          local_24 = local_24 + 2;
          puVar8 = puVar8 + 2;
        }
        *puVar8 = *local_24;
        (&this->field_0x2a4)[this->field_02A0 * 6] = 1;
        *(undefined4 *)(&this->field_0x2a6 + this->field_02A0 * 6) = local_28;
        (&this->field_0x2a5)[this->field_02A0 * 6] = *(undefined1 *)&this->field_0024;
        if (iVar6 == 2) {
          *(undefined4 *)this->field_02E6 = local_2c;
        }
        if (*(int *)this->field_02E6 != 0) {
          uVar12 = 30000;
          uVar10 = 0;
          iVar7 = 0;
          iVar6 = 1;
          uVar9 = 0xe;
          uVar5 = thunk_FUN_004ad650(*(int *)this->field_02E6);
          FUN_006e9ef0(this->field_0211,uVar5,uVar9,iVar6,iVar7,uVar10,uVar12);
        }
        thunk_FUN_005f8810(this,this->field_0289);
        iVar6 = thunk_FUN_005f95b0((AnonShape_005F95B0_F363C582 *)this);
        if (iVar6 == 0) {
          return;
        }
        *(uint *)(this->field_02E6 + 0x34) = g_playSystem_00802A38->field_00E4;
        puVar8 = this->field_02E6;
        this->field_02DD = CASE_9;
        puVar8[0x32] = 1;
        puVar8[0x33] = 0;
        this->field_02E6[0x19] = 0xffff;
        *(int *)(this->field_02E6 + 0x30) = *(int *)(this->field_02E6 + 0x2e) + -1;
        return;
      }
    }
    sub_005F9450(this);
    this->field_02DD = CASE_C;
    this->field_02D5 = g_playSystem_00802A38->field_00E4;
    uVar5 = g_playSystem_00802A38->field_00E4;
    this->field_02BB = 1;
    this->field_02EF = 0;
    this->field_02D9 = uVar5 + 0x32;
    this->field_0076 = 1;
    if (0 < this->field_02A0) {
      this->field_029F = 1;
      return;
    }
LAB_005f7efc:
    this->field_029F = 0;
    return;
  case CASE_9:
    iVar6 = thunk_FUN_005f9cb0(this,g_playSystem_00802A38->field_00E4,&local_14,&local_18,&local_10)
    ;
    if (iVar6 == 1) {
      *(int *)(this->field_02E6 + 10) = local_14;
      *(int *)(this->field_02E6 + 0xc) = local_18;
      *(int *)(this->field_02E6 + 0xe) = local_10;
      *(int *)(this->field_02E6 + 0x10) = *(int *)(this->field_02E6 + 0x10) + 1;
      puVar8 = this->field_02E6;
      if (*(int *)(puVar8 + 0x12) <= *(int *)(puVar8 + 0x10)) {
        puVar8[0x10] = 0;
        puVar8[0x11] = 0;
      }
      thunk_FUN_005f9e40((AnonShape_005F9E40_7E333F34 *)this);
      return;
    }
    if (iVar6 == 3) {
      thunk_FUN_005fa030((AnonShape_005F9F70_43CA4DAC *)this);
      iVar6 = sub_005FA8B0(this,&this->field_027D,&this->field_0281,&this->field_0285);
      if (iVar6 == 0) {
        this->field_0281 = this->field_0261;
        this->field_027D = this->field_025D;
        this->field_0285 = this->field_0265;
        sub_005F9450(this);
      }
      else {
        this->field_029E = 1;
      }
      STFishC::sub_004162B0((STFishC *)this,&local_8,&local_6,&local_a);
      iVar6 = thunk_FUN_005fa360(this,(undefined4 *)local_1c,(int)local_8,(int)local_6,(int)local_a,
                                 &local_14,&local_18,&local_10);
      if (iVar6 != 0) {
        this->field_02A0 = this->field_02A0 + 1;
        iVar6 = thunk_FUN_005fb600(this);
        if (iVar6 == 0) {
          iVar6 = thunk_FUN_005fa7f0(this,local_14,local_18,local_10);
          if (iVar6 == 0) {
            return;
          }
          this->field_02DD = CASE_5;
          this->field_02BB = 1;
          this->field_029D = local_1c[0];
          this->field_029F = 1;
          return;
        }
        this->field_02DD = CASE_C;
        this->field_02D5 = g_playSystem_00802A38->field_00E4;
        uVar5 = g_playSystem_00802A38->field_00E4;
        this->field_02EF = 0;
        this->field_02BB = 1;
        this->field_02D9 = uVar5 + 0x32;
        this->field_0076 = 1;
        goto LAB_005f7efc;
      }
    }
    break;
  case CASE_A:
    iVar6 = thunk_FUN_005f9050(this,&local_10,&local_20);
    if (iVar6 != 0) {
      this->field_02DD = CASE_B;
      thunk_FUN_005fada0(this,local_10,local_20,1);
      return;
    }
    this->field_02DD = CASE_C;
    this->field_0076 = 1;
    this->field_02EF = 0;
    goto LAB_005f79aa;
  case CASE_B:
    bVar3 = thunk_FUN_005faee0((AnonShape_005FAEE0_B5D482C5 *)this);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    if (CONCAT31(extraout_var_00,bVar3) != 0) {
      iVar6 = this->field_02A0;
      if ((&this->field_029E)[iVar6 * 6] != '\0') {
        thunk_FUN_005f91e0(this,*(int *)((int)&this->field_02A0 + iVar6 * 6),iVar6 + -1);
        (&this->field_029E)[this->field_02A0 * 6] = 0;
        iVar6 = this->field_02A0 + -1;
        this->field_02A0 = iVar6;
        if (0 < iVar6) {
          thunk_FUN_005fac40(this,1,1,0,0,0,0);
          return;
        }
      }
      thunk_FUN_005fa030((AnonShape_005F9F70_43CA4DAC *)this);
      this->field_029F = 0;
      this->field_02A0 = 0;
      if (this->field_02EA != 0) goto cf_common_exit_005F7A68;
      thunk_FUN_005f9310(this,0);
      if (this->field_029E == '\0') {
        iVar6 = thunk_FUN_005f89f0(this,2);
        if (iVar6 != 0) {
          local_20 = thunk_FUN_005fa7f0(this,this->field_0291,this->field_0295,this->field_0299);
          if (-1 < (int)local_20) {
            this->field_02DD = CASE_5;
            this->field_029D = 3;
            thunk_FUN_005f9e40((AnonShape_005F9E40_7E333F34 *)this);
            return;
          }
          this->field_02DD = CASE_C;
          this->field_02EF = 0;
          this->field_0076 = 1;
          this->field_02D5 = g_playSystem_00802A38->field_00E4;
          this->field_02D9 = g_playSystem_00802A38->field_00E4 + 0x32;
          thunk_FUN_005f9e40((AnonShape_005F9E40_7E333F34 *)this);
          return;
        }
        this->field_02DD = CASE_C;
        this->field_02EF = 0;
        this->field_0076 = 1;
        this->field_02D5 = g_playSystem_00802A38->field_00E4;
        this->field_02D9 = g_playSystem_00802A38->field_00E4 + 0x32;
      }
      else {
        iVar6 = thunk_FUN_005f89f0(this,2);
        if (iVar6 != 0) {
          STFishC::sub_004162B0((STFishC *)this,&local_8,&local_6,&local_a);
          iVar6 = thunk_FUN_005fa360(this,(undefined4 *)local_1c,(int)local_8,(int)local_6,
                                     (int)local_a,&local_14,&local_18,&local_10);
          if ((iVar6 != 0) &&
             (iVar6 = thunk_FUN_005fa7f0(this,local_14,local_18,local_10), iVar6 != 0)) {
            this->field_02DD = CASE_5;
            this->field_02BB = 1;
            this->field_029D = local_1c[0];
            this->field_029F = 0;
            this->field_0076 = 0;
            thunk_FUN_005f9e40((AnonShape_005F9E40_7E333F34 *)this);
            return;
          }
        }
      }
    }
    thunk_FUN_005f9e40((AnonShape_005F9E40_7E333F34 *)this);
    return;
  case CASE_C:
    if ((this->field_0076 == 1) || ((this->field_0076 == 0 && (this->field_006E != 0x2f)))) {
      thunk_FUN_00416390((AnonShape_00416390_86C8F938 *)this);
    }
    if (this->field_02EA != 0) {
      if (this->field_029E != '\0') {
        sub_005F9450(this);
      }
      if (this->field_02A0 < 1) goto cf_common_exit_005F7A68;
      this->field_029F = 1;
    }
    if (this->field_029F == '\0') {
      if (this->field_029E == '\0') {
        if ((this->field_0018 + g_playSystem_00802A38->field_00E4 & 3) == 0) {
          thunk_FUN_005f9310(this,0);
          return;
        }
        if ((this->field_02D9 < g_playSystem_00802A38->field_00E4) &&
           (iVar6 = FUN_006acfd0(this->field_025D,this->field_0261,(int)this->field_005B,
                                 (int)this->field_005D), 3 < iVar6)) {
          iVar6 = this->field_02EF;
          if (iVar6 != 0) goto LAB_005f7927;
          iVar6 = sub_005FA8B0(this,&this->field_027D,&this->field_0281,&this->field_0285);
          if (iVar6 == 0) goto cf_common_exit_005F76D2;
          STFishC::sub_004162B0((STFishC *)this,&local_8,&local_6,&local_a);
          iVar6 = thunk_FUN_005fa360(this,(undefined4 *)local_1c,(int)local_8,(int)local_6,
                                     (int)local_a,&local_14,&local_18,&local_10);
          if ((iVar6 != 0) &&
             (iVar6 = thunk_FUN_005fa7f0(this,local_14,local_18,local_10), iVar6 != 0)) {
            this->field_02DD = CASE_5;
            this->field_02BB = 1;
            this->field_0076 = 0;
            this->field_029D = local_1c[0];
            this->field_029F = 0;
            return;
          }
        }
      }
      else {
        iVar6 = thunk_FUN_005f88d0(this,this->field_0289,0,(int *)0x0,(undefined4 *)0x0,
                                   (undefined4 *)0x0);
        if ((iVar6 != 0) && (iVar6 = thunk_FUN_005f89f0(this,2), iVar6 != 0)) {
          STFishC::sub_004162B0((STFishC *)this,&local_8,&local_6,&local_a);
          iVar6 = thunk_FUN_005fa360(this,(undefined4 *)local_1c,(int)local_8,(int)local_6,
                                     (int)local_a,&local_14,&local_18,&local_10);
          if ((iVar6 != 0) &&
             (iVar6 = thunk_FUN_005fa7f0(this,local_14,local_18,local_10), iVar6 != 0)) {
            this->field_02DD = CASE_5;
            this->field_02BB = 1;
            this->field_0076 = 0;
            this->field_029D = local_1c[0];
            this->field_029F = 0;
            return;
          }
        }
      }
    }
    else if (this->field_02A0 != 0) {
      iVar6 = this->field_02EF;
      if (iVar6 != 0) {
LAB_005f7927:
        this->field_02EF = iVar6 + -1;
        return;
      }
      iVar6 = FUN_006acfd0(this->field_025D,this->field_0261,(int)this->field_005B,
                           (int)this->field_005D);
      if (iVar6 < 4) {
        iVar6 = sub_005FA8B0(this,&this->field_027D,&this->field_0281,&this->field_0285);
        if (iVar6 == 0) goto cf_common_exit_005F76D2;
        iVar6 = thunk_FUN_005f8cc0(this);
        if (-1 < iVar6) {
          if ((iVar6 == 2) && (this->field_029F != '\0')) {
            this->field_0076 = 0;
            this->field_02DD = CASE_A;
            return;
          }
          this->field_02BB = 1;
          this->field_0076 = 0;
          this->field_029D = 0;
          this->field_02DD = CASE_5;
          return;
        }
      }
      else {
        iVar6 = sub_005FA8B0(this,&this->field_027D,&this->field_0281,&this->field_0285);
        if (iVar6 != 0) {
          STFishC::sub_004162B0((STFishC *)this,&local_8,&local_6,&local_a);
          iVar6 = thunk_FUN_005fa360(this,(undefined4 *)local_1c,(int)local_8,(int)local_6,
                                     (int)local_a,&local_14,&local_18,&local_10);
          if ((iVar6 != 0) &&
             (iVar6 = thunk_FUN_005fa7f0(this,local_14,local_18,local_10), iVar6 != 0)) {
            this->field_02DD = CASE_5;
            this->field_02BB = 1;
            this->field_029D = local_1c[0];
            this->field_0076 = 0;
          }
        }
        if (this->field_02DD != CASE_5) {
cf_common_exit_005F76D2:
          this->field_02EF = 0x10;
          return;
        }
      }
    }
    break;
  case CASE_C|CASE_1:
    this_00 = &this->vtable_at_1d5;
    iVar6 = thunk_FUN_004ac910(this_00,'\b');
    if (iVar6 == 1) {
      if (this->field_02BB != '\0') {
        sub_0041C5A0(this);
        TLOBaseTy::sub_0041D590((TLOBaseTy *)this);
      }
      STT3DSprC::StopShow((STT3DSprC *)this_00,0xf);
    }
    if (iVar6 == *(int *)(&DAT_007ce73d + this->field_02CD * 0x39)) {
      thunk_FUN_00495ff0(this->field_005B,this->field_005D,this->field_005F,0,
                         (AnonShape_00495FF0_59081BDD *)this);
      STT3DSprC::StopShow((STT3DSprC *)this_00,0xe);
      STT3DSprC::StopShow((STT3DSprC *)this_00,0xc);
      uVar11 = 0xffffffff;
      iVar7 = thunk_FUN_004ad650((int)this_00);
      thunk_FUN_0062b770((int)this->field_0041,(int)this->field_0043,(int)this->field_0045,0x2b,
                         (int)this,(int)this->field_006C,iVar7,uVar11);
    }
    if (iVar6 == *(int *)(&DAT_007ce741 + this->field_02CD * 0x39)) {
      thunk_FUN_004ad5e0((int)this_00);
    }
    if (iVar6 == *(int *)(&DAT_007ce745 + this->field_02CD * 0x39)) {
      STT3DSprC::StartShow((STT3DSprC *)this_00,9,g_playSystem_00802A38->field_00E4);
    }
    if (iVar6 == *(int *)(&DAT_007ce739 + this->field_02CD * 0x39) + -1) {
      STT3DSprC::StopShow((STT3DSprC *)this_00,8);
    }
    iVar6 = thunk_FUN_004ac910(this_00,'\t');
    if (iVar6 == *(int *)(&DAT_007ce749 + this->field_02CD * 0x39)) {
      sub_005F66B0(this);
    }
  }
  return;
}

