#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Recharge */

int __thiscall STBoatC::Recharge(STBoatC *this,int param_1)

{
  byte *puVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  STWorldObject *pSVar5;
  ushort uVar7;
  int local_EAX_103;
  int local_EAX_147;
  int local_EAX_201;
  int local_EAX_228;
  int local_EAX_618;
  int local_EAX_645;
  int local_EAX_919;
  int local_EAX_990;
  int local_EAX_1017;
  int local_EAX_1388;
  int local_EAX_1434;
  int local_EAX_1784;
  int local_EAX_1810;
  int local_EAX_1837;
  int local_EAX_2280;
  int local_EAX_2613;
  int iVar9;
  int local_EAX_2758;
  STBoatCVTable *pSVar8;
  int iVar10;
  int iVar11;
  int iVar12;

  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    iVar11 = 0;
    this->field_02C4 = 0;
    /* ST_CALLSITE[004790EB]: CALL 0x00403594; direct=00403594 TLOBaseTy::sub_004D6DF0 */
    iVar9 = TLOBaseTy::sub_004D6DF0((TLOBaseTy *)this);
    if ((iVar9 == 0) ||
       /* ST_CALLSITE[004790FA]: CALL 0x00401e6f; direct=00401E6F STBoatC::CheckForReplenisher */
       ((iVar11 = CheckForReplenisher(this), iVar11 == 1 &&

        (local_EAX_2758 = thunk_FUN_004d6f70((int *)this), local_EAX_2758 == 1)))) {
      this->field_0631 = 0;
      *(undefined4 *)&this->field_0x62d = 0;
      return 2;
    }
    this->field_0619 = this->field_03F7;
    if (this->field_03F7 == 0) {
      sVar2 = this->field_03FB;
      sVar3 = this->field_03FD;
      sVar4 = this->field_03FF;
      this->field_061D = sVar2;
      this->field_061F = sVar3;
      this->field_0621 = sVar4;
      if (sVar2 < 0) {
        return 0;
      }
      if (g_worldGrid.sizeX <= sVar2) {
        return 0;
      }
      if (sVar3 < 0) {
        return 0;
      }
      if (g_worldGrid.sizeY <= sVar3) {
        return 0;
      }
      if (sVar4 < 0) {
        return 0;
      }
      if (g_worldGrid.sizeZ <= sVar4) {
        return 0;
      }
      pSVar5 = STGridAt3D(g_worldGrid, sVar2, sVar3, sVar4).objects[0];
      if (pSVar5 == nullptr) {
        return 0;
      }
      /* ST_CALLSITE[004791CB]: CALL dword ptr [EDX + 0x2c] */
      iVar11 = pSVar5->GetObjectTypeId();
      if (iVar11 != 0x62) {
        return 0;
      }
      if (pSVar5[1].vtable != (STWorldObjectVTable *)this->field_0024) {
        return 0;
      }
      /* ST_CALLSITE[004791E9]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
      iVar11 = (*pSVar5->vtable[5].slots_00_28[2])(pSVar5);
      if (iVar11 == 0) {
        return 0;
      }
      this->field_0623 = *(undefined4 *)&pSVar5->field_0x18;
    }
    else {

      iVar11 = thunk_FUN_004934b0(this,&this->field_061D,&this->field_061F,&this->field_0621,
                                  &this->field_0623);
      if (iVar11 == 0) {
        return 0;
      }
    }
    this->field_0631 = 1;
    this->field_00B7 = 3;
    /* ST_CALLSITE[00479259]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
    sub_00481520(this,(int)this->field_061D,(int)this->field_061F,(int)this->field_0621);
    /* ST_CALLSITE[00479261]: CALL 0x004031de; direct=004031DE STBoatC::sub_00460260 */
    sub_00460260(this,0);
    pSVar8 = this->vtable;
LAB_0047926a:
    /* ST_CALLSITE[0047926A]: CALL dword ptr [EAX + 0xd8] */
    iVar11 = (*pSVar8->vfunc_D8)(this);
    return (-(uint)(iVar11 != 0) & 0xfffffffd) + 2;
  }
  iVar11 = this->field_0631;
  if (iVar11 == 0) {
    iVar11 = *(int *)&this->field_0x62d + 1;
    *(int *)&this->field_0x62d = iVar11;
    pSVar8 = this->vtable;
    if (iVar11 != 2) goto LAB_0047926a;
    /* ST_CALLSITE[00478682]: CALL dword ptr [EAX + 0xd8] */
    iVar11 = (*pSVar8->vfunc_D8)(this);
    if (iVar11 != 0) {
      return -1;
    }
    goto cf_common_exit_00478E51;
  }
  if (iVar11 == 1) {
    /* ST_CALLSITE[004786A7]: CALL 0x004031de; direct=004031DE STBoatC::sub_00460260 */
    local_EAX_103 = sub_00460260(this,2);
    switch(local_EAX_103) {
    case 0:
      /* ST_CALLSITE[00478709]: CALL 0x00403594; direct=00403594 TLOBaseTy::sub_004D6DF0 */
      local_EAX_201 = TLOBaseTy::sub_004D6DF0((TLOBaseTy *)this);
      if ((local_EAX_201 != 0) &&
         /* ST_CALLSITE[00478718]: CALL 0x00401e6f; direct=00401E6F STBoatC::CheckForReplenisher */
         ((iVar11 = CheckForReplenisher(this), iVar11 != 1 ||

          (local_EAX_228 = thunk_FUN_004d6f70((int *)this), local_EAX_228 != 1)))) {
        sVar2 = this->field_061D;
        sVar3 = this->field_0621;
        sVar4 = this->field_061F;
        if (((-1 < sVar2) &&
            (((sVar2 < g_worldGrid.sizeX && (-1 < sVar4)) && (sVar4 < g_worldGrid.sizeY)))) &&
           (((-1 < sVar3 && (sVar3 < g_worldGrid.sizeZ)) &&
            ((pSVar5 = STGridAt3D(g_worldGrid, sVar2, sVar4, sVar3).objects[0],
             pSVar5 != nullptr &&
             ((*(int *)&pSVar5->field_0x18 == this->field_0623 &&
              /* ST_CALLSITE[004787CC]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
              (iVar11 = (*pSVar5->vtable[5].slots_00_28[2])(pSVar5), iVar11 != 0)))))))) {
          this->field_00B7 = 0;

          iVar11 = SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00493610::
                   thunk_FUN_00493610((RecoveredReceiver_00493610 *)this,&this->field_0627,
                                      &this->field_0629,(short *)&this->field_0x62b);
          if (iVar11 == 1) {
            iVar10 = (int)*(short *)&this->field_0x62b;
            iVar12 = (int)this->field_0629;
            iVar11 = (int)this->field_0627;
            this->field_0631 = 3;
            goto cf_common_exit_00478B83;
          }
LAB_00478d20:
          this->field_0631 = 2;
          *(undefined4 *)&this->field_0x62d = 0;
          /* ST_CALLSITE[00478D38]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
          local_EAX_1784 = Defence(this,0);
          if (local_EAX_1784 == -1) {
            return -1;
          }
cf_common_exit_0047928C:
          return 2;
        }
        if (this->field_0619 == 0) {
LAB_0047885b:
          /* ST_CALLSITE[0047885D]: CALL 0x00403855; direct=00403855 STBoatC::sub_004602B0 */
          sub_004602B0(this);
          this->field_00B7 = 0;
          return 0;
        }

        iVar11 = thunk_FUN_004934b0(this,&this->field_061D,&this->field_061F,&this->field_0621,
                                    &this->field_0623);
        if (iVar11 == 0) goto LAB_0047885b;
        sVar2 = this->field_0621;
        sVar4 = this->field_061F;
        goto LAB_00478b7a;
      }
      break;
    case 1:
      /* ST_CALLSITE[004788AA]: CALL 0x00403594; direct=00403594 TLOBaseTy::sub_004D6DF0 */
      local_EAX_618 = TLOBaseTy::sub_004D6DF0((TLOBaseTy *)this);
      if ((local_EAX_618 != 0) &&
         /* ST_CALLSITE[004788B9]: CALL 0x00401e6f; direct=00401E6F STBoatC::CheckForReplenisher */
         ((iVar11 = CheckForReplenisher(this), iVar11 != 1 ||

          (local_EAX_645 = thunk_FUN_004d6f70((int *)this), local_EAX_645 != 1)))) {
        sVar2 = this->field_061D;
        sVar3 = this->field_0621;
        sVar4 = this->field_061F;
        if (((-1 < sVar2) &&
            (((sVar2 < g_worldGrid.sizeX && (-1 < sVar4)) && (sVar4 < g_worldGrid.sizeY)))) &&
           (((-1 < sVar3 && (sVar3 < g_worldGrid.sizeZ)) &&
            ((pSVar5 = STGridAt3D(g_worldGrid, sVar2, sVar4, sVar3).objects[0],
             pSVar5 != nullptr &&
             ((*(int *)&pSVar5->field_0x18 == this->field_0623 &&
              /* ST_CALLSITE[00478955]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
              (iVar11 = (*pSVar5->vtable[5].slots_00_28[2])(pSVar5), iVar11 != 0)))))))) {
          return 2;
        }
        if ((this->field_0619 == 0) ||

           (iVar11 = thunk_FUN_004934b0(this,&this->field_061D,&this->field_061F,&this->field_0621,
                                        &this->field_0623), iVar11 == 0)) {
          /* ST_CALLSITE[00478994]: CALL 0x00403855; direct=00403855 STBoatC::sub_004602B0 */
          sub_004602B0(this);
          this->field_00B7 = 0;
          return 0;
        }
        goto LAB_00478b73;
      }
      break;
    default:
      goto cf_common_exit_0047928C;
    case 3:
      /* ST_CALLSITE[0047888F]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
      sub_00481520(this,(int)this->field_061D,(int)this->field_061F,(int)this->field_0621);
      /* ST_CALLSITE[00478897]: CALL 0x004031de; direct=004031DE STBoatC::sub_00460260 */
      sub_00460260(this,0);
      return 2;
    case -1:

      local_EAX_147 =
           ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x33d4,0,0,"%s",
                              "STBoatC::Recharge, RECHARGE_MOVE error");
      if (local_EAX_147 == 0) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x33d4
                  );
        return 0xffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    /* ST_CALLSITE[004789AE]: CALL 0x00403855; direct=00403855 STBoatC::sub_004602B0 */
    sub_004602B0(this);
    this->field_00B7 = 0;
cf_common_exit_00478E51:
    /* ST_CALLSITE[00478E5C]: CALL dword ptr [EDX + 0x90] */
    this->vfunc_90(3,0x1b2);
    return 0;
  }
  if (iVar11 == 2) {
    *(int *)&this->field_0x62d = *(int *)&this->field_0x62d + 1;
    /* ST_CALLSITE[004789D7]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
    local_EAX_919 = Defence(this,2);
    if (local_EAX_919 == -1) {
      return -1;
    }
    if (this->field_082E != ~CASE_FFFFFFFF) {
      return 2;
    }
    if (this->field_048B != 0xffff) {
      return 2;
    }
    if (*(int *)&this->field_0x62d % 10 != 0) {
      return 2;
    }
    /* ST_CALLSITE[00478A1E]: CALL 0x00403594; direct=00403594 TLOBaseTy::sub_004D6DF0 */
    local_EAX_990 = TLOBaseTy::sub_004D6DF0((TLOBaseTy *)this);
    if ((local_EAX_990 == 0) ||
       /* ST_CALLSITE[00478A2D]: CALL 0x00401e6f; direct=00401E6F STBoatC::CheckForReplenisher */
       ((iVar11 = CheckForReplenisher(this), iVar11 == 1 &&

        (local_EAX_1017 = thunk_FUN_004d6f70((int *)this), local_EAX_1017 == 1))))
    goto cf_common_exit_00478E51;
    sVar2 = this->field_061D;
    sVar3 = this->field_0621;
    sVar4 = this->field_061F;
    if (((-1 < sVar2) &&
        (((((sVar2 < g_worldGrid.sizeX && (-1 < sVar4)) && (sVar4 < g_worldGrid.sizeY)) &&
          ((-1 < sVar3 && (sVar3 < g_worldGrid.sizeZ)))) &&
         (pSVar5 = STGridAt3D(g_worldGrid, sVar2, sVar4, sVar3).objects[0], pSVar5 != nullptr)))) &&
       ((*(int *)&pSVar5->field_0x18 == this->field_0623 &&
        /* ST_CALLSITE[00478AE1]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
        (iVar11 = (*pSVar5->vtable[5].slots_00_28[2])(pSVar5), iVar11 != 0)))) {

      iVar11 = SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00493610::
               thunk_FUN_00493610((RecoveredReceiver_00493610 *)this,&this->field_0627,
                                  &this->field_0629,(short *)&this->field_0x62b);
      if (iVar11 != 1) {
        return 2;
      }
      this->field_0631 = 3;
      goto LAB_00478b1a;
    }
    if (this->field_0619 == 0) {
      return 0;
    }

    iVar11 = thunk_FUN_004934b0(this,&this->field_061D,&this->field_061F,&this->field_0621,
                                &this->field_0623);
joined_r0x00478b59:
    if (iVar11 == 0) {
      return 0;
    }
LAB_00478b5f:
    this->field_0631 = 1;
    this->field_00B7 = 3;
LAB_00478b73:
    sVar2 = this->field_0621;
    sVar4 = this->field_061F;
LAB_00478b7a:
    sVar3 = this->field_061D;
  }
  else {
    if (iVar11 != 3) {
      if (iVar11 != 4) {
        if (iVar11 != 5) {
          return 2;
        }
        /* ST_CALLSITE[00479075]: CALL 0x004031de; direct=004031DE STBoatC::sub_00460260 */
        local_EAX_2613 = sub_00460260(this,2);
        if (local_EAX_2613 == -1) {
          return -1;
        }
        if (local_EAX_2613 == 0) {
          return 0;
        }
        if (local_EAX_2613 != 3) {
          return 2;
        }
        /* ST_CALLSITE[004790C8]: CALL 0x00404908; direct=00404908 STBoatC::sub_0048DFD0 */
        sub_0048DFD0(this,this->field_061D,this->field_061F,this->field_0621,this->field_061D,
                     this->field_061F,(int *)(uint)(ushort)this->field_0621,3,&this->field_0627,
                     &this->field_0629,(short *)&this->field_0x62b);
LAB_00478b1a:
        iVar10 = (int)*(short *)&this->field_0x62b;
        iVar12 = (int)this->field_0629;
        iVar11 = (int)this->field_0627;
        goto cf_common_exit_00478B83;
      }
      sVar2 = this->field_061D;
      sVar3 = this->field_0621;
      sVar4 = this->field_061F;
      if ((((sVar2 < 0) || (g_worldGrid.sizeX <= sVar2)) || (sVar4 < 0)) ||
         ((((g_worldGrid.sizeY <= sVar4 || (sVar3 < 0)) ||
           ((g_worldGrid.sizeZ <= sVar3 ||
            ((pSVar5 = STGridAt3D(g_worldGrid, sVar2, sVar4, sVar3).objects[0],
             pSVar5 == nullptr || (*(int *)&pSVar5->field_0x18 != this->field_0623)))))
           /* ST_CALLSITE[00478F18]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
           ) || (iVar11 = (*pSVar5->vtable[5].slots_00_28[2])(pSVar5), iVar11 == 0)))) {
        if (this->field_0619 == 0) {
          return 0;
        }

        iVar11 = thunk_FUN_004934b0(this,&this->field_061D,&this->field_061F,&this->field_0621,
                                    &this->field_0623);
        if (iVar11 == 0) {
          return 0;
        }
        iVar10 = (int)this->field_0621;
        iVar12 = (int)this->field_061F;
        iVar11 = (int)this->field_061D;
        this->field_0631 = 1;
        this->field_00B7 = 3;
        goto cf_common_exit_00478B83;
      }

      local_EAX_2280 = thunk_FUN_004d6f70((int *)this);
      if (local_EAX_2280 != 1) goto LAB_00478ff2;
      /* ST_CALLSITE[00478F41]: CALL dword ptr [EDX + 0x90] */
      this->vfunc_90(3,0x1b2);
      puVar1 = &this->field_0x62b;
      if (*(int *)&pSVar5[0x1d].field_0x18 == 0) {
LAB_00478f91:
        /* ST_CALLSITE[00478FBF]: CALL 0x00404908; direct=00404908 STBoatC::sub_0048DFD0 */
        sub_0048DFD0(this,this->field_061D,this->field_061F,this->field_0621,this->field_061D,
                     this->field_061F,(int *)(uint)(ushort)this->field_0621,3,&this->field_0627,
                     &this->field_0629,(short *)puVar1);
      }
      else {
        if (&this->field_0627 != nullptr) {
          uVar7 = *(undefined2 *)&pSVar5[0x1d].field_0x1e;
          this->field_0627 = *(undefined2 *)&pSVar5[0x1d].field_0x1c;
          this->field_0629 = uVar7;
        }
        if (&this->field_0629 != nullptr) {
          *(int *)&this->field_0629 = pSVar5[0x1d].value_20;
        }
        if (puVar1 != nullptr) {
          *(STWorldObjectVTable **)puVar1 = pSVar5[0x1e].vtable;
        }
        if (*(int *)&pSVar5[0x1d].field_0x18 == 0) goto LAB_00478f91;
      }
      this->field_0631 = 5;
      /* ST_CALLSITE[00478FE4]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
      sub_00481520(this,(int)this->field_0627,(int)this->field_0629,(int)*(short *)puVar1);
      /* ST_CALLSITE[00478FED]: CALL 0x004031de; direct=004031DE STBoatC::sub_00460260 */
      sub_00460260(this,0);
LAB_00478ff2:
      /* ST_CALLSITE[00478FF6]: CALL dword ptr [EDX + 0xd8] */
      iVar11 = this->vfunc_D8();
      return (-(uint)(iVar11 != 0) & 0xfffffffd) + 2;
    }
    /* ST_CALLSITE[00478BAC]: CALL 0x004031de; direct=004031DE STBoatC::sub_00460260 */
    local_EAX_1388 = sub_00460260(this,2);
    switch(local_EAX_1388) {
    case 0:
      sVar2 = this->field_061D;
      sVar3 = this->field_0621;
      sVar4 = this->field_061F;
      if ((((((-1 < sVar2) && (sVar2 < g_worldGrid.sizeX)) && (-1 < sVar4)) &&
           ((sVar4 < g_worldGrid.sizeY && (-1 < sVar3)))) &&
          ((sVar3 < g_worldGrid.sizeZ &&
           ((pSVar5 = STGridAt3D(g_worldGrid, sVar2, sVar4, sVar3).objects[0],
            pSVar5 != nullptr && (*(int *)&pSVar5->field_0x18 == this->field_0623))))))
         /* ST_CALLSITE[00478C93]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
         && (iVar11 = (*pSVar5->vtable[5].slots_00_28[2])(pSVar5), iVar11 != 0)) {
        this->field_0631 = 4;
        return 2;
      }
      if (this->field_0619 == 0) {
        return 0;
      }

      iVar11 = thunk_FUN_004934b0(this,&this->field_061D,&this->field_061F,&this->field_0621,
                                  &this->field_0623);
      goto joined_r0x00478b59;
    case 1:
      /* ST_CALLSITE[00478D52]: CALL 0x00403594; direct=00403594 TLOBaseTy::sub_004D6DF0 */
      local_EAX_1810 = TLOBaseTy::sub_004D6DF0((TLOBaseTy *)this);
      if ((local_EAX_1810 == 0) ||
         /* ST_CALLSITE[00478D61]: CALL 0x00401e6f; direct=00401E6F STBoatC::CheckForReplenisher */
         ((iVar11 = CheckForReplenisher(this), iVar11 == 1 &&

          (local_EAX_1837 = thunk_FUN_004d6f70((int *)this), local_EAX_1837 == 1)))) {
        /* ST_CALLSITE[00478E4C]: CALL 0x00403855; direct=00403855 STBoatC::sub_004602B0 */
        sub_004602B0(this);
        goto cf_common_exit_00478E51;
      }
      sVar2 = this->field_061D;
      sVar3 = this->field_0621;
      sVar4 = this->field_061F;
      if (((((-1 < sVar2) && (sVar2 < g_worldGrid.sizeX)) && (-1 < sVar4)) &&
          ((sVar4 < g_worldGrid.sizeY && (-1 < sVar3)))) &&
         (((sVar3 < g_worldGrid.sizeZ &&
           ((pSVar5 = STGridAt3D(g_worldGrid, sVar2, sVar4, sVar3).objects[0],
            pSVar5 != nullptr && (*(int *)&pSVar5->field_0x18 == this->field_0623))))
          /* ST_CALLSITE[00478DFD]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
          && (iVar11 = (*pSVar5->vtable[5].slots_00_28[2])(pSVar5), iVar11 != 0)))) {
        return 2;
      }
      if ((this->field_0619 == 0) ||

         (iVar11 = thunk_FUN_004934b0(this,&this->field_061D,&this->field_061F,&this->field_0621,
                                      &this->field_0623), iVar11 == 0)) {
        /* ST_CALLSITE[00478E3C]: CALL 0x00403855; direct=00403855 STBoatC::sub_004602B0 */
        sub_004602B0(this);
        return 0;
      }
      goto LAB_00478b5f;
    default:
      goto cf_common_exit_0047928C;
    case 3:

      iVar11 = SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00493610::
               thunk_FUN_00493610((RecoveredReceiver_00493610 *)this,&this->field_0627,
                                  &this->field_0629,(short *)&this->field_0x62b);
      if (iVar11 != 1) goto LAB_00478d20;
      sVar2 = *(short *)&this->field_0x62b;
      sVar4 = this->field_0629;
      sVar3 = this->field_0627;
      break;
    case -1:

      local_EAX_1434 =
           ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3451,0,0,"%s",
                              "STBoatC::Recharge, RECHARGE_RECHMOVE error");
      if (local_EAX_1434 == 0) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x3451
                  );
        return 0xffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  iVar10 = (int)sVar2;
  iVar12 = (int)sVar4;
  iVar11 = (int)sVar3;
cf_common_exit_00478B83:
  /* ST_CALLSITE[00478B85]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
  sub_00481520(this,iVar11,iVar12,iVar10);
  /* ST_CALLSITE[00478B8E]: CALL 0x004031de; direct=004031DE STBoatC::sub_00460260 */
  sub_00460260(this,0);
  return 2;
}

