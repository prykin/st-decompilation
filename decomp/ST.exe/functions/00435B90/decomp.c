
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
  dword dVar3;
  int *arg_2;
  short sVar4;
  STGameObjC *pSVar5;
  undefined4 uVar6;
  int iVar7;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STAllPlayersC *in_ECX;
  uint uVar8;
  byte objPtr;
  bool bVar9;
  uint local_10;
  int local_c;

  arg_2 = param_4;
  uVar8 = param_1;
  dVar3 = param_2->count;
  local_10 = 0;
  local_c = 0;
  objPtr = (byte)param_1;
  if ((param_4 != nullptr) &&
     ((7 < objPtr ||
      ((g_playSystem_00802A38 != nullptr &&
       (7 < g_bulkInitializedRecords_008087C7[(char)objPtr].field_0022)))))) {
    return 1;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_4 = nullptr;
  if (0 < (int)dVar3) {
    do {
      DArrayGetElement(param_2,(uint)param_4,&param_1);
      if ((short)param_1 != -1) {
        local_10 = param_1;
        local_c = local_c + 1;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_4 = (int *)((int)param_4 + 1);
    } while ((int)param_4 < (int)dVar3);
    if (local_c == 1) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      pSVar5 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)local_10,CASE_1);
      uVar6 = (*pSVar5->vtable->vfunc_28)(param_3,arg_2,param_5,param_6);
      return (short)uVar6;
    }
  }
  switch(param_3) {
  case CASE_0:
    if ((arg_2 == nullptr) ||
       (((iVar7 = arg_2[8], iVar7 != 0x14 && (iVar7 != 1000)) && (iVar7 != 0x3e9)))) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_4 = nullptr;
      if ((int)dVar3 < 1) {
        return 0;
      }
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(0,arg_2,param_5,param_6);
          if ((short)uVar6 == 5) {
            return 5;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 0;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar7 = (**(code **)(*arg_2 + 0x2c))();
    /* ST_PSEUDO[raw_indirect_call,stack_slot_reuse]: expected typed vtable/callback call with explicit __thiscall receiver; compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if ((((iVar7 == 99) || (iVar7 = (**(code **)(*arg_2 + 0x2c))(), iVar7 == 0x52)) ||
        (iVar7 = (**(code **)(*arg_2 + 0x2c))(), iVar7 == 0x5f)) &&
       (param_4 = nullptr, 0 < (int)dVar3)) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(0,arg_2,param_5,param_6);
          if ((short)uVar6 == 0x1e) {
            return 0x1e;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
    }
    bVar1 = *(byte *)(arg_2 + 9);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = STReplaceLowByte((uint32_t)(param_3), (uint8_t)(bVar1));
    if (DAT_00808a8f == '\0') {
      if (bVar1 == objPtr) {
LAB_004366b0:
        iVar7 = 0;
      }
      else {
        uVar8 = uVar8 & 0xff;
        bVar2 = g_playerRelationMatrix[bVar1][uVar8];
        if ((bVar2 == 0) && (g_playerRelationMatrix[uVar8][bVar1] == 0)) {
          iVar7 = -2;
        }
        else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar8][bVar1] == 0)) {
          iVar7 = -1;
        }
        else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar8][bVar1] == 1)) {
          iVar7 = 1;
        }
        else {
          if ((bVar2 != 1) || (g_playerRelationMatrix[uVar8][bVar1] != 1)) goto LAB_004366b0;
          iVar7 = 2;
        }
      }
      bVar9 = iVar7 < 0;
    }
    else {
      bVar9 = g_bulkInitializedRecords_008087C7[uVar8 & 0xff].field_0023 !=
              g_bulkInitializedRecords_008087C7[bVar1].field_0023;
    }
    if (!bVar9) {
      if (arg_2[8] != 0x14) {
        if ((arg_2[8] != 0x3e9) && (arg_2[9] == (int)(char)objPtr)) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar7 = (**(code **)(*arg_2 + 0x2c))();
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          if ((iVar7 == 0x33) && (param_4 = nullptr, 0 < (int)dVar3)) {
            do {
              DArrayGetElement(param_2,(uint)param_4,&param_1);
              if ((ushort)param_1 != 0xffff) {
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                pSVar5 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
                uVar6 = (*pSVar5->vtable->vfunc_28)(0,arg_2,param_5,param_6);
                if ((short)uVar6 == 0x18) {
                  return 0x18;
                }
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_4 = (int *)((int)param_4 + 1);
            } while ((int)param_4 < (int)dVar3);
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar7 = (**(code **)(*arg_2 + 0x2c))();
          /* ST_PSEUDO[raw_indirect_call,stack_slot_reuse]: expected typed vtable/callback call with explicit __thiscall receiver; compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          if (((iVar7 == 0x37) || (iVar7 = (**(code **)(*arg_2 + 0x2c))(), iVar7 == 0x6c)) &&
             (param_4 = nullptr, 0 < (int)dVar3)) {
            do {
              DArrayGetElement(param_2,(uint)param_4,&param_1);
              if ((ushort)param_1 != 0xffff) {
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                pSVar5 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
                uVar6 = (*pSVar5->vtable->vfunc_28)(0,arg_2,param_5,param_6);
                if ((short)uVar6 == 0x1d) {
                  return 0x1d;
                }
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_4 = (int *)((int)param_4 + 1);
            } while ((int)param_4 < (int)dVar3);
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar7 = (**(code **)(*arg_2 + 0x2c))();
          /* ST_PSEUDO[raw_indirect_call,stack_slot_reuse]: expected typed vtable/callback call with explicit __thiscall receiver; compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          if ((((iVar7 == 0x38) || (iVar7 = (**(code **)(*arg_2 + 0x2c))(), iVar7 == 0x39)) ||
              ((iVar7 = (**(code **)(*arg_2 + 0x2c))(), iVar7 == 0x4f ||
               (iVar7 = (**(code **)(*arg_2 + 0x2c))(), iVar7 == 0x5e)))) &&
             (param_4 = nullptr, 0 < (int)dVar3)) {
            do {
              DArrayGetElement(param_2,(uint)param_4,&param_1);
              if ((ushort)param_1 != 0xffff) {
                /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                pSVar5 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
                uVar6 = (*pSVar5->vtable->vfunc_28)(0,arg_2,param_5,param_6);
                if ((short)uVar6 == 0x12) {
                  return 0x12;
                }
              }
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_4 = (int *)((int)param_4 + 1);
            } while ((int)param_4 < (int)dVar3);
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar7 = (**(code **)(*arg_2 + 0xec))();
          return (-(ushort)(iVar7 != 1) & 0xfffc) + 4;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar7 = (**(code **)(*arg_2 + 0xec))();
        return (-(ushort)(iVar7 != 1) & 0xfffc) + 4;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_4 = nullptr;
      if (0 < (int)dVar3) {
        do {
          DArrayGetElement(param_2,(uint)param_4,&param_1);
          if ((ushort)param_1 != 0xffff) {
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            pSVar5 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
            uVar6 = (*pSVar5->vtable->vfunc_28)(0,arg_2,param_5,param_6);
            if ((short)uVar6 == 0x17) {
              return 0x17;
            }
            if ((short)uVar6 == 0x1a) {
              return 0x1a;
            }
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_4 = (int *)((int)param_4 + 1);
        } while ((int)param_4 < (int)dVar3);
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar7 = (**(code **)(*arg_2 + 0xec))();
      return (-(ushort)(iVar7 != 1) & 0xfffd) + 3;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar7 = (**(code **)(*arg_2 + 0x2c))();
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = nullptr;
    if (iVar7 == 0x6c) {
      if (0 < (int)dVar3) {
        do {
          DArrayGetElement(param_2,(uint)param_4,&param_1);
          if ((ushort)param_1 != 0xffff) {
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            pSVar5 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
            uVar6 = (*pSVar5->vtable->vfunc_28)(0,arg_2,param_5,param_6);
            if ((short)uVar6 == 7) {
              return 7;
            }
            if ((short)uVar6 == 0x1d) {
              return 0x1d;
            }
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_4 = (int *)((int)param_4 + 1);
          if ((int)dVar3 <= (int)param_4) {
            return 0;
          }
        } while( true );
      }
    }
    else if (0 < (int)dVar3) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(0,arg_2,param_5,param_6);
          if ((short)uVar6 == 7) {
            return 7;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
    }
switchD_00435c5c_caseD_1:
    return 0;
  default:
    goto switchD_00435c5c_caseD_1;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  case CASE_2:
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(2,arg_2,param_5,param_6);
          if ((short)uVar6 == 6) {
            return 6;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_3:
  case CASE_2B:
    if (arg_2 == nullptr) {
      return 1;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(param_3,arg_2,param_5,param_6);
          if ((short)uVar6 == 7) {
            return 7;
          }
          if ((short)uVar6 == 2) {
            return 2;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
    }
    return 1;
  case CASE_4:
    if (arg_2 == nullptr) {
      return 1;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(4,arg_2,param_5,param_6);
          if ((short)uVar6 == 0x18) {
            return 0x18;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_5:
    if (arg_2 == nullptr) {
      return 1;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(5,arg_2,param_5,param_6);
          if ((short)uVar6 == 0xd) {
            return 0xd;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  case CASE_6:
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(6,arg_2,param_5,param_6);
          if ((short)uVar6 == 0xf) {
            return 0xf;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_7:
    if (arg_2 == nullptr) {
      return 1;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(7,arg_2,param_5,param_6);
          sVar4 = (short)uVar6;
          if (sVar4 == 9) {
            return 9;
          }
          if (sVar4 == 10) {
            return 10;
          }
          if (sVar4 == 0xb) {
            return 0xb;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
    }
    return 1;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  case CASE_8:
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(8,arg_2,param_5,param_6);
          if ((short)uVar6 == 0x11) {
            return 0x11;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  case CASE_9:
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(9,arg_2,param_5,param_6);
          if ((short)uVar6 == 8) {
            return 8;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_A:
    if (arg_2 == nullptr) {
      return 1;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(10,arg_2,param_5,param_6);
          if ((short)uVar6 == 0xc) {
            return 0xc;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  case CASE_D:
    if ((arg_2 != nullptr) && (param_4 = nullptr, 0 < (int)dVar3)) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          if ((STGameObjC *)arg_2 == pSVar5) {
            return 0;
          }
          uVar6 = (*pSVar5->vtable->vfunc_28)(0xd,arg_2,param_5,param_6);
          if ((short)uVar6 == 0x17) {
            return 0x17;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
        if ((int)dVar3 <= (int)param_4) {
          return 1;
        }
      } while( true );
    }
    break;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  case CASE_E:
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          if ((STGameObjC *)arg_2 == pSVar5) {
            return 0;
          }
          uVar6 = (*pSVar5->vtable->vfunc_28)(0xe,arg_2,param_5,param_6);
          if ((short)uVar6 == 0x14) {
            return 0x14;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
    }
    return 0x15;
  case CASE_10:
    if (arg_2 == nullptr) {
      return 1;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(0x10,arg_2,param_5,param_6);
          if ((short)uVar6 == 0x16) {
            return 0x16;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_11:
    if (arg_2 == nullptr) {
      return 1;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(0x11,arg_2,param_5,param_6);
          if ((short)uVar6 == 0x12) {
            return 0x12;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_12:
    if (arg_2 == nullptr) {
      return 1;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(0x12,arg_2,param_5,param_6);
          if ((short)uVar6 == 0x13) {
            return 0x13;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_13:
    if (arg_2 == nullptr) {
      return 1;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          if ((STGameObjC *)arg_2 == pSVar5) {
            return 0;
          }
          uVar6 = (*pSVar5->vtable->vfunc_28)(0x13,arg_2,param_5,param_6);
          if ((short)uVar6 == 0x1a) {
            return 0x1a;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
        if ((int)dVar3 <= (int)param_4) {
          return 1;
        }
      } while( true );
    }
    break;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  case CASE_18:
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          if ((STGameObjC *)arg_2 == pSVar5) {
            return 0;
          }
          uVar6 = (*pSVar5->vtable->vfunc_28)(0x18,arg_2,param_5,param_6);
          if ((short)uVar6 == 0x1d) {
            return 0x1d;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
        if ((int)dVar3 <= (int)param_4) {
          return 1;
        }
      } while( true );
    }
    break;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  case CASE_2D:
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(0x2d,arg_2,param_5,param_6);
          if ((short)uVar6 == 0x10) {
            return 0x10;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_4D:
    if (arg_2 == nullptr) {
      return 1;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = nullptr;
    if (0 < (int)dVar3) {
      do {
        DArrayGetElement(param_2,(uint)param_4,&param_1);
        if ((ushort)param_1 != 0xffff) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          pSVar5 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_1,CASE_1);
          uVar6 = (*pSVar5->vtable->vfunc_28)(0x4d,arg_2,param_5,param_6);
          if ((short)uVar6 == 0x1d) {
            return 0x1d;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)((int)param_4 + 1);
      } while ((int)param_4 < (int)dVar3);
      return 1;
    }
    break;
  case CASE_4E:
    return 0x1c;
  }
  return 1;
}

