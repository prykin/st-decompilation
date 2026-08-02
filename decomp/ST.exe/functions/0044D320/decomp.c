
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0044D320_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_4=4;CASE_8=8;CASE_10=16;CASE_28=40
   [STAbiConsistencyApplier] pointer_return_element_width target=return:-1: return=/byte *32
   Evidence: generic returned address is dereferenced with one consistent machine width across
   callers; width=1, sites=0043BEB0 @ 0043C2BE MOV BL,byte ptr [EAX + 0x1] | 0043BEB0 @ 0043C2C7 MOV
   BL,byte ptr [EAX + -0x2] */

byte * FUN_0044d320(Global_sub_0044D320_param_1Enum param_1)

{
  short sVar1;
  Global_sub_0044D320_param_1Enum GVar2;
  byte *pbVar3;
  STGameObjC *objPtr;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 local_18;
  DArrayTy *local_14;
  dword local_10;
  STAllPlayersC *local_c;
  int local_8;

  GVar2 = param_1;
  local_8 = 0;
  local_14 = (DArrayTy *)g_packedRecords_A62x8[DAT_0080874d].field335_0x16d;
  local_10 = local_14->count;
  pbVar3 = Library::DKW::LIB::MemAlloc(0xc);
  if (param_1 < 0x1001) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_1 == 0x1000) {
      pbVar3[0] = 1;
      pbVar3[1] = 2;
      pbVar3[2] = 0;
      pbVar3[3] = 3;
      pbVar3[4] = 1;
      pbVar3[5] = 1;
      pbVar3[6] = 0;
      pbVar3[7] = 4;
      pbVar3[8] = 1;
      pbVar3[9] = 0x2f;
      pbVar3[10] = 1;
      pbVar3[0xb] = 0xb;
    }
    else if (param_1 < 0x41) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_1 == 0x40) {
        pbVar3[0] = 1;
        pbVar3[1] = 2;
        pbVar3[2] = 1;
        pbVar3[3] = 3;
        pbVar3[4] = 1;
        pbVar3[5] = 1;
        pbVar3[6] = 0;
        pbVar3[7] = 4;
        pbVar3[8] = 1;
        pbVar3[9] = 0x2f;
        pbVar3[10] = 0;
        pbVar3[0xb] = 9;
      }
      else {
        switch(param_1) {
        case CASE_1:
          pbVar3[0] = 1;
          pbVar3[1] = 2;
          pbVar3[2] = 1;
          pbVar3[3] = 3;
          pbVar3[4] = 1;
          pbVar3[5] = 1;
          pbVar3[6] = 0;
          pbVar3[7] = 4;
          pbVar3[8] = 1;
          pbVar3[9] = 0x2f;
          pbVar3[10] = 1;
          pbVar3[0xb] = 7;
          break;
        case CASE_2:
        case CASE_4:
        case CASE_8:
          pbVar3[0] = 1;
          pbVar3[1] = 2;
          pbVar3[2] = 1;
          pbVar3[3] = 3;
          pbVar3[4] = 1;
          pbVar3[5] = 1;
          pbVar3[6] = 0;
          pbVar3[7] = 4;
          pbVar3[8] = 1;
          pbVar3[9] = 0x2f;
          pbVar3[10] = 0;
          pbVar3[0xb] = 8;
          break;
        default:
          goto switchD_0044d3a8_caseD_3;
        case CASE_10:
          pbVar3[0] = 1;
          pbVar3[1] = 2;
          pbVar3[2] = 1;
          pbVar3[3] = 3;
          pbVar3[4] = 1;
          pbVar3[5] = 1;
          pbVar3[6] = 0;
          pbVar3[7] = 4;
          pbVar3[8] = 1;
          pbVar3[9] = 0x2f;
          pbVar3[10] = 1;
          pbVar3[0xb] = 10;
          break;
        case CASE_28:
          pbVar3[0] = 1;
          pbVar3[1] = 2;
          pbVar3[2] = 1;
          pbVar3[3] = 3;
          pbVar3[4] = 1;
          pbVar3[5] = 1;
          pbVar3[6] = 0;
          pbVar3[7] = 4;
          pbVar3[8] = 1;
          pbVar3[9] = 0x2f;
          pbVar3[10] = 1;
          pbVar3[0xb] = 0xb;
        }
      }
    }
    else if (param_1 < 0x201) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_1 == 0x200) {
        pbVar3[0] = 1;
        pbVar3[1] = 2;
        pbVar3[2] = 1;
        pbVar3[3] = 0x11;
        pbVar3[4] = 1;
        pbVar3[5] = 1;
        pbVar3[6] = 0;
        pbVar3[7] = 4;
        pbVar3[8] = 1;
        pbVar3[9] = 0x2f;
        pbVar3[10] = 1;
        pbVar3[0xb] = 0x12;
      }
      else {
        if ((param_1 != 0x80) && (param_1 != 0x100)) {
          return pbVar3;
        }
        pbVar3[0] = 1;
        pbVar3[1] = 2;
        pbVar3[2] = 1;
        pbVar3[3] = 3;
        pbVar3[4] = 1;
        pbVar3[5] = 1;
        pbVar3[6] = 0;
        pbVar3[7] = 0;
        pbVar3[8] = 1;
        pbVar3[9] = 0x2f;
        pbVar3[10] = 1;
        pbVar3[0xb] = 0;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    else if (param_1 == 0x400) {
      pbVar3[0] = 1;
      pbVar3[1] = 2;
      pbVar3[2] = 1;
      pbVar3[3] = 0xd;
      pbVar3[4] = 1;
      pbVar3[5] = 1;
      pbVar3[6] = 0;
      pbVar3[7] = 4;
      pbVar3[8] = 1;
      pbVar3[9] = 0x2f;
      pbVar3[10] = 1;
      pbVar3[0xb] = 0x13;
    }
    else {
      if (param_1 != 0x800) {
        return pbVar3;
      }
      pbVar3[0] = 1;
      pbVar3[1] = 2;
      pbVar3[2] = 1;
      pbVar3[3] = 0xe;
      pbVar3[4] = 1;
      pbVar3[5] = 1;
      pbVar3[6] = 0;
      pbVar3[7] = 4;
      pbVar3[8] = 1;
      pbVar3[9] = 0x2f;
      pbVar3[10] = 1;
      pbVar3[0xb] = 0x10;
    }
    goto LAB_0044d710;
  }
  if (param_1 < 0x100001) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_1 == 0x100000) {
      pbVar3[0] = 1;
      pbVar3[1] = 2;
      pbVar3[2] = 1;
      pbVar3[3] = 0x10;
      goto LAB_0044d6f8;
    }
    if (param_1 < 0x20001) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_1 == 0x20000) {
        pbVar3[0] = 1;
        pbVar3[1] = 2;
        pbVar3[2] = 1;
        pbVar3[3] = 0x11;
        pbVar3[4] = 1;
        pbVar3[5] = 1;
        pbVar3[6] = 0;
        pbVar3[7] = 0x48;
        pbVar3[8] = 1;
        pbVar3[9] = 0x2f;
        pbVar3[10] = 1;
        pbVar3[0xb] = 0x12;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      else if (param_1 == 0x2000) {
        pbVar3[0] = 1;
        pbVar3[1] = 2;
        pbVar3[2] = 1;
        pbVar3[3] = 3;
        pbVar3[4] = 1;
        pbVar3[5] = 1;
        pbVar3[6] = 0;
        pbVar3[7] = 4;
        pbVar3[8] = 1;
        pbVar3[9] = 0x2f;
        pbVar3[10] = 1;
        pbVar3[0xb] = 6;
      }
      else {
        if (param_1 != 0x10000) {
          return pbVar3;
        }
        pbVar3[0] = 1;
        pbVar3[1] = 2;
        pbVar3[2] = 1;
        pbVar3[3] = 3;
        pbVar3[4] = 1;
        pbVar3[5] = 1;
        pbVar3[6] = 0;
        pbVar3[7] = 0x48;
        pbVar3[8] = 1;
        pbVar3[9] = 0x2f;
        pbVar3[10] = 1;
        pbVar3[0xb] = 7;
      }
    }
    else {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_1 == 0x40000) {
        pbVar3[0] = 1;
        pbVar3[1] = 2;
        pbVar3[2] = 1;
        pbVar3[3] = 0xe;
        goto LAB_0044d6d7;
      }
      if (param_1 != 0x80000) {
        return pbVar3;
      }
      pbVar3[0] = 1;
      pbVar3[1] = 2;
      pbVar3[2] = 1;
      pbVar3[3] = 3;
      pbVar3[4] = 1;
      pbVar3[5] = 1;
      pbVar3[6] = 0;
      pbVar3[7] = 0x48;
      pbVar3[8] = 1;
      pbVar3[9] = 0x2f;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0x49;
    }
  }
  else {
    if (param_1 < 0x800001) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_1 == 0x800000) {
LAB_0044d6cc:
        pbVar3[0] = 1;
        pbVar3[1] = 2;
        pbVar3[2] = 1;
        pbVar3[3] = 3;
LAB_0044d6d7:
        pbVar3[4] = 1;
        pbVar3[5] = 1;
        pbVar3[6] = 0;
        pbVar3[7] = 0x48;
        pbVar3[8] = 1;
        pbVar3[9] = 0x2f;
        pbVar3[10] = 1;
        pbVar3[0xb] = 0;
        goto LAB_0044d710;
      }
      if (param_1 != 0x200000) {
        if (param_1 != 0x400000) {
          return pbVar3;
        }
        pbVar3[0] = 1;
        pbVar3[1] = 2;
        pbVar3[2] = 1;
        pbVar3[3] = 3;
        pbVar3[4] = 1;
        pbVar3[5] = 1;
        pbVar3[6] = 0;
        pbVar3[7] = 0x48;
        pbVar3[8] = 1;
        pbVar3[9] = 0x2f;
        pbVar3[10] = 0;
        pbVar3[0xb] = 8;
        goto LAB_0044d710;
      }
      pbVar3[0] = 1;
      pbVar3[1] = 2;
      pbVar3[2] = 1;
      pbVar3[3] = 0x13;
    }
    else {
      if (param_1 != 0x1000000) {
        if (param_1 != 0x2000000) {
          return pbVar3;
        }
        goto LAB_0044d6cc;
      }
      pbVar3[0] = 1;
      pbVar3[1] = 2;
      pbVar3[2] = 1;
      pbVar3[3] = 0;
    }
