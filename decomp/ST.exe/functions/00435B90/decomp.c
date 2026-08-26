#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_3 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00435B90_param_3Enum. Cases:
   CASE_0=0;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_D=13;CASE_E=14;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_18=24;CASE_2B=43;CASE_2D=45;CASE_4D=77;CASE_4E=78

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 00435930 -> 00435B90 @ 00435B00 */

short FUN_00435b90(uint param_1,DArrayTy *param_2,Global_sub_00435B90_param_3Enum param_3,
                  int *param_4,undefined4 param_5,int *param_6)

{
  byte bVar1;
  byte bVar2;
  int *this;
  short sVar3;
  STGameObjC *pSVar4;
  uint uVar5;
  dword dVar6;
  int iVar7;
  dword dVar8;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STAllPlayersC *in_ECX;
  uint uVar9;
  byte objPtr;
  bool bVar10;
  uint local_10;
  int local_c;

  this = param_4;
  uVar9 = param_1;
  dVar8 = param_2->count;
  local_10 = 0;
  local_c = 0;
  objPtr = (byte)param_1;
  if ((param_4 != nullptr) &&
     ((7 < objPtr ||
      ((g_playSystem_00802A38 != nullptr &&
       (7 < g_bulkInitializedRecords_008087C7[(char)objPtr].field_0022)))))) {
    return 1;
  }
  int * param_4_after_write = nullptr; /* compiler stack-slot lifetime split */
  if (0 < (int)dVar8) {
    do {
      DArrayGetElement(param_2,(uint)param_4_after_write,&param_1);
      if ((short)param_1 != -1) {
        local_10 = param_1;
        local_c = local_c + 1;
      }
      param_4_after_write = (int *)((int)param_4_after_write + 1);
    } while ((int)param_4_after_write < (int)dVar8);
    if (local_c == 1) {
      /* ST_CALLSITE[00435C26]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      pSVar4 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)local_10,CASE_1);
      /* ST_CALLSITE[00435C3C]: CALL dword ptr [EDX + 0x28] */
      uVar5 = (*pSVar4->vtable->vfunc_28)(param_3,this,param_5,param_6);
      return (short)uVar5;
    }
  }
  switch(param_3) {
  case CASE_0:
    if ((this == nullptr) ||
       (((iVar7 = this[8], iVar7 != 0x14 && (iVar7 != 1000)) && (iVar7 != 0x3e9)))) {
      param_4_after_write = nullptr;
      if ((int)dVar8 < 1) {
        return 0;
      }
      do {
        DArrayGetElement(param_2,(uint)param_4_after_write,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_CALLSITE[00436A3F]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar4 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          /* ST_CALLSITE[00436A53]: CALL dword ptr [EDX + 0x28] */
          uVar5 = (*pSVar4->vtable->vfunc_28)(0,this,param_5,param_6);
          if ((short)uVar5 == 5) {
            return 5;
          }
        }
        param_4_after_write = (int *)((int)param_4_after_write + 1);
      } while ((int)param_4_after_write < (int)dVar8);
      return 0;
    }
    /* ST_CALLSITE[00436581]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/dword;pointer:/STSprGameObjC */
    dVar6 = ((STSprGameObjC *)this)->slot_2C();
    if ((((dVar6 == 99) ||
         /* ST_CALLSITE[0043658D]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/dword;pointer:/STSprGameObjC */
         (dVar6 = ((STSprGameObjC *)this)->slot_2C(), dVar6 == 0x52)) ||
        /* ST_CALLSITE[00436599]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/dword;pointer:/STSprGameObjC */
        (dVar6 = ((STSprGameObjC *)this)->slot_2C(), dVar6 == 0x5f)) &&
       (param_4_after_write = nullptr, 0 < (int)dVar8)) {
      do {
        DArrayGetElement(param_2,(uint)param_4_after_write,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_CALLSITE[004365CD]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar4 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          /* ST_CALLSITE[004365E1]: CALL dword ptr [EDX + 0x28] */
          uVar5 = (*pSVar4->vtable->vfunc_28)(0,this,param_5,param_6);
          if ((short)uVar5 == 0x1e) {
            return 0x1e;
          }
        }
        param_4_after_write = (int *)((int)param_4_after_write + 1);
      } while ((int)param_4_after_write < (int)dVar8);
    }
    bVar1 = ((byte *)this)[9];
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = STReplaceLowByte((uint32_t)(param_3), (uint8_t)(bVar1));
    if (DAT_00808a8f == '\0') {
      if (bVar1 == objPtr) {
LAB_004366b0:
        iVar7 = 0;
      }
      else {
        uVar9 = uVar9 & 0xff;
        bVar2 = g_playerRelationMatrix[bVar1][uVar9];
        if ((bVar2 == 0) && (g_playerRelationMatrix[uVar9][bVar1] == 0)) {
          iVar7 = -2;
        }
        else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar9][bVar1] == 0)) {
          iVar7 = -1;
        }
        else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar9][bVar1] == 1)) {
          iVar7 = 1;
        }
        else {
          if ((bVar2 != 1) || (g_playerRelationMatrix[uVar9][bVar1] != 1)) goto LAB_004366b0;
          iVar7 = 2;
        }
      }
      bVar10 = iVar7 < 0;
    }
    else {
      bVar10 = g_bulkInitializedRecords_008087C7[uVar9 & 0xff].field_0023 !=
               g_bulkInitializedRecords_008087C7[bVar1].field_0023;
    }
    if (!bVar10) {
      if (this[8] != 0x14) {
        if ((this[8] != 0x3e9) && (this[9] == (int)(char)objPtr)) {
          /* ST_CALLSITE[0043676F]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/dword;pointer:/STSprGameObjC */
          dVar6 = ((STSprGameObjC *)this)->slot_2C();
          if ((dVar6 == 0x33) && (param_4_after_write = nullptr, 0 < (int)dVar8)) {
            do {
              DArrayGetElement(param_2,(uint)param_4_after_write,&param_1);
              if ((ushort)param_1 != 0xffff) {
                /* ST_CALLSITE[004367A3]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                pSVar4 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
                /* ST_CALLSITE[004367B7]: CALL dword ptr [EDX + 0x28] */
                uVar5 = (*pSVar4->vtable->vfunc_28)(0,this,param_5,param_6);
                if ((short)uVar5 == 0x18) {
                  return 0x18;
                }
              }
              param_4_after_write = (int *)((int)param_4_after_write + 1);
            } while ((int)param_4_after_write < (int)dVar8);
          }
          /* ST_CALLSITE[004367D6]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/dword;pointer:/STSprGameObjC */
          dVar6 = ((STSprGameObjC *)this)->slot_2C();
          if (((dVar6 == 0x37) ||
              /* ST_CALLSITE[004367E2]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/dword;pointer:/STSprGameObjC */
              (dVar6 = ((STSprGameObjC *)this)->slot_2C(), dVar6 == 0x6c)) &&
             (param_4_after_write = nullptr, 0 < (int)dVar8)) {
            do {
              DArrayGetElement(param_2,(uint)param_4_after_write,&param_1);
              if ((ushort)param_1 != 0xffff) {
                /* ST_CALLSITE[00436816]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                pSVar4 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
                /* ST_CALLSITE[0043682A]: CALL dword ptr [EDX + 0x28] */
                uVar5 = (*pSVar4->vtable->vfunc_28)(0,this,param_5,param_6);
                if ((short)uVar5 == 0x1d) {
                  return 0x1d;
                }
              }
              param_4_after_write = (int *)((int)param_4_after_write + 1);
            } while ((int)param_4_after_write < (int)dVar8);
          }
          /* ST_CALLSITE[00436849]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/dword;pointer:/STSprGameObjC */
          dVar6 = ((STSprGameObjC *)this)->slot_2C();
          if ((((dVar6 == 0x38) ||
               /* ST_CALLSITE[00436855]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/dword;pointer:/STSprGameObjC */
               (dVar6 = ((STSprGameObjC *)this)->slot_2C(), dVar6 == 0x39)) ||
              /* ST_CALLSITE[00436861]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/dword;pointer:/STSprGameObjC */
              ((dVar6 = ((STSprGameObjC *)this)->slot_2C(), dVar6 == 0x4f ||
               /* ST_CALLSITE[0043686D]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/dword;pointer:/STSprGameObjC */
               (dVar6 = ((STSprGameObjC *)this)->slot_2C(), dVar6 == 0x5e)))) &&
             (param_4_after_write = nullptr, 0 < (int)dVar8)) {
            do {
              DArrayGetElement(param_2,(uint)param_4_after_write,&param_1);
              if ((ushort)param_1 != 0xffff) {
                /* ST_CALLSITE[004368A1]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                pSVar4 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
                /* ST_CALLSITE[004368B5]: CALL dword ptr [EDX + 0x28] */
                uVar5 = (*pSVar4->vtable->vfunc_28)(0,this,param_5,param_6);
                if ((short)uVar5 == 0x12) {
                  return 0x12;
                }
              }
              param_4_after_write = (int *)((int)param_4_after_write + 1);
            } while ((int)param_4_after_write < (int)dVar8);
          }
          /* ST_CALLSITE[004368D0]: CALL dword ptr [EDX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=dispatch; signature=__thiscall;/dword;pointer:/STSprGameObjC */
          dVar8 = ((STSprGameObjC *)this)->slot_EC();
          return (-(ushort)(dVar8 != 1) & 0xfffc) + 4;
        }
        /* ST_CALLSITE[00436907]: CALL dword ptr [EAX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=dispatch; signature=__thiscall;/dword;pointer:/STSprGameObjC */
        dVar8 = ((STSprGameObjC *)this)->slot_EC();
        return (-(ushort)(dVar8 != 1) & 0xfffc) + 4;
      }
      param_4_after_write = nullptr;
      if (0 < (int)dVar8) {
        do {
          DArrayGetElement(param_2,(uint)param_4_after_write,&param_1);
          if ((ushort)param_1 != 0xffff) {
            /* ST_CALLSITE[004366FC]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            pSVar4 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
            /* ST_CALLSITE[00436710]: CALL dword ptr [EDX + 0x28] */
            uVar5 = (*pSVar4->vtable->vfunc_28)(0,this,param_5,param_6);
            if ((short)uVar5 == 0x17) {
              return 0x17;
            }
            if ((short)uVar5 == 0x1a) {
              return 0x1a;
            }
          }
          param_4_after_write = (int *)((int)param_4_after_write + 1);
        } while ((int)param_4_after_write < (int)dVar8);
      }
      /* ST_CALLSITE[00436739]: CALL dword ptr [EDX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=dispatch; signature=__thiscall;/dword;pointer:/STSprGameObjC */
      dVar8 = ((STSprGameObjC *)this)->slot_EC();
      return (-(ushort)(dVar8 != 1) & 0xfffd) + 3;
    }
    /* ST_CALLSITE[00436924]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/dword;pointer:/STSprGameObjC */
    dVar6 = ((STSprGameObjC *)this)->slot_2C();
    param_4_after_write = nullptr;
    if (dVar6 == 0x6c) {
      if (0 < (int)dVar8) {
        do {
          DArrayGetElement(param_2,(uint)param_4_after_write,&param_1);
          if ((ushort)param_1 != 0xffff) {
            /* ST_CALLSITE[004369B5]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            pSVar4 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
            /* ST_CALLSITE[004369C9]: CALL dword ptr [EDX + 0x28] */
            uVar5 = (*pSVar4->vtable->vfunc_28)(0,this,param_5,param_6);
            if ((short)uVar5 == 7) {
              return 7;
            }
            if ((short)uVar5 == 0x1d) {
              return 0x1d;
            }
          }
          param_4_after_write = (int *)((int)param_4_after_write + 1);
          if ((int)dVar8 <= (int)param_4_after_write) {
            return 0;
          }
        } while( true );
      }
    }
    else if (0 < (int)dVar8) {
      do {
        DArrayGetElement(param_2,(uint)param_4_after_write,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_CALLSITE[00436958]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar4 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          /* ST_CALLSITE[0043696C]: CALL dword ptr [EDX + 0x28] */
          uVar5 = (*pSVar4->vtable->vfunc_28)(0,this,param_5,param_6);
          if ((short)uVar5 == 7) {
            return 7;
          }
        }
        param_4_after_write = (int *)((int)param_4_after_write + 1);
      } while ((int)param_4_after_write < (int)dVar8);
    }
