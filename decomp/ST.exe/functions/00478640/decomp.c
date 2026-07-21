#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Recharge */

int __thiscall STBoatC::Recharge(STBoatC *this,int param_1)

{
  undefined1 *puVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  STWorldObject *pSVar5;
  code *pcVar6;
  STBoatCVTable *pSVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EDI;
  undefined4 *puVar11;

  if ((param_1 == 0) || (param_1 == 1)) {
    puVar11 = &this->field_02CC;
    for (iVar9 = 0x17; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    this->field_02C4 = 0;
    iVar9 = thunk_FUN_004d6df0((int *)this);
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    if ((iVar9 == 0) ||
       ((iVar9 = CheckForReplenisher(this,unaff_EDI), iVar9 == 1 &&
        (iVar9 = thunk_FUN_004d6f70((int *)this), iVar9 == 1)))) {
      this->field_0631 = 0;
      this->field_062D = 0;
      return 2;
    }
    *(int *)&this->field_0x619 = *(int *)&this->field_0x3f7;
    if (*(int *)&this->field_0x3f7 == 0) {
      sVar2 = *(short *)&this->field_0x3fb;
      sVar3 = *(short *)&this->field_0x3fd;
      sVar4 = *(short *)&this->field_0x3ff;
      *(short *)&this->field_0x61d = sVar2;
      *(short *)&this->field_0x61f = sVar3;
      *(short *)&this->field_0x621 = sVar4;
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
      pSVar5 = g_worldGrid.cells
               [(int)g_worldGrid.planeStride * (int)sVar4 + (int)g_worldGrid.sizeX * (int)sVar3 +
                (int)sVar2].objects[0];
      if (pSVar5 == (STWorldObject *)0x0) {
        return 0;
      }
      iVar9 = (*pSVar5->vtable->GetObjectTypeId)(pSVar5);
      if (iVar9 != 0x62) {
        return 0;
      }
      if (pSVar5[1].vtable != *(STWorldObjectVTable **)&this->field_0x24) {
        return 0;
      }
      iVar9 = (*pSVar5->vtable[5].slots_00_28[2])();
      if (iVar9 == 0) {
        return 0;
      }
      *(undefined4 *)&this->field_0x623 = *(undefined4 *)&pSVar5->field_0x18;
    }
    else {
      iVar9 = thunk_FUN_004934b0(this,(short *)&this->field_0x61d,(short *)&this->field_0x61f,
                                 (short *)&this->field_0x621,(int *)&this->field_0x623);
      if (iVar9 == 0) {
        return 0;
      }
    }
    this->field_0631 = 1;
    this->field_00B7 = 3;
    sub_00481520(this,(int)*(short *)&this->field_0x61d,(int)*(short *)&this->field_0x61f,
                 (int)*(short *)&this->field_0x621);
    sub_00460260(this,0);
    pSVar7 = this->vtable;
LAB_0047926a:
    iVar9 = (*pSVar7->vfunc_D8)();
    return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
  }
  iVar9 = this->field_0631;
  if (iVar9 == 0) {
    iVar9 = this->field_062D + 1;
    this->field_062D = iVar9;
    pSVar7 = this->vtable;
    if (iVar9 != 2) goto LAB_0047926a;
    iVar9 = (*pSVar7->vfunc_D8)();
    if (iVar9 != 0) {
      return -1;
    }
    goto cf_common_exit_00478E51;
  }
  if (iVar9 == 1) {
    iVar9 = sub_00460260(this,2);
    switch(iVar9) {
    case 0:
      iVar9 = thunk_FUN_004d6df0((int *)this);
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      if ((iVar9 != 0) &&
         ((iVar9 = CheckForReplenisher(this,unaff_EDI), iVar9 != 1 ||
          (iVar9 = thunk_FUN_004d6f70((int *)this), iVar9 != 1)))) {
        sVar2 = *(short *)&this->field_0x61d;
        sVar3 = *(short *)&this->field_0x621;
        sVar4 = *(short *)&this->field_0x61f;
        if (((-1 < sVar2) &&
            (((sVar2 < g_worldGrid.sizeX && (-1 < sVar4)) && (sVar4 < g_worldGrid.sizeY)))) &&
           (((-1 < sVar3 && (sVar3 < g_worldGrid.sizeZ)) &&
            ((pSVar5 = g_worldGrid.cells
                       [(int)g_worldGrid.planeStride * (int)sVar3 +
                        (int)g_worldGrid.sizeX * (int)sVar4 + (int)sVar2].objects[0],
             pSVar5 != (STWorldObject *)0x0 &&
             ((*(int *)&pSVar5->field_0x18 == *(int *)&this->field_0x623 &&
              (iVar9 = (*pSVar5->vtable[5].slots_00_28[2])(), iVar9 != 0)))))))) {
          this->field_00B7 = 0;
          iVar9 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00493610::thunk_FUN_00493610
                            ((AnonReceiver_00493610 *)this,(short *)&this->field_0x627,
                             (short *)&this->field_0x629,(short *)&this->field_0x62b);
          if (iVar9 == 1) {
            iVar8 = (int)*(short *)&this->field_0x62b;
            iVar10 = (int)*(short *)&this->field_0x629;
            iVar9 = (int)*(short *)&this->field_0x627;
            this->field_0631 = 3;
            goto cf_common_exit_00478B83;
          }
LAB_00478d20:
          this->field_0631 = 2;
          this->field_062D = 0;
          iVar9 = Defence(this,0);
          if (iVar9 == -1) {
            return -1;
          }
cf_common_exit_0047928C:
          return 2;
        }
        if (*(int *)&this->field_0x619 == 0) {
LAB_0047885b:
          sub_004602B0(this);
          this->field_00B7 = 0;
          return 0;
        }
        iVar9 = thunk_FUN_004934b0(this,(short *)&this->field_0x61d,(short *)&this->field_0x61f,
                                   (short *)&this->field_0x621,(int *)&this->field_0x623);
        if (iVar9 == 0) goto LAB_0047885b;
        sVar2 = *(short *)&this->field_0x621;
        sVar3 = *(short *)&this->field_0x61f;
        goto LAB_00478b7a;
      }
      break;
    case 1:
      iVar9 = thunk_FUN_004d6df0((int *)this);
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      if ((iVar9 != 0) &&
         ((iVar9 = CheckForReplenisher(this,unaff_EDI), iVar9 != 1 ||
          (iVar9 = thunk_FUN_004d6f70((int *)this), iVar9 != 1)))) {
        sVar2 = *(short *)&this->field_0x61d;
        sVar3 = *(short *)&this->field_0x621;
        sVar4 = *(short *)&this->field_0x61f;
        if (((-1 < sVar2) &&
            (((sVar2 < g_worldGrid.sizeX && (-1 < sVar4)) && (sVar4 < g_worldGrid.sizeY)))) &&
           (((-1 < sVar3 && (sVar3 < g_worldGrid.sizeZ)) &&
            ((pSVar5 = g_worldGrid.cells
                       [(int)g_worldGrid.planeStride * (int)sVar3 +
                        (int)g_worldGrid.sizeX * (int)sVar4 + (int)sVar2].objects[0],
             pSVar5 != (STWorldObject *)0x0 &&
             ((*(int *)&pSVar5->field_0x18 == *(int *)&this->field_0x623 &&
              (iVar9 = (*pSVar5->vtable[5].slots_00_28[2])(), iVar9 != 0)))))))) {
          return 2;
        }
        if ((*(int *)&this->field_0x619 == 0) ||
           (iVar9 = thunk_FUN_004934b0(this,(short *)&this->field_0x61d,(short *)&this->field_0x61f,
                                       (short *)&this->field_0x621,(int *)&this->field_0x623),
           iVar9 == 0)) {
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
      sub_00481520(this,(int)*(short *)&this->field_0x61d,(int)*(short *)&this->field_0x61f,
                   (int)*(short *)&this->field_0x621);
      sub_00460260(this,0);
      return 2;
    case -1:
      iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x33d4,0,0,&DAT_007a4ccc,
                                 s_STBoatC__Recharge__RECHARGE_MOVE_007ab37c);
      if (iVar9 == 0) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x33d4
                  );
        return 0xffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    sub_004602B0(this);
    this->field_00B7 = 0;
cf_common_exit_00478E51:
    (*this->vtable->vfunc_90)(3,0x1b2);
    return 0;
  }
  if (iVar9 == 2) {
    this->field_062D = this->field_062D + 1;
    iVar9 = Defence(this,2);
    if (iVar9 == -1) {
      return -1;
    }
    if (this->field_082E != 0) {
      return 2;
    }
    if (this->field_048B != 0xffff) {
      return 2;
    }
    if ((int)this->field_062D % 10 != 0) {
      return 2;
    }
    iVar9 = thunk_FUN_004d6df0((int *)this);
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    if ((iVar9 == 0) ||
       ((iVar9 = CheckForReplenisher(this,unaff_EDI), iVar9 == 1 &&
        (iVar9 = thunk_FUN_004d6f70((int *)this), iVar9 == 1)))) goto cf_common_exit_00478E51;
    sVar2 = *(short *)&this->field_0x61d;
    sVar3 = *(short *)&this->field_0x621;
    sVar4 = *(short *)&this->field_0x61f;
    if (((-1 < sVar2) &&
        (((((sVar2 < g_worldGrid.sizeX && (-1 < sVar4)) && (sVar4 < g_worldGrid.sizeY)) &&
          ((-1 < sVar3 && (sVar3 < g_worldGrid.sizeZ)))) &&
         (pSVar5 = g_worldGrid.cells
                   [(int)g_worldGrid.planeStride * (int)sVar3 + (int)g_worldGrid.sizeX * (int)sVar4
                    + (int)sVar2].objects[0], pSVar5 != (STWorldObject *)0x0)))) &&
       ((*(int *)&pSVar5->field_0x18 == *(int *)&this->field_0x623 &&
        (iVar9 = (*pSVar5->vtable[5].slots_00_28[2])(), iVar9 != 0)))) {
      iVar9 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00493610::thunk_FUN_00493610
                        ((AnonReceiver_00493610 *)this,(short *)&this->field_0x627,
                         (short *)&this->field_0x629,(short *)&this->field_0x62b);
      if (iVar9 != 1) {
        return 2;
      }
      this->field_0631 = 3;
      goto LAB_00478b1a;
    }
    if (*(int *)&this->field_0x619 == 0) {
      return 0;
    }
    iVar9 = thunk_FUN_004934b0(this,(short *)&this->field_0x61d,(short *)&this->field_0x61f,
                               (short *)&this->field_0x621,(int *)&this->field_0x623);
joined_r0x00478b59:
    if (iVar9 == 0) {
      return 0;
    }
LAB_00478b5f:
    this->field_0631 = 1;
    this->field_00B7 = 3;
LAB_00478b73:
    sVar2 = *(short *)&this->field_0x621;
    sVar3 = *(short *)&this->field_0x61f;
LAB_00478b7a:
    sVar4 = *(short *)&this->field_0x61d;
  }
  else {
    if (iVar9 != 3) {
      if (iVar9 != 4) {
        if (iVar9 != 5) {
          return 2;
        }
        iVar9 = sub_00460260(this,2);
        if (iVar9 == -1) {
          return -1;
        }
        if (iVar9 == 0) {
          return 0;
        }
        if (iVar9 != 3) {
          return 2;
        }
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::thunk_FUN_0048dfd0
                  ((AnonReceiver_0048DFD0 *)this,*(short *)&this->field_0x61d,
                   *(short *)&this->field_0x61f,*(ushort *)&this->field_0x621,
                   *(short *)&this->field_0x61d,*(short *)&this->field_0x61f,
                   (int *)(uint)*(ushort *)&this->field_0x621,3,(short *)&this->field_0x627,
                   (short *)&this->field_0x629,(short *)&this->field_0x62b);
LAB_00478b1a:
        iVar8 = (int)*(short *)&this->field_0x62b;
        iVar10 = (int)*(short *)&this->field_0x629;
        iVar9 = (int)*(short *)&this->field_0x627;
        goto cf_common_exit_00478B83;
      }
      sVar2 = *(short *)&this->field_0x61d;
      sVar3 = *(short *)&this->field_0x621;
      sVar4 = *(short *)&this->field_0x61f;
      if ((((sVar2 < 0) || (g_worldGrid.sizeX <= sVar2)) || (sVar4 < 0)) ||
         ((((g_worldGrid.sizeY <= sVar4 || (sVar3 < 0)) ||
           ((g_worldGrid.sizeZ <= sVar3 ||
            ((pSVar5 = g_worldGrid.cells
                       [(int)g_worldGrid.planeStride * (int)sVar3 +
                        (int)g_worldGrid.sizeX * (int)sVar4 + (int)sVar2].objects[0],
             pSVar5 == (STWorldObject *)0x0 ||
             (*(int *)&pSVar5->field_0x18 != *(int *)&this->field_0x623)))))) ||
          (iVar9 = (*pSVar5->vtable[5].slots_00_28[2])(), iVar9 == 0)))) {
        if (*(int *)&this->field_0x619 == 0) {
          return 0;
        }
        iVar9 = thunk_FUN_004934b0(this,(short *)&this->field_0x61d,(short *)&this->field_0x61f,
                                   (short *)&this->field_0x621,(int *)&this->field_0x623);
        if (iVar9 == 0) {
          return 0;
        }
        iVar8 = (int)*(short *)&this->field_0x621;
        iVar10 = (int)*(short *)&this->field_0x61f;
        iVar9 = (int)*(short *)&this->field_0x61d;
        this->field_0631 = 1;
        this->field_00B7 = 3;
        goto cf_common_exit_00478B83;
      }
      iVar9 = thunk_FUN_004d6f70((int *)this);
      if (iVar9 != 1) goto LAB_00478ff2;
      (*this->vtable->vfunc_90)(3,0x1b2);
      puVar1 = &this->field_0x62b;
      if (*(int *)&pSVar5[0x1d].field_0x18 == 0) {
LAB_00478f91:
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::thunk_FUN_0048dfd0
                  ((AnonReceiver_0048DFD0 *)this,*(short *)&this->field_0x61d,
                   *(short *)&this->field_0x61f,*(ushort *)&this->field_0x621,
                   *(short *)&this->field_0x61d,*(short *)&this->field_0x61f,
                   (int *)(uint)*(ushort *)&this->field_0x621,3,(short *)&this->field_0x627,
                   (short *)&this->field_0x629,(short *)puVar1);
      }
      else {
        if (&this->field_0x627 != (undefined1 *)0x0) {
          *(undefined4 *)&this->field_0x627 = *(undefined4 *)&pSVar5[0x1d].field_0x1c;
        }
        if (&this->field_0x629 != (undefined1 *)0x0) {
          *(int *)&this->field_0x629 = pSVar5[0x1d].value_20;
        }
        if (puVar1 != (undefined1 *)0x0) {
          *(STWorldObjectVTable **)puVar1 = pSVar5[0x1e].vtable;
        }
        if (*(int *)&pSVar5[0x1d].field_0x18 == 0) goto LAB_00478f91;
      }
      this->field_0631 = 5;
      sub_00481520(this,(int)*(short *)&this->field_0x627,(int)*(short *)&this->field_0x629,
                   (int)*(short *)puVar1);
      sub_00460260(this,0);
LAB_00478ff2:
      iVar9 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
    }
    iVar9 = sub_00460260(this,2);
    switch(iVar9) {
    case 0:
      sVar2 = *(short *)&this->field_0x61d;
      sVar3 = *(short *)&this->field_0x621;
      sVar4 = *(short *)&this->field_0x61f;
      if ((((((-1 < sVar2) && (sVar2 < g_worldGrid.sizeX)) && (-1 < sVar4)) &&
           ((sVar4 < g_worldGrid.sizeY && (-1 < sVar3)))) &&
          ((sVar3 < g_worldGrid.sizeZ &&
           ((pSVar5 = g_worldGrid.cells
                      [(int)g_worldGrid.planeStride * (int)sVar3 +
                       (int)g_worldGrid.sizeX * (int)sVar4 + (int)sVar2].objects[0],
            pSVar5 != (STWorldObject *)0x0 &&
            (*(int *)&pSVar5->field_0x18 == *(int *)&this->field_0x623)))))) &&
         (iVar9 = (*pSVar5->vtable[5].slots_00_28[2])(), iVar9 != 0)) {
        this->field_0631 = 4;
        return 2;
      }
      if (*(int *)&this->field_0x619 == 0) {
        return 0;
      }
      iVar9 = thunk_FUN_004934b0(this,(short *)&this->field_0x61d,(short *)&this->field_0x61f,
                                 (short *)&this->field_0x621,(int *)&this->field_0x623);
      goto joined_r0x00478b59;
    case 1:
      iVar9 = thunk_FUN_004d6df0((int *)this);
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      if ((iVar9 == 0) ||
         ((iVar9 = CheckForReplenisher(this,unaff_EDI), iVar9 == 1 &&
          (iVar9 = thunk_FUN_004d6f70((int *)this), iVar9 == 1)))) {
        sub_004602B0(this);
        goto cf_common_exit_00478E51;
      }
      sVar2 = *(short *)&this->field_0x61d;
      sVar3 = *(short *)&this->field_0x621;
      sVar4 = *(short *)&this->field_0x61f;
      if (((((-1 < sVar2) && (sVar2 < g_worldGrid.sizeX)) && (-1 < sVar4)) &&
          ((sVar4 < g_worldGrid.sizeY && (-1 < sVar3)))) &&
         (((sVar3 < g_worldGrid.sizeZ &&
           ((pSVar5 = g_worldGrid.cells
                      [(int)g_worldGrid.planeStride * (int)sVar3 +
                       (int)g_worldGrid.sizeX * (int)sVar4 + (int)sVar2].objects[0],
            pSVar5 != (STWorldObject *)0x0 &&
            (*(int *)&pSVar5->field_0x18 == *(int *)&this->field_0x623)))) &&
          (iVar9 = (*pSVar5->vtable[5].slots_00_28[2])(), iVar9 != 0)))) {
        return 2;
      }
      if ((*(int *)&this->field_0x619 == 0) ||
         (iVar9 = thunk_FUN_004934b0(this,(short *)&this->field_0x61d,(short *)&this->field_0x61f,
                                     (short *)&this->field_0x621,(int *)&this->field_0x623),
         iVar9 == 0)) {
        sub_004602B0(this);
        return 0;
      }
      goto LAB_00478b5f;
    default:
      goto cf_common_exit_0047928C;
    case 3:
      iVar9 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00493610::thunk_FUN_00493610
                        ((AnonReceiver_00493610 *)this,(short *)&this->field_0x627,
                         (short *)&this->field_0x629,(short *)&this->field_0x62b);
      if (iVar9 != 1) goto LAB_00478d20;
      sVar2 = *(short *)&this->field_0x62b;
      sVar3 = *(short *)&this->field_0x629;
      sVar4 = *(short *)&this->field_0x627;
      break;
    case -1:
      iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3451,0,0,&DAT_007a4ccc,
                                 s_STBoatC__Recharge__RECHARGE_RECH_007ab348);
      if (iVar9 == 0) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3451
                  );
        return 0xffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  iVar8 = (int)sVar2;
  iVar10 = (int)sVar3;
  iVar9 = (int)sVar4;
cf_common_exit_00478B83:
  sub_00481520(this,iVar9,iVar10,iVar8);
  sub_00460260(this,0);
  return 2;
}