LAB_0044d6f8:
    pbVar3[4] = 1;
    pbVar3[5] = 1;
    pbVar3[6] = 0;
    pbVar3[7] = 0x48;
    pbVar3[8] = 1;
    pbVar3[9] = 0x2f;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0x18;
  }
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_0044d710:
  param_1 = 0;
  if (0 < (int)local_10) {
    do {
      DArrayGetElement(local_14,param_1,&local_18);
      if (((ushort)local_18 != 0xffff) &&
         (objPtr = STAllPlayersC::GetObjPtr(local_c,DAT_0080874d,(ushort)local_18,CASE_1),
         objPtr != nullptr)) {
        if (GVar2 < 0x1001) {
          if (GVar2 == 0x1000) {
switchD_0044d78f_caseD_28:
            iVar4 = (*objPtr->vtable->vfunc_2C)();
            if ((iVar4 == 0x16) || (iVar4 == 0x25)) {
              local_8 = 1;
              if ((pbVar3[6] == 0) &&
                 ((iVar4 = thunk_FUN_00486b40(objPtr), 0 < iVar4 &&
                  (g_packedRecords_A62x8[*(char *)&objPtr->field_0024].field326_0x15b != 0)))) {
                pbVar3[6] = 1;
                pbVar3[7] = 4;
              }
              if ((pbVar3[0xb] == 0xb) && (objPtr->field_0732 == 1)) {
                pbVar3[10] = 1;
                pbVar3[0xb] = 0xc;
              }
            }
          }
          else if (GVar2 < 0x41) {
            if (GVar2 == 0x40) {
              iVar4 = (*objPtr->vtable->vfunc_2C)();
              if (iVar4 == 4) {
                local_8 = 1;
                if (((pbVar3[6] == 0) && (iVar4 = thunk_FUN_00486b40(objPtr), 0 < iVar4)) &&
                   (g_packedRecords_A62x8[*(char *)&objPtr->field_0024].field326_0x15b != 0)) {
                  pbVar3[6] = 1;
                  pbVar3[7] = 4;
                }
                if ((pbVar3[10] == 0) && (0 < objPtr->field_07BE)) {
                  pbVar3[10] = 1;
                  pbVar3[0xb] = 9;
                }
              }
            }
            else {
              switch(GVar2) {
              case CASE_1:
                iVar4 = (*objPtr->vtable->vfunc_2C)();
                if ((iVar4 == 6) || (iVar4 == 0x12)) {
                  local_8 = 1;
                  iVar4 = thunk_FUN_00486b40(objPtr);
                  if (0 < iVar4) {
                    sVar1 = g_packedRecords_A62x8[*(char *)&objPtr->field_0024].field326_0x15b;
joined_r0x0044d9f5:
                    if (sVar1 != 0) {
                      pbVar3[6] = 1;
                      pbVar3[7] = 4;
                      return pbVar3;
                    }
                  }
                }
                break;
              case CASE_2:
              case CASE_4:
              case CASE_8:
                iVar4 = (*objPtr->vtable->vfunc_2C)();
                if (((iVar4 == 5) || (iVar4 == 0xb)) || (iVar4 == 0x11)) {
                  local_8 = 1;
                  if (((pbVar3[6] == 0) && (iVar4 = thunk_FUN_00486b40(objPtr), 0 < iVar4)) &&
                     (g_packedRecords_A62x8[*(char *)&objPtr->field_0024].field326_0x15b != 0)) {
                    pbVar3[6] = 1;
                    pbVar3[7] = 4;
                  }
LAB_0044dc25:
                  if ((pbVar3[10] == 0) && (0 < objPtr->field_07BE)) {
                    pbVar3[10] = 1;
                    pbVar3[0xb] = 8;
                  }
                }
                break;
              case CASE_10:
                iVar4 = (*objPtr->vtable->vfunc_2C)();
                if (iVar4 == 0x17) {
                  local_8 = 1;
                  iVar4 = thunk_FUN_00486b40(objPtr);
                  if (0 < iVar4) {
                    sVar1 = g_packedRecords_A62x8[*(char *)&objPtr->field_0024].field326_0x15b;
                    goto joined_r0x0044d9f5;
                  }
                }
                break;
              case CASE_28:
                goto switchD_0044d78f_caseD_28;
              }
            }
          }
          else if (GVar2 < 0x201) {
            if (GVar2 == 0x200) {
              iVar4 = (*objPtr->vtable->vfunc_2C)();
              if ((iVar4 == 8) || (iVar4 == 0x14)) {
                local_8 = 1;
                iVar4 = thunk_FUN_00486b40(objPtr);
                if (0 < iVar4) {
                  sVar1 = g_packedRecords_A62x8[*(char *)&objPtr->field_0024].field326_0x15b;
                  goto joined_r0x0044d9f5;
                }
              }
            }
            else if ((GVar2 == 0x80) || (GVar2 == 0x100)) {
              iVar4 = (*objPtr->vtable->vfunc_2C)();
              if (iVar4 == 9) {
                return pbVar3;
              }
              if (iVar4 == 0x15) {
                return pbVar3;
              }
            }
          }
          else if (GVar2 == 0x400) {
            iVar4 = (*objPtr->vtable->vfunc_2C)();
            if ((iVar4 == 7) || (iVar4 == 0x13)) {
              local_8 = 1;
              if ((pbVar3[6] == 0) &&
                 ((iVar4 = thunk_FUN_00486b40(objPtr), 0 < iVar4 &&
                  (g_packedRecords_A62x8[*(char *)&objPtr->field_0024].field326_0x15b != 0)))) {
                pbVar3[6] = 1;
                pbVar3[7] = 4;
              }
              iVar4 = thunk_FUN_00492370(objPtr);
              if (iVar4 != 0) {
                pbVar3[10] = 1;
                pbVar3[0xb] = 0x14;
              }
            }
          }
          else if ((GVar2 == 0x800) &&
                  ((iVar4 = (*objPtr->vtable->vfunc_2C)(), iVar4 == 0xc || (iVar4 == 0x18)))) {
LAB_0044d9c4:
            local_8 = 1;
            iVar4 = thunk_FUN_00486b40(objPtr);
            if (0 < iVar4) {
              sVar1 = g_packedRecords_A62x8[*(char *)&objPtr->field_0024].field326_0x15b;
              goto joined_r0x0044d9f5;
            }
          }
        }
        else if (GVar2 < 0x100001) {
          if (GVar2 == 0x100000) {
            iVar4 = (*objPtr->vtable->vfunc_2C)();
            if (iVar4 == 0x1d) {
              local_8 = 1;
              iVar4 = TLOBaseTy::sub_004D6DF0((TLOBaseTy *)objPtr);
              if (((0 < iVar4) && (uVar5 = thunk_FUN_004e41c0((uint)DAT_0080874d), 0 < (int)uVar5))
                 && (g_packedRecords_A62x8[*(char *)&objPtr->field_0024].field329_0x15f != 0)) {
                pbVar3[6] = 1;
                pbVar3[7] = 0x48;
              }
LAB_0044dcbe:
              iVar4 = thunk_FUN_004e60d0((uint)DAT_0080874d,0x5f);
              if (0 < iVar4) {
                iVar4 = objPtr->field_071E;
joined_r0x0044ddc7:
                if (9 < iVar4) {
                  pbVar3[10] = 1;
                  pbVar3[0xb] = 0x18;
                }
              }
            }
          }
          else {
            if (GVar2 < 0x20001) {
              if (GVar2 != 0x20000) {
                if (GVar2 == 0x2000) goto LAB_0044d9c4;
                if (GVar2 != 0x10000) goto cf_continue_loop_0044DDCF;
              }
            }
            else if ((GVar2 != 0x40000) && (GVar2 != 0x80000)) goto cf_continue_loop_0044DDCF;
LAB_0044dce3:
            uVar6 = (*objPtr->vtable->vfunc_2C)();
            switch(uVar6) {
            case 0x19:
            case 0x1a:
            case 0x1c:
            case 0x22:
            case 0x23:
switchD_0044dcfe_caseD_19:
              local_8 = 1;
              iVar4 = TLOBaseTy::sub_004D6DF0((TLOBaseTy *)objPtr);
              if (((0 < iVar4) && (uVar5 = thunk_FUN_004e41c0((uint)DAT_0080874d), 0 < (int)uVar5))
                 && (g_packedRecords_A62x8[*(char *)&objPtr->field_0024].field329_0x15f != 0)) {
                pbVar3[6] = 1;
                pbVar3[7] = 0x48;
                return pbVar3;
              }
            }
          }
        }
        else if (GVar2 < 0x800001) {
          if (GVar2 == 0x800000) goto LAB_0044dce3;
          if (GVar2 == 0x200000) {
            iVar4 = (*objPtr->vtable->vfunc_2C)();
            if (iVar4 == 0x1b) {
              local_8 = 1;
              iVar4 = TLOBaseTy::sub_004D6DF0((TLOBaseTy *)objPtr);
              if (((0 < iVar4) && (uVar5 = thunk_FUN_004e41c0((uint)DAT_0080874d), 0 < (int)uVar5))
                 && (g_packedRecords_A62x8[*(char *)&objPtr->field_0024].field329_0x15f != 0)) {
                pbVar3[6] = 1;
                pbVar3[7] = 0x48;
              }
              iVar4 = thunk_FUN_00492370(objPtr);
              if (iVar4 != 0) {
                pbVar3[2] = 1;
                pbVar3[3] = 0x14;
              }
              goto LAB_0044dcbe;
            }
          }
          else if ((GVar2 == 0x400000) && (iVar4 = (*objPtr->vtable->vfunc_2C)(), iVar4 == 0x21)) {
            local_8 = 1;
            iVar4 = TLOBaseTy::sub_004D6DF0((TLOBaseTy *)objPtr);
            if ((0 < iVar4) &&
               ((uVar5 = thunk_FUN_004e41c0((uint)DAT_0080874d), 0 < (int)uVar5 &&
                (g_packedRecords_A62x8[*(char *)&objPtr->field_0024].field329_0x15f != 0)))) {
              pbVar3[6] = 1;
              pbVar3[7] = 0x48;
            }
            goto LAB_0044dc25;
          }
        }
        else if (GVar2 == 0x1000000) {
          iVar4 = (*objPtr->vtable->vfunc_2C)();
          if (iVar4 == 0x24) {
            local_8 = 1;
            iVar4 = TLOBaseTy::sub_004D6DF0((TLOBaseTy *)objPtr);
            if (((0 < iVar4) && (uVar5 = thunk_FUN_004e41c0((uint)DAT_0080874d), 0 < (int)uVar5)) &&
               (g_packedRecords_A62x8[*(char *)&objPtr->field_0024].field329_0x15f != 0)) {
              pbVar3[6] = 1;
              pbVar3[7] = 0x48;
            }
            iVar4 = objPtr->field_071E;
            goto joined_r0x0044ddc7;
          }
        }
        else if (GVar2 == 0x2000000) goto switchD_0044dcfe_caseD_19;
      }
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
cf_continue_loop_0044DDCF:
      param_1 = param_1 + CASE_1;
    } while ((int)param_1 < (int)local_10);
    if (local_8 != 0) {
      return pbVar3;
    }
  }
  pbVar3[10] = 1;
  pbVar3[0xb] = 0;
  pbVar3[8] = 1;
  pbVar3[9] = 0;
  pbVar3[6] = 1;
  pbVar3[7] = 0;
  pbVar3[4] = 1;
  pbVar3[5] = 0;
  pbVar3[2] = 1;
  pbVar3[3] = 0;
  pbVar3[0] = 1;
  pbVar3[1] = 0;
switchD_0044d3a8_caseD_3:
  return pbVar3;
}

