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
  code *pcVar2;
  STGroupBoatC *this_00;
  DArrayTy *pDVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  DArrayTy *pDVar9;
  int iVar10;
  uint uVar11;
  short sVar12;
  short sVar13;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *unaff_EDI;
  short sVar14;
  short sVar15;
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
  undefined4 local_14;
  int local_10;
  int local_c;
  STGameObjC *local_8;

  local_34 = 0;
  local_20 = (undefined4 *)0x0;
  if ((this->field_079A == 0) || (0 < (int)this->field_073A)) {
    this->field_0483 = 0;
    *(undefined4 *)&this->field_0x487 = 0xffffffff;
    this->field_048B = 0xffff;
    this->field_047F = 0;
LAB_0048a37f:
    local_1c = 1;
  }
  else {
    iVar10 = this->field_047F + 1;
    this->field_047F = iVar10;
    if (this->field_048B == 0xffff) {
      if (iVar10 % 0x14 != 0) goto LAB_0048a37f;
    }
    else {
      local_8 = STAllPlayersC::GetObjPtr
                          (g_sTAllPlayers_007FA174,this->field_0x487,this->field_048B,
                           this->field_0483);
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      if (((local_8 != (STGameObjC *)0x0) &&
          (iVar10 = (*local_8->vtable[1].vfunc_24)(), iVar10 == 1)) &&
         (iVar10 = (*local_8->vtable[1].MoveStep)(local_8,unaff_EDI), iVar10 == 1)) {
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        unaff_EDI = *(int **)&this->field_0x24;
        iVar10 = (*local_8->vtable[1].vfunc_20)();
        if ((iVar10 == 1) && ((int)this->field_047F % 0x28 != 0)) {
          return 0;
        }
      }
    }
    this->field_0483 = 0;
    *(undefined4 *)&this->field_0x487 = 0xffffffff;
    this->field_048B = 0xffff;
    this->field_047F = 0;
    local_1c = 1;
    switch(param_1) {
    case CASE_0:
      _CheckDefenceShots(this,0);
      pDVar3 = (DArrayTy *)
               thunk_FUN_0043f7b0(this->field_0x24,(int *)this,(uint *)(int)(short)this->field_0475,
                                  (int)(short)this->field_0477,2,(int *)0x6,6,2,
                                  (uint)(*(int *)&this->field_0x736 != 0));
      if (pDVar3 != (DArrayTy *)0x0) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        this_00 = thunk_FUN_0042b760(this->field_0x24,
                                     CONCAT22((short)((uint)pDVar3 >> 0x10),this->field_0030));
        local_20 = thunk_FUN_0040c080(this_00,(uint)(ushort)this->field_0032,(uint *)pDVar3);
        local_18 = 0;
        if (0 < (int)pDVar3->count) {
          do {
            iVar10 = local_20[local_18];
            if ((iVar10 != -4) && (iVar10 < 9)) {
              iVar6 = (8 - iVar10) * 0x32;
              DArrayGetElement(pDVar3,local_18,&local_8);
              iVar10 = (*local_8->vtable[1].vfunc_24)();
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              if ((iVar10 != 0) &&
                 (iVar10 = (*local_8->vtable[1].MoveStep)(local_8,unaff_EDI), iVar10 != 0)) {
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                unaff_EDI = *(int **)&this->field_0x24;
                iVar10 = (*local_8->vtable[1].vfunc_20)();
                if (iVar10 != 0) {
                  iVar10 = (*local_8->vtable[1].vfunc_28)();
                  if (0 < iVar10) {
                    iVar6 = iVar6 + 300;
                  }
                  iVar10 = *(int *)&local_8[1].field_0x48;
                  iVar1 = *(int *)&local_8[1].field_0x44;
                  iVar7 = (*local_8->vtable->vfunc_7C)();
                  local_38 = iVar6 + ((int)(iVar10 + (iVar10 >> 0x1f & 3U)) >> 2) + iVar1 +
                             iVar7 * 2;
                  if ((((uint)*(ushort *)&local_8->field_0x32 == this->field_048B) &&
                      (local_8->field_0024 == *(int *)&this->field_0x487)) &&
                     (((this->field_0483 == 1 &&
                       (((iVar10 = local_8->field_0020, iVar10 == 0x14 || (iVar10 == 1000)) ||
                        (iVar10 == 0x3e9)))) ||
                      ((this->field_0483 == 3 && (local_8->field_0020 == 0x1ae)))))) {
                    local_38 = local_38 + 200;
                  }
                  iVar10 = local_38;
                  thunk_FUN_00416270(local_8,(undefined2 *)&local_14,&local_10,&local_c);
                  iVar6 = FUN_006acf0d((int)this->field_0041,(int)this->field_0043,
                                       (int)this->field_0045,(int)(short)local_14,
                                       (int)(short)local_10,(int)(short)local_c);
                  if ((iVar6 == 0) ||
                     (uVar4 = (int)(short)local_c - (int)this->field_0045,
                     uVar11 = (int)uVar4 >> 0x1f,
                     (int)(((uVar4 ^ uVar11) - uVar11) * 10) / iVar6 < 4)) {
                    local_24 = (*this->vtable->vfunc_10)
                                         (this->field_0041,this->field_0043,this->field_0045,
                                          local_14,local_10,local_c);
                    local_2c = 0;
                    if (this->field_0x2b2 != '\0') {
                      local_30 = (undefined2 *)&this->field_0x2a8;
                      do {
                        puVar5 = (undefined4 *)
                                 thunk_FUN_0041dc40(local_48,(short)*(undefined4 *)(local_30 + -1),
                                                    local_30[1],(short)local_24);
                        local_40 = (short)*puVar5;
                        sStack_3e = (short)((uint)*puVar5 >> 0x10);
                        sVar12 = this->field_0043 - sStack_3e;
                        sVar13 = this->field_0041 + local_40;
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        local_28 = CONCAT22((short)((uint)puVar5 >> 0x10),
                                            this->field_0045 + *(short *)(puVar5 + 1));
                        sStack_3e = *local_30;
                        local_40 = 0;
                        puVar5 = (undefined4 *)thunk_FUN_0041dc40(local_50,0,0,(short)local_24);
                        local_40 = (short)*puVar5;
                        sStack_3e = (short)((uint)*puVar5 >> 0x10);
                        local_3c = *(undefined2 *)(puVar5 + 1);
                        sVar14 = (short)local_14 + local_40;
                        sVar15 = (short)local_10 - sStack_3e;
                        if (*(int *)&this->field_0x736 == 0) {
                          iVar6 = STSprGameObjC::CheckRay
                                            ((STSprGameObjC *)this,sVar13,sVar12,(short)local_28,
                                             sVar14,sVar15,(short)local_c,this->field_079A,
                                             (int *)0x0,0);
                          iVar10 = local_38;
                        }
                        else {
                          iVar6 = STSprGameObjC::CheckRay
                                            ((STSprGameObjC *)this,sVar13,sVar12,(short)local_28,
                                             sVar14,sVar15,(short)local_c,this->field_079A,
                                             (int *)0x0,1);
                          iVar10 = local_38;
                        }
                        local_38 = iVar10;
                        if (iVar6 == 0) {
                          if (*(int *)&this->field_0x7e6 != 0) goto LAB_00489eb0;
                          goto LAB_00489dfc;
                        }
                        local_2c = local_2c + 1;
                        local_30 = local_30 + 3;
                      } while (local_2c < (int)(uint)(byte)this->field_0x2b2);
                    }
                    iVar10 = iVar10 + 200;
                  }
LAB_00489dfc:
                  if (((local_8->field_0020 != 0x1ae) &&
                      (pDVar9 = (DArrayTy *)this->field_047B, pDVar9 != (DArrayTy *)0x0)) &&
                     (uVar4 = 0, 0 < (int)pDVar9->count)) {
                    do {
                      DArrayGetElement(pDVar9,uVar4,&local_70);
                      if ((local_6c == *(short *)&local_8->field_0x32) &&
                         (local_70 == local_8->field_0024)) {
                        iVar10 = iVar10 + local_6a;
                        break;
                      }
                      pDVar9 = (DArrayTy *)this->field_047B;
                      uVar4 = uVar4 + 1;
                    } while ((int)uVar4 < (int)pDVar9->count);
                  }
                  if ((this->field_06F7 == CASE_1C) &&
                     (iVar6 = (*local_8->vtable[1].vfunc_4C)(), iVar6 == 1)) {
                    iVar10 = iVar10 / 0x14;
                  }
                  if (local_34 < iVar10) {
                    *(undefined4 *)&this->field_0x487 = local_8->field_0024;
                    this->field_048B = (uint)*(ushort *)&local_8->field_0x32;
                    this->field_0483 = (-(uint)(local_8->field_0020 != 0x1ae) & 0xfffffffe) + 3;
                    local_34 = iVar10;
                  }
                }
              }
            }
LAB_00489eb0:
            local_18 = local_18 + 1;
          } while ((int)local_18 < (int)pDVar3->count);
        }
        DArrayDestroy(pDVar3);
        if (this->field_048B != 0xffff) {
          local_1c = 0;
        }
      }
      if (local_20 != (undefined4 *)0x0) {
        FreeAndNull(&local_20);
        return local_1c;
      }
      break;
    case CASE_1:
    case CASE_2:
    case CASE_3:
      _CheckDefenceShots(this,0);
      if (*(int *)&this->field_0x736 == 0) {
        pDVar3 = (DArrayTy *)
                 thunk_FUN_0043f7b0(this->field_0x24,(int *)this,
                                    (uint *)(int)(short)this->field_0475,
                                    (int)(short)this->field_0477,2,(int *)0x6,6,2,0);
      }
      else {
        pDVar3 = (DArrayTy *)
                 thunk_FUN_0043f7b0(this->field_0x24,(int *)this,
                                    (uint *)(int)(short)this->field_0475,
                                    (int)(short)this->field_0477,2,(int *)0x6,6,2,1);
      }
      if (pDVar3 != (DArrayTy *)0x0) {
        local_18 = 0;
        if (0 < (int)pDVar3->count) {
          do {
            DArrayGetElement(pDVar3,local_18,&local_8);
            iVar10 = (*local_8->vtable[1].vfunc_24)();
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            if ((iVar10 != 0) &&
               (iVar10 = (*local_8->vtable[1].MoveStep)(local_8,unaff_EDI), iVar10 != 0)) {
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              unaff_EDI = *(int **)&this->field_0x24;
              iVar10 = (*local_8->vtable[1].vfunc_20)();
              if (iVar10 != 0) {
                thunk_FUN_00416270(local_8,(undefined2 *)&local_14,&local_10,&local_c);
                iVar10 = FUN_006acf0d((int)this->field_0041,(int)this->field_0043,
                                      (int)this->field_0045,(int)(short)local_14,
                                      (int)(short)local_10,(int)(short)local_c);
                local_38 = iVar10;
                if ((iVar10 == 0) ||
                   (uVar4 = (int)(short)local_c - (int)this->field_0045, uVar11 = (int)uVar4 >> 0x1f
                   , (int)(((uVar4 ^ uVar11) - uVar11) * 10) / iVar10 < 4)) {
                  local_24 = (*this->vtable->vfunc_10)
                                       (this->field_0041,this->field_0043,this->field_0045,local_14,
                                        local_10,local_c);
                  local_2c = 0;
                  if (this->field_0x2b2 != '\0') {
                    local_30 = (undefined2 *)&this->field_0x2a8;
                    do {
                      puVar5 = (undefined4 *)
                               thunk_FUN_0041dc40(local_58,(short)*(undefined4 *)(local_30 + -1),
                                                  local_30[1],(short)local_24);
                      local_40 = (short)*puVar5;
                      sStack_3e = (short)((uint)*puVar5 >> 0x10);
                      sVar12 = this->field_0043 - sStack_3e;
                      sVar13 = this->field_0041 + local_40;
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      local_28 = CONCAT22((short)((uint)puVar5 >> 0x10),
                                          this->field_0045 + *(short *)(puVar5 + 1));
                      sStack_3e = *local_30;
                      local_40 = 0;
                      puVar5 = (undefined4 *)thunk_FUN_0041dc40(local_60,0,0,(short)local_24);
                      local_40 = (short)*puVar5;
                      sStack_3e = (short)((uint)*puVar5 >> 0x10);
                      local_3c = *(undefined2 *)(puVar5 + 1);
                      sVar14 = (short)local_14 + local_40;
                      sVar15 = (short)local_10 - sStack_3e;
                      if (*(int *)&this->field_0x736 == 0) {
                        iVar6 = STSprGameObjC::CheckRay
                                          ((STSprGameObjC *)this,sVar13,sVar12,(short)local_28,
                                           sVar14,sVar15,(short)local_c,this->field_079A,(int *)0x0,
                                           0);
                        iVar10 = local_38;
                      }
                      else {
                        iVar6 = STSprGameObjC::CheckRay
                                          ((STSprGameObjC *)this,sVar13,sVar12,(short)local_28,
                                           sVar14,sVar15,(short)local_c,this->field_079A,(int *)0x0,
                                           1);
                        iVar10 = local_38;
                      }
                      local_38 = iVar10;
                      if (iVar6 == 0) goto LAB_0048a2dd;
                      local_2c = local_2c + 1;
                      local_30 = local_30 + 3;
                    } while (local_2c < (int)(uint)(byte)this->field_0x2b2);
                  }
                  iVar6 = ((int)this->field_0816 - iVar10 / 0xc9) * 0x32;
                  iVar10 = (*local_8->vtable[1].vfunc_28)();
                  if (0 < iVar10) {
                    iVar6 = iVar6 + 300;
                  }
                  iVar10 = *(int *)&local_8[1].field_0x48;
                  iVar1 = *(int *)&local_8[1].field_0x44;
                  iVar7 = (*local_8->vtable->vfunc_7C)();
                  iVar10 = iVar6 + ((int)(iVar10 + (iVar10 >> 0x1f & 3U)) >> 2) + iVar1 + iVar7 * 2;
                  if (((uint)*(ushort *)&local_8->field_0x32 == this->field_048B) &&
                     (local_8->field_0024 == *(int *)&this->field_0x487)) {
                    if ((this->field_0483 == 1) &&
                       (((iVar6 = local_8->field_0020, iVar6 == 0x14 || (iVar6 == 1000)) ||
                        (iVar6 == 0x3e9)))) {
LAB_0048a226:
                      iVar10 = iVar10 + 200;
                      goto LAB_0048a22c;
                    }
                    if (this->field_0483 != 3) goto LAB_0048a22c;
                    if (local_8->field_0020 == 0x1ae) goto LAB_0048a226;
LAB_0048a235:
                    pDVar9 = (DArrayTy *)this->field_047B;
                    if ((pDVar9 != (DArrayTy *)0x0) && (uVar4 = 0, 0 < (int)pDVar9->count)) {
                      do {
                        DArrayGetElement(pDVar9,uVar4,&local_70);
                        if ((local_6c == *(short *)&local_8->field_0x32) &&
                           (local_70 == local_8->field_0024)) {
                          iVar10 = iVar10 + local_6a;
                          break;
                        }
                        pDVar9 = (DArrayTy *)this->field_047B;
                        uVar4 = uVar4 + 1;
                      } while ((int)uVar4 < (int)pDVar9->count);
                    }
                  }
                  else {
LAB_0048a22c:
                    if (local_8->field_0020 != 0x1ae) goto LAB_0048a235;
                  }
                  if ((this->field_06F7 == CASE_1C) &&
                     (iVar6 = (*local_8->vtable[1].vfunc_4C)(), iVar6 == 1)) {
                    iVar10 = iVar10 / 0x14;
                  }
                  if (local_34 < iVar10) {
                    *(undefined4 *)&this->field_0x487 = local_8->field_0024;
                    this->field_048B = (uint)*(ushort *)&local_8->field_0x32;
                    this->field_0483 = (-(uint)(local_8->field_0020 != 0x1ae) & 0xfffffffe) + 3;
                    local_34 = iVar10;
                  }
                }
              }
            }
LAB_0048a2dd:
            local_18 = local_18 + 1;
          } while ((int)local_18 < (int)pDVar3->count);
        }
        DArrayDestroy(pDVar3);
        if (this->field_048B != 0xffff) {
          return 0;
        }
      }
      break;
    case CASE_FFFFFFFF:
      return 1;
    default:
      iVar10 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4677,0,0,&DAT_007a4ccc,
                                  s_STBoatC__GetDefenceTarget___inco_007ab974);
      if (iVar10 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException
                (0,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4678);
      return 0xffffffff;
    }
  }
  return local_1c;
}