switchD_00435c5c_caseD_1:
    return 0;
  default:
    goto switchD_00435c5c_caseD_1;
  case CASE_2:
    param_4_after_write = nullptr;
    if (0 < (int)dVar8) {
      do {
        DArrayGetElement(param_2,(uint)param_4_after_write,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_CALLSITE[00435C93]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar4 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          /* ST_CALLSITE[00435CA7]: CALL dword ptr [EDX + 0x28] */
          uVar5 = (*pSVar4->vtable->vfunc_28)(2,this,param_5,param_6);
          if ((short)uVar5 == 6) {
            return 6;
          }
        }
        param_4_after_write = (int *)((int)param_4_after_write + 1);
      } while ((int)param_4_after_write < (int)dVar8);
      return 1;
    }
    break;
  case CASE_3:
  case CASE_2B:
    if (this == nullptr) {
      return 1;
    }
    param_4_after_write = nullptr;
    if (0 < (int)dVar8) {
      do {
        DArrayGetElement(param_2,(uint)param_4_after_write,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_CALLSITE[00435D8A]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar4 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          /* ST_CALLSITE[00435DA0]: CALL dword ptr [EDX + 0x28] */
          uVar5 = (*pSVar4->vtable->vfunc_28)(param_3,this,param_5,param_6);
          if ((short)uVar5 == 7) {
            return 7;
          }
          if ((short)uVar5 == 2) {
            return 2;
          }
        }
        param_4_after_write = (int *)((int)param_4_after_write + 1);
      } while ((int)param_4_after_write < (int)dVar8);
    }
    return 1;
  case CASE_4:
    if (this == nullptr) {
      return 1;
    }
    param_4_after_write = nullptr;
    if (0 < (int)dVar8) {
      do {
        DArrayGetElement(param_2,(uint)param_4_after_write,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_CALLSITE[00435E13]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar4 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          /* ST_CALLSITE[00435E27]: CALL dword ptr [EDX + 0x28] */
          uVar5 = (*pSVar4->vtable->vfunc_28)(4,this,param_5,param_6);
          if ((short)uVar5 == 0x18) {
            return 0x18;
          }
        }
        param_4_after_write = (int *)((int)param_4_after_write + 1);
      } while ((int)param_4_after_write < (int)dVar8);
      return 1;
    }
    break;
  case CASE_5:
    if (this == nullptr) {
      return 1;
    }
    param_4_after_write = nullptr;
    if (0 < (int)dVar8) {
      do {
        DArrayGetElement(param_2,(uint)param_4_after_write,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_CALLSITE[00435E90]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar4 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          /* ST_CALLSITE[00435EA4]: CALL dword ptr [EDX + 0x28] */
          uVar5 = (*pSVar4->vtable->vfunc_28)(5,this,param_5,param_6);
          if ((short)uVar5 == 0xd) {
            return 0xd;
          }
        }
        param_4_after_write = (int *)((int)param_4_after_write + 1);
      } while ((int)param_4_after_write < (int)dVar8);
      return 1;
    }
    break;
  case CASE_6:
    param_4_after_write = nullptr;
    if (0 < (int)dVar8) {
      do {
        DArrayGetElement(param_2,(uint)param_4_after_write,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_CALLSITE[00435D08]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar4 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          /* ST_CALLSITE[00435D1C]: CALL dword ptr [EDX + 0x28] */
          uVar5 = (*pSVar4->vtable->vfunc_28)(6,this,param_5,param_6);
          if ((short)uVar5 == 0xf) {
            return 0xf;
          }
        }
        param_4_after_write = (int *)((int)param_4_after_write + 1);
      } while ((int)param_4_after_write < (int)dVar8);
      return 1;
    }
    break;
  case CASE_7:
    if (this == nullptr) {
      return 1;
    }
    param_4_after_write = nullptr;
    if (0 < (int)dVar8) {
      do {
        DArrayGetElement(param_2,(uint)param_4_after_write,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_CALLSITE[00436192]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar4 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          /* ST_CALLSITE[004361A6]: CALL dword ptr [EDX + 0x28] */
          uVar5 = (*pSVar4->vtable->vfunc_28)(7,this,param_5,param_6);
          sVar3 = (short)uVar5;
          if (sVar3 == 9) {
            return 9;
          }
          if (sVar3 == 10) {
            return 10;
          }
          if (sVar3 == 0xb) {
            return 0xb;
          }
        }
        param_4_after_write = (int *)((int)param_4_after_write + 1);
      } while ((int)param_4_after_write < (int)dVar8);
    }
    return 1;
  case CASE_8:
    param_4_after_write = nullptr;
    if (0 < (int)dVar8) {
      do {
        DArrayGetElement(param_2,(uint)param_4_after_write,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_CALLSITE[00436212]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar4 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          /* ST_CALLSITE[00436226]: CALL dword ptr [EDX + 0x28] */
          uVar5 = (*pSVar4->vtable->vfunc_28)(8,this,param_5,param_6);
          if ((short)uVar5 == 0x11) {
            return 0x11;
          }
        }
        param_4_after_write = (int *)((int)param_4_after_write + 1);
      } while ((int)param_4_after_write < (int)dVar8);
      return 1;
    }
    break;
  case CASE_9:
    param_4_after_write = nullptr;
    if (0 < (int)dVar8) {
      do {
        DArrayGetElement(param_2,(uint)param_4_after_write,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_CALLSITE[0043609B]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar4 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          /* ST_CALLSITE[004360AF]: CALL dword ptr [EDX + 0x28] */
          uVar5 = (*pSVar4->vtable->vfunc_28)(9,this,param_5,param_6);
          if ((short)uVar5 == 8) {
            return 8;
          }
        }
        param_4_after_write = (int *)((int)param_4_after_write + 1);
      } while ((int)param_4_after_write < (int)dVar8);
      return 1;
    }
    break;
  case CASE_A:
    if (this == nullptr) {
      return 1;
    }
    param_4_after_write = nullptr;
    if (0 < (int)dVar8) {
      do {
        DArrayGetElement(param_2,(uint)param_4_after_write,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_CALLSITE[00436026]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar4 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          /* ST_CALLSITE[0043603A]: CALL dword ptr [EDX + 0x28] */
          uVar5 = (*pSVar4->vtable->vfunc_28)(10,this,param_5,param_6);
          if ((short)uVar5 == 0xc) {
            return 0xc;
          }
        }
        param_4_after_write = (int *)((int)param_4_after_write + 1);
      } while ((int)param_4_after_write < (int)dVar8);
      return 1;
    }
    break;
  case CASE_D:
    if ((this != nullptr) && (param_4_after_write = nullptr, 0 < (int)dVar8)) {
      do {
        DArrayGetElement(param_2,(uint)param_4_after_write,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_CALLSITE[00436421]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar4 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          if ((STGameObjC *)this == pSVar4) {
            return 0;
          }
          /* ST_CALLSITE[0043643D]: CALL dword ptr [EDX + 0x28] */
          uVar5 = (*pSVar4->vtable->vfunc_28)(0xd,this,param_5,param_6);
          if ((short)uVar5 == 0x17) {
            return 0x17;
          }
        }
        param_4_after_write = (int *)((int)param_4_after_write + 1);
        if ((int)dVar8 <= (int)param_4_after_write) {
          return 1;
        }
      } while( true );
    }
    break;
  case CASE_E:
    param_4_after_write = nullptr;
    if (0 < (int)dVar8) {
      do {
        DArrayGetElement(param_2,(uint)param_4_after_write,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_CALLSITE[0043649A]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar4 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          if ((STGameObjC *)this == pSVar4) {
            return 0;
          }
          /* ST_CALLSITE[004364B6]: CALL dword ptr [EDX + 0x28] */
          uVar5 = (*pSVar4->vtable->vfunc_28)(0xe,this,param_5,param_6);
          if ((short)uVar5 == 0x14) {
            return 0x14;
          }
        }
        param_4_after_write = (int *)((int)param_4_after_write + 1);
      } while ((int)param_4_after_write < (int)dVar8);
    }
    return 0x15;
  case CASE_10:
    if (this == nullptr) {
      return 1;
    }
    param_4_after_write = nullptr;
    if (0 < (int)dVar8) {
      do {
        DArrayGetElement(param_2,(uint)param_4_after_write,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_CALLSITE[00435FA0]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar4 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          /* ST_CALLSITE[00435FB4]: CALL dword ptr [EDX + 0x28] */
          uVar5 = (*pSVar4->vtable->vfunc_28)(0x10,this,param_5,param_6);
          if ((short)uVar5 == 0x16) {
            return 0x16;
          }
        }
        param_4_after_write = (int *)((int)param_4_after_write + 1);
      } while ((int)param_4_after_write < (int)dVar8);
      return 1;
    }
    break;
  case CASE_11:
    if (this == nullptr) {
      return 1;
    }
    param_4_after_write = nullptr;
    if (0 < (int)dVar8) {
      do {
        DArrayGetElement(param_2,(uint)param_4_after_write,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_CALLSITE[00436298]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar4 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          /* ST_CALLSITE[004362AC]: CALL dword ptr [EDX + 0x28] */
          uVar5 = (*pSVar4->vtable->vfunc_28)(0x11,this,param_5,param_6);
          if ((short)uVar5 == 0x12) {
            return 0x12;
          }
        }
        param_4_after_write = (int *)((int)param_4_after_write + 1);
      } while ((int)param_4_after_write < (int)dVar8);
      return 1;
    }
    break;
  case CASE_12:
    if (this == nullptr) {
      return 1;
    }
    param_4_after_write = nullptr;
    if (0 < (int)dVar8) {
      do {
        DArrayGetElement(param_2,(uint)param_4_after_write,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_CALLSITE[00436315]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar4 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          /* ST_CALLSITE[00436329]: CALL dword ptr [EDX + 0x28] */
          uVar5 = (*pSVar4->vtable->vfunc_28)(0x12,this,param_5,param_6);
          if ((short)uVar5 == 0x13) {
            return 0x13;
          }
        }
        param_4_after_write = (int *)((int)param_4_after_write + 1);
      } while ((int)param_4_after_write < (int)dVar8);
      return 1;
    }
    break;
  case CASE_13:
    if (this == nullptr) {
      return 1;
    }
    param_4_after_write = nullptr;
    if (0 < (int)dVar8) {
      do {
        DArrayGetElement(param_2,(uint)param_4_after_write,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_CALLSITE[00436397]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar4 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          if ((STGameObjC *)this == pSVar4) {
            return 0;
          }
          /* ST_CALLSITE[004363B3]: CALL dword ptr [EDX + 0x28] */
          uVar5 = (*pSVar4->vtable->vfunc_28)(0x13,this,param_5,param_6);
          if ((short)uVar5 == 0x1a) {
            return 0x1a;
          }
        }
        param_4_after_write = (int *)((int)param_4_after_write + 1);
        if ((int)dVar8 <= (int)param_4_after_write) {
          return 1;
        }
      } while( true );
    }
    break;
  case CASE_18:
    param_4_after_write = nullptr;
    if (0 < (int)dVar8) {
      do {
        DArrayGetElement(param_2,(uint)param_4_after_write,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_CALLSITE[00436517]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar4 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          if ((STGameObjC *)this == pSVar4) {
            return 0;
          }
          /* ST_CALLSITE[00436533]: CALL dword ptr [EDX + 0x28] */
          uVar5 = (*pSVar4->vtable->vfunc_28)(0x18,this,param_5,param_6);
          if ((short)uVar5 == 0x1d) {
            return 0x1d;
          }
        }
        param_4_after_write = (int *)((int)param_4_after_write + 1);
        if ((int)dVar8 <= (int)param_4_after_write) {
          return 1;
        }
      } while( true );
    }
    break;
  case CASE_2D:
    param_4_after_write = nullptr;
    if (0 < (int)dVar8) {
      do {
        DArrayGetElement(param_2,(uint)param_4_after_write,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_CALLSITE[00436110]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar4 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          /* ST_CALLSITE[00436124]: CALL dword ptr [EDX + 0x28] */
          uVar5 = (*pSVar4->vtable->vfunc_28)(0x2d,this,param_5,param_6);
          if ((short)uVar5 == 0x10) {
            return 0x10;
          }
        }
        param_4_after_write = (int *)((int)param_4_after_write + 1);
      } while ((int)param_4_after_write < (int)dVar8);
      return 1;
    }
    break;
  case CASE_4D:
    if (this == nullptr) {
      return 1;
    }
    param_4_after_write = nullptr;
    if (0 < (int)dVar8) {
      do {
        DArrayGetElement(param_2,(uint)param_4_after_write,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_CALLSITE[00435F16]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar4 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          /* ST_CALLSITE[00435F2A]: CALL dword ptr [EDX + 0x28] */
          uVar5 = (*pSVar4->vtable->vfunc_28)(0x4d,this,param_5,param_6);
          if ((short)uVar5 == 0x1d) {
            return 0x1d;
          }
        }
        param_4_after_write = (int *)((int)param_4_after_write + 1);
      } while ((int)param_4_after_write < (int)dVar8);
      return 1;
    }
    break;
  case CASE_4E:
    return 0x1c;
  }
  return 1;
}

