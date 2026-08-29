#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STColl3C.
   Evidence: this_call_owners=[STColl3C]; agreed_this_calls=1; incoming_this_accesses=15;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_02DD uses
   /SubmarineTitans/Recovered/Enums/STColl3C_field_02DDState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12

   [STSwitchEnumApplier] Switch target field_02DD uses
   /SubmarineTitans/Recovered/Enums/STColl3C_field_02DDState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13
    */

void __thiscall STColl3C::sub_005F6F60(STColl3C *this)

{
  STColl3CVTable_at_1D5 **this_00;
  short sVar1;
  bool bVar2;
  int local_EAX_1370;
  int local_EAX_1734;
  int iVar5;
  STColl3C_field_02DDState SVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int local_EAX_3453;
  int uVar5;
  int local_EAX_4165;
  int iVar4;
  int iVar6;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  uint local_2c;
  uint local_28;
  ushort *local_24;
  uint local_20;
  byte local_1c [4];
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
        /* ST_CALLSITE[005F6FD0]: CALL 0x00402a81; direct=00402A81 STColl3C::sub_005F8650 */
        iVar4 = sub_005F8650(this,this->field_0245,this->field_0249,this->field_024D);
        if (iVar4 != 0) {

          uVar9 = thunk_FUN_005f6ad0();
          this->field_02B6 = (char)uVar9;
          if ((char)uVar9 != '\0') {
            /* ST_CALLSITE[005F7007]: CALL 0x00401d8e; direct=00401D8E STColl3C::LoadImagSpr */
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
        /* ST_CALLSITE[005F7049]: CALL 0x0040163b; direct=0040163B STColl3C::sub_005FA8B0 */
        iVar4 = sub_005FA8B0(this,&this->field_027D,&this->field_0281,&this->field_0285);

        if (((iVar4 != 0) && (iVar4 = thunk_FUN_005f89f0(this,2), iVar4 != 0)) &&

           (iVar4 = thunk_FUN_00417a20(this,(short)this->field_0291,(short)this->field_0295,
                                       (short)this->field_0299,1), iVar4 == 0)) {
          this->field_02DD = CASE_3;
          thunk_FUN_004ad5e0((STT3DSprC *)&this->vtable_at_1d5);
          this->field_02BB = 2;
          sVar1 = PTR_00806724->entryCount;
          this->field_02D1 = sVar1 + -1;
          /* ST_CALLSITE[005F70D1]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
          STT3DSprC::sub_004ACE30
                    ((STT3DSprC *)&this->vtable_at_1d5,PTR_00806724->entries[sVar1 + -1],
                     (int)PTR_00806724->field_002C);

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
        /* ST_CALLSITE[005F7130]: CALL 0x00404ae3; direct=00404AE3 STColl3C::sub_005F9450 */
        sub_005F9450(this);
      }
      if (this->field_02A0 < 1) goto cf_common_exit_005F7A68;
      this->field_029F = 1;
    }
    if (this->field_029F == '\0') {
      if (this->field_029E == '\0') {
        if ((g_playSystem_00802A38->field_00E4 + (int)this->field_0018 & 3) != 0) {
          return;
        }

        iVar4 = thunk_FUN_005f9310(this,0);
        if (iVar4 != 0) {
          this->field_028D = 0;
          return;
        }
        iVar4 = this->field_028D + 1;
        this->field_028D = iVar4;
        if (iVar4 < 6) {
          if (iVar4 < 0xb) {
            return;
          }
          goto LAB_005f744e;
        }

        iVar4 = thunk_FUN_005f89f0(this,2);
        if (iVar4 == 0) {
          return;
        }

        iVar4 = thunk_FUN_00417a20(this,(short)this->field_0291,(short)this->field_0295,
                                   (short)this->field_0299,1);
        if (iVar4 != 0) {
          return;
        }
        this->field_02DD = CASE_3;
        thunk_FUN_004ad5e0((STT3DSprC *)&this->vtable_at_1d5);
        this->field_02BB = 2;
        sVar1 = PTR_00806724->entryCount;
        goto LAB_005f7400;
      }

      iVar4 = thunk_FUN_005f88d0(this,this->field_0289,0,nullptr,nullptr,
                                 nullptr);
      if (iVar4 == 0) {
        /* ST_CALLSITE[005F7343]: CALL 0x00404ae3; direct=00404AE3 STColl3C::sub_005F9450 */
        sub_005F9450(this);
        return;
      }

      iVar4 = thunk_FUN_005f89f0(this,2);
      if (iVar4 == 0) {
        return;
      }

      iVar4 = thunk_FUN_00417a20(this,(short)this->field_0291,(short)this->field_0295,
                                 (short)this->field_0299,1);
      if (iVar4 != 0) {
        return;
      }
      this->field_02DD = CASE_3;
      thunk_FUN_004ad5e0((STT3DSprC *)&this->vtable_at_1d5);
      this->field_02BB = 2;
      sVar1 = PTR_00806724->entryCount;
      this->field_02D1 = sVar1 + -1;
      /* ST_CALLSITE[005F728A]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
      STT3DSprC::sub_004ACE30
                ((STT3DSprC *)&this->vtable_at_1d5,PTR_00806724->entries[sVar1 + -1],
                 (int)PTR_00806724->field_002C);

      thunk_FUN_005fada0(this,0,0,2);
      this->field_02BB = 1;
      this->field_029D = 0;
    }
    else {
      /* ST_CALLSITE[005F716F]: CALL 0x0040163b; direct=0040163B STColl3C::sub_005FA8B0 */
      iVar4 = sub_005FA8B0(this,&this->field_027D,&this->field_0281,&this->field_0285);
      if (iVar4 == 0) {
LAB_005f744e:
        thunk_FUN_005faff0(this,200);
        return;
      }

      iVar4 = thunk_FUN_005f89f0(this,2);
      if (iVar4 == 0) {
        return;
      }

      iVar4 = thunk_FUN_00417a20(this,(short)this->field_0291,(short)this->field_0295,
                                 (short)this->field_0299,1);
      if (iVar4 != 0) {
        return;
      }
      this->field_02DD = CASE_3;
      thunk_FUN_004ad5e0((STT3DSprC *)&this->vtable_at_1d5);
      this->field_02BB = 2;
      sVar1 = PTR_00806724->entryCount;
LAB_005f7400:
      this->field_02D1 = sVar1 + -1;
      /* ST_CALLSITE[005F7419]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
      STT3DSprC::sub_004ACE30
                ((STT3DSprC *)&this->vtable_at_1d5,PTR_00806724->entries[sVar1 + -1],
                 (int)PTR_00806724->field_002C);

      thunk_FUN_005fada0(this,0,0,2);
      if (this->field_02A0 == 0) {
        this->field_029F = 0;
      }
    }
    /* ST_CALLSITE[005F72E5]: CALL 0x00402a81; direct=00402A81 STColl3C::sub_005F8650 */
    iVar4 = sub_005F8650(this,(short)((short)this->field_0291 * 0xc9 + 100),
                         (short)((short)this->field_0295 * 0xc9 + 100),
                         (short)((short)this->field_0299 * 200 + 100));
    if (iVar4 != 0) {
      thunk_FUN_005f6df0((STAllPlayersC *)this);
      thunk_FUN_004ad460(&this->vtable_at_1d5,0);
      /* ST_CALLSITE[005F7306]: CALL 0x004023a1; direct=004023A1 TLOEmbryoTy::sub_0041C3F0 */
      TLOEmbryoTy::sub_0041C3F0((TLOEmbryoTy *)this,(undefined *)0x2);
      this->field_02BB = 2;
      sVar1 = PTR_00806724->entryCount;
      this->field_02D1 = sVar1 + -1;
      /* ST_CALLSITE[005F7335]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
      STT3DSprC::sub_004ACE30
                ((STT3DSprC *)&this->vtable_at_1d5,PTR_00806724->entries[sVar1 + -1],
                 (int)PTR_00806724->field_002C);
      return;
    }
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case CASE_3:
    *(int *)(this->field_02E6 + 0x10) = *(int *)(this->field_02E6 + 0x10) + 1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(this->field_02E6 + 0x10) < 0x23) {
      thunk_FUN_005f9e40((RecoveredRecordView_005F9E40_46F0E2B5 *)this);
    }
    else {
      this->field_02DD = CASE_4;
      uVar6 = *(uint *)(this->field_02E6 + 2);
      if (-1 < (int)uVar6) {
        Library::Ourlib::ST3DSMAP::SprSetSeqAnim(this->field_0211,uVar6,1,0xffffffff,0);
        puVar5 = this->field_02E6;
        puVar5[2] = 0xffff;
        puVar5[3] = 0xffff;
        /* ST_CALLSITE[005F74B3]: CALL 0x00403517; direct=00403517 STColl3C::sub_005FA030 */
        sub_005FA030(this);
      }
    }
  case CASE_4:

    local_EAX_1370 = thunk_FUN_005fa180((RecoveredRecordView_005FA180_30990B79 *)this);
    if (local_EAX_1370 < 0) {
      if (this->field_02EA != 0) {
        if (this->field_029E != '\0') {
          /* ST_CALLSITE[005F74DB]: CALL 0x00404ae3; direct=00404AE3 STColl3C::sub_005F9450 */
          sub_005F9450(this);
        }
        if (this->field_02A0 < 1) {
cf_common_exit_005F7A68:
          thunk_FUN_005fb100((RecoveredRecordView_005FB100_73CA5C15 *)this);
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
      iVar4 = thunk_FUN_005f8cc0(this);
      if (-1 < iVar4) {
        if (iVar4 == 2) {
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
      /* ST_CALLSITE[005F7943]: CALL dword ptr [EDX + 0x20] */
      this->vfunc_20();
    }

    SVar3 = thunk_FUN_005f8d10((int *)this);
    this->field_02DD = SVar3;
    return;
  case CASE_6:

    local_EAX_4165 = thunk_FUN_005fa180((RecoveredRecordView_005FA180_30990B79 *)this);
    if (PTR_00806724->entryCount <= local_EAX_4165) {
      this->field_02DD = CASE_2;
      return;
    }
    break;
  case CASE_7:
    if (this->field_02E1 <= g_playSystem_00802A38->field_00E4) {
      this->field_02EE = 0;
      this->field_02DD = CASE_1;

      thunk_FUN_00495ff0(this->field_005B,this->field_005D,this->field_005F,0,
                         (RecoveredRecordView_00495FF0_A2A90B23 *)this);
      /* ST_CALLSITE[005F801F]: CALL 0x00403d0f; direct=00403D0F STT3DSprC::sub_004AD430 */
      STT3DSprC::sub_004AD430((STT3DSprC *)&this->vtable_at_1d5);
      this->field_02BB = 0;
      /* ST_CALLSITE[005F802D]: CALL 0x0040464c; direct=0040464C sub_0041C5A0 */
      sub_0041C5A0(this);
      return;
    }
    break;
  case CASE_8:
    if (this->field_02EA == 0) {
      /* ST_CALLSITE[005F7C92]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
      STFishC::sub_004162B0((STFishC *)this,&local_8,&local_6,&local_a);
      if ((int)local_8 != this->field_0291) {
        return;
      }
      if ((int)local_6 != this->field_0295) {
        return;
      }

      iVar4 = thunk_FUN_005f88d0(this,this->field_0289,1,(int *)&local_24,&local_2c,&local_28);
      if (iVar4 != 0) {
        /* ST_CALLSITE[005F7CDD]: CALL 0x00401168; direct=00401168 STColl3C::CreateAddSpr */
        local_EAX_3453 = CreateAddSpr(this);
        if (local_EAX_3453 < 1) {
          return;
        }
        puVar5 = this->field_02E6 + 4;
        for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined4 *)puVar5 = *(undefined4 *)local_24;
          local_24 = local_24 + 2;
          puVar5 = puVar5 + 2;
        }
        *puVar5 = *local_24;
        (&this->field_0x2a4)[this->field_02A0 * 6] = 1;
        *(undefined4 *)(&this->field_0x2a6 + this->field_02A0 * 6) = local_28;
        (&this->field_0x2a5)[this->field_02A0 * 6] = this->field_0024;
        if (local_EAX_3453 == 2) {
          *STField<undefined4 *>(this,0x2E6) = local_2c;
        }
        if (*(STT3DSprC **)this->field_02E6 != nullptr) {
          uVar10 = 30000;
          uVar8 = 0;
          iVar7 = 0;
          iVar4 = 1;
          uVar6 = 0xe;
          /* ST_CALLSITE[005F7D5E]: CALL 0x004052cc; direct=004052CC thunk_FUN_004ad650; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/LibraryContexts/ST3DSMAPContext; source view only; no Ghidra override */
          uVar5 = thunk_FUN_004ad650(*(STT3DSprC **)this->field_02E6);
          ST3DSMAPContext::sub_006E9EF0(this->field_0211,uVar5,uVar6,iVar4,iVar7,uVar8,uVar10);
        }
        thunk_FUN_005f8810(this,this->field_0289);

        iVar4 = thunk_FUN_005f95b0((RecoveredRecordView_005F95B0_EAB4932B *)this);
        if (iVar4 == 0) {
          return;
        }
        *(uint *)(this->field_02E6 + 0x34) = g_playSystem_00802A38->field_00E4;
        puVar5 = this->field_02E6;
        this->field_02DD = CASE_9;
        puVar5[0x32] = 1;
        puVar5[0x33] = 0;
        this->field_02E6[0x19] = 0xffff;
        *(int *)(this->field_02E6 + 0x30) = *(int *)(this->field_02E6 + 0x2e) + -1;
        return;
      }
    }
    /* ST_CALLSITE[005F7C1F]: CALL 0x00404ae3; direct=00404AE3 STColl3C::sub_005F9450 */
    sub_005F9450(this);
    this->field_02DD = CASE_C;
    this->field_02D5 = g_playSystem_00802A38->field_00E4;
    uVar6 = g_playSystem_00802A38->field_00E4;
    this->field_02BB = 1;
    this->field_02EF = 0;
    this->field_02D9 = uVar6 + 0x32;
    this->field_0076 = 1;
    if (0 < this->field_02A0) {
      this->field_029F = 1;
      return;
    }
LAB_005f7efc:
    this->field_029F = 0;
    return;
  case CASE_9:

    iVar4 = thunk_FUN_005f9cb0(this,g_playSystem_00802A38->field_00E4,&local_14,&local_18,&local_10);
    if (iVar4 == 1) {
      *(int *)(this->field_02E6 + 10) = local_14;
      *(int *)(this->field_02E6 + 0xc) = local_18;
      *(int *)(this->field_02E6 + 0xe) = local_10;
      *(int *)(this->field_02E6 + 0x10) = *(int *)(this->field_02E6 + 0x10) + 1;
      puVar5 = this->field_02E6;
      if (*(int *)(puVar5 + 0x12) <= *(int *)(puVar5 + 0x10)) {
        puVar5[0x10] = 0;
        puVar5[0x11] = 0;
      }
      thunk_FUN_005f9e40((RecoveredRecordView_005F9E40_46F0E2B5 *)this);
      return;
    }
    if (iVar4 == 3) {
      /* ST_CALLSITE[005F7E0A]: CALL 0x00403517; direct=00403517 STColl3C::sub_005FA030 */
      sub_005FA030(this);
      /* ST_CALLSITE[005F7E26]: CALL 0x0040163b; direct=0040163B STColl3C::sub_005FA8B0 */
      iVar4 = sub_005FA8B0(this,&this->field_027D,&this->field_0281,&this->field_0285);
      if (iVar4 == 0) {
        this->field_0281 = this->field_0261;
        this->field_027D = this->field_025D;
        this->field_0285 = this->field_0265;
        /* ST_CALLSITE[005F7E4D]: CALL 0x00404ae3; direct=00404AE3 STColl3C::sub_005F9450 */
        sub_005F9450(this);
      }
      else {
        this->field_029E = 1;
      }
      /* ST_CALLSITE[005F7E69]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
      STFishC::sub_004162B0((STFishC *)this,&local_8,&local_6,&local_a);

      iVar4 = thunk_FUN_005fa360(this,(undefined4 *)local_1c,(int)local_8,(int)local_6,(int)local_a,
                                 &local_14,&local_18,&local_10);
      if (iVar4 != 0) {
        this->field_02A0 = this->field_02A0 + 1;

        iVar4 = thunk_FUN_005fb600((RecoveredRecord_005FB600_0B8C3724 *)this);
        if (iVar4 == 0) {

          iVar4 = thunk_FUN_005fa7f0(this,local_14,local_18,local_10);
          if (iVar4 == 0) {
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
        uVar6 = g_playSystem_00802A38->field_00E4;
        this->field_02EF = 0;
        this->field_02BB = 1;
        this->field_02D9 = uVar6 + 0x32;
        this->field_0076 = 1;
        goto LAB_005f7efc;
      }
    }
    break;
  case CASE_A:

    iVar4 = thunk_FUN_005f9050(this,&local_10,&local_20);
    if (iVar4 != 0) {
      this->field_02DD = CASE_B;

      thunk_FUN_005fada0(this,local_10,local_20,1);
      return;
    }
    this->field_02DD = CASE_C;
    this->field_0076 = 1;
    this->field_02EF = 0;
    goto LAB_005f79aa;
  case CASE_B:
    bVar2 = thunk_FUN_005faee0((AnonShape_005FAEE0_B5D482C5 *)this);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    if (CONCAT31(extraout_var,bVar2) != 0) {
      iVar4 = this->field_02A0;
      if ((&this->field_029E)[iVar4 * 6] != '\0') {
        thunk_FUN_005f91e0(this,*(int *)((int)&this->field_02A0 + iVar4 * 6),iVar4 + -1);
        (&this->field_029E)[this->field_02A0 * 6] = 0;
        iVar4 = this->field_02A0 + -1;
        this->field_02A0 = iVar4;
        if (0 < iVar4) {
          thunk_FUN_005fac40(this,1,1,0,0,0,0);
          return;
        }
      }
      /* ST_CALLSITE[005F7A4E]: CALL 0x00403517; direct=00403517 STColl3C::sub_005FA030 */
      sub_005FA030(this);
      this->field_029F = 0;
      this->field_02A0 = 0;
      if (this->field_02EA != 0) goto cf_common_exit_005F7A68;

      thunk_FUN_005f9310(this,0);
      if (this->field_029E == '\0') {

        iVar4 = thunk_FUN_005f89f0(this,2);
        if (iVar4 != 0) {

          local_20 = thunk_FUN_005fa7f0(this,this->field_0291,this->field_0295,this->field_0299);
          if (-1 < (int)local_20) {
            this->field_02DD = CASE_5;
            this->field_029D = 3;
            thunk_FUN_005f9e40((RecoveredRecordView_005F9E40_46F0E2B5 *)this);
            return;
          }
          this->field_02DD = CASE_C;
          this->field_02EF = 0;
          this->field_0076 = 1;
          this->field_02D5 = g_playSystem_00802A38->field_00E4;
          this->field_02D9 = g_playSystem_00802A38->field_00E4 + 0x32;
          thunk_FUN_005f9e40((RecoveredRecordView_005F9E40_46F0E2B5 *)this);
          return;
        }
        this->field_02DD = CASE_C;
        this->field_02EF = 0;
        this->field_0076 = 1;
        this->field_02D5 = g_playSystem_00802A38->field_00E4;
        this->field_02D9 = g_playSystem_00802A38->field_00E4 + 0x32;
      }
      else {

        iVar4 = thunk_FUN_005f89f0(this,2);
        if (iVar4 != 0) {
          /* ST_CALLSITE[005F7AAB]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
          STFishC::sub_004162B0((STFishC *)this,&local_8,&local_6,&local_a);

          iVar4 = thunk_FUN_005fa360(this,(undefined4 *)local_1c,(int)local_8,(int)local_6,
                                     (int)local_a,&local_14,&local_18,&local_10);
          if ((iVar4 != 0) &&

             (iVar4 = thunk_FUN_005fa7f0(this,local_14,local_18,local_10), iVar4 != 0)) {
            this->field_02DD = CASE_5;
            this->field_02BB = 1;
            this->field_029D = local_1c[0];
            this->field_029F = 0;
            this->field_0076 = 0;
            thunk_FUN_005f9e40((RecoveredRecordView_005F9E40_46F0E2B5 *)this);
            return;
          }
        }
      }
    }
    thunk_FUN_005f9e40((RecoveredRecordView_005F9E40_46F0E2B5 *)this);
    return;
  case CASE_C:
    if ((this->field_0076 == 1) || ((this->field_0076 == 0 && (this->field_006E != 0x2f)))) {

      thunk_FUN_00416390((RecoveredRecordView_00416390_AE365496 *)this);
    }
    if (this->field_02EA != 0) {
      if (this->field_029E != '\0') {
        /* ST_CALLSITE[005F75CE]: CALL 0x00404ae3; direct=00404AE3 STColl3C::sub_005F9450 */
        sub_005F9450(this);
      }
      if (this->field_02A0 < 1) goto cf_common_exit_005F7A68;
      this->field_029F = 1;
    }
    if (this->field_029F == '\0') {
      if (this->field_029E == '\0') {
        if (((int)this->field_0018 + g_playSystem_00802A38->field_00E4 & 3) == 0) {

          thunk_FUN_005f9310(this,0);
          return;
        }
        if ((this->field_02D9 < g_playSystem_00802A38->field_00E4) &&

           (iVar5 = FUN_006acfd0(this->field_025D,this->field_0261,(int)this->field_005B,
                                 (int)this->field_005D), 3 < iVar5)) {
          iVar4 = this->field_02EF;
          if (iVar4 != 0) goto LAB_005f7927;
          /* ST_CALLSITE[005F7893]: CALL 0x0040163b; direct=0040163B STColl3C::sub_005FA8B0 */
          iVar4 = sub_005FA8B0(this,&this->field_027D,&this->field_0281,&this->field_0285);
          if (iVar4 == 0) goto cf_common_exit_005F76D2;
          /* ST_CALLSITE[005F78AE]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
          STFishC::sub_004162B0((STFishC *)this,&local_8,&local_6,&local_a);

          iVar4 = thunk_FUN_005fa360(this,(undefined4 *)local_1c,(int)local_8,(int)local_6,
                                     (int)local_a,&local_14,&local_18,&local_10);
          if ((iVar4 != 0) &&

             (iVar4 = thunk_FUN_005fa7f0(this,local_14,local_18,local_10), iVar4 != 0)) {
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

        iVar4 = thunk_FUN_005f88d0(this,this->field_0289,0,nullptr,nullptr,
                                   nullptr);

        if ((iVar4 != 0) && (iVar4 = thunk_FUN_005f89f0(this,2), iVar4 != 0)) {
          /* ST_CALLSITE[005F779E]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
          STFishC::sub_004162B0((STFishC *)this,&local_8,&local_6,&local_a);

          iVar4 = thunk_FUN_005fa360(this,(undefined4 *)local_1c,(int)local_8,(int)local_6,
                                     (int)local_a,&local_14,&local_18,&local_10);
          if ((iVar4 != 0) &&

             (iVar4 = thunk_FUN_005fa7f0(this,local_14,local_18,local_10), iVar4 != 0)) {
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
      iVar4 = this->field_02EF;
      if (iVar4 != 0) {
LAB_005f7927:
        this->field_02EF = iVar4 + -1;
        return;
      }

      local_EAX_1734 =
           FUN_006acfd0(this->field_025D,this->field_0261,(int)this->field_005B,
                        (int)this->field_005D);
      if (local_EAX_1734 < 4) {
        /* ST_CALLSITE[005F76FA]: CALL 0x0040163b; direct=0040163B STColl3C::sub_005FA8B0 */
        iVar4 = sub_005FA8B0(this,&this->field_027D,&this->field_0281,&this->field_0285);
        if (iVar4 == 0) goto cf_common_exit_005F76D2;
        iVar4 = thunk_FUN_005f8cc0(this);
        if (-1 < iVar4) {
          if ((iVar4 == 2) && (this->field_029F != '\0')) {
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
        /* ST_CALLSITE[005F764B]: CALL 0x0040163b; direct=0040163B STColl3C::sub_005FA8B0 */
        iVar4 = sub_005FA8B0(this,&this->field_027D,&this->field_0281,&this->field_0285);
        if (iVar4 != 0) {
          /* ST_CALLSITE[005F7667]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
          STFishC::sub_004162B0((STFishC *)this,&local_8,&local_6,&local_a);

          iVar4 = thunk_FUN_005fa360(this,(undefined4 *)local_1c,(int)local_8,(int)local_6,
                                     (int)local_a,&local_14,&local_18,&local_10);
          if ((iVar4 != 0) &&

             (iVar4 = thunk_FUN_005fa7f0(this,local_14,local_18,local_10), iVar4 != 0)) {
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
  case CASE_D:
    this_00 = &this->vtable_at_1d5;

    iVar4 = thunk_FUN_004ac910(this_00,'\b');
    if (iVar4 == 1) {
      if (this->field_02BB != '\0') {
        /* ST_CALLSITE[005F805B]: CALL 0x0040464c; direct=0040464C sub_0041C5A0 */
        sub_0041C5A0(this);
        /* ST_CALLSITE[005F8062]: CALL 0x00404629; direct=00404629 TLOBaseTy::sub_0041D590 */
        TLOBaseTy::sub_0041D590((TLOBaseTy *)this);
      }
      /* ST_CALLSITE[005F806B]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      STT3DSprC::StopShow((STT3DSprC *)this_00,0xf);
    }
    if (iVar4 == *(int *)(&DAT_007ce73d + this->field_02CD * 0x39)) {

      thunk_FUN_00495ff0(this->field_005B,this->field_005D,this->field_005F,0,
                         (RecoveredRecordView_00495FF0_A2A90B23 *)this);
      /* ST_CALLSITE[005F80AA]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      STT3DSprC::StopShow((STT3DSprC *)this_00,0xe);
      /* ST_CALLSITE[005F80B3]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      STT3DSprC::StopShow((STT3DSprC *)this_00,0xc);
      uVar9 = 0xffffffff;

      iVar6 = thunk_FUN_004ad650((STT3DSprC *)this_00);
      thunk_FUN_0062b770((int)this->field_0041,(int)this->field_0043,(int)this->field_0045,0x2b,
                         (RecoveredRecord_0062B770_F0FEBA2F *)this,(int)this->field_006C,iVar6,uVar9
                        );
    }
    if (iVar4 == *(int *)(&DAT_007ce741 + this->field_02CD * 0x39)) {
      thunk_FUN_004ad5e0((STT3DSprC *)this_00);
    }
    if (iVar4 == *(int *)(&DAT_007ce745 + this->field_02CD * 0x39)) {
      /* ST_CALLSITE[005F8125]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      STT3DSprC::StartShow((STT3DSprC *)this_00,9,g_playSystem_00802A38->field_00E4);
    }
    if (iVar4 == *(int *)(&DAT_007ce739 + this->field_02CD * 0x39) + -1) {
      /* ST_CALLSITE[005F8146]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      STT3DSprC::StopShow((STT3DSprC *)this_00,8);
    }

    iVar4 = thunk_FUN_004ac910(this_00,'\t');
    if (iVar4 == *(int *)(&DAT_007ce749 + this->field_02CD * 0x39)) {
      /* ST_CALLSITE[005F816B]: CALL 0x00401b04; direct=00401B04 STColl3C::sub_005F66B0 */
      sub_005F66B0(this);
    }
  }
  return;
}

