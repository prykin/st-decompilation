#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 006952B0 -> 006F13F0 @ 0069582E */

int __thiscall FUN_006952b0(void *this,byte *param_1,byte *param_2)

{
  int iVar1;
  CGenerate *this_00;
  int iVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  InternalExceptionFrame local_d4;
  DArrayTy *local_78;
  DArrayTy *local_74;
  DWORD local_70;
  undefined1 local_6c [24];
  DArrayTy *local_54;
  DArrayTy *local_50;
  CGenerate *local_4c;
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
  void *local_8;

  local_c = 0;
  local_4c = this;
  Library::MSVCRT::FUN_0072e6b0(*(DWORD *)param_1);
  pbVar3 = param_1;
  puVar4 = (undefined4 *)((int)this + 0x1c);
  for (iVar2 = 0x8c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *(undefined4 *)pbVar3;
    pbVar3 = pbVar3 + 4;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)pbVar3;
  iVar2 = CGenerate::CreateMap(this);
  CGenerate::sub_0069FF90(this);
  if (iVar2 != 0) {
    local_10 = 1;
    local_48 = timeGetTime();
    local_3c = 0;
    local_70 = timeGetTime();
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_28 = *(uint *)(param_1 + 0x214);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar2 = thunk_FUN_00698f90(*(int *)(param_1 + 0x20c),*(int *)(param_1 + 0x210),local_28,
                               (uint)param_1[0x22d],(int *)&local_1c,&local_18);
    if (iVar2 == 0) {
      local_1c = local_28 * 3;
      local_18 = 1;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_30 = *(undefined4 *)(param_1 + 0x225);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_34 = *(int *)(param_1 + 0x221);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_44 = *(int *)(param_1 + 0x210) * *(int *)(param_1 + 0x20c);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_38 = *(undefined4 *)(param_1 + 0x229);
    local_24 = local_44 / 500;
    local_2c = 5;
    local_20 = local_44 / 0x640;
    local_44 = local_44 / 3;
    local_8 = (void *)Library::DKW::LIB::FUN_006aac70(local_28 * 4);
    memset(&stack0xffffff70, 0, 0x20); /* compiler bulk-zero initialization */
    iVar2 = 0;
    local_54 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x40,10);
    local_78 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x40,10);
    local_50 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,local_1c,0xf,10);
    local_74 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,local_1c,0xf,10);
    local_14 = 0x32;
    while ((0 < local_10 || (local_3c < local_14 + local_48))) {
      local_54->count = 0;
      local_50->count = 0;
      memset((void *)local_6c, 0, 0x18); /* compiler bulk-zero initialization */
      if ((*(int *)((int)this + 8) == 0) && (*(int *)((int)this + 0xc) == 0)) {
        thunk_FUN_006a0150(this);
      }
      CGenerate::CteateField
                (this,**(int **)((int)this + 8) + -2,(*(int **)((int)this + 8))[1] + -2,local_34,
                 local_30,local_38,0);
      CGenerate::sub_0069FF90(this);
      thunk_FUN_00696790((int)this);
      CGenerate::sub_0069FF90(this);
      thunk_FUN_00696810(this);
      CGenerate::sub_0069FF90(this);
      thunk_FUN_00696740(this,0);
      CGenerate::sub_0069FF90(this);
      iVar2 = thunk_FUN_006971b0((int)this);
      *(int *)((int)this + 0x583f) = iVar2;
      CGenerate::sub_0069FF90(this);
      thunk_FUN_00696dc0(this,*(int *)((int)this + 0x583f),local_2c);
      CGenerate::sub_0069FF90(this);
      thunk_FUN_00696940(this,*(int *)((int)this + 0x583f));
      CGenerate::sub_0069FF90(this);
      thunk_FUN_00695eb0(this);
      CGenerate::sub_0069FF90(this);
      CGenerate::CteateField
                (this,**(int **)((int)this + 8),(*(int **)((int)this + 8))[1],local_34,local_30,
                 local_38,1);
      CGenerate::sub_0069FF90(this);
      thunk_FUN_00697390(this);
      CGenerate::sub_0069FF90(this);
      thunk_FUN_006975f0(this);
      CGenerate::sub_0069FF90(this);
      thunk_FUN_00695f20(this);
      CGenerate::sub_0069FF90(this);
      thunk_FUN_00697390(this);
      CGenerate::sub_0069FF90(this);
      thunk_FUN_00696740(this,1);
      CGenerate::sub_0069FF90(this);
      thunk_FUN_006978c0((int)this);
      CGenerate::sub_0069FF90(this);
      thunk_FUN_00695f20(this);
      CGenerate::sub_0069FF90(this);
      thunk_FUN_00697390(this);
      CGenerate::sub_0069FF90(this);
      thunk_FUN_00696740(this,1);
      CGenerate::sub_0069FF90(this);
      thunk_FUN_006988c0(this);
      CGenerate::sub_0069FF90(this);
      thunk_FUN_00697cf0(this,local_24,local_20);
      CGenerate::sub_0069FF90(this);
      Library::Ourlib::MFSTMAP::AuxTMapRefreshAll
                (*(short **)((int)this + 0xc),*(int **)((int)this + 8));
      CGenerate::sub_0069FF90(this);
      thunk_FUN_0069b190(this,**(int **)((int)this + 8) << 1,(*(int **)((int)this + 8))[1] << 1,
                         local_34 + -1);
      CGenerate::sub_0069FF90(this);
      _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_6c._12_4_ =
           thunk_FUN_0069bdc0(this,local_28,10,10,4,0x23,(int)local_8,
                              (AnonShape_0069BDC0_B656F442 *)local_6c);
      CGenerate::sub_0069FF90(this);
      _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_6c._8_4_ =
           thunk_FUN_006991c0(this,**(int **)((int)this + 8) << 1,(*(int **)((int)this + 8))[1] << 1
                              ,local_1c,local_18,local_28,(int)local_8,local_34 + -1,
                              (AnonShape_006991C0_D95B9E4A *)local_6c);
      CGenerate::sub_0069FF90(this);
      _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
      thunk_FUN_00695eb0(this);
      CGenerate::sub_0069FF90(this);
      iVar2 = thunk_FUN_00695180((AnonShape_0052EFB0_8161B92D *)local_6c,
                                 (AnonShape_00695180_3C0E4B54 *)&stack0xffffff70,(int)&local_38,
                                 local_c);
      if (iVar2 == 0) {
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
      CGenerate::sub_0069FF90(this);
      _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
      thunk_FUN_0069cb50(this);
      _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
      iVar2 = **(int **)((int)this + 8);
      iVar1 = (*(int **)((int)this + 8))[1];
      thunk_FUN_0069f160(this,iVar2 * 2,iVar1 * 2,local_34,(iVar2 * iVar1 * 4) / 100);
      local_40 = CGenerate::SaveMap(this);
      CGenerate::sub_0069FF90(this);
      if (DAT_00853dd4 != (undefined4 *)0x0) {
        FreeAndNull(&DAT_00853dd4);
      }
      local_d4.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_d4;
      iVar2 = Library::MSVCRT::__setjmp3(local_d4.jumpBuffer,0);
      this_00 = local_4c;
      if (iVar2 == 0) {
        if (param_2 != (byte *)0x0) {
          cMf32::RecPut(local_4c->field_0018,0xc,PTR_s_GENERATE_RND_0079d774,param_1,0x232,
                        (undefined4 *)0x0,'\0',(uint *)0x0);
          cMf32::RecPut(this_00->field_0018,0xc,PTR_s_INTERFACE_RND_0079d778,param_2,0xd,
                        (undefined4 *)0x0,'\0',(uint *)0x0);
          CGenerate::sub_0069FF90(this_00);
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
    if (local_8 != (void *)0x0) {
      FreeAndNull(&local_8);
    }
    DArrayDestroy(local_54);
    DArrayDestroy(local_78);
    DArrayDestroy(local_50);
    DArrayDestroy(local_74);
    timeGetTime();
    return local_40;
  }
  return 0;
}

