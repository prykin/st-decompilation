#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::GetDefenceTarget

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_GetDefenceTarget_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_FFFFFFFF=4294967295 */

undefined4 __thiscall
STBoatC::GetDefenceTarget(STBoatC *this,STBoatC_GetDefenceTarget_param_1Enum param_1)

{
  int iVar1;
  undefined2 uVar3;
  STGroupBoatC *this_00;
  int iVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  DArrayTy *pDVar4;
  int local_EAX_1627;
  uint uVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  undefined4 *puVar6;
  int iVar8;
  int iVar11;
  undefined4 uVar9;
  DArrayTy *pDVar10;
  int iVar12;
  uint uVar13;
  short sVar14;
  short sVar15;
  int iVar16;
  short sVar17;
  short sVar18;
  int local_70;
  short local_6c;
  int local_6a;
  undefined4 local_60 [2];
  undefined4 local_58 [2];
  undefined4 local_50 [2];
  undefined4 local_48 [2];
  short local_40;
  short sStack_3e;
  undefined2 local_3c;
  int local_38;
  int local_34;
  undefined2 *local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  undefined4 local_c;
  STGameObjC *local_8;

  local_34 = 0;
  local_20 = nullptr;
  if ((this->field_079A == 0) || (0 < this->field_073A)) {
    this->field_0483 = 0;
    this->field_0487 = 0xffffffff;
    this->field_048B = 0xffff;
    this->field_047F = 0;
LAB_0048a37f:
    local_1c = 1;
  }
  else {
    iVar12 = this->field_047F + 1;
    this->field_047F = iVar12;
    if (this->field_048B == 0xffff) {
      if (iVar12 % 0x14 != 0) goto LAB_0048a37f;
    }
    else {
      /* ST_CALLSITE[00489A00]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
      local_8 = STAllPlayersC::GetObjPtr
                          (g_allPlayers_007FA174,*(char *)&this->field_0487,(ushort)this->field_048B
                           ,this->field_0483);
      if ((((local_8 != nullptr) &&
           /* ST_CALLSITE[00489A10]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; signature=__thiscall;/undefined4;pointer:/STGameObjC */
           (iVar12 = (*local_8->vtable[1].vfunc_24)(local_8), iVar12 == 1)) &&
          /* ST_CALLSITE[00489A20]: CALL dword ptr [EAX + 0xf0]; [STIndirectCallsiteApplier] exact slot 0xF0; signature=__thiscall;/undefined4;pointer:/STGameObjC */
          (iVar12 = (*local_8->vtable[1].MoveStep)(local_8), iVar12 == 1)) &&
         /* ST_CALLSITE[00489A34]: CALL dword ptr [EDX + 0xf4] */
         ((iVar12 = (*local_8->vtable[1].vfunc_20)(local_8), iVar12 == 1 &&
          (this->field_047F % 0x28 != 0)))) {
        return 0;
      }
    }
    this->field_0483 = 0;
    this->field_0487 = 0xffffffff;
    this->field_048B = 0xffff;
    this->field_047F = 0;
    local_1c = 1;
    switch(param_1) {
    case CASE_0:
      /* ST_CALLSITE[00489ABA]: CALL 0x00402635; direct=00402635 STBoatC::_CheckDefenceShots */
      _CheckDefenceShots(this,0);
      pDVar4 = (DArrayTy *)
               thunk_FUN_0043f7b0(*(byte *)&this->field_0024,(int *)this,
                                  (uint *)(int)this->field_0475,(int)this->field_0477,2,(int *)0x6,6
                                  ,2,(uint)(this->field_0736 != 0));
      if (pDVar4 != nullptr) {
        this_00 = thunk_FUN_0042b760(*(char *)&this->field_0024,this->field_0030);
        local_20 = thunk_FUN_0040c080(this_00,(uint)(ushort)this->field_0032,pDVar4);
        local_18 = 0;
        if (0 < (int)pDVar4->count) {
          do {
            iVar12 = local_20[local_18];
            if ((iVar12 != -4) && (iVar12 < 9)) {
              iVar16 = (8 - iVar12) * 0x32;
              DArrayGetElement(pDVar4,local_18,&local_8);
              /* ST_CALLSITE[00489B73]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; signature=__thiscall;/undefined4;pointer:/STGameObjC */
              iVar12 = (*local_8->vtable[1].vfunc_24)(local_8);
              if ((iVar12 != 0) &&
                 /* ST_CALLSITE[00489B86]: CALL dword ptr [EDX + 0xf0]; [STIndirectCallsiteApplier] exact slot 0xF0; signature=__thiscall;/undefined4;pointer:/STGameObjC */
                 ((iVar12 = (*local_8->vtable[1].MoveStep)(local_8), iVar12 != 0 &&
                  /* ST_CALLSITE[00489B9D]: CALL dword ptr [EAX + 0xf4] */
                  (iVar12 = (*local_8->vtable[1].vfunc_20)(local_8), iVar12 != 0)))) {
                /* ST_CALLSITE[00489BB0]: CALL dword ptr [EAX + 0xfc]; [STIndirectCallsiteApplier] exact slot 0xFC; signature=__thiscall;/undefined4;pointer:/STGameObjC */
                iVar12 = (*local_8->vtable[1].vfunc_28)(local_8);
                if (0 < iVar12) {
                  iVar16 = iVar16 + 300;
                }
                iVar12 = local_8->field_0219;
                iVar1 = local_8->field_0215;
                /* ST_CALLSITE[00489BDE]: CALL dword ptr [EDX + 0x7c] */
                iVar8 = local_8->vfunc_7C();
                local_38 = iVar16 + (STSignedDiv4(iVar12)) + iVar1 + iVar8 * 2
                ;
                if ((((uint)(ushort)local_8->field_0032 == this->field_048B) &&
                    (local_8->field_0024 == this->field_0487)) &&
                   (((this->field_0483 == CASE_1 &&
                     (((uVar5 = local_8->field_0020, uVar5 == 0x14 || (uVar5 == 1000)) ||
                      (uVar5 == 0x3e9)))) ||
                    ((this->field_0483 == CASE_3 && (local_8->field_0020 == 0x1ae)))))) {
                  local_38 = local_38 + 200;
                }
                iVar12 = local_38;
                thunk_FUN_00416270(local_8,&local_14,&local_10,(short *)&local_c);
                iVar7 = FUN_006acf0d((int)this->field_0041,(int)this->field_0043,
                                     (int)this->field_0045,(int)(short)local_14,(int)(short)local_10
                                     ,(int)(short)local_c);
                if ((iVar7 == 0) ||
                   (uVar5 = (int)(short)local_c - (int)this->field_0045, uVar13 = (int)uVar5 >> 0x1f
                   , (int)(((uVar5 ^ uVar13) - uVar13) * 10) / iVar7 < 4)) {
                  /* ST_CALLSITE[00489CBA]: CALL dword ptr [EAX + 0x10] */
                  uVar3 = (*this->vtable->vfunc_10)
                                    (this->field_0041,this->field_0043,
                                     STReplaceLowWord((uint32_t)(local_10), (uint16_t)(this->field_0045)),
                                     (short)local_14,(short)local_10,local_c);
                  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                  local_24 = CONCAT22(extraout_var,uVar3);
                  local_2c = 0;
                  if (this->field_02B2 != '\0') {
                    local_30 = (undefined2 *)&this->field_0x2a8;
                    do {
                      puVar6 = thunk_FUN_0041dc40(local_48,(short)*(undefined4 *)(local_30 + -1),
                                                  local_30[1],(short)local_24);
                      local_40 = (short)*puVar6;
                      sStack_3e = (short)((uint)*puVar6 >> 0x10);
                      sVar14 = this->field_0043 - sStack_3e;
                      sVar15 = this->field_0041 + local_40;
                      local_28 = STReplaceLowWord((uint32_t)(puVar6), (uint16_t)(this->field_0045 + *(short *)(puVar6 + 1)));
                      sStack_3e = *local_30;
                      local_40 = 0;
                      puVar6 = thunk_FUN_0041dc40(local_50,0,0,(short)local_24);
                      local_40 = (short)*puVar6;
                      sStack_3e = (short)((uint)*puVar6 >> 0x10);
                      local_3c = *(undefined2 *)(puVar6 + 1);
                      sVar17 = (short)local_14 + local_40;
                      sVar18 = (short)local_10 - sStack_3e;
                      if (this->field_0736 == 0) {
                        /* ST_CALLSITE[00489D93]: CALL 0x00405907; direct=00405907 STSprGameObjC::CheckRay */
                        iVar16 = STSprGameObjC::CheckRay
                                           ((STSprGameObjC *)this,sVar15,sVar14,(short)local_28,
                                            sVar17,sVar18,(short)local_c,this->field_079A,nullptr
                                            ,0);
                        iVar12 = local_38;
                      }
                      else {
                        /* ST_CALLSITE[00489DB7]: CALL 0x00405907; direct=00405907 STSprGameObjC::CheckRay */
                        iVar16 = STSprGameObjC::CheckRay
                                           ((STSprGameObjC *)this,sVar15,sVar14,(short)local_28,
                                            sVar17,sVar18,(short)local_c,this->field_079A,nullptr
                                            ,1);
                        iVar12 = local_38;
                      }
                      local_38 = iVar12;
                      if (iVar16 == 0) {
                        if (this->field_07E6 != 0) goto LAB_00489eb0;
                        goto LAB_00489dfc;
                      }
                      local_2c = local_2c + 1;
                      local_30 = local_30 + 3;
                    } while (local_2c < (int)(uint)(byte)this->field_02B2);
                  }
                  iVar12 = iVar12 + 200;
                }
LAB_00489dfc:
                if (((local_8->field_0020 != 0x1ae) &&
                    (pDVar10 = this->field_047B, pDVar10 != nullptr)) &&
                   (uVar5 = 0, 0 < (int)pDVar10->count)) {
                  do {
                    DArrayGetElement(pDVar10,uVar5,&local_70);
                    if ((local_6c == local_8->field_0032) && (local_70 == local_8->field_0024)) {
                      iVar12 = iVar12 + local_6a;
                      break;
                    }
                    pDVar10 = this->field_047B;
                    uVar5 = uVar5 + 1;
                  } while ((int)uVar5 < (int)pDVar10->count);
                }
                if ((this->field_06F7 == CASE_1C) &&
                   /* ST_CALLSITE[00489E5B]: CALL dword ptr [EDX + 0x120]; [STIndirectCallsiteApplier] exact slot 0x120; signature=__thiscall;/undefined4;pointer:/STGameObjC */
                   (iVar16 = (*local_8->vtable[1].vfunc_4C)(local_8), iVar16 == 1)) {
                  iVar12 = iVar12 / 0x14;
                }
                if (local_34 < iVar12) {
                  this->field_0487 = local_8->field_0024;
                  this->field_048B = (uint)(ushort)local_8->field_0032;
                  this->field_0483 = (-(uint)(local_8->field_0020 != 0x1ae) & 0xfffffffe) + CASE_3;
                  local_34 = iVar12;
                }
              }
            }
LAB_00489eb0:
            local_18 = local_18 + 1;
          } while ((int)local_18 < (int)pDVar4->count);
        }
        DArrayDestroy(pDVar4);
        if (this->field_048B != 0xffff) {
          local_1c = 0;
        }
      }
      if (local_20 != nullptr) {
        FreeAndNull(&local_20);
        return local_1c;
      }
      break;
    case CASE_1:
    case CASE_2:
    case CASE_3:
      /* ST_CALLSITE[00489EFF]: CALL 0x00402635; direct=00402635 STBoatC::_CheckDefenceShots */
      _CheckDefenceShots(this,0);
      if (this->field_0736 == 0) {
        pDVar4 = (DArrayTy *)
                 thunk_FUN_0043f7b0(*(byte *)&this->field_0024,(int *)this,
                                    (uint *)(int)this->field_0475,(int)this->field_0477,2,(int *)0x6
                                    ,6,2,0);
      }
      else {
        pDVar4 = (DArrayTy *)
                 thunk_FUN_0043f7b0(*(byte *)&this->field_0024,(int *)this,
                                    (uint *)(int)this->field_0475,(int)this->field_0477,2,(int *)0x6
                                    ,6,2,1);
      }
      if (pDVar4 != nullptr) {
        local_18 = 0;
        if (0 < (int)pDVar4->count) {
          do {
            DArrayGetElement(pDVar4,local_18,&local_8);
            /* ST_CALLSITE[00489F91]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; signature=__thiscall;/undefined4;pointer:/STGameObjC */
            iVar12 = (*local_8->vtable[1].vfunc_24)(local_8);
            /* ST_CALLSITE[00489FA4]: CALL dword ptr [EAX + 0xf0]; [STIndirectCallsiteApplier] exact slot 0xF0; signature=__thiscall;/undefined4;pointer:/STGameObjC */
            if (((iVar12 != 0) && (iVar12 = (*local_8->vtable[1].MoveStep)(local_8), iVar12 != 0))
               /* ST_CALLSITE[00489FBB]: CALL dword ptr [EDX + 0xf4] */
               && (iVar12 = (*local_8->vtable[1].vfunc_20)(local_8), iVar12 != 0)) {
              thunk_FUN_00416270(local_8,&local_14,&local_10,(short *)&local_c);
              local_EAX_1627 =
                   FUN_006acf0d((int)this->field_0041,(int)this->field_0043,(int)this->field_0045,
                                (int)(short)local_14,(int)(short)local_10,(int)(short)local_c);
              local_38 = local_EAX_1627;
              if ((local_EAX_1627 == 0) ||
                 (uVar5 = (int)(short)local_c - (int)this->field_0045, uVar13 = (int)uVar5 >> 0x1f,
                 (int)(((uVar5 ^ uVar13) - uVar13) * 10) / local_EAX_1627 < 4)) {
                /* ST_CALLSITE[0048A04A]: CALL dword ptr [EAX + 0x10] */
                uVar3 = (*this->vtable->vfunc_10)
                                  (this->field_0041,this->field_0043,
                                   STReplaceLowWord((uint32_t)(local_10), (uint16_t)(this->field_0045)),
                                   (short)local_14,(short)local_10,local_c);
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                local_24 = CONCAT22(extraout_var_00,uVar3);
                local_2c = 0;
                if (this->field_02B2 != '\0') {
                  local_30 = (undefined2 *)&this->field_0x2a8;
                  do {
                    puVar6 = thunk_FUN_0041dc40(local_58,(short)*(undefined4 *)(local_30 + -1),
                                                local_30[1],(short)local_24);
                    local_40 = (short)*puVar6;
                    sStack_3e = (short)((uint)*puVar6 >> 0x10);
                    sVar14 = this->field_0043 - sStack_3e;
                    sVar15 = this->field_0041 + local_40;
                    local_28 = STReplaceLowWord((uint32_t)(puVar6), (uint16_t)(this->field_0045 + *(short *)(puVar6 + 1)));
                    sStack_3e = *local_30;
                    local_40 = 0;
                    puVar6 = thunk_FUN_0041dc40(local_60,0,0,(short)local_24);
                    local_40 = (short)*puVar6;
                    sStack_3e = (short)((uint)*puVar6 >> 0x10);
                    local_3c = *(undefined2 *)(puVar6 + 1);
                    sVar17 = (short)local_14 + local_40;
                    sVar18 = (short)local_10 - sStack_3e;
                    if (this->field_0736 == 0) {
                      /* ST_CALLSITE[0048A123]: CALL 0x00405907; direct=00405907 STSprGameObjC::CheckRay */
                      iVar12 = STSprGameObjC::CheckRay
                                         ((STSprGameObjC *)this,sVar15,sVar14,(short)local_28,sVar17
                                          ,sVar18,(short)local_c,this->field_079A,nullptr,0);
                      local_EAX_1627 = local_38;
                    }
                    else {
                      /* ST_CALLSITE[0048A14B]: CALL 0x00405907; direct=00405907 STSprGameObjC::CheckRay */
                      iVar12 = STSprGameObjC::CheckRay
                                         ((STSprGameObjC *)this,sVar15,sVar14,(short)local_28,sVar17
                                          ,sVar18,(short)local_c,this->field_079A,nullptr,1);
                      local_EAX_1627 = local_38;
                    }
                    local_38 = local_EAX_1627;
                    if (iVar12 == 0) goto LAB_0048a2dd;
                    local_2c = local_2c + 1;
                    local_30 = local_30 + 3;
                  } while (local_2c < (int)(uint)(byte)this->field_02B2);
                }
                iVar16 = ((int)this->field_0816 - local_EAX_1627 / 0xc9) * 0x32;
                /* ST_CALLSITE[0048A1A1]: CALL dword ptr [EDX + 0xfc]; [STIndirectCallsiteApplier] exact slot 0xFC; signature=__thiscall;/undefined4;pointer:/STGameObjC */
                iVar12 = (*local_8->vtable[1].vfunc_28)(local_8);
                if (0 < iVar12) {
                  iVar16 = iVar16 + 300;
                }
                iVar12 = local_8->field_0219;
                iVar1 = local_8->field_0215;
                /* ST_CALLSITE[0048A1CF]: CALL dword ptr [EAX + 0x7c] */
                iVar8 = local_8->vfunc_7C();
                iVar12 = iVar16 + (STSignedDiv4(iVar12)) + iVar1 + iVar8 * 2;
                if (((uint)(ushort)local_8->field_0032 == this->field_048B) &&
                   (local_8->field_0024 == this->field_0487)) {
                  if ((this->field_0483 == CASE_1) &&
                     (((uVar5 = local_8->field_0020, uVar5 == 0x14 || (uVar5 == 1000)) ||
                      (uVar5 == 0x3e9)))) {
LAB_0048a226:
                    iVar12 = iVar12 + 200;
                    goto LAB_0048a22c;
                  }
                  if (this->field_0483 != CASE_3) goto LAB_0048a22c;
                  if (local_8->field_0020 == 0x1ae) goto LAB_0048a226;
LAB_0048a235:
                  pDVar10 = this->field_047B;
                  if ((pDVar10 != nullptr) && (uVar5 = 0, 0 < (int)pDVar10->count)) {
                    do {
                      DArrayGetElement(pDVar10,uVar5,&local_70);
                      if ((local_6c == local_8->field_0032) && (local_70 == local_8->field_0024)) {
                        iVar12 = iVar12 + local_6a;
                        break;
                      }
                      pDVar10 = this->field_047B;
                      uVar5 = uVar5 + 1;
                    } while ((int)uVar5 < (int)pDVar10->count);
                  }
                }
                else {
LAB_0048a22c:
                  if (local_8->field_0020 != 0x1ae) goto LAB_0048a235;
                }
                if ((this->field_06F7 == CASE_1C) &&
                   /* ST_CALLSITE[0048A288]: CALL dword ptr [EDX + 0x120]; [STIndirectCallsiteApplier] exact slot 0x120; signature=__thiscall;/undefined4;pointer:/STGameObjC */
                   (iVar16 = (*local_8->vtable[1].vfunc_4C)(local_8), iVar16 == 1)) {
                  iVar12 = iVar12 / 0x14;
                }
                if (local_34 < iVar12) {
                  this->field_0487 = local_8->field_0024;
                  this->field_048B = (uint)(ushort)local_8->field_0032;
                  this->field_0483 = (-(uint)(local_8->field_0020 != 0x1ae) & 0xfffffffe) + CASE_3;
                  local_34 = iVar12;
                }
              }
            }
LAB_0048a2dd:
            local_18 = local_18 + 1;
          } while ((int)local_18 < (int)pDVar4->count);
        }
        DArrayDestroy(pDVar4);
        if (this->field_048B != 0xffff) {
          return 0;
        }
      }
      break;
    case CASE_FFFFFFFF:
      return 1;
    default:
      iVar11 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x4677,0,0,"%s",
                                  "STBoatC::GetDefenceTarget - incorrect entry");
      if (iVar11 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException
                (0,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x4678);
      return 0xffffffff;
    }
  }
  return local_1c;
}

